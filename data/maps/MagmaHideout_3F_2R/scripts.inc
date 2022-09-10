MagmaHideout_3F_2R_MapScripts::
	.byte 0

MagmaHideout_3F_2R_EventScript_Grunt10::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_10, MagmaHideout_3F_2R_Text_Grunt10Intro, MagmaHideout_3F_2R_Text_Grunt10Defeat
	msgbox MagmaHideout_3F_2R_Text_Grunt10PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_3F_2R_Text_Grunt10Intro:
	.string "I understand everything our leader\n"
	.string "says. But you know what?\p"
	.string "Doing stuff like digging up a super-\n"
	.string "ancient POKéMON and ripping off\l"
	.string "someone's METEORITE…\p"
	.string "I think we're going a little too far.\n"
	.string "What do you think?\p"
	.string "Well, I'm too deep to quit, I'm sorry.$"

MagmaHideout_3F_2R_Text_Grunt10Defeat:
	.string "Please don't hurt me, I don't want to\n"
	.string "do this anymore.$"

MagmaHideout_3F_2R_Text_Grunt10PostBattle:
	.string "The next time I see our leader,\n"
	.string "I'm going to tell him I'm quiting!$"
