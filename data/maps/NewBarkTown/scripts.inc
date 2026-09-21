# 1 "data/maps/NewBarkTown/scripts.pory"

# 2 "data/maps/NewBarkTown/scripts.pory"
.set LOCALID_LASS, 2
# 3 "data/maps/NewBarkTown/scripts.pory"
.set LOCALID_SILVER, 3
# 4 "data/maps/NewBarkTown/scripts.pory"

# 5 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_MapScripts::
# 6 "data/maps/NewBarkTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewBarkTown_OnTransition
# 7 "data/maps/NewBarkTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewBarkTown_OnFrame
# 8 "data/maps/NewBarkTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
# 9 "data/maps/NewBarkTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewBarkTown_OnLoad
# 10 "data/maps/NewBarkTown/scripts.pory"
	.byte 0
# 11 "data/maps/NewBarkTown/scripts.pory"

# 12 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_OnLoad::
# 13 "data/maps/NewBarkTown/scripts.pory"
	setrespawn HEAL_LOCATION_NEW_BARK_TOWN
# 14 "data/maps/NewBarkTown/scripts.pory"
	end
# 15 "data/maps/NewBarkTown/scripts.pory"

# 16 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_OnFrame::
# 17 "data/maps/NewBarkTown/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, NewBarkTown_PrimalOpening
# 18 "data/maps/NewBarkTown/scripts.pory"
        .2byte 0
# 19 "data/maps/NewBarkTown/scripts.pory"

# 20 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_ElmCallAfterLeague::
# 21 "data/maps/NewBarkTown/scripts.pory"
	lock
# 22 "data/maps/NewBarkTown/scripts.pory"
	pokenavcall BlackthornCity_Text_ElmCall
# 23 "data/maps/NewBarkTown/scripts.pory"
	waitmessage
# 24 "data/maps/NewBarkTown/scripts.pory"
	delay 30
# 25 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_NEWBARK_TOWN_STATE, 7
# 26 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_NEWBARKTOWN_LABSTATE, 10
# 27 "data/maps/NewBarkTown/scripts.pory"
	release
# 28 "data/maps/NewBarkTown/scripts.pory"
	end
# 29 "data/maps/NewBarkTown/scripts.pory"

# 30 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_OnTransition::
# 31 "data/maps/NewBarkTown/scripts.pory"
    call Common_EventScript_SetupRivalGfxId
# 32 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 2, NewBarkTown_Set_TalkToElm
# 33 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 4, NewBarkTown_Set_TalkToMom
# 34 "data/maps/NewBarkTown/scripts.pory"
	end
# 35 "data/maps/NewBarkTown/scripts.pory"

# 36 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_PrimalOpening::
# 37 "data/maps/NewBarkTown/scripts.pory"
        lockall
# 38 "data/maps/NewBarkTown/scripts.pory"
        setvar VAR_TEMP_0, 1
# 39 "data/maps/NewBarkTown/scripts.pory"
        goto_if_set FLAG_PRIMAL_OPENING_COMPLETE, NewBarkTown_PrimalOpening_End
# 40 "data/maps/NewBarkTown/scripts.pory"

# 41 "data/maps/NewBarkTown/scripts.pory"
        delay 45
# 42 "data/maps/NewBarkTown/scripts.pory"

# 43 "data/maps/NewBarkTown/scripts.pory"
        playse SE_THUNDER
# 44 "data/maps/NewBarkTown/scripts.pory"
        setvar VAR_0x8004, 0
# 45 "data/maps/NewBarkTown/scripts.pory"
        setvar VAR_0x8005, 3
# 46 "data/maps/NewBarkTown/scripts.pory"
        setvar VAR_0x8006, 4
# 47 "data/maps/NewBarkTown/scripts.pory"
        setvar VAR_0x8007, 2
# 48 "data/maps/NewBarkTown/scripts.pory"
        special ShakeCamera
# 49 "data/maps/NewBarkTown/scripts.pory"
        waitstate
# 50 "data/maps/NewBarkTown/scripts.pory"

