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
	msgbox NewBarkTown_Text_PrimalOpeningDots, MSGBOX_DEFAULT
# 64 "data/maps/NewBarkTown/scripts.pory"

# 65 "data/maps/NewBarkTown/scripts.pory"
        setflag FLAG_PRIMAL_OPENING_COMPLETE
# 66 "data/maps/NewBarkTown/scripts.pory"

# 67 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_PrimalOpening_End::
# 68 "data/maps/NewBarkTown/scripts.pory"
        releaseall
# 69 "data/maps/NewBarkTown/scripts.pory"
        end
# 70 "data/maps/NewBarkTown/scripts.pory"

# 71 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_PrimalOpeningDots:
# 72 "data/maps/NewBarkTown/scripts.pory"
        .string "...$"
# 73 "data/maps/NewBarkTown/scripts.pory"

# 74 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Set_TalkToElm::
# 75 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_HIDE_SILVER_NEWBARKTOWN
# 76 "data/maps/NewBarkTown/scripts.pory"
	setobjectxyperm LOCALID_LASS, 0, 11
# 77 "data/maps/NewBarkTown/scripts.pory"
	callnative SetTimeBasedEncounters
# 78 "data/maps/NewBarkTown/scripts.pory"
	end
# 79 "data/maps/NewBarkTown/scripts.pory"

# 80 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Set_TalkToMom::
# 81 "data/maps/NewBarkTown/scripts.pory"
	setobjectxyperm LOCALID_LASS, 0, 11
# 82 "data/maps/NewBarkTown/scripts.pory"
	callnative SetTimeBasedEncounters
# 83 "data/maps/NewBarkTown/scripts.pory"
	end
# 84 "data/maps/NewBarkTown/scripts.pory"

# 85 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LabSign::
# 86 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LabSign, MSGBOX_SIGN
# 87 "data/maps/NewBarkTown/scripts.pory"
	end
# 88 "data/maps/NewBarkTown/scripts.pory"

# 89 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_TownSign::
# 90 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_Sign, MSGBOX_SIGN
# 91 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 92 "data/maps/NewBarkTown/scripts.pory"
	end
# 93 "data/maps/NewBarkTown/scripts.pory"

# 94 "data/maps/NewBarkTown/scripts.pory"

# 95 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_Lass::
# 96 "data/maps/NewBarkTown/scripts.pory"
	lock
# 97 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 98 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 2, NewBarkTown_EventScript_LassState2
# 99 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 3, NewBarkTown_EventScript_LassState3
# 100 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 4, NewBarkTown_EventScript_LassState4
# 101 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState5, MSGBOX_DEFAULT
# 102 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 103 "data/maps/NewBarkTown/scripts.pory"
	release
# 104 "data/maps/NewBarkTown/scripts.pory"
	end
# 105 "data/maps/NewBarkTown/scripts.pory"
	
# 106 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LassState2::
# 107 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 108 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_ExclamationMark
# 109 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 110 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 111 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 112 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState2, MSGBOX_DEFAULT
# 113 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 114 "data/maps/NewBarkTown/scripts.pory"
	release
# 115 "data/maps/NewBarkTown/scripts.pory"
	end
# 116 "data/maps/NewBarkTown/scripts.pory"

# 117 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LassState3::
# 118 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState3, MSGBOX_DEFAULT
# 119 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 120 "data/maps/NewBarkTown/scripts.pory"
	release
# 121 "data/maps/NewBarkTown/scripts.pory"
	end
# 122 "data/maps/NewBarkTown/scripts.pory"

# 123 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LassState4::
# 124 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 125 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_ExclamationMark
# 126 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 127 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 128 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 129 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState4, MSGBOX_DEFAULT
# 130 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 131 "data/maps/NewBarkTown/scripts.pory"
	release
# 132 "data/maps/NewBarkTown/scripts.pory"
	end
# 133 "data/maps/NewBarkTown/scripts.pory"

