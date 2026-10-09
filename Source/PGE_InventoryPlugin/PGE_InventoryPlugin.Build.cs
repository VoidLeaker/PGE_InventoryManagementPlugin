// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PGE_InventoryPlugin : ModuleRules
{
	public PGE_InventoryPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"PGE_InventoryPlugin",
			"PGE_InventoryPlugin/Variant_Platforming",
			"PGE_InventoryPlugin/Variant_Platforming/Animation",
			"PGE_InventoryPlugin/Variant_Combat",
			"PGE_InventoryPlugin/Variant_Combat/AI",
			"PGE_InventoryPlugin/Variant_Combat/Animation",
			"PGE_InventoryPlugin/Variant_Combat/Gameplay",
			"PGE_InventoryPlugin/Variant_Combat/Interfaces",
			"PGE_InventoryPlugin/Variant_Combat/UI",
			"PGE_InventoryPlugin/Variant_SideScrolling",
			"PGE_InventoryPlugin/Variant_SideScrolling/AI",
			"PGE_InventoryPlugin/Variant_SideScrolling/Gameplay",
			"PGE_InventoryPlugin/Variant_SideScrolling/Interfaces",
			"PGE_InventoryPlugin/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