# 51 "data/maps/NewBarkTown/scripts.pory"
        delay 30
# 52 "data/maps/NewBarkTown/scripts.pory"

# 53 "data/maps/NewBarkTown/scripts.pory"
        playse SE_THUNDER
# 54 "data/maps/NewBarkTown/scripts.pory"
        setvar VAR_0x8004, 0
# 55 "data/maps/NewBarkTown/scripts.pory"
        setvar VAR_0x8005, 3
# 56 "data/maps/NewBarkTown/scripts.pory"
        setvar VAR_0x8006, 4
# 57 "data/maps/NewBarkTown/scripts.pory"
        setvar VAR_0x8007, 2
# 58 "data/maps/NewBarkTown/scripts.pory"
        special ShakeCamera
# 59 "data/maps/NewBarkTown/scripts.pory"
        waitstate
# 60 "data/maps/NewBarkTown/scripts.pory"

# 61 "data/maps/NewBarkTown/scripts.pory"
        delay 30
# 62 "data/maps/NewBarkTown/scripts.pory"

# 63 "data/maps/NewBarkTown/scripts.pory"
        applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Movement_PrimalLookAround
# 64 "data/maps/NewBarkTown/scripts.pory"
        waitmovement OBJ_EVENT_ID_PLAYER
# 65 "data/maps/NewBarkTown/scripts.pory"

# 66 "data/maps/NewBarkTown/scripts.pory"
        msgbox NewBarkTown_Text_PrimalOpeningDots, MSGBOX_DEFAULT
# 67 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 68 "data/maps/NewBarkTown/scripts.pory"
	
# 69 "data/maps/NewBarkTown/scripts.pory"
        setflag FLAG_PRIMAL_OPENING_COMPLETE
# 70 "data/maps/NewBarkTown/scripts.pory"
	releaseall
# 71 "data/maps/NewBarkTown/scripts.pory"
	end
# 72 "data/maps/NewBarkTown/scripts.pory"

# 73 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Movement_PrimalLookAround:
# 74 "data/maps/NewBarkTown/scripts.pory"
        walk_in_place_left
# 75 "data/maps/NewBarkTown/scripts.pory"
        delay_16
# 76 "data/maps/NewBarkTown/scripts.pory"
        walk_in_place_right
# 77 "data/maps/NewBarkTown/scripts.pory"
        delay_16
# 78 "data/maps/NewBarkTown/scripts.pory"
        step_end
# 79 "data/maps/NewBarkTown/scripts.pory"

# 80 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_PrimalOpening_End::
# 81 "data/maps/NewBarkTown/scripts.pory"
        releaseall
# 82 "data/maps/NewBarkTown/scripts.pory"
        end
# 83 "data/maps/NewBarkTown/scripts.pory"

# 84 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_PrimalOpeningDots:
# 85 "data/maps/NewBarkTown/scripts.pory"
        .string "...$"
# 86 "data/maps/NewBarkTown/scripts.pory"

# 87 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Set_TalkToElm::
# 88 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_HIDE_SILVER_NEWBARKTOWN
# 89 "data/maps/NewBarkTown/scripts.pory"
	setobjectxyperm LOCALID_LASS, 0, 11
# 90 "data/maps/NewBarkTown/scripts.pory"
	callnative SetTimeBasedEncounters
# 91 "data/maps/NewBarkTown/scripts.pory"
	end
# 92 "data/maps/NewBarkTown/scripts.pory"

# 93 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Set_TalkToMom::
# 94 "data/maps/NewBarkTown/scripts.pory"
	setobjectxyperm LOCALID_LASS, 0, 11
# 95 "data/maps/NewBarkTown/scripts.pory"
	callnative SetTimeBasedEncounters
# 96 "data/maps/NewBarkTown/scripts.pory"
	end
# 97 "data/maps/NewBarkTown/scripts.pory"

# 98 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LabSign::
# 99 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LabSign, MSGBOX_SIGN
# 100 "data/maps/NewBarkTown/scripts.pory"
	end