# 134 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_Wooper::
# 135 "data/maps/NewBarkTown/scripts.pory"
	lock
# 136 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 137 "data/maps/NewBarkTown/scripts.pory"
	waitse
# 138 "data/maps/NewBarkTown/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 139 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_Wooper, MSGBOX_DEFAULT
# 140 "data/maps/NewBarkTown/scripts.pory"
	waitmoncry
# 141 "data/maps/NewBarkTown/scripts.pory"
	release
# 142 "data/maps/NewBarkTown/scripts.pory"
	end
# 143 "data/maps/NewBarkTown/scripts.pory"

# 144 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LeaveTrigger::
# 145 "data/maps/NewBarkTown/scripts.pory"
	lock
# 146 "data/maps/NewBarkTown/scripts.pory"
	call_if_eq VAR_NEWBARK_TOWN_STATE, 2, NewBarkTown_EventScript_LeaveTriggersState2
# 147 "data/maps/NewBarkTown/scripts.pory"
	call_if_eq VAR_NEWBARK_TOWN_STATE, 4, NewBarkTown_EventScript_LeaveTriggersState4
# 148 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 149 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 150 "data/maps/NewBarkTown/scripts.pory"
	release
# 151 "data/maps/NewBarkTown/scripts.pory"
	end
# 152 "data/maps/NewBarkTown/scripts.pory"

# 153 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LeaveTriggersState2::
# 154 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 155 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_ExclamationMark
# 156 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 157 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, NewBarkTown_Movement_FaceDown
# 158 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 159 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState2, MSGBOX_DEFAULT
# 160 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 161 "data/maps/NewBarkTown/scripts.pory"
	return
# 162 "data/maps/NewBarkTown/scripts.pory"

# 163 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LeaveTriggersState4::
# 164 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 165 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_ExclamationMark
# 166 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, NewBarkTown_Movement_FaceDown
# 168 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 169 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState4, MSGBOX_DEFAULT
# 170 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 171 "data/maps/NewBarkTown/scripts.pory"
	return 
# 172 "data/maps/NewBarkTown/scripts.pory"

# 173 "data/maps/NewBarkTown/scripts.pory"

# 174 "data/maps/NewBarkTown/scripts.pory"

# 175 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_FatMan::
# 176 "data/maps/NewBarkTown/scripts.pory"
	lock
# 177 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 178 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 2, NewBarkTown_EventScript_FatManState2
# 179 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_FatManState3, MSGBOX_DEFAULT
# 180 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 181 "data/maps/NewBarkTown/scripts.pory"
	release
# 182 "data/maps/NewBarkTown/scripts.pory"
	end
# 183 "data/maps/NewBarkTown/scripts.pory"

# 184 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_FatManState2::
# 185 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_FatManState2, MSGBOX_DEFAULT
# 186 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 187 "data/maps/NewBarkTown/scripts.pory"
	release
# 188 "data/maps/NewBarkTown/scripts.pory"
	end
# 189 "data/maps/NewBarkTown/scripts.pory"

# 190 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_Silver::
# 191 "data/maps/NewBarkTown/scripts.pory"
	lock
# 192 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_Silver1, MSGBOX_DEFAULT
# 193 "data/maps/NewBarkTown/scripts.pory"
	delay 60
# 194 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 195 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_SILVER, Common_Movement_ExclamationMark
# 196 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 197 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 198 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_Silver2, MSGBOX_DEFAULT
# 199 "data/maps/NewBarkTown/scripts.pory"
	playse SE_BANG
# 200 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_SILVER, NewBarkTown_Movement_SilverPushesPlayer
# 201 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Movement_PlayerPushedBySilver
# 202 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 203 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_SILVER, Common_Movement_FaceOriginalDirection
# 204 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 205 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 206 "data/maps/NewBarkTown/scripts.pory"
	release
# 207 "data/maps/NewBarkTown/scripts.pory"
	end
# 208 "data/maps/NewBarkTown/scripts.pory"

# 209 "data/maps/NewBarkTown/scripts.pory"

