.set LOCALID_STEVEN, 1

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

@MeteorFalls_StevensCave_EventScript_Blue::
@	lock
@	goto_if_set FLAG_DEFEATED_METEOR_FALLS_BLUE, MeteorFalls_StevensCave_Text_BlueDefeated
@	waitse
@	playse SE_PIN
@	applymovement LOCALID_BLUE, Common_Movement_ExclamationMark
@	waitmovement 0
@	applymovement LOCALID_BLUE, Common_Movement_Delay48
@	waitmovement 0
@	msgbox MeteorFalls_StevensCave_Text_BlueIntro, MSGBOX_DEFAULT
@	applymovement LOCALID_BLUE, Common_Movement_FacePlayer
@	waitmovement 0
@	trainerbattle_no_intro TRAINER_BLUE, MeteorFalls_StevensCave_Text_BlueDefeat
@	msgbox MeteorFalls_StevensCave_Text_BlueDefeated, MSGBOX_DEFAULT
@	setflag FLAG_DEFEATED_METEOR_FALLS_BLUE
@	release
@	end
@
@MeteorFalls_StevensCave_EventScript_BlueDefeated::
@	applymovement LOCALID_BLUE, Common_Movement_FacePlayer
@	waitmovement 0
@	msgbox MeteorFalls_StevensCave_Text_BlueDefeat, MSGBOX_DEFAULT
@	release
@	end

MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst:
	.string "… … … … … …\p"
	.string "… … … … …?\p"
	.string "… … … …?!\p"
	.string "… … …!!!$"

MeteorFalls_StevensCave_Text_StevenDefeat:
	.string "… … …?$"

MeteorFalls_StevensCave_Text_MyPredictionCameTrue:
	.string "… … …$"

@MeteorFalls_StevensCave_Text_BlueIntro:
@	.string "Yo. The names BLUE. I'm the strongest\n"
@	.string "trainer around, or, well, I was. Until\l"
@	.string "that punk from JOHTO beat me. Still, I\l"
@	.string "will be the strongest trainer ever! IT'S\l"
@	.string "MY BURNING DESIRE!!$"
@
@MeteorFalls_StevensCave_Text_BlueDefeat:
@	.string "No!$"
@
@MeteorFalls_StevensCave_Text_BlueDefeated:
@	.string "Ugh, well, I guess some humility never\n"
@	.string "hurts. Thanks for the battle.$"
