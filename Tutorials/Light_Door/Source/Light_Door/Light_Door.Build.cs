// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Light_Door : ModuleRules
{
	public Light_Door(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