# 210 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_Door::
# 211 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_Door, MSGBOX_SIGN
# 212 "data/maps/NewBarkTown/scripts.pory"
	end
# 213 "data/maps/NewBarkTown/scripts.pory"

# 214 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_TestMan1::
# 215 "data/maps/NewBarkTown/scripts.pory"
	givebp 4
# 216 "data/maps/NewBarkTown/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 217 "data/maps/NewBarkTown/scripts.pory"
	end
# 218 "data/maps/NewBarkTown/scripts.pory"

# 219 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_TestMan2::
# 220 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_NEWBARK_TOWN_STATE, 4
# 221 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_HIDE_MOMS_FRIEND
# 222 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 223 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_HIDE_SILVER_NEWBARKTOWN
# 224 "data/maps/NewBarkTown/scripts.pory"
	end
# 225 "data/maps/NewBarkTown/scripts.pory"

# 226 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_TestMan3::
# 227 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_NEWBARK_TOWN_STATE, 5
# 228 "data/maps/NewBarkTown/scripts.pory"
	
# 229 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_COMPLETED_AERODACTYL_PUZZLE
# 230 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_COMPLETED_HOOH_PUZZLE
# 231 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_COMPLETED_KABUTO_PUZZLE
# 232 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_COMPLETED_OMANYTE_PUZZLE
# 233 "data/maps/NewBarkTown/scripts.pory"
	end
# 234 "data/maps/NewBarkTown/scripts.pory"

# 235 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Movement_SilverPushesPlayer:
# 236 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_left
# 237 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_left
# 238 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_down
# 239 "data/maps/NewBarkTown/scripts.pory"
	face_down
# 240 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 241 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
# 242 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 243 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_right
# 244 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_right
# 245 "data/maps/NewBarkTown/scripts.pory"
	step_end
# 246 "data/maps/NewBarkTown/scripts.pory"

# 247 "data/maps/NewBarkTown/scripts.pory"

# 248 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Movement_PlayerPushedBySilver:
# 249 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_left
# 250 "data/maps/NewBarkTown/scripts.pory"
	face_up
# 251 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_down
# 252 "data/maps/NewBarkTown/scripts.pory"
	face_up
# 253 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 254 "data/maps/NewBarkTown/scripts.pory"
	jump_2_down
# 255 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
# 256 "data/maps/NewBarkTown/scripts.pory"
	face_down
# 257 "data/maps/NewBarkTown/scripts.pory"
	step_end
# 258 "data/maps/NewBarkTown/scripts.pory"

# 259 "data/maps/NewBarkTown/scripts.pory"
	
# 260 "data/maps/NewBarkTown/scripts.pory"

# 261 "data/maps/NewBarkTown/scripts.pory"

# 262 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Movement_FaceDown:
# 263 "data/maps/NewBarkTown/scripts.pory"
	face_down
# 264 "data/maps/NewBarkTown/scripts.pory"
	step_end
# 265 "data/maps/NewBarkTown/scripts.pory"

# 266 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_LabSign:
# 267 "data/maps/NewBarkTown/scripts.pory"
	.string "Prof. Elm's Lab$"
# 268 "data/maps/NewBarkTown/scripts.pory"

# 269 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_Door:
# 270 "data/maps/NewBarkTown/scripts.pory"
	.string "The door is locked.$"
# 271 "data/maps/NewBarkTown/scripts.pory"

# 272 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_Wooper:
# 273 "data/maps/NewBarkTown/scripts.pory"
	.string "Wooper: Woooooop.$"
# 274 "data/maps/NewBarkTown/scripts.pory"

# 275 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_FatManState2:
# 276 "data/maps/NewBarkTown/scripts.pory"
	.string "Wow, your Pokégear is impressive!\n"
# 277 "data/maps/NewBarkTown/scripts.pory"
	.string "Did your mom get it for you?$"
# 278 "data/maps/NewBarkTown/scripts.pory"

