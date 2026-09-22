PrimalStarterCave_MapScripts::
	.byte 0

PrimalStarterCave_EventScript_Chikorita::
        lock
        faceplayer
        msgbox PrimalStarterCave_Text_ChikoritaInjured, MSGBOX_DEFAULT
        release
        end

PrimalStarterCave_EventScript_Cyndaquil::
        lock
        faceplayer
        msgbox PrimalStarterCave_Text_CyndaquilInjured, MSGBOX_DEFAULT
        release
        end

PrimalStarterCave_EventScript_Totodile::
        lock
        faceplayer
        msgbox PrimalStarterCave_Text_TotodileInjured, MSGBOX_DEFAULT
        release
        end

PrimalStarterCave_Text_ChikoritaInjured:
        .string "A small, pale-green creature lies\n"
        .string "before you, badly injured...\p"
        .string "The leaf on its head trembles weakly.$"

PrimalStarterCave_Text_CyndaquilInjured:
        .string "A small creature lies curled up\n"
        .string "among the rocks, badly injured...\p"
        .string "A faint warmth radiates from its back.$"

PrimalStarterCave_Text_TotodileInjured:
        .string "A small, blue-scaled creature lies\n"
        .string "before you, badly injured...\p"
        .string "It opens its tooth-filled jaws,\n"
        .string "letting out a weak, trembling cry.$"
