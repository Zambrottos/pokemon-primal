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
        .2byte 0
# 18 "data/maps/NewBarkTown/scripts.pory"

# 19 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_ElmCallAfterLeague::
# 20 "data/maps/NewBarkTown/scripts.pory"
	lock
# 21 "data/maps/NewBarkTown/scripts.pory"
	pokenavcall BlackthornCity_Text_ElmCall
# 22 "data/maps/NewBarkTown/scripts.pory"
	waitmessage
# 23 "data/maps/NewBarkTown/scripts.pory"
	delay 30
# 24 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_NEWBARK_TOWN_STATE, 7
# 25 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_NEWBARKTOWN_LABSTATE, 10
# 26 "data/maps/NewBarkTown/scripts.pory"
	release
# 27 "data/maps/NewBarkTown/scripts.pory"
	end
# 28 "data/maps/NewBarkTown/scripts.pory"

# 29 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_OnTransition::
# 30 "data/maps/NewBarkTown/scripts.pory"
    call Common_EventScript_SetupRivalGfxId
# 31 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 2, NewBarkTown_Set_TalkToElm
# 32 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 4, NewBarkTown_Set_TalkToMom
# 33 "data/maps/NewBarkTown/scripts.pory"
	end
# 34 "data/maps/NewBarkTown/scripts.pory"

# 35 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Set_TalkToElm::
# 36 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_HIDE_SILVER_NEWBARKTOWN
# 37 "data/maps/NewBarkTown/scripts.pory"
	setobjectxyperm LOCALID_LASS, 0, 11
# 38 "data/maps/NewBarkTown/scripts.pory"
	callnative SetTimeBasedEncounters
# 39 "data/maps/NewBarkTown/scripts.pory"
	end
# 40 "data/maps/NewBarkTown/scripts.pory"

# 41 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Set_TalkToMom::
# 42 "data/maps/NewBarkTown/scripts.pory"
	setobjectxyperm LOCALID_LASS, 0, 11
# 43 "data/maps/NewBarkTown/scripts.pory"
	callnative SetTimeBasedEncounters
# 44 "data/maps/NewBarkTown/scripts.pory"
	end
# 45 "data/maps/NewBarkTown/scripts.pory"

# 46 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LabSign::
# 47 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LabSign, MSGBOX_SIGN
# 48 "data/maps/NewBarkTown/scripts.pory"
	end
# 49 "data/maps/NewBarkTown/scripts.pory"

# 50 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_TownSign::
# 51 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_Sign, MSGBOX_SIGN
# 52 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 53 "data/maps/NewBarkTown/scripts.pory"
	end
# 54 "data/maps/NewBarkTown/scripts.pory"

# 55 "data/maps/NewBarkTown/scripts.pory"

# 56 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_Lass::
# 57 "data/maps/NewBarkTown/scripts.pory"
	lock
# 58 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 59 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 2, NewBarkTown_EventScript_LassState2
# 60 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 3, NewBarkTown_EventScript_LassState3
# 61 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 4, NewBarkTown_EventScript_LassState4
# 62 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState5, MSGBOX_DEFAULT
# 63 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 64 "data/maps/NewBarkTown/scripts.pory"
	release
# 65 "data/maps/NewBarkTown/scripts.pory"
	end
# 66 "data/maps/NewBarkTown/scripts.pory"
	
# 67 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LassState2::
# 68 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 69 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_ExclamationMark
# 70 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 71 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 72 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 73 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState2, MSGBOX_DEFAULT
# 74 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 75 "data/maps/NewBarkTown/scripts.pory"
	release
# 76 "data/maps/NewBarkTown/scripts.pory"
	end
# 77 "data/maps/NewBarkTown/scripts.pory"

# 78 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LassState3::
# 79 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState3, MSGBOX_DEFAULT
# 80 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 81 "data/maps/NewBarkTown/scripts.pory"
	release
# 82 "data/maps/NewBarkTown/scripts.pory"
	end
# 83 "data/maps/NewBarkTown/scripts.pory"