# 279 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_FatManState3:
# 280 "data/maps/NewBarkTown/scripts.pory"
	.string "Yo, {PLAYER}!\p"
# 281 "data/maps/NewBarkTown/scripts.pory"
	.string "I hear Prof. Elm discovered\n"
# 282 "data/maps/NewBarkTown/scripts.pory"
	.string "some new Pokémon.$"
# 283 "data/maps/NewBarkTown/scripts.pory"

# 284 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_LassState2:
# 285 "data/maps/NewBarkTown/scripts.pory"
	.string "Wait, {PLAYER}!\p"
# 286 "data/maps/NewBarkTown/scripts.pory"
	.string "It's dangerous to go out\n"
# 287 "data/maps/NewBarkTown/scripts.pory"
	.string "without a Pokémon!\p"
# 288 "data/maps/NewBarkTown/scripts.pory"
	.string "Wild Pokémon jump out of the grass\n"
# 289 "data/maps/NewBarkTown/scripts.pory"
	.string "on the way to the next town.$"
# 290 "data/maps/NewBarkTown/scripts.pory"

# 291 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_LassState3:
# 292 "data/maps/NewBarkTown/scripts.pory"
	.string "Oh! Your Pokémon is adorable!\n"
# 293 "data/maps/NewBarkTown/scripts.pory"
	.string "I wish I had one!$"
# 294 "data/maps/NewBarkTown/scripts.pory"

# 295 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_LassState4:
# 296 "data/maps/NewBarkTown/scripts.pory"
	.string "Hi, {PLAYER}! Leaving again?\p"
# 297 "data/maps/NewBarkTown/scripts.pory"
	.string "You should tell your mom if\n"
# 298 "data/maps/NewBarkTown/scripts.pory"
	.string "you are leaving.$"
# 299 "data/maps/NewBarkTown/scripts.pory"

# 300 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_LassState5:
# 301 "data/maps/NewBarkTown/scripts.pory"
	.string "Call your mom on your Pokégear\n"
# 302 "data/maps/NewBarkTown/scripts.pory"
	.string "to let her know how you're doing.$\p"
# 303 "data/maps/NewBarkTown/scripts.pory"

# 304 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_Silver1:
# 305 "data/maps/NewBarkTown/scripts.pory"
	.string ". . .\p"
# 306 "data/maps/NewBarkTown/scripts.pory"
	.string "So this is the famous Elm\n"
# 307 "data/maps/NewBarkTown/scripts.pory"
	.string "Pokémon Lab…$"
# 308 "data/maps/NewBarkTown/scripts.pory"

# 309 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_Silver2:
# 310 "data/maps/NewBarkTown/scripts.pory"
	.string "…What are you staring at?$"
# 311 "data/maps/NewBarkTown/scripts.pory"

# 312 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_Sign:
# 313 "data/maps/NewBarkTown/scripts.pory"
	.string "New Bark Town\p"
# 314 "data/maps/NewBarkTown/scripts.pory"
	.string "The Town Where the Winds of\n"
# 315 "data/maps/NewBarkTown/scripts.pory"
	.string "a New Beginning Blow$"
# 316 "data/maps/NewBarkTown/scripts.pory"

# 317 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_PlayersHouseMailbox::
# 318 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_PlayersHouse, MSGBOX_SIGN
# 319 "data/maps/NewBarkTown/scripts.pory"
	end
# 320 "data/maps/NewBarkTown/scripts.pory"

# 321 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_ElmsHouseMailbox::
# 322 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_ElmsHouse, MSGBOX_SIGN
# 323 "data/maps/NewBarkTown/scripts.pory"
	end
# 324 "data/maps/NewBarkTown/scripts.pory"

# 325 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_PlayersHouse:
# 326 "data/maps/NewBarkTown/scripts.pory"
	.string "{PLAYER}'s House$"
# 327 "data/maps/NewBarkTown/scripts.pory"

# 328 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_ElmsHouse:
# 329 "data/maps/NewBarkTown/scripts.pory"
	.string "Prof. Elm's House$"

