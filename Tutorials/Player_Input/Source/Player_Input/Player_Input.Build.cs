// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Player_Input : ModuleRules
{
	public Player_Input(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