# 84 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LassState4::
# 85 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 86 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_ExclamationMark
# 87 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 88 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 89 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 90 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState4, MSGBOX_DEFAULT
# 91 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 92 "data/maps/NewBarkTown/scripts.pory"
	release
# 93 "data/maps/NewBarkTown/scripts.pory"
	end
# 94 "data/maps/NewBarkTown/scripts.pory"

# 95 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_Wooper::
# 96 "data/maps/NewBarkTown/scripts.pory"
	lock
# 97 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 98 "data/maps/NewBarkTown/scripts.pory"
	waitse
# 99 "data/maps/NewBarkTown/scripts.pory"
	playmoncry SPECIES_WOOPER, CRY_MODE_NORMAL
# 100 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_Wooper, MSGBOX_DEFAULT
# 101 "data/maps/NewBarkTown/scripts.pory"
	waitmoncry
# 102 "data/maps/NewBarkTown/scripts.pory"
	release
# 103 "data/maps/NewBarkTown/scripts.pory"
	end
# 104 "data/maps/NewBarkTown/scripts.pory"

# 105 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LeaveTrigger::
# 106 "data/maps/NewBarkTown/scripts.pory"
	lock
# 107 "data/maps/NewBarkTown/scripts.pory"
	call_if_eq VAR_NEWBARK_TOWN_STATE, 2, NewBarkTown_EventScript_LeaveTriggersState2
# 108 "data/maps/NewBarkTown/scripts.pory"
	call_if_eq VAR_NEWBARK_TOWN_STATE, 4, NewBarkTown_EventScript_LeaveTriggersState4
# 109 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 110 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 111 "data/maps/NewBarkTown/scripts.pory"
	release
# 112 "data/maps/NewBarkTown/scripts.pory"
	end
# 113 "data/maps/NewBarkTown/scripts.pory"

# 114 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LeaveTriggersState2::
# 115 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 116 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_ExclamationMark
# 117 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 118 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, NewBarkTown_Movement_FaceDown
# 119 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 120 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState2, MSGBOX_DEFAULT
# 121 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 122 "data/maps/NewBarkTown/scripts.pory"
	return
# 123 "data/maps/NewBarkTown/scripts.pory"

# 124 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_LeaveTriggersState4::
# 125 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 126 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, Common_Movement_ExclamationMark
# 127 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 128 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_LASS, NewBarkTown_Movement_FaceDown
# 129 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 130 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_LassState4, MSGBOX_DEFAULT
# 131 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 132 "data/maps/NewBarkTown/scripts.pory"
	return 
# 133 "data/maps/NewBarkTown/scripts.pory"

# 134 "data/maps/NewBarkTown/scripts.pory"

# 135 "data/maps/NewBarkTown/scripts.pory"

# 136 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_FatMan::
# 137 "data/maps/NewBarkTown/scripts.pory"
	lock
# 138 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 139 "data/maps/NewBarkTown/scripts.pory"
	goto_if_eq VAR_NEWBARK_TOWN_STATE, 2, NewBarkTown_EventScript_FatManState2
# 140 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_FatManState3, MSGBOX_DEFAULT
# 141 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 142 "data/maps/NewBarkTown/scripts.pory"
	release
# 143 "data/maps/NewBarkTown/scripts.pory"
	end
# 144 "data/maps/NewBarkTown/scripts.pory"

# 145 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_FatManState2::
# 146 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_FatManState2, MSGBOX_DEFAULT
# 147 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 148 "data/maps/NewBarkTown/scripts.pory"
	release
# 149 "data/maps/NewBarkTown/scripts.pory"
	end
# 150 "data/maps/NewBarkTown/scripts.pory"

# 151 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_Silver::
# 152 "data/maps/NewBarkTown/scripts.pory"
	lock
# 153 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_Silver1, MSGBOX_DEFAULT
# 154 "data/maps/NewBarkTown/scripts.pory"
	delay 60
# 155 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 156 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_SILVER, Common_Movement_ExclamationMark
# 157 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 158 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 159 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_Silver2, MSGBOX_DEFAULT
# 160 "data/maps/NewBarkTown/scripts.pory"
	playse SE_BANG