# 101 "data/maps/NewBarkTown/scripts.pory"

# 102 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_TownSign::
# 103 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_Sign, MSGBOX_SIGN
# 104 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 105 "data/maps/NewBarkTown/scripts.pory"
	end
# 106 "data/maps/NewBarkTown/scripts.pory"

# 107 "data/maps/NewBarkTown/scripts.pory"

# 108 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_Lass::
# 109 "data/maps/NewBarkTown/scripts.pory"
	lock
# 110 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 111 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 2, NewBarkTown_EventScript_LassState2
# 112 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 3, NewBarkTown_EventScript_LassState3
# 113 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 4, NewBarkTown_EventScript_LassState4
# 114 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState5, MSGBOX_DEFAULT
# 115 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 116 "data/maps/NewBarkTown/scripts.pory"
	release
# 117 "data/maps/NewBarkTown/scripts.pory"
	end
# 118 "data/maps/NewBarkTown/scripts.pory"
	
# 119 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LassState2::
# 120 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 121 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_ExclamationMark
# 122 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 123 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 124 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 125 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState2, MSGBOX_DEFAULT
# 126 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 127 "data/maps/NewBarkTown/scripts.pory"
	release
# 128 "data/maps/NewBarkTown/scripts.pory"
	end
# 129 "data/maps/NewBarkTown/scripts.pory"

# 130 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LassState3::
# 131 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState3, MSGBOX_DEFAULT
# 132 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 133 "data/maps/NewBarkTown/scripts.pory"
	release
# 134 "data/maps/NewBarkTown/scripts.pory"
	end
# 135 "data/maps/NewBarkTown/scripts.pory"

# 136 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LassState4::
# 137 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 138 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_ExclamationMark
# 139 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 140 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 141 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState4, MSGBOX_DEFAULT
# 143 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 144 "data/maps/NewBarkTown/scripts.pory"
	release
# 145 "data/maps/NewBarkTown/scripts.pory"
	end
# 146 "data/maps/NewBarkTown/scripts.pory"

# 147 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_Wooper::
# 148 "data/maps/NewBarkTown/scripts.pory"
	lock
# 149 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 150 "data/maps/NewBarkTown/scripts.pory"
	waitse
# 151 "data/maps/NewBarkTown/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 152 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_Wooper, MSGBOX_DEFAULT
# 153 "data/maps/NewBarkTown/scripts.pory"
	waitmoncry
# 154 "data/maps/NewBarkTown/scripts.pory"
	release
# 155 "data/maps/NewBarkTown/scripts.pory"
	end
# 156 "data/maps/NewBarkTown/scripts.pory"

# 157 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LeaveTrigger::
# 158 "data/maps/NewBarkTown/scripts.pory"
	lock
# 159 "data/maps/NewBarkTown/scripts.pory"
	call_if_eq VAR_NEWBARK_TOWN_STATE, 2, NewBarkTown_EventScript_LeaveTriggersState2
# 160 "data/maps/NewBarkTown/scripts.pory"
	call_if_eq VAR_NEWBARK_TOWN_STATE, 4, NewBarkTown_EventScript_LeaveTriggersState4
# 161 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 162 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/NewBarkTown/scripts.pory"
	release
# 164 "data/maps/NewBarkTown/scripts.pory"
	end
# 165 "data/maps/NewBarkTown/scripts.pory"

# 166 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LeaveTriggersState2::
# 167 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 168 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_ExclamationMark
# 169 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 170 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, NewBarkTown_Movement_FaceDown
# 171 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 172 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState2, MSGBOX_DEFAULT
# 173 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 174 "data/maps/NewBarkTown/scripts.pory"
	return
# 175 "data/maps/NewBarkTown/scripts.pory"

# 176 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LeaveTriggersState4::
# 177 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 178 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_ExclamationMark
# 179 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 180 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, NewBarkTown_Movement_FaceDown
# 181 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 182 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState4, MSGBOX_DEFAULT
# 183 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 184 "data/maps/NewBarkTown/scripts.pory"
	return 
# 185 "data/maps/NewBarkTown/scripts.pory"

