.set LOCALID_STEVEN, 1
.set LOCALID_LEAF, 2

MeteorFalls_StevensCave_MapScripts::
	.byte 0

MeteorFalls_StevensCave_EventScript_Steven::
	lock
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_Defeated
	waitse
	playse SE_PIN
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_Delay48
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_StevenDefeat
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
	release
	end

MeteorFalls_StevensCave_EventScript_Defeated::
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	release
	end

MeteorFalls_StevensCave_EventScript_Leaf::
	lock
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_LEAF, MeteorFalls_StevensCave_Text_LeafDefeated
	waitse
	playse SE_PIN
	applymovement LOCALID_LEAF, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_LEAF, Common_Movement_Delay48
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_LeafIntro, MSGBOX_DEFAULT
	applymovement LOCALID_LEAF, Common_Movement_FacePlayer
	waitmovement 0
	trainerbattle_no_intro TRAINER_LEAF, MeteorFalls_StevensCave_Text_LeafDefeat
	msgbox MeteorFalls_StevensCave_Text_LeafDefeated, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_METEOR_FALLS_LEAF
	release
	end

MeteorFalls_StevensCave_EventScript_LeafDefeated::
	applymovement LOCALID_LEAF, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_LeafDefeat, MSGBOX_DEFAULT
	release
	end

MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst:
	.string "… … … … … …\p"
	.string "… … … … …?\p"
	.string "… … … …?!\p"
	.string "… … …!!!$"

MeteorFalls_StevensCave_Text_StevenDefeat:
	.string "… … …?$"

MeteorFalls_StevensCave_Text_MyPredictionCameTrue:
	.string "… … …$"

MeteorFalls_StevensCave_Text_LeafIntro:
	.string "Oh hello! I'm LEAF. My passion is for\n"
	.string "POKéMON, and my goal is to complete my\p"
	.string "POKéDEX. May I battle you? I need, no.\n"
	.string "I must collect more information.$"

MeteorFalls_StevensCave_Text_LeafDefeat:
	.string "Huh, I lost.$"

MeteorFalls_StevensCave_Text_LeafDefeated:
	.string "Thanks so much for the battle! My\n"
	.string "POKéDEX is closer to completion\p"
	.string "thanks to you!$"