NewBarkTown_EventScript_RivalIntro::
# 333 "data/maps/NewBarkTown/scripts.pory"
	lock
# 334 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_0
# 335 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 336 "data/maps/NewBarkTown/scripts.pory"
	playse SE_WALL_HIT
# 337 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_1
# 338 "data/maps/NewBarkTown/scripts.pory"
	playse SE_LEDGE
# 339 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 340 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_2
# 341 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 342 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_3
# 343 "data/maps/NewBarkTown/scripts.pory"
	playse SE_LEDGE
# 344 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 345 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_3
# 346 "data/maps/NewBarkTown/scripts.pory"
	playse SE_LEDGE
# 347 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 348 "data/maps/NewBarkTown/scripts.pory"
	playbgm MUS_HG_LYRA, TRUE
# 349 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_RIVAL, NewBarkTown_EventScript_RivalIntro_Movement_4
# 350 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 351 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, Common_Movement_ExclamationMark
# 352 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 353 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_5
# 354 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 355 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_6
# 356 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 357 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_7
# 358 "data/maps/NewBarkTown/scripts.pory"
	playse SE_LEDGE
# 359 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 360 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_7
# 361 "data/maps/NewBarkTown/scripts.pory"
	playse SE_LEDGE
# 362 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 363 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_RIVAL, NewBarkTown_EventScript_RivalIntro_Movement_8
# 364 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_9
# 365 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 366 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_HIDE_NEWBARK_RIVALMARILL
# 367 "data/maps/NewBarkTown/scripts.pory"
	removeobject LOCALID_NEWBARK_RIVAL
# 368 "data/maps/NewBarkTown/scripts.pory"
	removeobject LOCALID_NEWBARK_MARILL
# 369 "data/maps/NewBarkTown/scripts.pory"
	removeobject LOCALID_NEWBARK_MARILL2
# 370 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 1
# 371 "data/maps/NewBarkTown/scripts.pory"
	fadedefaultbgm
# 372 "data/maps/NewBarkTown/scripts.pory"
	release
	end


NewBarkTown_EventScript_RivalBattle::
# 377 "data/maps/NewBarkTown/scripts.pory"
	lock
# 378 "data/maps/NewBarkTown/scripts.pory"
	playbgm MUS_HG_LYRA, TRUE
# 379 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL2, NewBarkTown_EventScript_RivalBattle_Movement_0
# 380 "data/maps/NewBarkTown/scripts.pory"
	playse SE_LEDGE
# 381 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 382 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL2, NewBarkTown_EventScript_RivalBattle_Movement_0
# 383 "data/maps/NewBarkTown/scripts.pory"
	playse SE_LEDGE
# 384 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 385 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL2, NewBarkTown_EventScript_RivalBattle_Movement_1
# 387 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_RIVAL, NewBarkTown_EventScript_RivalBattle_Movement_2
# 388 "data/maps/NewBarkTown/scripts.pory"
	waitmovement LOCALID_NEWBARK_MARILL2
# 389 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_RIVAL, Common_Movement_ExclamationMark
# 390 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 391 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 392 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_PLAYER, NewBarkTown_EventScript_RivalBattle_Movement_3
# 393 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 394 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_RIVAL, NewBarkTown_EventScript_RivalIntro_Movement_5
# 395 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 396 "data/maps/NewBarkTown/scripts.pory"
	createfieldmugshotrival
# 397 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_0
# 398 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, NewBarkTown_EventScript_RivalBattle_Movement_4
# 399 "data/maps/NewBarkTown/scripts.pory"
	playse SE_BALL_OPEN
# 400 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 401 "data/maps/NewBarkTown/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 402 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_1
# 404 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_2
# 405 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_3
# 407 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_4
# 409 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_5
# 412 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 413 "data/maps/NewBarkTown/scripts.pory"
	checkplayergender
