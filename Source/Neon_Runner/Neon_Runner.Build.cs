// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Neon_Runner : ModuleRules
{
	public Neon_Runner(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