# 161 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_SILVER, NewBarkTown_Movement_SilverPushesPlayer
# 162 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, NewBarkTown_Movement_PlayerPushedBySilver
# 163 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 164 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_SILVER, Common_Movement_FaceOriginalDirection
# 165 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/NewBarkTown/scripts.pory"
	release
# 168 "data/maps/NewBarkTown/scripts.pory"
	end
# 169 "data/maps/NewBarkTown/scripts.pory"

# 170 "data/maps/NewBarkTown/scripts.pory"

# 171 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_Door::
# 172 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_Door, MSGBOX_SIGN
# 173 "data/maps/NewBarkTown/scripts.pory"
	end
# 174 "data/maps/NewBarkTown/scripts.pory"

# 175 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_TestMan1::
# 176 "data/maps/NewBarkTown/scripts.pory"
	givebp 4
# 177 "data/maps/NewBarkTown/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 178 "data/maps/NewBarkTown/scripts.pory"
	end
# 179 "data/maps/NewBarkTown/scripts.pory"

# 180 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_TestMan2::
# 181 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_NEWBARK_TOWN_STATE, 4
# 182 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_HIDE_MOMS_FRIEND
# 183 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 184 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_HIDE_SILVER_NEWBARKTOWN
# 185 "data/maps/NewBarkTown/scripts.pory"
	end
# 186 "data/maps/NewBarkTown/scripts.pory"

# 187 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_TestMan3::
# 188 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_NEWBARK_TOWN_STATE, 5
# 189 "data/maps/NewBarkTown/scripts.pory"
	
# 190 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_COMPLETED_AERODACTYL_PUZZLE
# 191 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_COMPLETED_HOOH_PUZZLE
# 192 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_COMPLETED_KABUTO_PUZZLE
# 193 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_COMPLETED_OMANYTE_PUZZLE
# 194 "data/maps/NewBarkTown/scripts.pory"
	end
# 195 "data/maps/NewBarkTown/scripts.pory"

# 196 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Movement_SilverPushesPlayer:
# 197 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_left
# 198 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_left
# 199 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_down
# 200 "data/maps/NewBarkTown/scripts.pory"
	face_down
# 201 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 202 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
# 203 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 204 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_right
# 205 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_right
# 206 "data/maps/NewBarkTown/scripts.pory"
	step_end
# 207 "data/maps/NewBarkTown/scripts.pory"

# 208 "data/maps/NewBarkTown/scripts.pory"

# 209 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Movement_PlayerPushedBySilver:
# 210 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_left
# 211 "data/maps/NewBarkTown/scripts.pory"
	face_up
# 212 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_down
# 213 "data/maps/NewBarkTown/scripts.pory"
	face_up
# 214 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 215 "data/maps/NewBarkTown/scripts.pory"
	jump_2_down
# 216 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
# 217 "data/maps/NewBarkTown/scripts.pory"
	face_down
# 218 "data/maps/NewBarkTown/scripts.pory"
	step_end
# 219 "data/maps/NewBarkTown/scripts.pory"

# 220 "data/maps/NewBarkTown/scripts.pory"
	
# 221 "data/maps/NewBarkTown/scripts.pory"

# 222 "data/maps/NewBarkTown/scripts.pory"

# 223 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Movement_FaceDown:
# 224 "data/maps/NewBarkTown/scripts.pory"
	face_down
# 225 "data/maps/NewBarkTown/scripts.pory"
	step_end
# 226 "data/maps/NewBarkTown/scripts.pory"

# 227 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_LabSign:
# 228 "data/maps/NewBarkTown/scripts.pory"
	.string "Prof. Elm's Lab$"
# 229 "data/maps/NewBarkTown/scripts.pory"

# 230 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_Door:
# 231 "data/maps/NewBarkTown/scripts.pory"
	.string "The door is locked.$"
# 232 "data/maps/NewBarkTown/scripts.pory"

# 233 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_Wooper:
# 234 "data/maps/NewBarkTown/scripts.pory"
	.string "Wooper: Woooooop.$"
# 235 "data/maps/NewBarkTown/scripts.pory"

# 236 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_FatManState2:
# 237 "data/maps/NewBarkTown/scripts.pory"
	.string "Wow, your Pokégear is impressive!\n"
