// Alex Hajdu, (C) 2018, alexhajdu[at]me.com, twitter.com/alexhajdu

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#if ENGINE_MAJOR_VERSION == 5 || ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25
#include "Containers/UnrealString.h"
#else
#include <UnrealString.h>
#endif // ENGINE_MAJOR_VERSION == 5 || ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25

#include "Runtime/Online/HTTP/Public/Http.h"
#include "WhatsMyPublicIP.generated.h"

class FHttpModule;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam( FIPDelegate, FString, IP );

UCLASS( BlueprintType, Blueprintable )
class WHATSMYPUBLICIP_API UWhatsMyPublicIP : public UObject
{
	GENERATED_BODY( )

	/**
	 * Lifetime
	 */

public:
	UWhatsMyPublicIP( );
	~UWhatsMyPublicIP( );

	/**
	 * API
	 */

public:
	/** Main function to call in order to get your public IP */
	UFUNCTION( BlueprintCallable, Category = "Networking" )
	void GetMyPublicIP( );

	/** Getter for IP string. Returns empty string if still no response from server. */
	UFUNCTION( BlueprintCallable, Category = "Networking" )
	FString GetCachedIP( ) const;

	/**Set your own API url if you want. */
	UFUNCTION( BlueprintCallable, Category = "Networking" )
	void OverrideAPIUrl( FString NewAPIUrl );

	/**Set necessary key to get value from json to fit your API response. Note: works only on simple object. */
	UFUNCTION( BlueprintCallable, Category = "Networking" )
	void OverrideJSONKey( FString NewJsonKey );

	/** Subscribe to this event and get your IP address safely */
	UPROPERTY( BlueprintAssignable, Category = "Networking" )
	FIPDelegate OnIPAddressReceived;

private:
	FHttpModule* Http;
	FString		 IP;
	FString		 APIUrl;
	FString		 JSONKey;
	void		 DoRequest( );
	void		 OnResponseReceived( FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful );
};
