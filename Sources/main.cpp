#include "3ds.h"
#include "cheats.cpp"
#include "additionals.cpp" // for private codes, or unreleased codes, etc. personal use
#include "csvc.h"
#include "CTRPluginFramework.hpp"
#include <vector>

namespace CTRPluginFramework
{
	void InitMenu(PluginMenu &menu);
	int main(void)
	{
		PluginMenu *menu = new PluginMenu("DarkFlare's Online MK7 Plugin", 3, 8, 3, "This is a plugin developed by DarkFlare that contains many popular MK7 hacks. Please be sure to read all of the notes for instructions on how to use a certain code. If there is a problem, report it on the official GBAtemp thread.");
		menu->SynchronizeWithFrame(true);
		InitMenu(*menu);
		MenuFolder *kartcodes = nullptr, *speedcodes = nullptr, *itemcodes = nullptr, *coursecodes = nullptr, *menucodes = nullptr, *gamemodes = nullptr, *regioncodes = nullptr;

		kartcodes = new MenuFolder("Codes de Kart");
		kartcodes->Append(new MenuEntry("Invincible", invincible, "Tu seras invincible. Vous apparaîtrez également clignotant sur les écrans d’autres personnes en ligne."));
		kartcodes->Append(new MenuEntry("Aimbot", aimbot, "Votre objectif sera verrouillé sur un joueur spécifique. Appuyez sur D-Pad Up pour augmenter le lecteur, et D-Pad Down pour le réinitialiser."));
		kartcodes->Append(new MenuEntry("Toujours Star Power", alwaysStarPower, "Vous aurez toujours des effets d’étoile, tels que l’invincibilité et la couleur."));
		kartcodes->Append(new MenuEntry("Toujours Black Kart", alwaysBlackKart, "Votre kart sera noir comme si vous vous faisiez bloopered."));
		kartcodes->Append(new MenuEntry("Toujours choqué", alwaysShocked, "Votre kart sera toujours petit comme si vous ayez été choqué."));
		kartcodes->Append(new MenuEntry("Toujours écrasé", alwaysCrushed, "Votre kart sera toujours plat comme si vous avez été écrasé. Ceci n’est visible que sur les écrans adverses en ligne. Sur votre écran, vous apparaîtrez normalement."));
		kartcodes->Append(new MenuEntry("Trick Anywhere", trickAnywhere, "Vous serez en mesure d’effectuer un tour n’importe où en appuyant sur R."));
		kartcodes->Append(new MenuEntry("Instant MiniTurbo", instantMT, "Vous obtiendrez instantanément miniTurbos rouge et bleu lors de la dérive."));
		kartcodes->Append(new MenuEntry("Énorme BunnyhopInstant", hugeBunnyhop, "Vous sauterez très haut en sautillant avant une dérive."));
		kartcodes->Append(new MenuEntry("Changement de taille", sizeChanger, "Votre kart augmentera et diminuera constamment en taille. Utilisez D-Pad Left et D-Pad à droite pour changer la vitesse à laquelle votre kart changera de taille. Ce code peut parfois causer des problèmes."));
		menu->Append(kartcodes);

		speedcodes = new MenuFolder("Codes de vitesses et de mouvements");
		speedcodes->Append(new MenuEntry("200cc", TwoHundredCC, "Vous irez à des vitesses de 200cc. Redémarrez la course après avoir appliqué le code pour que l’effet ait lieu."));
		speedcodes->Append(new MenuEntry("500cc", FiveHundredCC, "Vous irez à des vitesses de 500cc. Redémarrez la course après avoir appliqué le code pour que l’effet ait lieu."));
		speedcodes->Append(new MenuEntry("Acceleration instantanée", instantAcceleration, "Votre kart accélérera instantanément à la vitesse maximale lorsque vous appuyez sur A."));
		speedcodes->Append(new MenuEntry("Accélération instantanée vers l’arrière", instantBackAcceleration, "Votre kart accélérera instantanément à sa vitesse inverse maximale lorsque vous appuyez sur B."));
		speedcodes->Append(new MenuEntry("Stop instantanée", instantStop, "Votre kart s’arrêtera instantanément en appuyant sur A+B."));
		speedcodes->Append(new MenuEntry("Vitesses inversées rapides", fastReverse, "Vous inverserez à des vitesses plus élevées qu’auparavant lors de la tenue B."));
		speedcodes->Append(new MenuEntry("À l’intérieur Drifing Kart", insideDrift, "Votre kart dérivera vers l’intérieur, comme certains vélos l’ont fait dans Mario Kart Wii."));
		speedcodes->Append(new MenuEntry("Stalking Hack", stalking, "-Y + Droite = Augmentation Playern-Y + Gauche = Diminution Playern-Y + Up = Stalk the player until code is disabledn-Hold Y to stalk the player temporarily, release Y to stop stalkingn-Y + Down = Disable Code"));
		speedcodes->Append(new MenuEntry("Téléporteur d’écran tactile", TouchCode, "Touchez l’écran inférieur ou faites glisser votre stylet à travers lui pour déformer votre kart à cette position sur la carte."));
		speedcodes->Append(new MenuEntry("Moonjump", moonjump, "-Démarrer + R = Enablen Ce code vous permettra de voler haut."));
		speedcodes->Append(new MenuEntry("Conduire n’importe où", driveAnywhere, "-Démarrer = Disablen-Select = Enablen-Select + Up = Go Upn-Select + Down = Go DownnnC’est un remake du code de Supastarrio pour MKDS."));
		speedcodes->Append(new MenuEntry("Enregistrer le téléportateur de machines à sous", saveSlotTeleporter, "-Démarrer + X = Enregistrer la position actuellen-Démarrer + Y = Position d’enregistrement de charge."));
		menu->Append(speedcodes);

		itemcodes = new MenuFolder("Codes d'items");
		itemcodes->Append(new MenuEntry("Roue d’article", itemWheel, "-X = Bulletn-Y = Tanookin-Start = Blue Shelln-Select = Lightningn-D-Pad Gauche = Lucky 7n-D-Pad Right = Red Shelln-D-Pad Up = Green Shelln-D-Pad Down = Bob-Omb"));
		itemcodes->Append(new MenuEntry("Toujours avoir certains éléments", nullptr, SetItem, "Vous pourrez choisir l’élément que vous souhaitez en sortant du menu."));
		itemcodes->Append(new MenuEntry("Cycle Article complètement aléatoire", randomItems, "Vous serez constamment donné un élément aléatoire."));
		itemcodes->Append(new MenuEntry("Objets vraiment aléatoires", trulyRandomItems, "Les articles seront complètement aléatoires, quelle que soit votre position. L’icône de l’élément d’écran inférieur vous indiquera l’élément que vous étiez censé recevoir, tandis que l’icône de l’élément d’écran supérieur vous indiquera l’élément purement aléatoire que vous avez reçu."));
		itemcodes->Append(new MenuEntry("Déposer les champignons", dropMushrooms, "Ce code remplace les coquilles vertes par des champignons droppable. Jetez une « coquille verte » pour laisser tomber un champignon. "));
		itemcodes->Append(new MenuEntry("Coquille bleue rapide", fastBlueShell, "Les coquilles bleues iront très vite."));
		itemcodes->Append(new MenuEntry("Obus bleu arrêté", stoppedBlueShell, "Les coquilles bleues ne bougeront pas après avoir été lancées."));
		itemcodes->Append(new MenuEntry("Coquille verte rapide", fastGreenShell, "Les coquilles vertes iront très vite."));
		itemcodes->Append(new MenuEntry("Obus vert arrêté", stoppedGreenShell, "Les coquilles vertes ne bougeront pas après avoir été lancées."));
		itemcodes->Append(new MenuEntry("Balle de contrôle", bulletControl, "Vous serez en mesure de contrôler vos balles.n-Démarrer + Droite = Enablen-Start + Gauche = Désactiver"));
		itemcodes->Append(new MenuEntry("Modificateur de vitesse de balle", bulletSpeed, "-X = Très rapiden-B = Arrêtén-A = Vitesse normale"));
		itemcodes->Append(new MenuEntry("Blue Shell Ride", blueShellRide, "-D-Pad Gauche = EnablenVous se déformer à une coquille bleue et la monter."));
		itemcodes->Append(new MenuEntry("Désactiver star musique", disableStarMusic, "La musique star ne jouera pas quand vous êtes dans une étoile."));
		menu->Append(itemcodes);

		coursecodes = new MenuFolder("Codes de courses");
		coursecodes->Append(new MenuEntry("CPU Brawl", cpuBrawl, "Le CPU se fera combattre."));
		coursecodes->Append(new MenuEntry("Minuterie max", maxTimer, "La minuterie gèlera à 4:59.9xx."));
		coursecodes->Append(new MenuEntry("L’eau partout", waterEverywhere, "Tu seras toujours sous l’eau."));
		menu->Append(coursecodes);

		menucodes = new MenuFolder("Codes des menus et autres");
		menucodes->Append(new MenuEntry("Pas de compte à rebours", noCountdown, "Vous serez en mesure de conduire lorsque le compte à rebours normalement se produirait."));
		menucodes->Append(new MenuEntry("Compteur", spedometer, "Vous pourrez voir votre vitesse actuelle dans votre unité préférée."));
		menucodes->Append(new MenuEntry("Mii Dumper", nullptr, miiDumper, "Ce code peut vider le Mii de n’importe quel joueur d’un match en ligne. Suivez les instructions à l’écran après avoir habilitant le code dans un hall en ligne. Si la pièce n’est pas entièrement peuplée, certains boutons peuvent être vides ou contenir les noms des joueurs précédents. Vous pouvez vider les joueurs précédents sans aucun problème, même s’ils ne sont pas dans la salle. "));
		menucodes->Append(new MenuEntry("Désactiver la vue première personne", disableFirstPersonView, "Vous ne serez pas en mesure d’activer la vue à la première personne en appuyant sur le D-Pad."));
		menucodes->Append(new MenuEntry("Pas de déconnexion", NoDC, "Vous ne serez pas déconnecté à moins que la cause de la déconnexion est un problème de réseau réel."));
		menucodes->Append(new MenuEntry("Jeu rapide/Anti-Matrix", fastGame, "Le jeu se déplacera à une vitesse très rapide. Instable, utilisez à vos risques et périls!"));
		menucodes->Append(new MenuEntry("Live Time Contrem Ghost Replay", timeTrialGhost, "Ce code vous permettra de voir n’importe quel fantôme. S’il vous plaît suivre ces étapes:n1. Activez ce code, puis entrez le contre-la-montre avec le fantôme que vous souhaitez afficher.n2. Votre kart sera hors limites. Redémarrez la course.n3. Fait! Le code doit fonctionner."));
		menucodes->Append(new MenuEntry("VR Extender", vrExtender, "-Début = 999999n-Select = 420000n-D-Pad Down = 0n-D-Pad Up = 696969n-D-Pad Droite = 666666n-D-Pad Gauche = 777777"));
		menucodes->Append(new MenuEntry("Définir la VR personnalisée", nullptr, SetVR, "Un clavier viendra lorsque vous quittez le menu et vous serez autorisé à entrer votre VR souhaité, entre 0 et 999999 (Assurez-vous d’entrer des valeurs dans hexadécimal)"));
		menucodes->Append(new MenuEntry("VR aléatoire", randomVR, "Une valeur VR aléatoire entre 1 et 999999 sera générée."));
		menucodes->Append(new MenuEntry("Tout débloquer", unlockEverything, "Tout sera débloqué. Après l’activation, enregistrer le jeu en complétant un contre-la-montre ou quelque chose, quitter le jeu, et l’ouvrir à nouveau. À ce stade, tout doit être débloqué en permanence."));
		menu->Append(menucodes);

		gamemodes = new MenuFolder("Custom Game Modes");
		//gamemodes->Append(new MenuEntry("Shine Thief", shineTheif, shineTheif_note));
		//gamemodes->Append(new MenuEntry("Tag", tagMode, tagMode_note));
		gamemodes->Append(new MenuEntry("Mode élimination", eliminationMode, "Toutes les 30 secondes, le joueur à la dernière place sera éliminé. Le dernier joueur debout gagne! Ce mode fonctionne mieux dans les chambres avec plus de joueurs."));
		gamemodes->Append(new MenuEntry("Mode compte à rebours", CountdownMode, "Vous aurez 2 minutes pour courir. Chaque fois que vous frappez un joueur avec un élément, votre temps augmente de 3 secondes. Vous aurez besoin de gagner stratégiquement plus de temps tout en étant vers l’avant du peloton. Le joueur en première place quand le temps de tout le monde s’épuise gagne!"));
		gamemodes->Append(new MenuEntry("Drivable 200cc", TwoHundredCCStable, "Cette version de 200cc a la dérive de frein en appuyant sur B pendant les dérives (fonctionne également dans les boosts et tandis que dans l’air), et la dérive à des vitesses inférieures et hors route. Les articles se déplaceront également à des vitesses proprtional à la CC."));
		gamemodes->Append(new MenuEntry("Drivable 500cc", FiveHundredCCStable, ""));
		menu->Append(gamemodes);

		regioncodes = new MenuFolder("Codes de régions et de drapeaux");
		regioncodes->Append(new MenuEntry("Définir un indicateur personnalisé", nullptr, SetFlag, "Un clavier viendra lorsque vous quittez le menu et vous serez autorisé à entrer votre ID indicateur souhaité (en hexadécimal). Vous pouvez obtenir ces à partir du fil MK7 NTR Plugin GBAtemp."));
		regioncodes->Append(new MenuEntry("Définir des coordonnées de globe personnalisées", nullptr, SetCoordinates, "Un clavier viendra lorsque vous quittez le menu et vous serez autorisé à entrer vos coordonnées souhaitées. Vous pouvez obtenir ces à partir du fil MK7 NTR Plugin GBAtemp."));
		menu->Append(regioncodes);

		menu->Run();
		delete menu;
		return 0;
	}