# 238 "data/maps/NewBarkTown/scripts.pory"
	.string "Did your mom get it for you?$"
# 239 "data/maps/NewBarkTown/scripts.pory"

# 240 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_FatManState3:
# 241 "data/maps/NewBarkTown/scripts.pory"
	.string "Yo, {PLAYER}!\p"
# 242 "data/maps/NewBarkTown/scripts.pory"
	.string "I hear Prof. Elm discovered\n"
# 243 "data/maps/NewBarkTown/scripts.pory"
	.string "some new Pokémon.$"
# 244 "data/maps/NewBarkTown/scripts.pory"

# 245 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_LassState2:
# 246 "data/maps/NewBarkTown/scripts.pory"
	.string "Wait, {PLAYER}!\p"
# 247 "data/maps/NewBarkTown/scripts.pory"
	.string "It's dangerous to go out\n"
# 248 "data/maps/NewBarkTown/scripts.pory"
	.string "without a Pokémon!\p"
# 249 "data/maps/NewBarkTown/scripts.pory"
	.string "Wild Pokémon jump out of the grass\n"
# 250 "data/maps/NewBarkTown/scripts.pory"
	.string "on the way to the next town.$"
# 251 "data/maps/NewBarkTown/scripts.pory"

# 252 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_LassState3:
# 253 "data/maps/NewBarkTown/scripts.pory"
	.string "Oh! Your Pokémon is adorable!\n"
# 254 "data/maps/NewBarkTown/scripts.pory"
	.string "I wish I had one!$"
# 255 "data/maps/NewBarkTown/scripts.pory"

# 256 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_LassState4:
# 257 "data/maps/NewBarkTown/scripts.pory"
	.string "Hi, {PLAYER}! Leaving again?\p"
# 258 "data/maps/NewBarkTown/scripts.pory"
	.string "You should tell your mom if\n"
# 259 "data/maps/NewBarkTown/scripts.pory"
	.string "you are leaving.$"
# 260 "data/maps/NewBarkTown/scripts.pory"

# 261 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_LassState5:
# 262 "data/maps/NewBarkTown/scripts.pory"
	.string "Call your mom on your Pokégear\n"
# 263 "data/maps/NewBarkTown/scripts.pory"
	.string "to let her know how you're doing.$\p"
# 264 "data/maps/NewBarkTown/scripts.pory"

# 265 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_Silver1:
# 266 "data/maps/NewBarkTown/scripts.pory"
	.string ". . .\p"
# 267 "data/maps/NewBarkTown/scripts.pory"
	.string "So this is the famous Elm\n"
# 268 "data/maps/NewBarkTown/scripts.pory"
	.string "Pokémon Lab…$"
# 269 "data/maps/NewBarkTown/scripts.pory"

# 270 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_Silver2:
# 271 "data/maps/NewBarkTown/scripts.pory"
	.string "…What are you staring at?$"
# 272 "data/maps/NewBarkTown/scripts.pory"

# 273 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_Sign:
# 274 "data/maps/NewBarkTown/scripts.pory"
	.string "New Bark Town\p"
# 275 "data/maps/NewBarkTown/scripts.pory"
	.string "The Town Where the Winds of\n"
# 276 "data/maps/NewBarkTown/scripts.pory"
	.string "a New Beginning Blow$"
# 277 "data/maps/NewBarkTown/scripts.pory"

# 278 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_PlayersHouseMailbox::
# 279 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_PlayersHouse, MSGBOX_SIGN
# 280 "data/maps/NewBarkTown/scripts.pory"
	end
# 281 "data/maps/NewBarkTown/scripts.pory"

# 282 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_ElmsHouseMailbox::
# 283 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Text_ElmsHouse, MSGBOX_SIGN
# 284 "data/maps/NewBarkTown/scripts.pory"
	end
# 285 "data/maps/NewBarkTown/scripts.pory"

# 286 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_PlayersHouse:
# 287 "data/maps/NewBarkTown/scripts.pory"
	.string "{PLAYER}'s House$"
# 288 "data/maps/NewBarkTown/scripts.pory"

