// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tinykinesis_Proto : ModuleRules
{
	public Tinykinesis_Proto(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