# 414 "data/maps/NewBarkTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq NewBarkTown_EventScript_RivalBattle_2
# 417 "data/maps/NewBarkTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVALGOLD1, NewBarkTown_EventScript_RivalBattle_Text_6
NewBarkTown_EventScript_RivalBattle_1:
# 419 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 420 "data/maps/NewBarkTown/scripts.pory"
	special HealPlayerParty
# 421 "data/maps/NewBarkTown/scripts.pory"
	createfieldmugshotrival
# 422 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_7
# 424 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_8
# 427 "data/maps/NewBarkTown/scripts.pory"
	removefieldmugshot
# 428 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 429 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_RIVAL, NewBarkTown_EventScript_RivalBattle_Movement_5
# 430 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL2, NewBarkTown_EventScript_RivalBattle_Movement_6
# 431 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 432 "data/maps/NewBarkTown/scripts.pory"
	removeobject LOCALID_NEWBARK_RIVAL
# 433 "data/maps/NewBarkTown/scripts.pory"
	removeobject LOCALID_NEWBARK_MARILL
# 434 "data/maps/NewBarkTown/scripts.pory"
	removeobject LOCALID_NEWBARK_MARILL2
# 435 "data/maps/NewBarkTown/scripts.pory"
	fadedefaultbgm
# 436 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 3
# 437 "data/maps/NewBarkTown/scripts.pory"
	release
	end

NewBarkTown_EventScript_RivalBattle_2:
# 415 "data/maps/NewBarkTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVALCRYSTAL1, NewBarkTown_EventScript_RivalBattle_Text_6
	goto NewBarkTown_EventScript_RivalBattle_1


RivalsMailbox::
# 442 "data/maps/NewBarkTown/scripts.pory"
	lock
# 443 "data/maps/NewBarkTown/scripts.pory"
	checkplayergender
# 444 "data/maps/NewBarkTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsMailbox_2
# 447 "data/maps/NewBarkTown/scripts.pory"
	msgbox RivalsMailbox_Text_1
RivalsMailbox_1:
# 449 "data/maps/NewBarkTown/scripts.pory"
	release
	end

RivalsMailbox_2:
# 445 "data/maps/NewBarkTown/scripts.pory"
	msgbox RivalsMailbox_Text_0
	goto RivalsMailbox_1


NewBarkTown_EventScript_ArcherArcadeCall::
# 454 "data/maps/NewBarkTown/scripts.pory"
	lock
# 455 "data/maps/NewBarkTown/scripts.pory"
	pokenavcall NewBarkTown_EventScript_ArcherArcadeCall_Text_0
# 470 "data/maps/NewBarkTown/scripts.pory"
	waitmessage
# 471 "data/maps/NewBarkTown/scripts.pory"
	delay 30
# 472 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_NEWBARK_TOWN_STATE, 12
# 473 "data/maps/NewBarkTown/scripts.pory"
	release
	end


# 334 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_0:
# 334 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 334 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 334 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 334 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 334 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
	step_end

# 337 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_1:
# 337 "data/maps/NewBarkTown/scripts.pory"
	jump_down
	step_end

# 340 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_2:
# 340 "data/maps/NewBarkTown/scripts.pory"
	walk_up
	step_end

# 342 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_3:
# 342 "data/maps/NewBarkTown/scripts.pory"
	jump_in_place_up
	step_end

# 349 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_4:
# 349 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 349 "data/maps/NewBarkTown/scripts.pory"
	walk_right
	step_end

# 353 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_5:
# 353 "data/maps/NewBarkTown/scripts.pory"
	face_left
	step_end

# 355 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_6:
# 355 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 355 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 355 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 355 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 355 "data/maps/NewBarkTown/scripts.pory"
	walk_left
	step_end

# 357 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_7:
# 357 "data/maps/NewBarkTown/scripts.pory"
	jump_in_place_left
	step_end

# 363 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_8:
# 363 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 363 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 363 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 363 "data/maps/NewBarkTown/scripts.pory"
	walk_left
	step_end