# 289 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_Text_ElmsHouse:
# 290 "data/maps/NewBarkTown/scripts.pory"
	.string "Prof. Elm's House$"

NewBarkTown_EventScript_RivalIntro::
# 294 "data/maps/NewBarkTown/scripts.pory"
	lock
# 295 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_0
# 296 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 297 "data/maps/NewBarkTown/scripts.pory"
	playse SE_WALL_HIT
# 298 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_1
# 299 "data/maps/NewBarkTown/scripts.pory"
	playse SE_LEDGE
# 300 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 301 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_2
# 302 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 303 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_3
# 304 "data/maps/NewBarkTown/scripts.pory"
	playse SE_LEDGE
# 305 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 306 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_3
# 307 "data/maps/NewBarkTown/scripts.pory"
	playse SE_LEDGE
# 308 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 309 "data/maps/NewBarkTown/scripts.pory"
	playbgm MUS_HG_LYRA, TRUE
# 310 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_RIVAL, NewBarkTown_EventScript_RivalIntro_Movement_4
# 311 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 312 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, Common_Movement_ExclamationMark
# 313 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 314 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_5
# 315 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 316 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_6
# 317 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 318 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_7
# 319 "data/maps/NewBarkTown/scripts.pory"
	playse SE_LEDGE
# 320 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 321 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_7
# 322 "data/maps/NewBarkTown/scripts.pory"
	playse SE_LEDGE
# 323 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 324 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_RIVAL, NewBarkTown_EventScript_RivalIntro_Movement_8
# 325 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL, NewBarkTown_EventScript_RivalIntro_Movement_9
# 326 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 327 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_HIDE_NEWBARK_RIVALMARILL
# 328 "data/maps/NewBarkTown/scripts.pory"
	removeobject LOCALID_NEWBARK_RIVAL
# 329 "data/maps/NewBarkTown/scripts.pory"
	removeobject LOCALID_NEWBARK_MARILL
# 330 "data/maps/NewBarkTown/scripts.pory"
	removeobject LOCALID_NEWBARK_MARILL2
# 331 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 1
# 332 "data/maps/NewBarkTown/scripts.pory"
	fadedefaultbgm
# 333 "data/maps/NewBarkTown/scripts.pory"
	release
	end


NewBarkTown_EventScript_RivalBattle::
# 338 "data/maps/NewBarkTown/scripts.pory"
	lock
# 339 "data/maps/NewBarkTown/scripts.pory"
	playbgm MUS_HG_LYRA, TRUE
# 340 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL2, NewBarkTown_EventScript_RivalBattle_Movement_0
# 341 "data/maps/NewBarkTown/scripts.pory"
	playse SE_LEDGE
# 342 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 343 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL2, NewBarkTown_EventScript_RivalBattle_Movement_0
# 344 "data/maps/NewBarkTown/scripts.pory"
	playse SE_LEDGE
# 345 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 346 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL2, NewBarkTown_EventScript_RivalBattle_Movement_1
# 348 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_RIVAL, NewBarkTown_EventScript_RivalBattle_Movement_2
# 349 "data/maps/NewBarkTown/scripts.pory"
	waitmovement LOCALID_NEWBARK_MARILL2
# 350 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_RIVAL, Common_Movement_ExclamationMark
# 351 "data/maps/NewBarkTown/scripts.pory"
	playse SE_PIN
# 352 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 353 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_PLAYER, NewBarkTown_EventScript_RivalBattle_Movement_3
# 354 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 355 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_RIVAL, NewBarkTown_EventScript_RivalIntro_Movement_5
# 356 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 357 "data/maps/NewBarkTown/scripts.pory"
	createfieldmugshotrival
# 358 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_0
# 359 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, NewBarkTown_EventScript_RivalBattle_Movement_4
# 360 "data/maps/NewBarkTown/scripts.pory"
	playse SE_BALL_OPEN
# 361 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 362 "data/maps/NewBarkTown/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 363 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_1
# 365 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_2
# 366 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_3
# 368 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_4
# 370 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_5
# 373 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 374 "data/maps/NewBarkTown/scripts.pory"
	checkplayergender
