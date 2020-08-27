// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Light_Door2 : ModuleRules
{
	public Light_Door2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