# 364 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_9:
# 364 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 364 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 364 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 364 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 364 "data/maps/NewBarkTown/scripts.pory"
	walk_left
	step_end

# 379 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalBattle_Movement_0:
# 379 "data/maps/NewBarkTown/scripts.pory"
	jump_in_place_right
	step_end

# 385 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalBattle_Movement_1:
# 385 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 385 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_right
# 385 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_right
# 385 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_down
# 385 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_down
# 385 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_left
# 385 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_left
# 386 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 386 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 386 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_right
# 386 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_right
# 386 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_down
# 386 "data/maps/NewBarkTown/scripts.pory"
	face_left
	step_end

# 387 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalBattle_Movement_2:
# 387 "data/maps/NewBarkTown/scripts.pory"
	face_up
	step_end

# 392 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalBattle_Movement_3:
# 392 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 392 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 392 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 392 "data/maps/NewBarkTown/scripts.pory"
	walk_right
	step_end

# 398 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalBattle_Movement_4:
# 398 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_left
# 398 "data/maps/NewBarkTown/scripts.pory"
	face_right
# 398 "data/maps/NewBarkTown/scripts.pory"
	exit_pokeball
# 398 "data/maps/NewBarkTown/scripts.pory"
	set_visible
	step_end

# 429 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalBattle_Movement_5:
# 429 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 429 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 429 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 429 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 429 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 429 "data/maps/NewBarkTown/scripts.pory"
	walk_down
	step_end

# 430 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalBattle_Movement_6:
# 430 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 430 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 430 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 430 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 430 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 430 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 430 "data/maps/NewBarkTown/scripts.pory"
	walk_down
	step_end

NewBarkTown_EventScript_RivalBattle_Text_0:
# 397 "data/maps/NewBarkTown/scripts.pory"
	.string "{PLAYER}!$"

NewBarkTown_EventScript_RivalBattle_Text_1:
# 402 "data/maps/NewBarkTown/scripts.pory"
	.string "So you picked...\n"
	.string "a {STR_VAR_1}!$"

NewBarkTown_EventScript_RivalBattle_Text_2:
# 404 "data/maps/NewBarkTown/scripts.pory"
	.string "That's a cute Pokémon you have!$"

NewBarkTown_EventScript_RivalBattle_Text_3:
# 405 "data/maps/NewBarkTown/scripts.pory"
	.string "When you walk with it, it'll become\n"
	.string "more friendly!$"

NewBarkTown_EventScript_RivalBattle_Text_4:
# 407 "data/maps/NewBarkTown/scripts.pory"
	.string "You should turn around and talk to it\n"
	.string "sometimes, too.$"

NewBarkTown_EventScript_RivalBattle_Text_5:
# 409 "data/maps/NewBarkTown/scripts.pory"
	.string "Hey, why don't we have a battle?\n"
	.string "That's what trainers usually do when\l"
	.string "they meet!$"

NewBarkTown_EventScript_RivalBattle_Text_6:
# 415 "data/maps/NewBarkTown/scripts.pory"
	.string "You did really well, {PLAYER}!$"

NewBarkTown_EventScript_RivalBattle_Text_7:
# 422 "data/maps/NewBarkTown/scripts.pory"
	.string "That was really fun, and both of our\n"
	.string "Pokémon did their best!$"

NewBarkTown_EventScript_RivalBattle_Text_8:
# 424 "data/maps/NewBarkTown/scripts.pory"
	.string "You got a task from Elm right?\n"
	.string "I'll leave you to it then.\l"
	.string "See ya!$"

RivalsMailbox_Text_0:
# 445 "data/maps/NewBarkTown/scripts.pory"
	.string "Crystal's house$"

RivalsMailbox_Text_1:
# 447 "data/maps/NewBarkTown/scripts.pory"
	.string "Gold's house$"

NewBarkTown_EventScript_ArcherArcadeCall_Text_0:
# 455 "data/maps/NewBarkTown/scripts.pory"
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