# 375 "data/maps/NewBarkTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq NewBarkTown_EventScript_RivalBattle_2
# 378 "data/maps/NewBarkTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVALGOLD1, NewBarkTown_EventScript_RivalBattle_Text_6
NewBarkTown_EventScript_RivalBattle_1:
# 380 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 381 "data/maps/NewBarkTown/scripts.pory"
	special HealPlayerParty
# 382 "data/maps/NewBarkTown/scripts.pory"
	createfieldmugshotrival
# 383 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_7
# 385 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_EventScript_RivalBattle_Text_8
# 388 "data/maps/NewBarkTown/scripts.pory"
	removefieldmugshot
# 389 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 390 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_RIVAL, NewBarkTown_EventScript_RivalBattle_Movement_5
# 391 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_NEWBARK_MARILL2, NewBarkTown_EventScript_RivalBattle_Movement_6
# 392 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 393 "data/maps/NewBarkTown/scripts.pory"
	removeobject LOCALID_NEWBARK_RIVAL
# 394 "data/maps/NewBarkTown/scripts.pory"
	removeobject LOCALID_NEWBARK_MARILL
# 395 "data/maps/NewBarkTown/scripts.pory"
	removeobject LOCALID_NEWBARK_MARILL2
# 396 "data/maps/NewBarkTown/scripts.pory"
	fadedefaultbgm
# 397 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_RIVAL_STATE, 3
# 398 "data/maps/NewBarkTown/scripts.pory"
	release
	end

NewBarkTown_EventScript_RivalBattle_2:
# 376 "data/maps/NewBarkTown/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVALCRYSTAL1, NewBarkTown_EventScript_RivalBattle_Text_6
	goto NewBarkTown_EventScript_RivalBattle_1


RivalsMailbox::
# 403 "data/maps/NewBarkTown/scripts.pory"
	lock
# 404 "data/maps/NewBarkTown/scripts.pory"
	checkplayergender
# 405 "data/maps/NewBarkTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsMailbox_2
# 408 "data/maps/NewBarkTown/scripts.pory"
	msgbox RivalsMailbox_Text_1
RivalsMailbox_1:
# 410 "data/maps/NewBarkTown/scripts.pory"
	release
	end

RivalsMailbox_2:
# 406 "data/maps/NewBarkTown/scripts.pory"
	msgbox RivalsMailbox_Text_0
	goto RivalsMailbox_1


NewBarkTown_EventScript_ArcherArcadeCall::
# 415 "data/maps/NewBarkTown/scripts.pory"
	lock
# 416 "data/maps/NewBarkTown/scripts.pory"
	pokenavcall NewBarkTown_EventScript_ArcherArcadeCall_Text_0
# 431 "data/maps/NewBarkTown/scripts.pory"
	waitmessage
# 432 "data/maps/NewBarkTown/scripts.pory"
	delay 30
# 433 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_NEWBARK_TOWN_STATE, 12
# 434 "data/maps/NewBarkTown/scripts.pory"
	release
	end


# 295 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_0:
# 295 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 295 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 295 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 295 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 295 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
	step_end

# 298 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_1:
# 298 "data/maps/NewBarkTown/scripts.pory"
	jump_down
	step_end

# 301 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_2:
# 301 "data/maps/NewBarkTown/scripts.pory"
	walk_up
	step_end

# 303 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_3:
# 303 "data/maps/NewBarkTown/scripts.pory"
	jump_in_place_up
	step_end

# 310 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_4:
# 310 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 310 "data/maps/NewBarkTown/scripts.pory"
	walk_right
	step_end

# 314 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_5:
# 314 "data/maps/NewBarkTown/scripts.pory"
	face_left
	step_end

# 316 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_6:
# 316 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 316 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 316 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 316 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 316 "data/maps/NewBarkTown/scripts.pory"
	walk_left
	step_end

# 318 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_7:
# 318 "data/maps/NewBarkTown/scripts.pory"
	jump_in_place_left
	step_end

# 324 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_8:
# 324 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 324 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 324 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 324 "data/maps/NewBarkTown/scripts.pory"
	walk_left
	step_end

