#ifndef CHEATS_H
#define CHEATS_H

#include "CTRPluginFramework.hpp"
#include "Helpers.hpp"
#include "Unicode.h"

namespace CTRPluginFramework
{

	bool is_in_range(u32 value, u32 lowerbound, u32 upperbound);
	bool IsInRace();
	u32 GetRacePointer();
	u32	GetFNsPointer();
	u32	GetOldPointer5CC();
	u32	GetOldPointer5D0();
	u32	GetItemPointer();
	void	writeItem(u32 item);
	void	writeSpeed(u32 speed);
	void	writeVR(u32 vr);
	void	writeLocation(u32 location);
	void	writeFlag(u8 flag);
	void invincible(MenuEntry *entry);
	void alwaysStarPower(MenuEntry *entry);
	void trickAnywhere(MenuEntry *entry);
	void alwaysBlackKart(MenuEntry *entry);
	void alwaysShocked(MenuEntry *entry);
	void alwaysCrushed(MenuEntry *entry);
	void	instantMT(MenuEntry *entry);
	void	hugeBunnyhop(MenuEntry *entry);
	void	fastReverse(MenuEntry *entry);
	void	noCountdown(MenuEntry *entry);
	void	moonjump(MenuEntry *entry);
	void	saveSlotTeleporter(MenuEntry *entry);
	void	maxTimer(MenuEntry *entry);
	void	zeroTimer(MenuEntry *entry);
	void	waterEverywhere(MenuEntry *entry);
	void	driveAnywhere(MenuEntry *entry);
	void	stalking(MenuEntry *entry);
	void	cpuBrawl(MenuEntry *entry);
	void	TouchCode(MenuEntry *entry);
	void	fastBlueShell(MenuEntry *entry);
	void	stoppedBlueShell(MenuEntry *entry);
	void	fastGreenShell(MenuEntry *entry);
	void	stoppedGreenShell(MenuEntry *entry);
	void	dropMushrooms(MenuEntry *entry);
	void	bulletControl(MenuEntry *entry);
	void	disableStarMusic(MenuEntry *entry);
	void	bulletSpeed(MenuEntry *entry);
	void	blueShellRide(MenuEntry *entry);
	void	itemWheel(MenuEntry *entry);
	void    SetItem(MenuEntry *entry);
	void	instantAcceleration(MenuEntry *entry);
	void	instantBackAcceleration(MenuEntry *entry);
	void	instantStop(MenuEntry *entry);
	void	TwoHundredCC(MenuEntry *entry);
	void	FiveHundredCC(MenuEntry *entry);
	void	eliminationMode(MenuEntry *entry);
	void	disableFirstPersonView(MenuEntry *entry);
	void	vrExtender(MenuEntry *entry);
	void    SetVR(MenuEntry *entry);
	void	randomVR(MenuEntry *entry);
	void	unlockEverything(MenuEntry *entry);
	void	NoDC(MenuEntry *entry);
	void	fastGame(MenuEntry *entry);
	void    SetFlag(MenuEntry *entry);
	void    SetCoordinates(MenuEntry *entry);
	
}

#endif
