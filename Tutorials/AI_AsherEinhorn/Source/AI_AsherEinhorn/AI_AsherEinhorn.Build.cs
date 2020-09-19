// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AI_AsherEinhorn : ModuleRules
{
	public AI_AsherEinhorn(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