# 325 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalIntro_Movement_9:
# 325 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 325 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 325 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 325 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 325 "data/maps/NewBarkTown/scripts.pory"
	walk_left
	step_end

# 340 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalBattle_Movement_0:
# 340 "data/maps/NewBarkTown/scripts.pory"
	jump_in_place_right
	step_end

# 346 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalBattle_Movement_1:
# 346 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 346 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_right
# 346 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_right
# 346 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_down
# 346 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_down
# 346 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_left
# 346 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_left
# 347 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 347 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_up
# 347 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_right
# 347 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_right
# 347 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_down
# 347 "data/maps/NewBarkTown/scripts.pory"
	face_left
	step_end

# 348 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalBattle_Movement_2:
# 348 "data/maps/NewBarkTown/scripts.pory"
	face_up
	step_end

# 353 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalBattle_Movement_3:
# 353 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 353 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 353 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 353 "data/maps/NewBarkTown/scripts.pory"
	walk_right
	step_end

# 359 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalBattle_Movement_4:
# 359 "data/maps/NewBarkTown/scripts.pory"
	walk_fast_left
# 359 "data/maps/NewBarkTown/scripts.pory"
	face_right
# 359 "data/maps/NewBarkTown/scripts.pory"
	exit_pokeball
# 359 "data/maps/NewBarkTown/scripts.pory"
	set_visible
	step_end

# 390 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalBattle_Movement_5:
# 390 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 390 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 390 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 390 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 390 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 390 "data/maps/NewBarkTown/scripts.pory"
	walk_down
	step_end

# 391 "data/maps/NewBarkTown/scripts.pory"
NewBarkTown_EventScript_RivalBattle_Movement_6:
# 391 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 391 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 391 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 391 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 391 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 391 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 391 "data/maps/NewBarkTown/scripts.pory"
	walk_down
	step_end

NewBarkTown_EventScript_RivalBattle_Text_0:
# 358 "data/maps/NewBarkTown/scripts.pory"
	.string "{PLAYER}!$"

NewBarkTown_EventScript_RivalBattle_Text_1:
# 363 "data/maps/NewBarkTown/scripts.pory"
	.string "So you picked...\n"
	.string "a {STR_VAR_1}!$"

NewBarkTown_EventScript_RivalBattle_Text_2:
# 365 "data/maps/NewBarkTown/scripts.pory"
	.string "That's a cute Pokémon you have!$"

NewBarkTown_EventScript_RivalBattle_Text_3:
# 366 "data/maps/NewBarkTown/scripts.pory"
	.string "When you walk with it, it'll become\n"
	.string "more friendly!$"

NewBarkTown_EventScript_RivalBattle_Text_4:
# 368 "data/maps/NewBarkTown/scripts.pory"
	.string "You should turn around and talk to it\n"
	.string "sometimes, too.$"

NewBarkTown_EventScript_RivalBattle_Text_5:
# 370 "data/maps/NewBarkTown/scripts.pory"
	.string "Hey, why don't we have a battle?\n"
	.string "That's what trainers usually do when\l"
	.string "they meet!$"

NewBarkTown_EventScript_RivalBattle_Text_6:
# 376 "data/maps/NewBarkTown/scripts.pory"
	.string "You did really well, {PLAYER}!$"

NewBarkTown_EventScript_RivalBattle_Text_7:
# 383 "data/maps/NewBarkTown/scripts.pory"
	.string "That was really fun, and both of our\n"
	.string "Pokémon did their best!$"

NewBarkTown_EventScript_RivalBattle_Text_8:
# 385 "data/maps/NewBarkTown/scripts.pory"
	.string "You got a task from Elm right?\n"
	.string "I'll leave you to it then.\l"
	.string "See ya!$"

RivalsMailbox_Text_0:
# 406 "data/maps/NewBarkTown/scripts.pory"
	.string "Crystal's house$"

RivalsMailbox_Text_1:
# 408 "data/maps/NewBarkTown/scripts.pory"
	.string "Gold's house$"

NewBarkTown_EventScript_ArcherArcadeCall_Text_0:
# 416 "data/maps/NewBarkTown/scripts.pory"
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