# 186 "data/maps/NewBarkTown/scripts.pory"

# 187 "data/maps/NewBarkTown/scripts.pory"

# 188 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_FatMan::
# 189 "data/maps/NewBarkTown/scripts.pory"
	lock
# 190 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 191 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 2, NewBarkTown_EventScript_FatManState2
# 192 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_FatManState3, MSGBOX_DEFAULT
# 193 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 194 "data/maps/NewBarkTown/scripts.pory"
	release
# 195 "data/maps/NewBarkTown/scripts.pory"
	end
# 196 "data/maps/NewBarkTown/scripts.pory"

# 197 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_FatManState2::
# 198 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_FatManState2, MSGBOX_DEFAULT
# 199 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 200 "data/maps/NewBarkTown/scripts.pory"
	release
# 201 "data/maps/NewBarkTown/scripts.pory"
	end
# 202 "data/maps/NewBarkTown/scripts.pory"

# 203 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_Silver::
# 204 "data/maps/NewBarkTown/scripts.pory"
	lock
# 205 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_Silver1, MSGBOX_DEFAULT
# 206 "data/maps/NewBarkTown/scripts.pory"
	delay 60
# 207 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 208 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_SILVER, Common_Movement_ExclamationMark
# 209 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 210 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 211 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_Silver2, MSGBOX_DEFAULT
# 212 "data/maps/NewBarkTown/scripts.pory"
	playse SE_BANG
# 213 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_SILVER, NewBarkTown_Movement_SilverPushesPlayer
# 214 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Movement_PlayerPushedBySilver
# 215 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 216 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_SILVER, Common_Movement_FaceOriginalDirection
# 217 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 218 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 219 "data/maps/NewBarkTown/scripts.pory"
	release
# 220 "data/maps/NewBarkTown/scripts.pory"
	end
# 221 "data/maps/NewBarkTown/scripts.pory"

# 222 "data/maps/NewBarkTown/scripts.pory"

# 223 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_Door::
# 224 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_Door, MSGBOX_SIGN
# 225 "data/maps/NewBarkTown/scripts.pory"
	end
# 226 "data/maps/NewBarkTown/scripts.pory"

# 227 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_TestMan1::
# 228 "data/maps/NewBarkTown/scripts.pory"
	givebp 4
# 229 "data/maps/NewBarkTown/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 230 "data/maps/NewBarkTown/scripts.pory"
	end
# 231 "data/maps/NewBarkTown/scripts.pory"

# 232 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_TestMan2::
# 233 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_NEWBARK_TOWN_STATE, 4
# 234 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_HIDE_MOMS_FRIEND
# 235 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 236 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_HIDE_SILVER_NEWBARKTOWN
# 237 "data/maps/NewBarkTown/scripts.pory"
	end
# 238 "data/maps/NewBarkTown/scripts.pory"

# 239 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_TestMan3::
# 240 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_NEWBARK_TOWN_STATE, 5
# 241 "data/maps/NewBarkTown/scripts.pory"
	
# 242 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_COMPLETED_AERODACTYL_PUZZLE
# 243 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_COMPLETED_HOOH_PUZZLE
# 244 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_COMPLETED_KABUTO_PUZZLE
# 245 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_COMPLETED_OMANYTE_PUZZLE
# 246 "data/maps/NewBarkTown/scripts.pory"
	end
# 247 "data/maps/NewBarkTown/scripts.pory"

# 248 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Movement_SilverPushesPlayer:
# 249 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_left
# 250 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_left
# 251 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_down
# 252 "data/maps/NewBarkTown/scripts.pory"
	face_down
# 253 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 254 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
# 255 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 256 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_right
# 257 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_right
# 258 "data/maps/NewBarkTown/scripts.pory"
	step_end
# 259 "data/maps/NewBarkTown/scripts.pory"

# 260 "data/maps/NewBarkTown/scripts.pory"

# 261 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Movement_PlayerPushedBySilver:
# 262 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_left
# 263 "data/maps/NewBarkTown/scripts.pory"
	face_up
