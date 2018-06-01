# GetMyPublicIP-ue4-plugin

Quickly get your public IP in your C++ or Blueprint project.

## Blueprints usage

![Alt text](HowTo/HowToBP.png?raw=true "Bp")

## C++ usage

1. Copy the plugin to [your_project]/Plugins
2. Add it into Private Dependencies

`PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "WhatsMyPublicIP" });`

![Alt text](HowTo/HowToCpp.png?raw=true "Cpp")

### Disclaimer

No third party plugin dependency.
Enjoy :]