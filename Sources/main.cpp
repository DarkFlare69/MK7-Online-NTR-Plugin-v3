#include "cheats.hpp"

namespace CTRPluginFramework
{
    void    PatchProcess(FwkSettings &settings) { }

    int main()
    {
        PluginMenu *menu = new PluginMenu("DarkFlare's MK7 NTR Plugin", 3, 3, 0);
        menu->SynchronizeWithFrame(true);

		MenuFolder *kartcodes = nullptr, *speedcodes = nullptr, *itemcodes = nullptr, *coursecodes = nullptr, *menucodes = nullptr, *gamemodes = nullptr, *regioncodes = nullptr;

		std::string invincible_note = "You will be invincible. You will also appear blinking on other people's screens online.";
		std::string alwaysStarPower_note = "You will always have star effects, such as invincibility and color.";
		std::string alwaysBlackKart_note = "Your kart will be black as if you got bloopered.";
		std::string alwaysShocked_note = "Your kart will always be small as if you got shocked.";
		std::string alwaysCrushed_note = "Your kart will always be flat as if you got crushed. This is only visible on opponents screens online. On your screen, you'll appear normally.";
		std::string instantMT_note = "You will instantly get red and blue MiniTurbos when drifting.";
		std::string hugeBunnyhop_note = "You will jump very high when hopping before a drift.";
		std::string TwoHundredCC_note = "You will go 200cc speeds. Restart the race after applying the code for the effect to take place.";
		std::string FiveHundredCC_note = "You will go 500cc speeds. Restart the race after applying the code for the effect to take place.";
		std::string fastReverse_note = "You will reverse at higher speeds than before when holding B.";
		std::string moonjump_note = "-Start + R = Enable";
		std::string saveSlotTeleporter_note = "-Start + X = Save Current Position\n-Start + Y = Load Saved Position";
		std::string itemWheel_note = "-X = Bullet\n-Y = Tanooki\n-Start = Blue Shell\n-Select = Lightning\n-D-Pad Left = Lucky 7\n-D-Pad Right = Red Shell\n-D-Pad Up = Green Shell\n-D-Pad Down = Bob-Omb";
		std::string SetItem_note = "A keyboard will come up when you exit the menu and you will be allowed to enter your item ID. You can get these from the MK7 NTR Plugin GBAtemp thread.";
		std::string dropMushrooms_note = "This code replaces green shells with droppable mushrooms. Throw a 'green shell' to drop a mushroom.";
		std::string fastBlueShell_note = "Blue shells will go very fast.";
		std::string stoppedBlueShell_note = "Blue shells will not move after being thrown.";
		std::string fastGreenShell_note = "Green shells will go very fast.";
		std::string stoppedGreenShell_note = "Green shells will not move after being thrown.";
		std::string bulletControl_note = "You will be able to control your bullets."; // make sure to update this after adding controls to bullet
		std::string bulletSpeed_note = "-X = Very Fast\n-B = Stopped\n-A = Normal Speed";
		std::string blueShellRide_note = "-D-Pad Left = Enable\nYou will warp to a blue shell and ride it.";
		std::string disableStarMusic_note = "The star music won't play when you're in a star.";
		std::string maxTimer_note = "The timer will freeze at 4:59.9xx.";
		std::string waterEverywhere_note = "You will always be underwater.";
		std::string noCountdown_note = "You will be able to drive when the countdown normally would be happening.";
		std::string disableFirstPersonView_note = "You will not be able to activate first person view by pressing Up on the D-Pad.";
		std::string NoDC_note = "You will not get disconnected unless the cause of the disconnection is an actual network problem.";
		std::string vrExtender_note = "-Start = 999999\n-Select = 420000\n-D-Pad Down = 0\n-D-Pad Up = 696969\n-D-Pad Right = 666666\n-D-Pad Left = 777777";
		std::string SetVR_note = "A keyboard will come up when you exit the menu and you will be allowed to enter your desired VR, between 0 and 999999 (Be sure to enter values in hexadecimal)";
		std::string randomVR_note = "A random VR value will be generated.";
		std::string unlockEverything_note = "Everything will be unlocked. After enabling, save the game by completing a time trial or something, exit the game, and open it again. At this point everything should be permanently unlocked.";
		std::string driveAnywhere_note = "-Start = Disable\n-Select = Enable\n-Select + Up = Go Up\n-Select + Down = Go Down";
		std::string stalking_note = "-Y + Right = Increase\n-Y + Left = Decrease\n-Y + Up = Stalk the player until code is disabled\n-Hold Y to stalk the player temporarily, release Y to stop stalking\n-Y + Down = Disable Code";
		std::string cpuBrawl_note = "The CPU will on top of each other, fighting.";
		std::string TouchCode_note = "Touch the bottom screen or drag your stylus across it to warp your kart to that position on the map!";
		std::string fastGame_note = "The game will move at a very fast speed. Unstable, use at your own risk!";
		std::string eliminationMode_note = "Every 30 seconds, the player in last place will be eliminated. The last player standing wins! This mode works best in rooms with more players.";
		std::string tagMode_note = "One player will be 'it' and they have to try and tag another player by running into them! You will lose points the longer you are 'it' and also gain points for not being 'it'. The tagged person can will always be in a star.";
		std::string shineTheif_note = "One player will start off with the 'shine' and they have to protect it from other people, who will try to steal it by running into the player with the shine! You will gain points the longer you have the shine. The person with the shine will always be in a star.\nD-Pad Left = Use Gained Boost";
		std::string instantAcceleration_note = "Your kart will instantly accelerate to the maximum speed when pressing A.";
		std::string instantBackAcceleration_note = "Your kart will instantly accelerate to it's maximum reverse speed when pressing B.";
		std::string instantStop_note = "Your kart will instantly come to a complete stop when pressing A+B.";
		std::string trickAnywhere_note = "You will be able to perform a trick anywhere by pressing R.";
		std::string SetFlag_note = "A keyboard will come up when you exit the menu and you will be allowed to enter your desired flag ID (in hexadecimal). You can get these from the MK7 NTR Plugin GBAtemp thread.";
		std::string SetCoordinates_note = "A keyboard will come up when you exit the menu and you will be allowed to enter your desired coordinates. You can get these from the MK7 NTR Plugin GBAtemp thread.";
		std::string sizeChanger_note = "Your kart will constantly increase and decrease in size. Use D-Pad Left and D-Pad Right to change the speed at which your kart will change size. This code can cause problems sometimes.";
		std::string CountdownMode_note = "You will have 2 minutes to race. Every time you hit a player with an item, your time will increase by 3 seconds. You will need to strategically gain more time while still being towards the front of the pack. The player in first place when everyone's time runs out wins!";

        kartcodes = new MenuFolder("Kart Codes");
		kartcodes->Append(new MenuEntry("Invincibility", invincible, invincible_note));
		kartcodes->Append(new MenuEntry("Always Star Power", alwaysStarPower, alwaysStarPower_note));
		kartcodes->Append(new MenuEntry("Always Black Kart", alwaysBlackKart, alwaysBlackKart_note));
		kartcodes->Append(new MenuEntry("Always Shocked", alwaysShocked, alwaysShocked_note));
		kartcodes->Append(new MenuEntry("Always Crushed", alwaysCrushed, alwaysCrushed_note));
		kartcodes->Append(new MenuEntry("Trick Anywhere", trickAnywhere, trickAnywhere_note));
		kartcodes->Append(new MenuEntry("Instant MiniTurbo", instantMT, instantMT_note));
		kartcodes->Append(new MenuEntry("Huge Bunnyhop", hugeBunnyhop, hugeBunnyhop_note));
		kartcodes->Append(new MenuEntry("Size Changer", sizeChanger, sizeChanger_note));
        menu->Append(kartcodes);
		
		speedcodes = new MenuFolder("Speed & Movement Codes");
		speedcodes->Append(new MenuEntry("200cc", TwoHundredCC, TwoHundredCC_note));
		speedcodes->Append(new MenuEntry("500cc", FiveHundredCC, FiveHundredCC_note));
		speedcodes->Append(new MenuEntry("Instant Acceleration", instantAcceleration, instantAcceleration_note));
		speedcodes->Append(new MenuEntry("Instant Backwards Acceleration", instantBackAcceleration, instantBackAcceleration_note));
		speedcodes->Append(new MenuEntry("Instant Stop", instantStop, instantStop_note));
		speedcodes->Append(new MenuEntry("Fast Reverse Speeds", fastReverse, fastReverse_note));
		speedcodes->Append(new MenuEntry("Stalking Hack (See Note)", stalking, stalking_note));
		speedcodes->Append(new MenuEntry("Touch Screen Teleporter", TouchCode, TouchCode_note));
		speedcodes->Append(new MenuEntry("Moonjump (See Note)", moonjump, moonjump_note));
		speedcodes->Append(new MenuEntry("Drive Anywhere (See Note)", driveAnywhere, driveAnywhere_note));
		speedcodes->Append(new MenuEntry("Save Slot Teleporter (See Note)", saveSlotTeleporter, saveSlotTeleporter_note));
		menu->Append(speedcodes);
		
		itemcodes = new MenuFolder("Item Codes");
		itemcodes->Append(new MenuEntry("Item Wheel (See Note)", itemWheel, itemWheel_note));
		itemcodes->Append(new MenuEntry("Always Have Certain Item", SetItem, SetItem_note));
		itemcodes->Append(new MenuEntry("Drop Mushrooms (See Note)", dropMushrooms, dropMushrooms_note));
		itemcodes->Append(new MenuEntry("Fast Blue Shell", fastBlueShell, fastBlueShell_note));
		itemcodes->Append(new MenuEntry("Stopped Blue Shell", stoppedBlueShell, stoppedBlueShell_note));
		itemcodes->Append(new MenuEntry("Fast Green Shell", fastGreenShell, fastGreenShell_note));
		itemcodes->Append(new MenuEntry("Stopped Green Shell", stoppedGreenShell, stoppedGreenShell_note));
		itemcodes->Append(new MenuEntry("Control Bullet (See Note)", bulletControl, bulletControl_note));
		itemcodes->Append(new MenuEntry("Bullet Speed Modifier (See Note)", bulletSpeed, bulletSpeed_note));
		itemcodes->Append(new MenuEntry("Blue Shell Ride (See Note)", blueShellRide, blueShellRide_note));
		itemcodes->Append(new MenuEntry("Disable Star Music", disableStarMusic, disableStarMusic_note));
		menu->Append(itemcodes);

		coursecodes = new MenuFolder("Course Codes");
		coursecodes->Append(new MenuEntry("CPU Brawl", cpuBrawl, cpuBrawl_note));
		coursecodes->Append(new MenuEntry("Max Timer", maxTimer, maxTimer_note));
		coursecodes->Append(new MenuEntry("Water Everywhere", waterEverywhere, waterEverywhere_note));
		menu->Append(coursecodes);

		menucodes = new MenuFolder("Menu Codes");
		menucodes->Append(new MenuEntry("No Countdown", noCountdown, noCountdown_note));
		menucodes->Append(new MenuEntry("Disable First Person View", disableFirstPersonView, disableFirstPersonView_note));
		menucodes->Append(new MenuEntry("No Disconnect", NoDC, NoDC_note));
		menucodes->Append(new MenuEntry("Fast Game/Anti-Matrix", fastGame, fastGame_note));
		menucodes->Append(new MenuEntry("VR Extender (See Note)", vrExtender, vrExtender_note));
		menucodes->Append(new MenuEntry("Set Custom VR", SetVR, SetVR_note));
		menucodes->Append(new MenuEntry("Random VR", randomVR, randomVR_note));
		menucodes->Append(new MenuEntry("Unlock Everything", unlockEverything, unlockEverything_note));
		menu->Append(menucodes);

		gamemodes = new MenuFolder("Custom Game Modes");
		//gamemodes->Append(new MenuEntry("Shine Thief", shineTheif, shineTheif_note));
		//gamemodes->Append(new MenuEntry("Tag", tagMode, tagMode_note));
		gamemodes->Append(new MenuEntry("Elimination Mode", eliminationMode, eliminationMode_note));
		gamemodes->Append(new MenuEntry("Countdown Mode", CountdownMode, CountdownMode_note));
		menu->Append(gamemodes);

		regioncodes = new MenuFolder("Region & Flag Codes");
		regioncodes->Append(new MenuEntry("Set Custom Flag", SetFlag, SetFlag_note));
		regioncodes->Append(new MenuEntry("Set Custom Globe Coordinates", SetCoordinates, SetCoordinates_note));
		menu->Append(regioncodes);

        menu->Run();
        return 0;
    }
}