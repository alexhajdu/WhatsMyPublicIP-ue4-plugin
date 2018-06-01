# WhatsMyPublicIP-ue4-plugin

Quickly get your public IP in your C++ or Blueprint project.

## Blueprints usage

1. Copy the plugin to [your_project]/Plugins

![Alt text](HowTo/HowToBP.png?raw=true "Bp")

## C++ usage

1. Copy the plugin to [your_project]/Plugins
2. Add plugin dependency into .Build.cs, Private Dependencies section

`PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "WhatsMyPublicIP" });`

![Alt text](HowTo/HowToCpp.png?raw=true "Cpp")

### Disclaimer

No third party plugin dependency.
Enjoy :]