    static void    ToggleTouchscreenForceOn(void)
    {
        static u32 original = 0;
        static u32 *patchAddress = nullptr;

        if (patchAddress && original)
        {
            *patchAddress = original;
            return;
        }

        static const std::vector<u32> pattern =
        {
            0xE59F10C0, 0xE5840004, 0xE5841000, 0xE5DD0000,
            0xE5C40008, 0xE28DD03C, 0xE8BD80F0, 0xE5D51001,
            0xE1D400D4, 0xE3510003, 0x159F0034, 0x1A000003
        };

        Result  res;
        Handle  processHandle;
        s64     textTotalSize = 0;
        s64     startAddress = 0;
        u32 *   found;

        if (R_FAILED(svcOpenProcess(&processHandle, 16)))
            return;

        svcGetProcessInfo(&textTotalSize, processHandle, 0x10002);
        svcGetProcessInfo(&startAddress, processHandle, 0x10005);
        if(R_FAILED(svcMapProcessMemoryEx(CUR_PROCESS_HANDLE, 0x14000000, processHandle, (u32)startAddress, textTotalSize)))
            goto exit;

        found = (u32 *)Utils::Search<u32>(0x14000000, (u32)textTotalSize, pattern);

        if (found != nullptr)
        {
            original = found[13];
            patchAddress = (u32 *)PA_FROM_VA((found + 13));
            found[13] = 0xE1A00000;
        }

        svcUnmapProcessMemoryEx(CUR_PROCESS_HANDLE, 0x14000000, textTotalSize);
exit:
        svcCloseHandle(processHandle);
    }

    void    PatchProcess(FwkSettings &settings)
    {
        ToggleTouchscreenForceOn();
    }

    void    OnProcessExit(void)
    {
        ToggleTouchscreenForceOn();
    }

    void    InitMenu(PluginMenu &menu) {}
}
