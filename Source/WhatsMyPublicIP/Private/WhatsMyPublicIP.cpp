// Alex Hajdu, (C) 2018, alexhajdu[at]me.com, twitter.com/alexhajdu

#include "WhatsMyPublicIP.h"

#if ENGINE_MAJOR_VERSION == 5 || ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonReader.h"
#else
#include <JsonObject.h>
#include <JsonReader.h>
#include <JsonSerializer.h>
#endif //ENGINE_MAJOR_VERSION == 5 || ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25

UWhatsMyPublicIP::UWhatsMyPublicIP( )
{
	IP		= TEXT( "" );
	APIUrl  = TEXT( "https://api.ipify.org/?format=json" );
	JSONKey = TEXT( "api" );
}

UWhatsMyPublicIP::~UWhatsMyPublicIP( )
{
}

void UWhatsMyPublicIP::GetMyPublicIP( )
{
	IP   = TEXT( "" );
	Http = &FHttpModule::Get( );

	if( !Http )
	{
		return;
	}

	DoRequest( );
}

FString UWhatsMyPublicIP::GetCachedIP( ) const
{
	if( IP.IsEmpty( ) )
	{
		UE_LOG( LogTemp, Warning, TEXT( "Get My Public IP : Your public IP addres not obtained yet. Processing..." ) );
	}

	return IP;
}

void UWhatsMyPublicIP::DoRequest( )
{
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 26 || ENGINE_MAJOR_VERSION >= 5
		TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
#else
		TSharedRef< IHttpRequest > Request = Http->CreateRequest( );
#endif
	Request->OnProcessRequestComplete( ).BindUObject( this, &UWhatsMyPublicIP::OnResponseReceived );
	Request->SetURL( APIUrl );
	Request->SetVerb( "GET" );
	Request->SetHeader( TEXT( "User-Agent" ), "X-UnrealEngine-Agent" );
	Request->SetHeader( "Content-Type", TEXT( "application/json" ) );
	Request->ProcessRequest( );
}

void UWhatsMyPublicIP::OnResponseReceived( FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful )
{
	if( bWasSuccessful )
	{
		TSharedPtr< FJsonObject > JsonObject;

		TSharedRef< TJsonReader<> > Reader = TJsonReaderFactory<>::Create( Response->GetContentAsString( ) );

		if( FJsonSerializer::Deserialize( Reader, JsonObject ) )
		{
			IP = JsonObject->GetStringField( "ip" );
		}
	}
	else
	{
		UE_LOG( LogTemp, Warning, TEXT( "Get My Public IP : Request failed." ) );
	}

	OnIPAddressReceived.Broadcast( GetCachedIP( ) );
}

void UWhatsMyPublicIP::OverrideJSONKey( FString NewJsonKey )
{
	JSONKey = NewJsonKey;
}

void UWhatsMyPublicIP::OverrideAPIUrl( FString NewAPIUrl )
{
	APIUrl = NewAPIUrl;
}