# 264 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_down
# 265 "data/maps/NewBarkTown/scripts.pory"
	face_up
# 266 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 267 "data/maps/NewBarkTown/scripts.pory"
	jump_2_down
# 268 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
# 269 "data/maps/NewBarkTown/scripts.pory"
	face_down
# 270 "data/maps/NewBarkTown/scripts.pory"
	step_end
# 271 "data/maps/NewBarkTown/scripts.pory"

# 272 "data/maps/NewBarkTown/scripts.pory"
	
# 273 "data/maps/NewBarkTown/scripts.pory"

# 274 "data/maps/NewBarkTown/scripts.pory"

# 275 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Movement_FaceDown:
# 276 "data/maps/NewBarkTown/scripts.pory"
	face_down
# 277 "data/maps/NewBarkTown/scripts.pory"
	step_end
# 278 "data/maps/NewBarkTown/scripts.pory"

# 279 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_LabSign:
# 280 "data/maps/NewBarkTown/scripts.pory"
	.string "Prof. Elm's Lab$"
# 281 "data/maps/NewBarkTown/scripts.pory"

# 282 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_Door:
# 283 "data/maps/NewBarkTown/scripts.pory"
	.string "The door is locked.$"
# 284 "data/maps/NewBarkTown/scripts.pory"

# 285 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_Wooper:
# 286 "data/maps/NewBarkTown/scripts.pory"
	.string "Wooper: Woooooop.$"
# 287 "data/maps/NewBarkTown/scripts.pory"

# 288 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_FatManState2:
# 289 "data/maps/NewBarkTown/scripts.pory"
	.string "Wow, your Pokégear is impressive!\n"
# 290 "data/maps/NewBarkTown/scripts.pory"
	.string "Did your mom get it for you?$"
# 291 "data/maps/NewBarkTown/scripts.pory"

# 292 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_FatManState3:
# 293 "data/maps/NewBarkTown/scripts.pory"
	.string "Yo, {PLAYER}!\p"
# 294 "data/maps/NewBarkTown/scripts.pory"
	.string "I hear Prof. Elm discovered\n"
# 295 "data/maps/NewBarkTown/scripts.pory"
	.string "some new Pokémon.$"
# 296 "data/maps/NewBarkTown/scripts.pory"

# 297 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_LassState2:
# 298 "data/maps/NewBarkTown/scripts.pory"
	.string "Wait, {PLAYER}!\p"
# 299 "data/maps/NewBarkTown/scripts.pory"
	.string "It's dangerous to go out\n"
# 300 "data/maps/NewBarkTown/scripts.pory"
	.string "without a Pokémon!\p"
# 301 "data/maps/NewBarkTown/scripts.pory"
	.string "Wild Pokémon jump out of the grass\n"
# 302 "data/maps/NewBarkTown/scripts.pory"
	.string "on the way to the next town.$"
# 303 "data/maps/NewBarkTown/scripts.pory"

# 304 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_LassState3:
# 305 "data/maps/NewBarkTown/scripts.pory"
	.string "Oh! Your Pokémon is adorable!\n"
# 306 "data/maps/NewBarkTown/scripts.pory"
	.string "I wish I had one!$"
# 307 "data/maps/NewBarkTown/scripts.pory"

# 308 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_LassState4:
# 309 "data/maps/NewBarkTown/scripts.pory"
	.string "Hi, {PLAYER}! Leaving again?\p"
# 310 "data/maps/NewBarkTown/scripts.pory"
	.string "You should tell your mom if\n"
# 311 "data/maps/NewBarkTown/scripts.pory"
	.string "you are leaving.$"
# 312 "data/maps/NewBarkTown/scripts.pory"

# 313 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_LassState5:
# 314 "data/maps/NewBarkTown/scripts.pory"
	.string "Call your mom on your Pokégear\n"
# 315 "data/maps/NewBarkTown/scripts.pory"
	.string "to let her know how you're doing.$\p"
# 316 "data/maps/NewBarkTown/scripts.pory"

