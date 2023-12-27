// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class sample_game : ModuleRules
{
	public sample_game(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
