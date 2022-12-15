AlteringCave_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AlteringCave_OnTransition
	.byte 0

AlteringCave_OnTransition:
	setflag FLAG_LANDMARK_ALTERING_CAVE
	end

AlteringCave_EventScript_Henry::
	trainerbattle_single GUARDIAN_HENRY, AlteringCave_Text_HenryIntro, AlteringCave_Text_HenryDefeated
	msgbox AlteringCave_Text_HenryPostBattle, MSGBOX_AUTOCLOSE
	end