# 317 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_Silver1:
# 318 "data/maps/NewBarkTown/scripts.pory"
	.string ". . .\p"
# 319 "data/maps/NewBarkTown/scripts.pory"
	.string "So this is the famous Elm\n"
# 320 "data/maps/NewBarkTown/scripts.pory"
	.string "Pokémon Lab…$"
# 321 "data/maps/NewBarkTown/scripts.pory"

# 322 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_Silver2:
# 323 "data/maps/NewBarkTown/scripts.pory"
	.string "…What are you staring at?$"
# 324 "data/maps/NewBarkTown/scripts.pory"

# 325 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_Sign:
# 326 "data/maps/NewBarkTown/scripts.pory"
	.string "New Bark Town\p"
# 327 "data/maps/NewBarkTown/scripts.pory"
	.string "The Town Where the Winds of\n"
# 328 "data/maps/NewBarkTown/scripts.pory"
	.string "a New Beginning Blow$"
# 329 "data/maps/NewBarkTown/scripts.pory"

# 330 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_PlayersHouseMailbox::
# 331 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_PlayersHouse, MSGBOX_SIGN
# 332 "data/maps/NewBarkTown/scripts.pory"
	end
# 333 "data/maps/NewBarkTown/scripts.pory"

# 334 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_ElmsHouseMailbox::
# 335 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_ElmsHouse, MSGBOX_SIGN
# 336 "data/maps/NewBarkTown/scripts.pory"
	end
# 337 "data/maps/NewBarkTown/scripts.pory"

# 338 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_PlayersHouse:
# 339 "data/maps/NewBarkTown/scripts.pory"
	.string "{PLAYER}'s House$"
# 340 "data/maps/NewBarkTown/scripts.pory"

# 341 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_ElmsHouse:
# 342 "data/maps/NewBarkTown/scripts.pory"
	.string "Prof. Elm's House$"

RivalsMailbox::
# 346 "data/maps/NewBarkTown/scripts.pory"
	lock
# 347 "data/maps/NewBarkTown/scripts.pory"
	checkplayergender
# 348 "data/maps/NewBarkTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsMailbox_2
# 351 "data/maps/NewBarkTown/scripts.pory"
	msgbox RivalsMailbox_Text_1
RivalsMailbox_1:
# 353 "data/maps/NewBarkTown/scripts.pory"
	release
	end

RivalsMailbox_2:
# 349 "data/maps/NewBarkTown/scripts.pory"
	msgbox RivalsMailbox_Text_0
	goto RivalsMailbox_1


NewBarkTown_EventScript_ArcherArcadeCall::
# 358 "data/maps/NewBarkTown/scripts.pory"
	lock
# 359 "data/maps/NewBarkTown/scripts.pory"
	pokenavcall NewBarkTown_EventScript_ArcherArcadeCall_Text_0
# 374 "data/maps/NewBarkTown/scripts.pory"
	waitmessage
# 375 "data/maps/NewBarkTown/scripts.pory"
	delay 30
# 376 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_NEWBARK_TOWN_STATE, 12
# 377 "data/maps/NewBarkTown/scripts.pory"
	release
	end


RivalsMailbox_Text_0:
# 349 "data/maps/NewBarkTown/scripts.pory"
	.string "Crystal's house$"

RivalsMailbox_Text_1:
# 351 "data/maps/NewBarkTown/scripts.pory"
	.string "Gold's house$"

NewBarkTown_EventScript_ArcherArcadeCall_Text_0:
# 359 "data/maps/NewBarkTown/scripts.pory"
	.string "???: Greetings, {PLAYER}.\p"
	.string "This is Archer speaking.\p"
	.string "Archer: I've heard of your victory\n"
	.string "in the League and would like to \l"
	.string "offer you an invitation to our \l"
	.string "newly opened Rocket Arcade.\p"
	.string "If you are interested in gambling\n"
	.string "your way to the top, come visit us\l"
	.string "in the Goldenrod Underground.\p"
	.string "I assure you no tricks or traps are\n"
	.string "planned for you this time.$"
