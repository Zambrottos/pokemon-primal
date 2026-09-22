PrimalStarterCave_MapScripts::
        .byte 0

PrimalStarterCave_EventScript_Chikorita::
        lock
        faceplayer
        goto_if_eq VAR_PRIMAL_STARTER, 1, PrimalStarterCave_EventScript_ChosenCreature
        goto_if_ne VAR_PRIMAL_STARTER, 0, PrimalStarterCave_EventScript_AlreadyChosen        
        msgbox PrimalStarterCave_Text_ChikoritaInjured, MSGBOX_DEFAULT
        msgbox PrimalStarterCave_Text_HelpCreature, MSGBOX_YESNO
        goto_if_eq VAR_RESULT, YES, PrimalStarterCave_EventScript_ChooseChikorita
        release
        end

PrimalStarterCave_EventScript_ChooseChikorita::
        setvar VAR_PRIMAL_STARTER, 1
        givemon SPECIES_CHIKORITA, 5
        special PrimalSetNewestMonToOneHP
        msgbox PrimalStarterCave_Text_DecidedToHelp, MSGBOX_DEFAULT
	setflag FLAG_PRIMAL_HIDE_RESCUED_STARTER
	removeobject 2
        release
        end

PrimalStarterCave_EventScript_Cyndaquil::
        lock
        faceplayer
        goto_if_eq VAR_PRIMAL_STARTER, 2, PrimalStarterCave_EventScript_ChosenCreature
        goto_if_ne VAR_PRIMAL_STARTER, 0, PrimalStarterCave_EventScript_AlreadyChosen
        msgbox PrimalStarterCave_Text_CyndaquilInjured, MSGBOX_DEFAULT
        msgbox PrimalStarterCave_Text_HelpCreature, MSGBOX_YESNO
        goto_if_eq VAR_RESULT, YES, PrimalStarterCave_EventScript_ChooseCyndaquil
        release
        end

PrimalStarterCave_EventScript_ChooseCyndaquil::
        setvar VAR_PRIMAL_STARTER, 2
        givemon SPECIES_CYNDAQUIL, 5
        special PrimalSetNewestMonToOneHP
        msgbox PrimalStarterCave_Text_DecidedToHelp, MSGBOX_DEFAULT
        release
        end

PrimalStarterCave_EventScript_Totodile::
        lock
        faceplayer
        goto_if_eq VAR_PRIMAL_STARTER, 3, PrimalStarterCave_EventScript_ChosenCreature
        goto_if_ne VAR_PRIMAL_STARTER, 0, PrimalStarterCave_EventScript_AlreadyChosen
        msgbox PrimalStarterCave_Text_TotodileInjured, MSGBOX_DEFAULT
        msgbox PrimalStarterCave_Text_HelpCreature, MSGBOX_YESNO
        goto_if_eq VAR_RESULT, YES, PrimalStarterCave_EventScript_ChooseTotodile
        release
        end

PrimalStarterCave_EventScript_ChooseTotodile::
        setvar VAR_PRIMAL_STARTER, 3
        givemon SPECIES_TOTODILE, 5
        special PrimalSetNewestMonToOneHP
        msgbox PrimalStarterCave_Text_DecidedToHelp, MSGBOX_DEFAULT
        release
        end

PrimalStarterCave_EventScript_ChosenCreature::
        msgbox PrimalStarterCave_Text_ChosenCreature, MSGBOX_DEFAULT
        release
        end

PrimalStarterCave_EventScript_AlreadyChosen::
        msgbox PrimalStarterCave_Text_AlreadyChosen, MSGBOX_DEFAULT
        release
        end

PrimalStarterCave_Text_ChosenCreature:
        .string "The injured creature looks up at you...\p"
        .string "It seems to be holding on.$"

PrimalStarterCave_Text_AlreadyChosen:
        .string "The creature barely responds...\p"
        .string "It seems there is nothing you can\n"
        .string "do to save it.$"

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

PrimalStarterCave_Text_HelpCreature:
        .string "Do you want to help this creature?$"

PrimalStarterCave_Text_DecidedToHelp:
        .string "You decide to help the injured creature.$"
