io/                                                                                                 0040777 0000000 0000000 00000000000 12765171311 006427  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/                                                                  0040777 0000000 0000000 00000000000 12765171271 013116  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec.cfg                                                      0100777 0000000 0000000 00000000431 12764456607 015422  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       




//oldversion5.099.2
//newversion6.278.4_sv




alias "ass" "echo Jockstrapped Alpha Built straight REAL MEN Rule This World; and for the truly virile and Manly ones, and even their ripe asses are TEMPLES"


exec engine_functions.cfg;exec config_flowcontrol.cfg
                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/                                             0040777 0000000 0000000 00000000000 12765171247 017300  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/                              0040777 0000000 0000000 00000000000 12763551246 021405  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/                          0040777 0000000 0000000 00000000000 12765171247 022145  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/autoexec.cfg              0100777 0000000 0000000 00000000027 12762053223 024430  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       

exec sv_chain.cfg
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/engine/                   0040777 0000000 0000000 00000000000 12765171247 023412  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/engine/AMTlib.cfg         0100777 0000000 0000000 00000013671 12762411242 025200  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       				//											ConVars
//____________________________________________________________________________________________________________________________________________________\\
																																						
														//		   HIDDEN
alias "crosshair_redist01" "cl_crosshair_dynamic_splitdist 2;cl_crosshair_dynamic_splitalpha_outermod 0.300000"					// FCVAR_HIDDEN
alias "crosshair_redist02" "cl_crosshair_dynamic_splitalpha_innermod 1;cl_crosshair_dynamic_maxdist_splitratio 0.05"			// FCVAR_HIDDEN
alias "crosshair_redist03" "cl_crosshair_dynamic_maxdist_splitratio 0.05;cl_crosshaircolor 4;cl_crosshairsize 3.5897877"		// FCVAR_HIDDEN
alias "iclear" "exec sv_hop_arrays.cfg;mp_buy_anywhere 1"																		// FCVAR_HIDDEN
alias "bhop_reticulate" "iclear;mirv_cvar_unhide_all;sv_enablebunnyhopping 1;sv_airaccelerate 1000"								// FCVAR_HIDDEN
alias "bhop_triangulate" "iclear;bot_kick;mp_warmup_end;sv_staminajumpcost 0;sv_staminalandcost 0"								// FCVAR_HIDDEN
alias "bhop_triangulater" "iclear;mp_warmup_end;sv_staminajumpcost 0;sv_staminalandcost 0"										// FCVAR_HIDDEN
alias "bhop_rescind" "iclear;mirv_cvar_unhide_all;sv_enablebunnyhopping 0;sv_airaccelerate 12 "									// FCVAR_HIDDEN
alias "bhop_retract" "iclear;sv_staminajumpcost .080;sv_staminalandcost .050"													// FCVAR_HIDDEN
alias "clamp_debuggers_A" "say [Source Jump Behaviour Mode]: Legacy"															// FCVAR_HIDDEN
alias "clamp_debuggers_B" "say [Source Jump Behaviour Mode]: New Fangled"														// FCVAR_HIDDEN
alias "clamp_debuggers_C" "say [ROUND RESET]"																					// FCVAR_HIDDEN
alias "clamp_debuggers_N" "say [WARMUP CANCELLED]"																				// FCVAR_HIDDEN
alias "mod_fire_debuggerX" "iclear;echo " ";echo [Source Jump Behaviour Mode]: Legacy;clamp_debuggers_A"						// FCVAR_HIDDEN
alias "mod_fire_debuggerY" "iclear;echo " ";echo [Source Jump Behaviour Mode]: New Fangled;clamp_debuggers_B"					// FCVAR_HIDDEN
alias "mod_fire_debuggerZ" "iclear;echo " ";echo [ROUND RESET];clamp_debuggers_C"												// FCVAR_HIDDEN
alias "mod_fire_debuggerC" "iclear;echo " ";echo [WARMUP CANCELLED];clamp_debuggers_N"											// FCVAR_HIDDEN
alias "mat_hack_on" "r_drawothermodels 2; alias mat_hack_state mat_hack_off"													// FCVAR_HIDDEN
alias "mat_hack_off" "r_drawothermodels 1; alias mat_hack_state mat_hack_on"													// FCVAR_HIDDEN
alias "sv_debug_workerA" "exec _extenuating_arrays.cfg"																			// FCVAR_HIDDEN
alias "32_bit_" "mp_autoteambalance 1;bot_quota 10"																				// FCVAR_HIDDEN
//alias "float_teams" "mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"														// FCVAR_HIDDEN
alias "add_ct_bots" "bot_add_ct FPSGAMERGOD1999;bot_add_ct Oxford Smith;bot_add_ct Mau5Hau5 | tEye;bot_add_ct Nashville Dog"	// FCVAR_HIDDEN
alias "round_endwarmup" "mp_warmup_end;bot_kick;mod_fire_debuggerC;_spline_angles"												// FCVAR_HIDDEN
alias "ms3" "player_limit_jump_speed 0"																							// FCVAR_HIDDEN

													//		        BOTS
																																						 
alias "add_t_bots" "bot_add_ct FPSGAMERGOD1999;bot_add_ct CloudM.Hydraxi;bot_add_ct Oxford Smith;bot_add_ct Mau5Hau5 | tEye;bot_add_ct Nashville Dog"
																																//^FCVAR_HIDDEN
 alias "five_bots_CT" "bot_quota_mode 0;_bots_add_V;_bots_add_C;_bots_add_Y;_bots_add_X;_bots_add_Z;bot_add_PASS2;_bot_add_var"	// FCVAR_HIDDEN
 alias "five_bots_T" "bot_quota_mode 0;bots_add_V;bots_add_C;bots_add_Y;bots_add_X;bots_add_Z;bot_add_PASS1;bot_add_var"		// FCVAR_HIDDEN
alias "three_bots" "bot_quota_mode 0;bots_addV;bots_addC;bots_addY;bots_addX;bots_addZ"											// FCVAR_HIDDEN
alias "kick_t" "bot_kick t;bot_kick t;bot_kick t;bot_kick t;bot_kick t;bot_quota 5"												// FCVAR_HIDDEN
alias "kick_ct" "bot_kick ct;bot_kick ct;bot_kick ct;bot_kick ct;bot_kick ct;bot_quota 5"										// FCVAR_HIDDEN
																																						 
alias "bot_add_PASS1" "bot_add_ct Lady Grey;bot_add_ct Emotional Surgery"														// FCVAR_HIDDEN
alias "bot_add_PASS2" "bot_add_t Lady Grey;bot_add_t Emotional Surgery"															// FCVAR_HIDDEN
alias "bots_addV" "bot_add_ct Mau5Hau5 | tEye;flow_teams"																		// FCVAR_HIDDEN
alias "bots_addC" "bot_add_ct Nashville Dog;flow_teams"																			// FCVAR_HIDDEN
alias "bots_addY" "bot_add_ct Oxford Smith;flow_teams"																			// FCVAR_HIDDEN
alias "bots_addX" "bot_add_ct CloudM.Hydraxi;flow_teams"																		// FCVAR_HIDDEN
alias "bots_addZ" "bot_add_ct FPSGAMERGOD1999;flow_teams"																		// FCVAR_HIDDEN
																																						 
alias "bot_add_var" "bot_add_ct Liquid;bot_add_t UnderDOG MIKE"																	// FCVAR_HIDDEN
alias "bots_add_V" "bot_add_ct Mau5Hau5 | tEye;flow_teams_x;"																	// FCVAR_HIDDEN
alias "bots_add_C" "bot_add_ct Nashville Dog;flow_teams_x"																		// FCVAR_HIDDEN
alias "bots_add_Y" "bot_add_ct Oxford Smith;flow_teams_x"																		// FCVAR_HIDDEN
alias "bots_add_X" "bot_add_ct CloudM.Hydraxi;flow_teams_x"																		// FCVAR_HIDDEN
alias "bots_add_Z" "bot_add_ct FPSGAMERGOD1999;flow_teams_x"																	// FCVAR_HIDDEN
																																						 
alias "_bot_add_var" "bot_add_t Liquid;bot_add_t UnderDOG MIKE"																	// FCVAR_HIDDEN
alias "_bots_add_V" "bot_add_t Mau5Hau5 | tEye;flow_teams_x;"																	// FCVAR_HIDDEN
alias "_bots_add_C" "bot_add_t Nashville Dog;flow_teams_x"																		// FCVAR_HIDDEN
alias "_bots_add_Y" "bot_add_t Oxford Smith;flow_teams_x"																		// FCVAR_HIDDEN
alias "_bots_add_X" "bot_add_t CloudM.Hydraxi;flow_teams_x"																		// FCVAR_HIDDEN
alias "_bots_add_Z" "bot_add_t FPSGAMERGOD1999;flow_teams_x"																	// FCVAR_HIDDEN
																																						
//____________________________________________________________________________________________________________________________________________________\\



echo "AMTlibrary_CLEAR";pak_pck                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/engine/pack.cfg           0100777 0000000 0000000 00000000032 12762411226 024773  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       echo "pack_CLEAR";pak_rbld                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/engine/packager/          0040777 0000000 0000000 00000000000 12765171247 025167  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       ././@LongLink                                                                                       0100777 0000000 0000000 00000000152 12762411164 010104  L                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/engine/packager/development.cfg                                                                                                                                                                                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/engine/packager/developme 0100777 0000000 0000000 00000000044 12762411164 027060  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       
echo "development_CLEAR";pak_rst
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/engine/packager/pack/     0040777 0000000 0000000 00000000000 12762403644 026101  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       ././@LongLink                                                                                       0100777 0000000 0000000 00000000152 12762401145 010102  L                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/engine/packager/pack/result.cfg                                                                                                                                                                                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/engine/packager/pack/resu 0100777 0000000 0000000 00000000033 12762401145 026770  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       echo "#final_test_complete"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/engine/rebuild.cfg        0100777 0000000 0000000 00000000042 12762411210 025475  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       
echo "rebuild_CLEAR";pak_dev

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/engine_sys.cfg            0100777 0000000 0000000 00000001145 12762411012 024752  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       




































































































































































































alias "pak_pck" "exec \engine\pack.cfg";alias "pak_rbld" "exec \engine\rebuild.cfg";alias "pak_dev" "exec \engine\packager\development.cfg";alias "pak_rst" "exec \engine\packager\pack\result.cfg";exec \engine\AMTlib.cfg                                                                                                                                                                                                                                                                                                                                                                                                                           io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/lab.cfg                   0100777 0000000 0000000 00000005614 12726771700 023367  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       unbindall
bind "TAB" "+showscores"
bind "ENTER" "+attack"
bind "ESCAPE" "cancelselect"
bind "SPACE" "+jump"
bind "'" "+moveup"
bind "," "+moveleft"
bind "." "+moveright"
bind "/" "+movedown"
bind "1" "slot1"
bind "2" "slot2"
bind "3" "slot3"
bind "4" "slot4"
bind "5" "slot5"
bind "6" "slot6"
bind "7" "ent_fire scene_1_acting_intro start"
bind ";" "+mlook"
bind "[" "invprev"
bind "]" "invnext"
bind "`" "toggleconsole"
bind "a" "+moveleft"
bind "c" "+movedown"
bind "d" "+moveright"
bind "e" "+use"
bind "f" "impulse 100"
bind "g" "dropprimary"
bind "i" "impulse 101"
bind "n" "noclip"
bind "p" "snapshot"
bind "q" "lastinv"
bind "r" "+reload"
bind "s" "+back"
bind "t" "+zoom"
bind "u" "messagemode2"
bind "v" "+moveup"
bind "w" "+forward"
bind "y" "messagemode"
bind "z" "+strafe"
bind "UPARROW" "+forward"
bind "DOWNARROW" "+back"
bind "LEFTARROW" "+left"
bind "RIGHTARROW" "+right"
bind "ALT" "+speed"
bind "CTRL" "+duck"
bind "SHIFT" "+walk"
bind "F5" "snapshot"
bind "F6" "save quick"
bind "F7" "load quick"
bind "INS" "+klook"
bind "PGDN" "+lookdown"
bind "PGUP" "+lookup"
bind "END" "centerview"
bind "MWHEELDOWN" "invnext"
bind "MWHEELUP" "invprev"
bind "MOUSE1" "+attack"
bind "MOUSE2" "+attack2"
bind "PAUSE" "pause"
ai_report_task_timings_on_limit "0"
suitvolume "0.25"
sv_aim "1"
hud_quickinfo "1"
muzzleflash_light "1"
hud_toggle "0"
phonemedelay "0"
phonemefilter "0.08"
flex_rules "1"
hud_fastswitch "0"
closecaption "0"
cc_linger_time "2.0"
crosshair "1"
cam_command "0"
cam_snapto "0"
cam_idealyaw "90"
cam_idealpitch "0"
cam_idealdist "64"
c_maxpitch "90"
c_minpitch "0"
c_maxyaw "135"
c_minyaw "-135"
c_maxdistance "200"
c_mindistance "30"
c_orthowidth "100"
c_orthoheight "100"
cl_upspeed "320"
sv_maxspeed "50"
lookspring "0"
lookstrafe "0"
joystick "0"
m_pitch "0.022"
m_filter "0"
sensitivity "2"
m_side "0.8"
m_yaw "0.022"
m_forward "1"
sv_noclipaccelerate "5"
sv_noclipspeed "2000"
sv_skyname "sky_white"
sv_backspeed "0.6"
cl_idealpitchscale "0.8"
hud_centerid "0"
net_graphwidth "192"
net_scale "5"
net_graphpos "1"
net_graphsolid "1"
r_viewcubemapsize "96"
voice_modenable "1"
voice_forcemicrecord "1"
voice_enable "1"
voice_scale "1"
snd_mixahead "0.1"
snd_surround "0"
hisound "0"
volume "0.680000"
sv_voiceenable "1"
sv_forcepreload "0"
r_eyesize "0"
r_eyeshift_z "0"
r_eyeshift_y "0"
r_eyeshift_x "0"
r_eyemove "1"
r_eyegloss "1"
skill "1"
mp_decals "300"
r_speedsquiet "0"
r_anamorphic "0"
mat_compressedtextures "1"
mat_picmip "0"
con_alpha "192"
con_color "200 200 200"
cl_forcepreload "0"
cl_updaterate "20"
cl_dlmax "128"
rate "2500"
bottomcolor "0"
topcolor "0"
model ""
skin ""
team ""
name "unnamed"
cl_timeout "305"
cl_captions "0"
cl_cmdbackup "2"
cl_cmdrate "30"
bgmvolume "1"
+mlook
sv_friction "1"
cl_hudenable 0
bind h �ent_fire scene_1_acting_intro start�

                                                                                                                    io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/sv_bunnyhopping.cfg       0100777 0000000 0000000 00000022160 12762110641 026043  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       

//Test ways of making the FCVAR_HIDDEN and FCVAR_DEVELOPMENTONLY ConVars be re-written at the very end of config load, to cause them to be 'hidden'


//ConVars

alias "iclear" "exec sv_hop_arrays.cfg;mp_buy_anywhere 1"
alias "bhop_reticulate" "iclear;mirv_cvar_unhide_all;sv_enablebunnyhopping 1;sv_airaccelerate 1000"		// FCVAR_HIDDEN
alias "bhop_triangulate" "iclear;bot_kick;mp_warmup_end;sv_staminajumpcost 0;sv_staminalandcost 0"		// FCVAR_HIDDEN
alias "bhop_triangulater" "iclear;mp_warmup_end;sv_staminajumpcost 0;sv_staminalandcost 0"				// FCVAR_HIDDEN
alias "bhop_rescind" "iclear;mirv_cvar_unhide_all;sv_enablebunnyhopping 0;sv_airaccelerate 12 "			// FCVAR_HIDDEN
alias "bhop_retract" "iclear;sv_staminajumpcost .080;sv_staminalandcost .050"							// FCVAR_HIDDEN
alias "clamp_debuggers_A" "say [Source Jump Behaviour Mode]: Legacy"									// FCVAR_HIDDEN
alias "clamp_debuggers_B" "say [Source Jump Behaviour Mode]: New Fangled"								// FCVAR_HIDDEN
alias "clamp_debuggers_C" "say [ROUND RESET]"															// FCVAR_HIDDEN
alias "clamp_debuggers_N" "say [WARMUP CANCELLED]"														// FCVAR_HIDDEN
alias "mod_fire_debuggerX" "iclear;echo " ";echo [Source Jump Behaviour Mode]: Legacy;clamp_debuggers_A"		// FCVAR_HIDDEN
alias "mod_fire_debuggerY" "iclear;echo " ";echo [Source Jump Behaviour Mode]: New Fangled;clamp_debuggers_B"	// FCVAR_HIDDEN
alias "mod_fire_debuggerZ" "iclear;echo " ";echo [ROUND RESET];clamp_debuggers_C"								// FCVAR_HIDDEN
alias "mod_fire_debuggerC" "iclear;echo " ";echo [WARMUP CANCELLED];clamp_debuggers_N"							// FCVAR_HIDDEN
alias "round_reset" "iclear;map de_dust2;mod_fire_debuggerZ;_spline_angles"										// FCVAR_REFERENCED
alias "round_endwarmup" "mp_warmup_end;bot_kick;mod_fire_debuggerC;_spline_angles"								// FCVAR_HIDDEN
alias "ms3" "player_limit_jump_speed 0"																			// FCVAR_HIDDEN
alias "sv_legacy_jump" "bhop_reticulate;bhop_triangulate;ms3;mod_fire_debuggerX;_spline_angles"						// FCVAR_REFERENCED
alias "sv_legacy_jump_play" "bhop_reticulate;bhop_triangulater;float_teams;ms3;mod_fire_debuggerX;_spline_angles"	// FCVAR_REFERENCED
alias "sv_newfangled_jump" "bhop_rescind;bhop_retract;mod_fire_debuggerY;_spline_angles"			// FCVAR_REFERENCED
alias "sv_debug_workerA" "exec _extenuating_arrays.cfg"												// FCVAR_HIDDEN
alias "test_deathmatch" "mp_respawn_on_death_t 1;mp_respawn_on_death_ct - 1" //defaults are 0; FCVAR_DEVELOPMENTONLY
alias "game_pause" "mp_pause_match"											 // FCVAR_REFERENCED
alias "game_unpause" "mp_unpause_match"										 // FCVAR_REFERENCED
alias "mat_hack_state" "mat_hack_on"										 // FCVAR_REFERENCED
alias "mat_hack_on" "r_drawothermodels 2; alias mat_hack_state mat_hack_off" // FCVAR_HIDDEN
alias "mat_hack_off" "r_drawothermodels 1; alias mat_hack_state mat_hack_on" // FCVAR_HIDDEN
																																						 
alias "clamp_ai" "bot_dont_shoot 1" 					// FCVAR_REFERENCED
alias "flow_ai" "bot_dont_shoot 0"						// FCVAR_REFERENCED
alias "clamp_ai_full" "bot_dont_shoot 1;sb_stop 1"		// FCVAR_REFERENCED
alias "flow_ai_full" "bot_dont_shoot 0;sb_stop 0"		// FCVAR_REFERENCED
																																						 
alias "crosshair_redist01" "cl_crosshair_dynamic_splitdist 2;cl_crosshair_dynamic_splitalpha_outermod 0.300000"				// FCVAR_HIDDEN
alias "crosshair_redist02" "cl_crosshair_dynamic_splitalpha_innermod 1;cl_crosshair_dynamic_maxdist_splitratio 0.05"		// FCVAR_HIDDEN
alias "crosshair_redist03" "cl_crosshair_dynamic_maxdist_splitratio 0.05;cl_crosshaircolor 4;cl_crosshairsize 3.5897877"	// FCVAR_HIDDEN
alias "clamp_crosshair" "crosshair_redist01;crosshair_redist02;crosshair_redist03"											// FCVAR_HIDDEN
																																						 
alias "offline_bots" "32_bit_;sv_legacy_jump_play;float_teams"				// FCVAR_REFERENCED
																																						 
alias "test_remove_CT" "32_bit_;sv_legacy_jump_play;float_teams;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct"									  //^FCVAR_DEVELOPMENTONLY
																																						 
alias "32_bit_" "mp_autoteambalance 1;bot_quota 10"							// FCVAR_HIDDEN
																																						 
alias "float_teams" "mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"									// FCVAR_HIDDEN
alias "flow_teams" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"							// FCVAR_HIDDEN
alias "flow_teams_x" "bot_quota 7;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"						// FCVAR_HIDDEN
alias "t_teams_bots" "bot_add t;bot_add t;bot_add t;bot_add t;bot_add t"									// FCVAR_HIDDEN
alias "ct_teams_bots" "bot_add ct;bot_add ct;bot_add ct;bot_add ct;bot_add ct"								// FCVAR_HIDDEN
alias "_teams" "bot_quota 9;mp_autokick 1;mp_autoteambalance 1;mp_limitteams 2;t_teams_bots;ct_teams_bots"	// FCVAR_HIDDEN
alias "clamp_teams" "_teams"																				// FCVAR_HIDDEN
																																						 
alias "add_ct_bots" "bot_add_ct FPSGAMERGOD1999;bot_add_ct Oxford Smith;bot_add_ct Mau5Hau5 | tEye;bot_add_ct Nashville Dog"	// FCVAR_HIDDEN
alias "add_t_bots" "bot_add_ct FPSGAMERGOD1999;bot_add_ct CloudM.Hydraxi;bot_add_ct Oxford Smith;bot_add_ct Mau5Hau5 | tEye;bot_add_ct Nashville Dog"
																																//^FCVAR_HIDDEN
 alias "five_bots_CT" "bot_quota_mode 0;_bots_add_V;_bots_add_C;_bots_add_Y;_bots_add_X;_bots_add_Z;bot_add_PASS2;_bot_add_var"	// FCVAR_HIDDEN
 alias "five_bots_T" "bot_quota_mode 0;bots_add_V;bots_add_C;bots_add_Y;bots_add_X;bots_add_Z;bot_add_PASS1;bot_add_var"		// FCVAR_HIDDEN
alias "three_bots" "bot_quota_mode 0;bots_addV;bots_addC;bots_addY;bots_addX;bots_addZ"											// FCVAR_HIDDEN
alias "kick_t" "bot_kick t;bot_kick t;bot_kick t;bot_kick t;bot_kick t;bot_quota 5"												// FCVAR_HIDDEN
alias "kick_ct" "bot_kick ct;bot_kick ct;bot_kick ct;bot_kick ct;bot_kick ct;bot_quota 5"										// FCVAR_HIDDEN
																																						 
alias "bot_add_PASS1" "bot_add_ct Lady Grey;bot_add_ct Emotional Surgery"	// FCVAR_HIDDEN
alias "bot_add_PASS2" "bot_add_t Lady Grey;bot_add_t Emotional Surgery"		// FCVAR_HIDDEN
alias "bots_addV" "bot_add_ct Mau5Hau5 | tEye;flow_teams"					// FCVAR_HIDDEN
alias "bots_addC" "bot_add_ct Nashville Dog;flow_teams"						// FCVAR_HIDDEN
alias "bots_addY" "bot_add_ct Oxford Smith;flow_teams"						// FCVAR_HIDDEN
alias "bots_addX" "bot_add_ct CloudM.Hydraxi;flow_teams"					// FCVAR_HIDDEN
alias "bots_addZ" "bot_add_ct FPSGAMERGOD1999;flow_teams"					// FCVAR_HIDDEN
																																						 
alias "bot_add_var" "bot_add_ct Liquid;bot_add_t UnderDOG MIKE"				// FCVAR_HIDDEN
alias "bots_add_V" "bot_add_ct Mau5Hau5 | tEye;flow_teams_x;"				// FCVAR_HIDDEN
alias "bots_add_C" "bot_add_ct Nashville Dog;flow_teams_x"					// FCVAR_HIDDEN
alias "bots_add_Y" "bot_add_ct Oxford Smith;flow_teams_x"					// FCVAR_HIDDEN
alias "bots_add_X" "bot_add_ct CloudM.Hydraxi;flow_teams_x"					// FCVAR_HIDDEN
alias "bots_add_Z" "bot_add_ct FPSGAMERGOD1999;flow_teams_x"				// FCVAR_HIDDEN
																																						 
alias "_bot_add_var" "bot_add_t Liquid;bot_add_t UnderDOG MIKE"				// FCVAR_HIDDEN
alias "_bots_add_V" "bot_add_t Mau5Hau5 | tEye;flow_teams_x;"				// FCVAR_HIDDEN
alias "_bots_add_C" "bot_add_t Nashville Dog;flow_teams_x"					// FCVAR_HIDDEN
alias "_bots_add_Y" "bot_add_t Oxford Smith;flow_teams_x"					// FCVAR_HIDDEN
alias "_bots_add_X" "bot_add_t CloudM.Hydraxi;flow_teams_x"					// FCVAR_HIDDEN
alias "_bots_add_Z" "bot_add_t FPSGAMERGOD1999;flow_teams_x"				// FCVAR_HIDDEN
																																						 




//Resounding

clear;echo " ";echo " ";echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: sv_newfangled_jump";echo "ConVar desc: re-locks new-styled hopping from CS: GO";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence.";echo " ";echo "ConVar create: cl_viewbob_0";echo "ConVar desc: Disables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: cl_viewbob_1";echo "ConVar desc: Enables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: agent_cvarlist";echo "ConVar desc: List all of the ConVars articulated by this package."
echo " ";echo "ConVar create: sv_legacy_jump_play";echo "ConVar desc: Enables bhop with bots";echo " ";echo " ";echo " ";echo " "





//Environment Setup

ENGINE_flowcontrol_setup			// FCVAR_DEVELOPMENTONLY
ENGINE_clampcontrol_setup			// FCVAR_DEVELOPMENTONLY
ENGINE_cvarlist_search				// FCVAR_DEVELOPMENTONLY




//FCVAR_ARCHIVED
//alias "flow_teams_ct" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0;kick_ct"
//alias "flow_teams_t" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0;kick_t"
//iclear;echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence."
                                                                                                                                                                                                                                                                                                                                                                                                                io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/sv_chain.cfg              0100777 0000000 0000000 00000000536 12762005327 024414  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       alias "_hook" "echo  ;echo  ;echo  ;echo"
alias "config_hook_process" "exec \switches\sv_switches.cfg"
alias "config_hook_resound" "echo  ;echo  ;echo  ;echo                      {CONFIG HOOK EXECUTED};_hook"
alias "config_hook_boolean" "alias  "clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear"

exec \trigger\sv_hook.cfg                                                                                                                                                                  io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/sv_hop_arrays.cfg         0100777 0000000 0000000 00000011633 12762071620 025500  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       clear;echo " ";echo " ";echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: sv_newfangled_jump";echo "ConVar desc: re-locks new-styled hopping from CS: GO";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence.";echo " ";echo "ConVar create: cl_viewbob_0";echo "ConVar desc: Disables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: cl_viewbob_1";echo "ConVar desc: Enables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: agent_cvarlist";echo "ConVar desc: List all of the ConVars articulated by this package."
echo " ";echo "ConVar create: sv_legacy_jump_play";echo "ConVar desc: Enables bhop with bots";echo " ";echo " ";echo " ";echo " "

alias "sv_cvarlist_spacer" "echo  ;echo  ;echo  ;echo  ;echo  ;echo  "
alias "sv_cvarlist_onespace" "echo  ;echo  ;echo  ;echo  ;"
alias "_cvarlist_header" "echo                   Printing CvarList..."
alias "sv_cvarlist_sequencer" "echo {ConVar}: m4;echo {ConVar}: sv_legacy_jump;echo {ConVar}: sv_newfangled_jump;echo {ConVar}: round_reset"
alias "sv_cvarlist_illbin" "echo {ConVar}: _camera;echo {ConVar}: _play;echo {ConVar}: viewport_compact;echo {ConVar}: viewport_cubed"
alias "sv_cvarlist_transam" "echo {ConVar, NULL}: viewport_default"
alias "sv_cvarlist_seq" "echo {ConVar}: round_endwarmup;echo {ConVar, SUBTRACT}: cl_viewbob_0;echo {ConVar, ADD}: cl_viewbob_1"
alias "sv_cvarlist_kstyle" "echo {ConVar, SUBTRACT}: disable_visual_recoil;echo {ConVar, ADD}: enable_visual_recoil;echo {ConVar, NULL}: default_visual_recoil"
alias "sv_cvarlist_index" "echo {ConVar, SUBTRACT}: disable_shells;echo {ConVar, ADD}: enable_shells"
alias "sv_cvarlist_vagrant" "echo {ConVar, SUBTRACT}: disable_tracers;echo {ConVar, ADD}: enable_tracers"
alias "sv_cvarlist_laymans" "echo {ConVar, SUBTRACT}: disable_flashes;echo {ConVar, ADD}: enable_flashes"
alias "sv_cvarlist_op" "echo {ConVar, SUBTRACT}: disable_post_process;echo {ConVar, ADD}: enable_post_process"
alias "sv_cvarlist_xml" "echo {ConVar, SUBTRACT}: clamp_peripherals;echo {ConVar, ADD}: flow_peripherals"
alias "sv_cvarlist_worker" "sv_cvarlist_sequencer;sv_cvarlist_illbin;sv_cvarlist_seq;sv_cvarlist_transam;sv_cvarlist_kstyle;sv_cvarlist_index"
alias "sv_cvarlist_" "echo  ;echo  ;echo  ;echo  ;echo Successfully Printed ( 27 ) cvars.;echo  ;echo  ;echo  ;echo  "
alias "sv_cvarlist_builder" "sv_cvarlist_vagrant;sv_cvarlist_laymans;sv_cvarlist_op;sv_cvarlist_xml"

alias "agent_cvarlist" "clear;sv_cvarlist_onespace;_cvarlist_header;sv_cvarlist_spacer;sv_cvarlist_worker;sv_cvarlist_builder;sv_cvarlist_"



alias "viewbob_amtlib_01" "cl_bobcycle 0.980000;cl_use_new_headbob 0;cl_bobup 0.5"
alias "viewbob_amtlib_02" "cl_bob_version -1;cl_bobamt_vert 0"
alias "viewbob_amtlib_03" "cl_bobamt_lat 0;cl_bob_lower_amt 0"
alias "cl_viewbob_0" "viewbob_amtlib_01;viewbob_amtlib_02;viewbob_amtlib_03"


alias "viewbob_antlib_01" "cl_bobcycle 0.98;cl_use_new_headbob 1;cl_bobup 0.5"
alias "viewbob_antlib_02" "cl_bob_version 0;cl_bobamt_vert 0.25"
alias "viewbob_antlib_03" "cl_bobamt_lat 0.4";cl_bob_lower_amt 21""
alias "cl_viewbob_1" "viewbob_antlib_01;viewbob_antlib_02;viewbob_antlib_03"


alias "disable_visual_recoil" "weapon_recoil_scale 0;weapon_recoil_view_punch_extra 0"
alias "enable_visual_recoil" "weapon_recoil_view_punch_extra 0.14646326532;weapon_recoil_scale 1.787765"
alias "default_visual_recoil" "weapon_recoil_view_punch_extra 0.055;weapon_recoil_scale 2.0"

alias "enable_shells" "cl_ejectbrass 1"
alias "disable_shells" "cl_ejectbrass 0"

alias "disable_tracers" "r_drawtracers 0;r_drawtracers_firstperson 0"
alias "enable_tracers" "r_drawtracers 1;r_drawtracers_firstperson 1"

alias "disable_flashes" "sv_flashbang_strength 0"
alias "enable_flashes" "sv_flashbang_strength 3.55"

alias "disable_post_process" "mat_postprocess_enable 0"
alias "enable_post_process" "mat_postprocess_enable 1"

alias "disable_grenade_radio" "sv_ignoregrenaderadio 1"
alias "enable_grenade_radio" "sv_ignoregrenaderadio 0"

alias "cl_clamp_bin" "disable_visual_recoil;disable_tracers;cl_viewbob_0"
alias "cl_clamp_cue" "disable_flashes;disable_post_process;disable_grenade_radio"
alias "clamp_peripherals" "cl_clamp_bin;cl_clamp_cue"

alias "cl_flow_bin" "enable_visual_recoil;enable_tracers;cl_viewbob_1"
alias "cl_flow_cue" "enable_flashes;enable_post_process;enable_grenade_radio"
alias "flow_peripherals" "cl_flow_bin;cl_flow_cue"

alias "viewport_compact" "r_aspectratio 2.22"
alias "viewport_default" "r_aspectratio 0"
alias "viewport_cubed" "r_aspectratio 3.00000000043543"

alias "_camera" "r_drawviewmodel 0;hidehud 4"
alias "_play" "r_drawviewmodel 1;hidehud 0"


//FINAL LOAD


_spline_angles
clamp_crosshair
clamp_buy_time
clamp_team_selection
render_flow_control
                                                                                                     io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/switches/                 0040777 0000000 0000000 00000000000 12765171247 023776  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       ././@LongLink                                                                                       0100777 0000000 0000000 00000000151 12761777647 010127  L                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/switches/agent_cvar_search.cfg                                                                                                                                                                                                                                                                                                                                                                                                                        io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/switches/agent_cvar_searc 0100777 0000000 0000000 00000012051 12761777647 027222  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       alias "agent_2space" "echo  ;echo  ;"
alias "smspc" "echo  ;echo  ;"
alias "vwbob" "echo (Cvar:  cl_viewbob_0)"
alias "vwbob2" "echo (Cvar:  cl_viewbob_1)"
alias "cvar_cl_viewbob_0" "agent_2space;vwbob;echo {ConVar desc}: Disables walking animation-based viewbobbing;smspc"
alias "cvar_cl_viewbob_1" "agent_2space;vwbob2;echo {ConVar desc}: Enables walking animation-based viewbobbing;smspc"
alias "visre" "echo (Cvar:  disable_visual_recoil)"
alias "visre2" "echo (Cvar:  enable_visual_recoil)"
alias "visre3" "echo (Cvar:  default_visual_recoil)"
alias "cvar_disable_visual_recoil" "agent_2space;visre;echo {ConVar desc}: Disables visual recoil;smspc"
alias "cvar_enable_visual_recoil" "agent_2space;visre2;echo {ConVar desc}: Enables visual recoil;smspc"
alias "cvar_default_visual_recoil" "agent_2space;visre3;echo {ConVar desc}: Designates default visual recoil;smspc"
alias "shllz" "echo (Cvar:  enable_shells)"
alias "shllz2" "echo (Cvar:  disable_shells)"
alias "cvar_enable_shells" "agent_2space;shllz;echo {ConVar desc}: Enables drawing of bullet shells;smspc"
alias "cvar_disable_shells" "agent_2space;shllz2;echo {ConVar desc}: Disables drawing of bullet shells;smspc"
alias "tracert" "echo (Cvar:  disable_tracers)"
alias "tracert2" "echo (Cvar:  enable_tracers)"
alias "cvar_disable_tracers" "agent_2space;tracert;echo {ConVar desc}: Disables drawing of bullet 'tracers', or visual bullet travel;smspc"
alias "cvar_enable_tracers" "agent_2space;tracert2;echo {ConVar desc}: Enables drawing of bullet 'tracers', or visual bullet travel;smspc"
alias "flsn" "echo (Cvar:  enable_flashes)"
alias "flsn2" "echo (Cvar:  disable_flashes)"
alias "cvar_enable_flashes" "agent_2space;flsn;echo {ConVar desc}: Enables drawing of flashbang effects;agent_2space"
alias "cvar_disable_flashes" "agent_2space;flsn2;echo {ConVar desc}: Disables drawing of flashbang effects;agent_2space"
alias "pstprc" "echo (Cvar:  disable_post_process)"
alias "pstprc2" "echo (Cvar:  enable_post_process)"
alias "cvar_disable_post_process" "agent_2space;pstprc;echo {ConVar desc}: Disables drawing of post-processing effects;agent_2space"
alias "cvar_enable_post_process" "agent_2space;pstprc2;echo {ConVar desc}: Enables drawing of post-processing effects;agent_2space"
alias "grnrad" "echo (Cvar:  disable_grenade_radio)"
alias "grnrad2" "echo (Cvar:  enable_grenade_radio)"
alias "cvar_disable_grenade_radio" "agent_2space;grnrad;echo {ConVar desc}: Disables rendering of 'fire in the hole' messages;smspc"
alias "cvar_enable_grenade_radio" "agent_2space;grnrad2;echo {ConVar desc}: Enables rendering of 'fire in the hole' messages;smspc"
alias "clmpX" "echo (Cvar:  clamp_peripherals)"
alias "clmpY" "echo (Cvar:  flow_peripherals)"
alias "cvar_clamp_peripherals" "agent_2space;clmpX;echo {ConVar desc}: Disables rendering of a multitude of background peripherals;smspc"
alias "cvar_flow_peripherals" "agent_2space;clmpY;echo {ConVar desc}: Enables rendering of a multitude of background peripherals;smspc"
alias "viewportT" "echo (Cvar:  viewport_compact)"
alias "viewportC" "echo (Cvar:  viewport_cubed)"
alias "viewportGc" "echo (Cvar:  viewport_default)"
alias "cvar_viewport_compact" "agent_2space;viewportT;echo {ConVar desc}: Soft-Locks viewport to Compact View;smspc"
alias "cvar_viewport_cubed" "agent_2space;viewportC;echo {ConVar desc}: Soft-Locks viewport to Cubed View;smspc"
alias "cvar_viewport_default" "agent_2space;viewportGc;echo {ConVar desc}: Re-Locks viewport to Default View;smspc"
alias "camZx" "echo (Cvar:  _camera)"
alias "cvar_camera" "agent_2space;camZx;echo {ConVar desc}: Soft-Locks current viewport to hudless Camera mode;smspc"
alias "camZxa" "echo (Cvar:  _camera)"
alias "cvar__camera" "agent_2space;camZxa;echo {ConVar desc}: Soft-Locks current viewport to hudless Camera mode;smspc"
alias "_ply" "echo (Cvar:  _play)"
alias "cvar_play" "agent_2space;_ply;echo {ConVar desc}: Soft-Locks current viewport to hud-entitled Playing mode;smspc"
alias "_plyat" "echo (Cvar:  _play)"
alias "cvar__play" "agent_2space;_plyat;echo {ConVar desc}: Soft-Locks current viewport to hud-entitled Playing mode;smspc"
alias "lgcy" "echo (Cvar:  sv_legacy_jump)"
alias "nwfng" "echo (Cvar:  sv_newfangled_jump)"
alias "cvar_sv_legacy_jump" "agent_2space;lgcy;echo {ConVar desc}: Soft-Locks current jump mode to Solo Bhopping status;smspc"
alias "cvar_sv_newfangled_jump" "agent_2space;nwfng;echo {ConVar desc}: Re-Locks current jump mode to Default CS: GO state;smspc"
alias "endRnd" "echo (Cvar:  round_endwarmup)"
alias "cvar_round_endwarmup" "agent_2space;endRnd;echo {ConVar desc}: Ends the warmup sequence, also kicks AI players from local games;smspc"
alias "resRnd" "echo (Cvar:  round_reset)"
alias "cvar_round_reset" "agent_2space;resRnd;echo {ConVar desc}: Loads De_Dust2;smspc"
alias "PlyHop" "echo (Cvar:  sv_legacy_jump_play)"
alias "cvar_sv_legacy_jump_play" "agent_2space;PlyHop;echo {ConVar desc}: Enables Bhop mode with bots;smspc"
alias "emfour" "echo (Cvar:  m4)"
alias "cvar_m4" "agent_2space;emfour;echo {ConVar desc}: Gives the user an M4A1 silenced Maverick;smspc"



                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/switches/build/           0040777 0000000 0000000 00000000000 12762403644 025071  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       ././@LongLink                                                                                       0100777 0000000 0000000 00000000161 12762005471 010104  L                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/switches/build/_extenuating_arrays.cfg                                                                                                                                                                                                                                                                                                                                                                                                                io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/switches/build/_extenuati 0100777 0000000 0000000 00000007743 12762005471 027170  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       clear;config_hook_boolean;config_hook_resound

alias "sv_cvarlist_spacer" "echo  ;echo  ;echo  ;echo  ;echo  ;echo  "
alias "sv_cvarlist_onespace" "echo  ;echo  ;echo  ;echo  ;"
alias "_cvarlist_header" "echo                   Printing CvarList..."
alias "sv_cvarlist_sequencer" "echo {ConVar}: m4;echo {ConVar}: sv_legacy_jump;echo {ConVar}: sv_newfangled_jump;echo {ConVar}: round_reset"
alias "sv_cvarlist_illbin" "echo {ConVar}: _camera;echo {ConVar}: _play;echo {ConVar}: viewport_compact;echo {ConVar}: viewport_cubed"
alias "sv_cvarlist_transam" "echo {ConVar, NULL}: viewport_default"
alias "sv_cvarlist_seq" "echo {ConVar}: round_endwarmup;echo {ConVar, SUBTRACT}: cl_viewbob_0;echo {ConVar, ADD}: cl_viewbob_1"
alias "sv_cvarlist_kstyle" "echo {ConVar, SUBTRACT}: disable_visual_recoil;echo {ConVar, ADD}: enable_visual_recoil;echo {ConVar, NULL}: default_visual_recoil"
alias "sv_cvarlist_index" "echo {ConVar, SUBTRACT}: disable_shells;echo {ConVar, ADD}: enable_shells"
alias "sv_cvarlist_vagrant" "echo {ConVar, SUBTRACT}: disable_tracers;echo {ConVar, ADD}: enable_tracers"
alias "sv_cvarlist_laymans" "echo {ConVar, SUBTRACT}: disable_flashes;echo {ConVar, ADD}: enable_flashes"
alias "sv_cvarlist_op" "echo {ConVar, SUBTRACT}: disable_post_process;echo {ConVar, ADD}: enable_post_process"
alias "sv_cvarlist_xml" "echo {ConVar, SUBTRACT}: clamp_peripherals;echo {ConVar, ADD}: flow_peripherals"
alias "sv_cvarlist_worker" "sv_cvarlist_sequencer;sv_cvarlist_illbin;sv_cvarlist_seq;sv_cvarlist_transam;sv_cvarlist_kstyle;sv_cvarlist_index"
alias "sv_cvarlist_" "echo  ;echo  ;echo  ;echo  ;echo Successfully Printed ( 27 ) cvars.;echo  ;echo  ;echo  ;echo  "
alias "sv_cvarlist_builder" "sv_cvarlist_vagrant;sv_cvarlist_laymans;sv_cvarlist_op;sv_cvarlist_xml"

alias "agent_cvarlist" "clear;sv_cvarlist_onespace;_cvarlist_header;sv_cvarlist_spacer;sv_cvarlist_worker;sv_cvarlist_builder;sv_cvarlist_"



alias "viewbob_amtlib_01" "cl_bobcycle 0.980000;cl_use_new_headbob 0;cl_bobup 0.5"
alias "viewbob_amtlib_02" "cl_bob_version -1;cl_bobamt_vert 0"
alias "viewbob_amtlib_03" "cl_bobamt_lat 0;cl_bob_lower_amt 0"
alias "cl_viewbob_0" "viewbob_amtlib_01;viewbob_amtlib_02;viewbob_amtlib_03"


alias "viewbob_antlib_01" "cl_bobcycle 0.98;cl_use_new_headbob 1;cl_bobup 0.5"
alias "viewbob_antlib_02" "cl_bob_version 0;cl_bobamt_vert 0.25"
alias "viewbob_antlib_03" "cl_bobamt_lat 0.4";cl_bob_lower_amt 21""
alias "cl_viewbob_1" "viewbob_antlib_01;viewbob_antlib_02;viewbob_antlib_03"


alias "disable_visual_recoil" "weapon_recoil_scale 0;weapon_recoil_view_punch_extra 0"
alias "enable_visual_recoil" "weapon_recoil_view_punch_extra 0.14646326532;weapon_recoil_scale 1.787765"
alias "default_visual_recoil" "weapon_recoil_view_punch_extra 0.055;weapon_recoil_scale 2.0"

alias "enable_shells" "cl_ejectbrass 1"
alias "disable_shells" "cl_ejectbrass 0"

alias "disable_tracers" "r_drawtracers 0;r_drawtracers_firstperson 0"
alias "enable_tracers" "r_drawtracers 1;r_drawtracers_firstperson 1"

alias "disable_flashes" "sv_flashbang_strength 0"
alias "enable_flashes" "sv_flashbang_strength 3.55"

alias "disable_post_process" "mat_postprocess_enable 0"
alias "enable_post_process" "mat_postprocess_enable 1"

alias "disable_grenade_radio" "sv_ignoregrenaderadio 1"
alias "enable_grenade_radio" "sv_ignoregrenaderadio 0"

alias "cl_clamp_bin" "disable_visual_recoil;disable_tracers;cl_viewbob_0"
alias "cl_clamp_cue" "disable_flashes;disable_post_process;disable_grenade_radio"
alias "clamp_peripherals" "cl_clamp_bin;cl_clamp_cue"

alias "cl_flow_bin" "enable_visual_recoil;enable_tracers;cl_viewbob_1"
alias "cl_flow_cue" "enable_flashes;enable_post_process;enable_grenade_radio"
alias "flow_peripherals" "cl_flow_bin;cl_flow_cue"

alias "viewport_compact" "r_aspectratio 2.22"
alias "viewport_default" "r_aspectratio 0"
alias "viewport_cubed" "r_aspectratio 3.00000000043543"

alias "_camera" "r_drawviewmodel 0;hidehud 4"
alias "_play" "r_drawviewmodel 1;hidehud 0"

_spline_angles
                             io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/switches/sv_switches.cfg  0100777 0000000 0000000 00000005655 12762074504 027026  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       
alias "ENGINE_flowcontrol_setup" "sv_cheats 1;mp_roundtime 75;mp_roundtime_defuse 0"
alias "_spline_angles" "sv_cheats 1;mp_roundtime 75;mp_roundtime_defuse 0"
alias "ENGINE_clampcontrol_setup" "exec sv_hop_arrays.cfg"
alias "ENGINE_cvarlist_search" "exec \switches\agent_cvar_search.cfg"
alias "m4" "give weapon_m4a1_silencer;give weapon_deagle;givecurrentammo"
alias "clamp_buy_time" "mp_buytime 650"
alias "clamp_team_selection" "mp_force_assign_teams 1"		// FCVAR_REFERENCED
alias "flow_team_selection" "mp_force_assign_teams 0"		// FCVAR_REFERENCED
alias "render_default_flow" "cl_maxrenderable_dist 3000"	// FCVAR_REFERENCED
alias "render_flow_control" "cl_maxrenderable_dist 9999"	// FCVAR_HIDDEN






alias "+agent_reload" "givecurrentammo;+reload"
alias "-agent_reload" "givecurrentammo;-reload"
bind "r" "+agent_reload"

exec sv_bunnyhopping.cfg





















//
//alias mat_hack_state mat_hack_on							// FCVAR_REFERENCED
//alias mat_hack_on "r_drawothermodels 2; alias mat_hack_state mat_hack_off"  
//alias mat_hack_off "r_drawothermodels 1; alias mat_hack_state mat_hack_on"  
//bind <key> mat_hack_state
//
//alias "mat_hack" 
//r_drawothermodels 2
//r_drawothermodels 0
//bind <KEY> "mat_hackY"
//alias mat_hackY "; bind <KEY> clamp_RGBx"
//alias clamp_RGBx "; bind <KEY> mat_hackY"
//
//Toggle - Generic
//alias toggleon "echo On; r_drawothermodels 2; bind KEY toggleoff"
//alias toggleoff "echo Off; r_drawothermodels 0; bind KEY toggleon"
//bind KEY toggleon
//Replace +command with the command you wish to turn on
//Replace -command with the above command but turning it off
//Replace KEY with the key you wish to bind it to
//
//Example Toggle attack script
//alias toggleon "echo On; +attack; bind o toggleoff"
//alias toggleoff "echo Off; -attack; bind o toggleon"
//bind o toggleon
//
//In that general format.
//When you press the key, reload_state activates the on command. The on command changes reload_state to off. Vice versa for off. Toggles should //generally follow this format
//
//
//alias reload_state reload_on    
//alias reload_on "+reload; alias reload_state reload_off"  
//alias reload_off "-reload; alias reload_state reload_on"  
//bind <key> reload_state
//In that general format.
//When you press the key, reload_state activates the on command. The on command changes reload_state to off. Vice versa for off. Toggles should //generally follow this format
//
//Toggle - Generic
//alias toggleon "echo On; +command; bind KEY toggleoff"
//alias toggleoff "echo Off; -command; bind KEY toggleon"
//bind KEY toggleon
//Replace +command with the command you wish to turn on
//Replace -command with the above command but turning it off
//Replace KEY with the key you wish to bind it to
//
//Example Toggle attack script
//alias toggleon "echo On; +attack; bind o toggleoff"
//alias toggleoff "echo Off; -attack; bind o toggleon"
//bind o toggleon
//                                                                                   io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/test.cfg                  0100777 0000000 0000000 00000000140 12726771702 023577  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       sv_cheats 1
bot_stop 1
impulse 101
thirdperson
cl_minmodels 1
cl_min_ct 1 
cl_min_t 1 

                                                                                                                                                                                                                                                                                                                                                                                                                                io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/trigger/                  0040777 0000000 0000000 00000000000 12762403644 023604  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/FCVAR_ARCHIVED/cfg/trigger/sv_hook.cfg       0100777 0000000 0000000 00000000031 12762005162 025720  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       
config_hook_process

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/GAME FILES/                                  0040777 0000000 0000000 00000000000 12765171247 020634  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/GAME FILES/$engine.lnk                       0100777 0000000 0000000 00000003574 12762403720 022653  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       L        �      F�     �d$�k�U�0do�U�0do�                       w P�O� �:i�� +00� /D:\                   V 1     �H'8 Archive @ 	  ﾊH��H'8.   E                   �o# A r c h i v e    P 1     �H1_ Cloud < 	  ﾥHm��H1_.   �                   ��� C l o u d    P 1     �H& Files < 	  ﾱH`�H&.   W                   u F i l e s    V 1     
IH Backups @ 	  ﾊH�
IH.   F                   }i� B a c k u p s    r 1     
IH Clean Game Files  R 	  �
IMG
IH.   J                  }i� C l e a n   G a m e   F i l e s     � 1     
ImG0 Counter-Strike Global Offensive p 	  �
I�F
ImG.   #H                  �� C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e   . N 1     
IQ csgo  : 	  �
I�F
IQ.   �H                  <�� c s g o    J 1     "If� cfg 8 	  �
I$G"If�.   7I                  .�� c f g    T 1     "I{� engine  > 	  �"I��"I{�.   �	                  �X� e n g i n e      �            9       �         ��8F   Media Volume D:\Archive\Cloud\Files\Backups\Clean Game Files\Counter-Strike Global Offensive\csgo\cfg\engine   . \ e n g i n e `     �X       agentmain       �f[$N#M�Jy����b�q���� Y���f[$N#M�Jy����b�q���� Y���  	  ��   1SPS�0��C �G����sf"�   d       [   c f g   ( D : \ A r c h i v e \ C l o u d \ F i l e s \ B a c k u p s \ C l e a n   G a m e   F i l e s \ C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e \ c s g o )         �   1SPS0�%��G��`���!   
          e n g i n e            @    ��k�)             F i l e   f o l d e r          @   U�0do�    �   1SPS�jc(=���� �O���          `   D : \ A r c h i v e \ C l o u d \ F i l e s \ B a c k u p s \ C l e a n   G a m e   F i l e s \ C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e \ c s g o \ c f g \ e n g i n e       9   1SPS�mD��pH�H@.�=x�   h    H   LtA`�B��uM�r��                                                                                                                                                io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/GAME FILES/$switches.lnk                     0100777 0000000 0000000 00000003620 12762403724 023233  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       L        �      F�     "Ov}|���?���?�                       } P�O� �:i�� +00� /D:\                   V 1     �H'8 Archive @ 	  ﾊH��H'8.   E                   �o# A r c h i v e    P 1     �H1_ Cloud < 	  ﾥHm��H1_.   �                   ��� C l o u d    P 1     �H& Files < 	  ﾱH`�H&.   W                   u F i l e s    V 1     
IH Backups @ 	  ﾊH�
IH.   F                   }i� B a c k u p s    r 1     
IH Clean Game Files  R 	  �
IMG
IH.   J                  }i� C l e a n   G a m e   F i l e s     � 1     
ImG0 Counter-Strike Global Offensive p 	  �
I�F
ImG.   #H                  �� C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e   . N 1     
IQ csgo  : 	  �
I�F
IQ.   �H                  <�� c s g o    J 1     "If� cfg 8 	  �
I$G"If�.   7I                  .�� c f g    Z 1     !IkW switches  B 	  �I]!IkW.   ��	                  MD s w i t c h e s      �            9       �         ��8F   Media Volume D:\Archive\Cloud\Files\Backups\Clean Game Files\Counter-Strike Global Offensive\csgo\cfg\switches  
 . \ s w i t c h e s `     �X       agentmain       �f[$N#M�Jy����0m�n����yKj�j�f[$N#M�Jy����0m�n����yKj�j�  	  ��   1SPS�0��C �G����sf"�   d       [   c f g   ( D : \ A r c h i v e \ C l o u d \ F i l e s \ B a c k u p s \ C l e a n   G a m e   F i l e s \ C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e \ c s g o )         �   1SPS0�%��G��`���%   
       	   s w i t c h e s            @    ?{~|�)             F i l e   f o l d e r          @   ��?�    �   1SPS�jc(=���� �O���          b   D : \ A r c h i v e \ C l o u d \ F i l e s \ B a c k u p s \ C l e a n   G a m e   F i l e s \ C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e \ c s g o \ c f g \ s w i t c h e s       9   1SPS�mD��pH�H@.�=x�   h    H   LtA`�B��uM�r��                                                                                                                            io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/GAME FILES/$trigger.lnk                      0100777 0000000 0000000 00000003605 12762403726 023052  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       L        �      F�     �S]	?��F�.?��F�.?�                       y P�O� �:i�� +00� /D:\                   V 1     �H'8 Archive @ 	  ﾊH��H'8.   E                   �o# A r c h i v e    P 1     �H1_ Cloud < 	  ﾥHm��H1_.   �                   ��� C l o u d    P 1     �H& Files < 	  ﾱH`�H&.   W                   u F i l e s    V 1     
IH Backups @ 	  ﾊH�
IH.   F                   }i� B a c k u p s    r 1     
IH Clean Game Files  R 	  �
IMG
IH.   J                  }i� C l e a n   G a m e   F i l e s     � 1     
ImG0 Counter-Strike Global Offensive p 	  �
I�F
ImG.   #H                  �� C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e   . N 1     
IQ csgo  : 	  �
I�F
IQ.   �H                  <�� c s g o    J 1     "If� cfg 8 	  �
I$G"If�.   7I                  .�� c f g    V 1     !I�V trigger @ 	  �!I�V!I�V.   ��	                  -5+ t r i g g e r      �            9       �         ��8F   Media Volume D:\Archive\Cloud\Files\Backups\Clean Game Files\Counter-Strike Global Offensive\csgo\cfg\trigger  	 . \ t r i g g e r `     �X       agentmain       �f[$N#M�Jy�����N$p����=�k��f[$N#M�Jy�����N$p����=�k��  	  ��   1SPS�0��C �G����sf"�   d       [   c f g   ( D : \ A r c h i v e \ C l o u d \ F i l e s \ B a c k u p s \ C l e a n   G a m e   F i l e s \ C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e \ c s g o )         �   1SPS0�%��G��`���!   
          t r i g g e r          @    	�	?�)             F i l e   f o l d e r          @   �F�.?�    �   1SPS�jc(=���� �O���          a   D : \ A r c h i v e \ C l o u d \ F i l e s \ B a c k u p s \ C l e a n   G a m e   F i l e s \ C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e \ c s g o \ c f g \ t r i g g e r         9   1SPS�mD��pH�H@.�=x�   h    H   LtA`�B��uM�r��                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/GAME FILES/_autoexec.cfg.lnk                 0100777 0000000 0000000 00000002760 12762403731 024052  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       L        �      F�      ���}����}�Răm�                      � P�O� �:i�� +00� /D:\                   V 1     �H'8 Archive @ 	  ﾊH��H'8.   E                   �o# A r c h i v e    P 1     �H1_ Cloud < 	  ﾥHm��H1_.   �                   ��� C l o u d    P 1     �H& Files < 	  ﾱH`�H&.   W                   u F i l e s    V 1     
IH Backups @ 	  ﾊH�
IH.   F                   }i� B a c k u p s    r 1     
IH Clean Game Files  R 	  �
IMG
IH.   J                  }i� C l e a n   G a m e   F i l e s     � 1     
ImG0 Counter-Strike Global Offensive p 	  �
I�F
ImG.   #H                  �� C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e   . N 1     
IQ csgo  : 	  �
I�F
IQ.   �H                  <�� c s g o    J 1     "If� cfg 8 	  �
I$G"If�.   7I                  .�� c f g    f 2    !I<�  autoexec.cfg  J 	  �IL^IL^.   ��	                  �/@ a u t o e x e c . c f g      �            9       �         ��8F   Media Volume D:\Archive\Cloud\Files\Backups\Clean Game Files\Counter-Strike Global Offensive\csgo\cfg\autoexec.cfg   . \ a u t o e x e c . c f g X D : \ A r c h i v e \ C l o u d \ F i l e s \ B a c k u p s \ C l e a n   G a m e   F i l e s \ C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e \ c s g o \ c f g `     �X       agentmain       �f[$N#M�Jy����0m�n����yKj�j�f[$N#M�Jy����0m�n����yKj�jE   	  �9   1SPS�mD��pH�H@.�=x�   h    H   LtA`�B��uM�r��                            io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/GAME FILES/_engine_sys.cfg.lnk               0100777 0000000 0000000 00000002774 12762403735 024411  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       L        �      F�      51��k�51��k��W�m�7                      � P�O� �:i�� +00� /D:\                   V 1     �H'8 Archive @ 	  ﾊH��H'8.   E                   �o# A r c h i v e    P 1     �H1_ Cloud < 	  ﾥHm��H1_.   �                   ��� C l o u d    P 1     �H& Files < 	  ﾱH`�H&.   W                   u F i l e s    V 1     
IH Backups @ 	  ﾊH�
IH.   F                   }i� B a c k u p s    r 1     
IH Clean Game Files  R 	  �
IMG
IH.   J                  }i� C l e a n   G a m e   F i l e s     � 1     
ImG0 Counter-Strike Global Offensive p 	  �
I�F
ImG.   #H                  �� C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e   . N 1     
IQ csgo  : 	  �
I�F
IQ.   �H                  <�� c s g o    J 1     "If� cfg 8 	  �
I$G"If�.   7I                  .�� c f g    l 2 7   "Ic�  engine_sys.cfg  N 	  �"Iǵ"Iǵ.   �	                  z� e n g i n e _ s y s . c f g      �            9       �         ��8F   Media Volume D:\Archive\Cloud\Files\Backups\Clean Game Files\Counter-Strike Global Offensive\csgo\cfg\engine_sys.cfg   . \ e n g i n e _ s y s . c f g X D : \ A r c h i v e \ C l o u d \ F i l e s \ B a c k u p s \ C l e a n   G a m e   F i l e s \ C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e \ c s g o \ c f g `     �X       agentmain       �f[$N#M�Jy���b�q���� Y���f[$N#M�Jy���b�q���� Y��E   	  �9   1SPS�mD��pH�H@.�=x�   h    H   LtA`�B��uM�r��                io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/GAME FILES/_lab.cfg.lnk                      0100777 0000000 0000000 00000002721 12762403743 022773  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       L        �      F�      ��+�����+����t����                     y P�O� �:i�� +00� /D:\                   V 1     �H'8 Archive @ 	  ﾊH��H'8.   E                   �o# A r c h i v e    P 1     �H1_ Cloud < 	  ﾥHm��H1_.   �                   ��� C l o u d    P 1     �H& Files < 	  ﾱH`�H&.   W                   u F i l e s    V 1     
IH Backups @ 	  ﾊH�
IH.   F                   }i� B a c k u p s    r 1     
IH Clean Game Files  R 	  �
IMG
IH.   J                  }i� C l e a n   G a m e   F i l e s     � 1     
ImG0 Counter-Strike Global Offensive p 	  �
I�F
ImG.   #H                  �� C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e   . N 1     
IQ csgo  : 	  �
I�F
IQ.   �H                  <�� c s g o    J 1     "If� cfg 8 	  �
I$G"If�.   7I                  .�� c f g    V 2 �  �HoZ  lab.cfg @ 	  �
I$G
I$G.   ]I                  �?� l a b . c f g      �            9       �         ��8F   Media Volume D:\Archive\Cloud\Files\Backups\Clean Game Files\Counter-Strike Global Offensive\csgo\cfg\lab.cfg  	 . \ l a b . c f g X D : \ A r c h i v e \ C l o u d \ F i l e s \ B a c k u p s \ C l e a n   G a m e   F i l e s \ C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e \ c s g o \ c f g `     �X       agentmain       �f[$N#M�Jy�ɸ�b�q���� Y���f[$N#M�Jy�ɸ�b�q���� Y��E   	  �9   1SPS�mD��pH�H@.�=x�   h    H   LtA`�B��uM�r��                                                           io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/GAME FILES/_sv_bunnyhopping.cfg.lnk          0100777 0000000 0000000 00000003031 12762403752 025460  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       L        �      F�      #嗼m�#嗼m��,����p$                     � P�O� �:i�� +00� /D:\                   V 1     �H'8 Archive @ 	  ﾊH��H'8.   E                   �o# A r c h i v e    P 1     �H1_ Cloud < 	  ﾥHm��H1_.   �                   ��� C l o u d    P 1     �H& Files < 	  ﾱH`�H&.   W                   u F i l e s    V 1     
IH Backups @ 	  ﾊH�
IH.   F                   }i� B a c k u p s    r 1     
IH Clean Game Files  R 	  �
IMG
IH.   J                  }i� C l e a n   G a m e   F i l e s     � 1     
ImG0 Counter-Strike Global Offensive p 	  �
I�F
ImG.   #H                  �� C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e   . N 1     
IQ csgo  : 	  �
I�F
IQ.   �H                  <�� c s g o    J 1     "If� cfg 8 	  �
I$G"If�.   7I                  .�� c f g    z 2 p$  !I��  sv_bunnyhopping.cfg X 	  �I�NI�N.   ��	                  T{ s v _ b u n n y h o p p i n g . c f g   "   �            9       �         ��8F   Media Volume D:\Archive\Cloud\Files\Backups\Clean Game Files\Counter-Strike Global Offensive\csgo\cfg\sv_bunnyhopping.cfg   . \ s v _ b u n n y h o p p i n g . c f g X D : \ A r c h i v e \ C l o u d \ F i l e s \ B a c k u p s \ C l e a n   G a m e   F i l e s \ C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e \ c s g o \ c f g `     �X       agentmain       �f[$N#M�Jy����0m�n����yKj�j�f[$N#M�Jy����0m�n����yKj�jE   	  �9   1SPS�mD��pH�H@.�=x�   h    H   LtA`�B��uM�r��                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/GAME FILES/_sv_chain.cfg.lnk                 0100777 0000000 0000000 00000002760 12762403755 024035  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       L        �      F�      �/v�>��/v�>�цn_@�^                     � P�O� �:i�� +00� /D:\                   V 1     �H'8 Archive @ 	  ﾊH��H'8.   E                   �o# A r c h i v e    P 1     �H1_ Cloud < 	  ﾥHm��H1_.   �                   ��� C l o u d    P 1     �H& Files < 	  ﾱH`�H&.   W                   u F i l e s    V 1     
IH Backups @ 	  ﾊH�
IH.   F                   }i� B a c k u p s    r 1     
IH Clean Game Files  R 	  �
IMG
IH.   J                  }i� C l e a n   G a m e   F i l e s     � 1     
ImG0 Counter-Strike Global Offensive p 	  �
I�F
ImG.   #H                  �� C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e   . N 1     
IQ csgo  : 	  �
I�F
IQ.   �H                  <�� c s g o    J 1     "If� cfg 8 	  �
I$G"If�.   7I                  .�� c f g    f 2 ^  !IXX  sv_chain.cfg  J 	  �!I;V!I;V.   ��	                  /�o s v _ c h a i n . c f g      �            9       �         ��8F   Media Volume D:\Archive\Cloud\Files\Backups\Clean Game Files\Counter-Strike Global Offensive\csgo\cfg\sv_chain.cfg   . \ s v _ c h a i n . c f g X D : \ A r c h i v e \ C l o u d \ F i l e s \ B a c k u p s \ C l e a n   G a m e   F i l e s \ C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e \ c s g o \ c f g `     �X       agentmain       �f[$N#M�Jy�ɷ��N$p����=�k��f[$N#M�Jy�ɷ��N$p����=�k�E   	  �9   1SPS�mD��pH�H@.�=x�   h    H   LtA`�B��uM�r��                            io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/autoexec_Development/GAME FILES/_sv_hop_arrays.cfg.lnk            0100777 0000000 0000000 00000003015 12762403760 025110  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       L        �      F�      N��q�N��q�j��~��                     � P�O� �:i�� +00� /D:\                   V 1     �H'8 Archive @ 	  ﾊH��H'8.   E                   �o# A r c h i v e    P 1     �H1_ Cloud < 	  ﾥHm��H1_.   �                   ��� C l o u d    P 1     �H& Files < 	  ﾱH`�H&.   W                   u F i l e s    V 1     
IH Backups @ 	  ﾊH�
IH.   F                   }i� B a c k u p s    r 1     
IH Clean Game Files  R 	  �
IMG
IH.   J                  }i� C l e a n   G a m e   F i l e s     � 1     
ImG0 Counter-Strike Global Offensive p 	  �
I�F
ImG.   #H                  �� C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e   . N 1     
IQ csgo  : 	  �
I�F
IQ.   �H                  <�� c s g o    J 1     "If� cfg 8 	  �
I$G"If�.   7I                  .�� c f g    t 2 �  !I��  sv_hop_arrays.cfg T 	  �I SI S.   ��	                  � � s v _ h o p _ a r r a y s . c f g       �            9       �         ��8F   Media Volume D:\Archive\Cloud\Files\Backups\Clean Game Files\Counter-Strike Global Offensive\csgo\cfg\sv_hop_arrays.cfg   . \ s v _ h o p _ a r r a y s . c f g X D : \ A r c h i v e \ C l o u d \ F i l e s \ B a c k u p s \ C l e a n   G a m e   F i l e s \ C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e \ c s g o \ c f g `     �X       agentmain       �f[$N#M�Jy���0m�n����yKj�j�f[$N#M�Jy���0m�n����yKj�jE   	  �9   1SPS�mD��pH�H@.�=x�   h    H   LtA`�B��uM�r��                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/confighop_arrays.cfg                                              0100777 0000000 0000000 00000000725 12764457272 017147  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       alias "_hook" "echo  ;echo  ;echo  ;echo"
alias "config_hook_process" "exec \switches\sv_switches.cfg;sv_cheats 1;sv_client_min_interp_ratio 0;sv_cheats 0"
alias "config_hook_resound" "echo  ;echo  ;echo  ;echo                      {CONFIG HOOK EXECUTED};_hook"
alias "config_hook_boolean" "alias  "clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear"
alias "config_toast" "exec \engine\point_main\_config_toast.cfg"



//exec engine_sys.cfg                                           io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/config_arrays.cfg                                                 0100777 0000000 0000000 00000021051 12764727421 016427  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       clear;echo " ";echo " ";echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: sv_newfangled_jump";echo "ConVar desc: re-locks new-styled hopping from CS: GO";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence.";echo " ";echo "ConVar create: cl_viewbob_0";echo "ConVar desc: Disables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: cl_viewbob_1";echo "ConVar desc: Enables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: agent_cvarlist";echo "ConVar desc: List all of the ConVars articulated by this package."
echo " ";echo "ConVar create: sv_legacy_jump_play";echo "ConVar desc: Enables bhop with bots";echo " ";echo " ";echo " ";echo " "

alias "greenscreen_yellow" "sv_cheats 1;fog_override 1;fog_maxdensity 99999999999999;fog_color 2435 546 32 ;fog_start 0;fog_end 1;mat_postprocess_enable 0"  //YELLOW KEY MATTE
alias "yellowscreen_build" "cl_draw_only_deathnotices 1"

alias "chroma_key_off" "fog_override 0;mat_postprocess_enable 1;cl_draw_only_deathnotices 0"
alias "bluescreen_build_xzlib" "sv_cheats 1;fog_override 1;fog_maxdensity 99999999;fog_color 0 69 997"
alias "bluescreen_build" "cl_draw_only_deathnotices 1"
alias "bluescreen_output" ";fog_start 0;fog_end 1;mat_postprocess_enable 0"  //GREEN KEY MATTE
alias "bluescreen_alpha" "bluescreen_build_xzlib;bluescreen_output;bluescreen_build"


alias "greenscreen_build_xzlib" "sv_cheats 1;fog_override 1;fog_maxdensity 99999999;fog_color 48 346 12";alias "greenscreen_build" "cl_draw_only_deathnotices 1"
alias "greenscreen_output" ";fog_start 0;fog_end 1;mat_postprocess_enable 0";alias "greenscreen_key" "greenscreen_build_xzlib;greenscreen_output;greenscreen_build"

alias "greenscreen_build_xzlib" "sv_cheats 1;fog_override 1;fog_maxdensity 99999999;fog_color 48 346 12"
alias "greenscreen_build" "cl_draw_only_deathnotices 1"
alias "greenscreen_output" ";fog_start 0;fog_end 1;mat_postprocess_enable 0"  //GREEN KEY MATTE
alias "greenscreen_key" "greenscreen_build_xzlib;greenscreen_output;greenscreen_build"
alias "viewbob_amtlib_01" "cl_bobcycle 0.980000;cl_use_new_headbob 0;cl_bobup 0.5" 										//		FLAG: FCVAR_HIDDEN
alias "viewbob_amtlib_02" "cl_bob_version -1;cl_bobamt_vert 0" 															//		FLAG: FCVAR_HIDDEN
alias "viewbob_amtlib_03" "cl_bobamt_lat 0;cl_bob_lower_amt 0" 															//		FLAG: FCVAR_HIDDEN
alias "viewbob_antlib_01" "cl_bobcycle 0.98;cl_use_new_headbob 1;cl_bobup 0.5" 											//		FLAG: FCVAR_HIDDEN
alias "viewbob_antlib_02" "cl_bob_version 0;cl_bobamt_vert 0.25" 														//		FLAG: FCVAR_HIDDEN
alias "viewbob_antlib_03" "cl_bobamt_lat 0.4";cl_bob_lower_amt 21"" 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_spacer" "echo  ;echo  ;echo  ;echo  ;echo  ;echo  " 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_onespace" "echo  ;echo  ;echo  ;echo  ;" 															//		FLAG: FCVAR_HIDDEN
alias "_cvarlist_header" "echo                   Printing CvarList..." 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_transam" "echo {ConVar, NULL}: viewport_default" 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_index" "echo {ConVar, SUBTRACT}: disable_shells;echo {ConVar, ADD}: enable_shells" 					//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_vagrant" "echo {ConVar, SUBTRACT}: disable_tracers;echo {ConVar, ADD}: enable_tracers" 				//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_laymans" "echo {ConVar, SUBTRACT}: disable_flashes;echo {ConVar, ADD}: enable_flashes" 				//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_op" "echo {ConVar, SUBTRACT}: disable_post_process;echo {ConVar, ADD}: enable_post_process" 			//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_xml" "echo {ConVar, SUBTRACT}: clamp_peripherals;echo {ConVar, ADD}: flow_peripherals" 				//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_seq" "echo {ConVar}: round_endwarmup;echo {ConVar, SUBTRACT}: cl_viewbob_0;echo {ConVar, ADD}: cl_viewbob_1" 																										  //      FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_" "echo  ;echo  ;echo  ;echo  ;echo Successfully Printed ( 27 ) cvars.;echo  ;echo  ;echo  ;echo  " 	//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_illbin" "echo {ConVar}: _camera;echo {ConVar}: _play;echo {ConVar}: viewport_compact;echo {ConVar}: viewport_cubed" 																										   //      FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_builder" "sv_cvarlist_vagrant;sv_cvarlist_laymans;sv_cvarlist_op;sv_cvarlist_xml" 					//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_worker" "sv_cvarlist_sequencer;sv_cvarlist_illbin;sv_cvarlist_seq;sv_cvarlist_transam;sv_cvarlist_kstyle;sv_cvarlist_index" 																																							// ^ <- FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_kstyle" "echo {ConVar, SUBTRACT}: disable_visual_recoil;echo {ConVar, ADD}: enable_visual_recoil;echo {ConVar, NULL}: default_visual_recoil" 																								 //		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_sequencer" "echo {ConVar}: m4;echo {ConVar}: sv_legacy_jump;echo {ConVar}: sv_newfangled_jump;echo {ConVar}: round_reset" 																											//		FLAG: FCVAR_HIDDEN

																																					
																																					
																																					
																																					
alias "green_screen" "greenscreen_key;echo This is the non-toggle version of the greenscreen ConVar!"			//		FLAG: FCVAR_CLIENT
alias "blue_screen" "bluescreen_alpha;echo This is the non-toggle version of the greenscreen ConVar!"
alias "yellow_screen" "greenscreen_yellow;echo This is the non-toggle version of the yellowscreen ConVar!"		//		FLAG: FCVAR_CLIENT
alias "cl_viewbob_0" "viewbob_amtlib_01;viewbob_amtlib_02;viewbob_amtlib_03" 									//		FLAG: FCVAR_CLIENT
alias "disable_visual_recoil" "weapon_recoil_scale 0;weapon_recoil_view_punch_extra 0" 							//		FLAG: FCVAR_CLIENT
alias "enable_visual_recoil" "weapon_recoil_view_punch_extra 0.14646326532;weapon_recoil_scale 1.787765" 		//		FLAG: FCVAR_CLIENT
alias "default_visual_recoil" "weapon_recoil_view_punch_extra 0.055;weapon_recoil_scale 2.0" 					//		FLAG: FCVAR_CLIENT
alias "enable_shells" "cl_ejectbrass 1" 																		//		FLAG: FCVAR_CLIENT
alias "disable_shells" "cl_ejectbrass 0" 																		//		FLAG: FCVAR_CLIENT
alias "cl_viewbob_1" "viewbob_antlib_01;viewbob_antlib_02;viewbob_antlib_03" 									//		FLAG: FCVAR_CLIENT
alias "disable_tracers" "r_drawtracers 0;r_drawtracers_firstperson 0" 											//		FLAG: FCVAR_CLIENT
alias "enable_tracers" "r_drawtracers 1;r_drawtracers_firstperson 1" 											//		FLAG: FCVAR_CLIENT
alias "disable_flashes" "sv_flashbang_strength 0" 																//		FLAG: FCVAR_CLIENT
alias "enable_flashes" "sv_flashbang_strength 3.55" 															//		FLAG: FCVAR_CLIENT
alias "disable_post_process" "mat_postprocess_enable 0" 														//		FLAG: FCVAR_CLIENT
alias "enable_post_process" "mat_postprocess_enable 1" 															//		FLAG: FCVAR_CLIENT
alias "disable_grenade_radio" "sv_ignoregrenaderadio 1" 														//		FLAG: FCVAR_CLIENT
alias "enable_grenade_radio" "sv_ignoregrenaderadio 0" 															//		FLAG: FCVAR_CLIENT
alias "cl_clamp_bin" "disable_visual_recoil;disable_tracers;cl_viewbob_0" 										//		FLAG: FCVAR_CLIENT
alias "cl_clamp_cue" "disable_flashes;disable_post_process;disable_grenade_radio" 								//		FLAG: FCVAR_CLIENT
alias "clamp_peripherals" "cl_clamp_bin;cl_clamp_cue" 															//		FLAG: FCVAR_CLIENT
alias "cl_flow_bin" "enable_visual_recoil;enable_tracers;cl_viewbob_1" 											//		FLAG: FCVAR_CLIENT
alias "cl_flow_cue" "enable_flashes;enable_post_process;enable_grenade_radio" 									//		FLAG: FCVAR_CLIENT
alias "flow_peripherals" "cl_flow_bin;cl_flow_cue" 																//		FLAG: FCVAR_CLIENT
alias "viewport_compact" "r_aspectratio 2.22" 																	//		FLAG: FCVAR_CLIENT
alias "viewport_default" "r_aspectratio 0" 																		//		FLAG: FCVAR_CLIENT
alias "viewport_cubed" "r_aspectratio 3.00000000043543" 														//		FLAG: FCVAR_CLIENT
alias "_camera" "r_drawviewmodel 0;hidehud 4" 																	//		FLAG: FCVAR_CLIENT
alias "_play" "r_drawviewmodel 1;hidehud 0" 																	//		FLAG: FCVAR_CLIENT
alias "agent_cvarlist" "clear;sv_cvarlist_onespace;_cvarlist_header;sv_cvarlist_spacer;sv_cvarlist_worker;sv_cvarlist_builder;sv_cvarlist_" 
																												//     ^FLAG: FCVAR_CLIENT
																																				
																																				
//	oldv.-FINAL LOAD
_spline_angles
clamp_crosshair
clamp_buy_time
clamp_team_selection
render_flow_control
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/config_binds.cfg                                                  0100777 0000000 0000000 00000000066 12764507321 016223  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       

bind "r" "+agent_reload"
bind "key" "greenscreen"                                                                                                                                                                                                                                                                                                                                                                                                                                                                          io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/config_flowcontrol.cfg                                            0100777 0000000 0000000 00000000756 12763550355 017506  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       alias "_hook" "echo  ;echo  ;echo  ;echo"
alias "config_hook_process" "exec \switches\sv_switches.cfg;sv_cheats 1;sv_client_min_interp_ratio 0;sv_cheats 0"
alias "config_hook_resound" "echo  ;echo  ;echo  ;echo                      {CONFIG HOOK EXECUTED};_hook"
alias "config_hook_boolean" "alias  "clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear"
alias "config_toast" "exec \engine\point_main\_config_toast.cfg"


exec \trigger\sv_hook.cfg
//exec engine_sys.cfg                  io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/config_main.cfg                                                   0100777 0000000 0000000 00000031324 12764466542 016062  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       

//Test ways of making the FCVAR_HIDDEN and FCVAR_DEVELOPMENTONLY ConVars be re-written at the very end of config load, to cause them to be 'hidden'


				//											ConVars
//____________________________________________________________________________________________________________________________________________________\\
																																						
														//		   HIDDEN
alias greenscreen_state greenscreen_on																							// FCVAR_HIDDEN
alias greenscreen_on "greenscreen_key; alias greenscreen_state greenscreen_off"													// FCVAR_HIDDEN
alias greenscreen_off "chroma_key_off; alias greenscreen_state greenscreen_on"													// FCVAR_HIDDEN
alias yellowscreen_state yellowscreen_on																						// FCVAR_HIDDEN
alias yellowscreen_on "greenscreen_yellow;yellowscreen_build; alias yellowscreen_state yellowscreen_off"						// FCVAR_HIDDEN
alias yellowscreen_off "chroma_key_off; alias yellowscreen_state yellowscreen_on"												// FCVAR_HIDDEN
alias bluescreen_state bluescreen_on																							// FCVAR_HIDDEN
alias bluescreen_on "bluescreen_alpha; alias bluescreen_state bluescreen_off"								// FCVAR_HIDDEN
alias bluescreen_off "chroma_key_off; alias bluescreen_state bluescreen_on"														// FCVAR_HIDDEN
alias "crosshair_redist01" "cl_crosshair_dynamic_splitdist 2;cl_crosshair_dynamic_splitalpha_outermod 0.300000"					// FCVAR_HIDDEN
alias "crosshair_redist02" "cl_crosshair_dynamic_splitalpha_innermod 1;cl_crosshair_dynamic_maxdist_splitratio 0.05"			// FCVAR_HIDDEN
alias "crosshair_redist03" "cl_crosshair_dynamic_maxdist_splitratio 0.05;cl_crosshaircolor 4;cl_crosshairsize 3.5897877"		// FCVAR_HIDDEN
alias "iclear" "exec confighop_arrays.cfg;mp_buy_anywhere 1"																	// FCVAR_HIDDEN
alias "bhop_reticulate" "iclear;mirv_cvar_unhide_all;sv_enablebunnyhopping 1;sv_airaccelerate 1000"								// FCVAR_HIDDEN
alias "bhop_triangulate" "iclear;bot_kick;mp_warmup_end;sv_staminajumpcost 0;sv_staminalandcost 0"								// FCVAR_HIDDEN
alias "bhop_triangulater" "iclear;mp_warmup_end;sv_staminajumpcost 0;sv_staminalandcost 0"										// FCVAR_HIDDEN
alias "bhop_rescind" "iclear;mirv_cvar_unhide_all;sv_enablebunnyhopping 0;sv_airaccelerate 12 "									// FCVAR_HIDDEN
alias "bhop_retract" "iclear;sv_staminajumpcost .080;sv_staminalandcost .050"													// FCVAR_HIDDEN
alias "clamp_debuggers_A" "say [Source Jump Behaviour Mode]: Legacy"															// FCVAR_HIDDEN
alias "clamp_debuggers_B" "say [Source Jump Behaviour Mode]: New Fangled"														// FCVAR_HIDDEN
alias "clamp_debuggers_C" "say [ROUND RESET]"																					// FCVAR_HIDDEN
alias "clamp_debuggers_N" "say [WARMUP CANCELLED]"																				// FCVAR_HIDDEN
alias "mod_fire_debuggerX" "iclear;echo " ";echo [Source Jump Behaviour Mode]: Legacy;clamp_debuggers_A"						// FCVAR_HIDDEN
alias "mod_fire_debuggerY" "iclear;echo " ";echo [Source Jump Behaviour Mode]: New Fangled;clamp_debuggers_B"					// FCVAR_HIDDEN
alias "mod_fire_debuggerZ" "iclear;echo " ";echo [ROUND RESET];clamp_debuggers_C"												// FCVAR_HIDDEN
alias "mod_fire_debuggerC" "iclear;echo " ";echo [WARMUP CANCELLED];clamp_debuggers_N"											// FCVAR_HIDDEN
alias "mat_hack_on" "r_drawothermodels 2; alias mat_hack_state mat_hack_off"													// FCVAR_HIDDEN
alias "mat_hack_off" "r_drawothermodels 1; alias mat_hack_state mat_hack_on"													// FCVAR_HIDDEN
alias "sv_debug_workerA" "exec _extenuating_arrays.cfg"																			// FCVAR_HIDDEN
alias "32_bit_" "mp_autoteambalance 1;bot_quota 10"																				// FCVAR_HIDDEN
//alias "float_teams" "mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"														// FCVAR_HIDDEN
alias "add_ct_bots" "bot_add_ct FPSGAMERGOD1999;bot_add_ct Oxford Smith;bot_add_ct Mau5Hau5 | tEye;bot_add_ct Nashville Dog"	// FCVAR_HIDDEN
alias "round_endwarmup" "mp_warmup_end;bot_kick;mod_fire_debuggerC;_spline_angles"												// FCVAR_HIDDEN
alias "ms3" "player_limit_jump_speed 0"																							// FCVAR_HIDDEN
alias "+agent_reload" "givecurrentammo;+reload"																					// FCVAR_HIDDEN
alias "-agent_reload" "givecurrentammo;-reload"																					// FCVAR_HIDDEN
//ass

													//		        BOTS
																																						 
alias "add_t_bots" "bot_add_ct FPSGAMERGOD1999;bot_add_ct CloudM.Hydraxi;bot_add_ct Oxford Smith;bot_add_ct Mau5Hau5 | tEye;bot_add_ct Nashville Dog"
																																//^FCVAR_HIDDEN
 alias "five_bots_CT" "bot_quota_mode 0;_bots_add_V;_bots_add_C;_bots_add_Y;_bots_add_X;_bots_add_Z;bot_add_PASS2;_bot_add_var"	// FCVAR_HIDDEN
 alias "five_bots_T" "bot_quota_mode 0;bots_add_V;bots_add_C;bots_add_Y;bots_add_X;bots_add_Z;bot_add_PASS1;bot_add_var"		// FCVAR_HIDDEN
alias "three_bots" "bot_quota_mode 0;bots_addV;bots_addC;bots_addY;bots_addX;bots_addZ"											// FCVAR_HIDDEN
alias "kick_t" "bot_kick t;bot_kick t;bot_kick t;bot_kick t;bot_kick t;bot_quota 5"												// FCVAR_HIDDEN
alias "kick_ct" "bot_kick ct;bot_kick ct;bot_kick ct;bot_kick ct;bot_kick ct;bot_quota 5"										// FCVAR_HIDDEN
																																						 
alias "bot_add_PASS1" "bot_add_ct Lady Grey;bot_add_ct Emotional Surgery"														// FCVAR_HIDDEN
alias "bot_add_PASS2" "bot_add_t Lady Grey;bot_add_t Emotional Surgery"															// FCVAR_HIDDEN
alias "bots_addV" "bot_add_ct Mau5Hau5 | tEye;flow_teams"																		// FCVAR_HIDDEN
alias "bots_addC" "bot_add_ct Nashville Dog;flow_teams"																			// FCVAR_HIDDEN
alias "bots_addY" "bot_add_ct Oxford Smith;flow_teams"																			// FCVAR_HIDDEN
alias "bots_addX" "bot_add_ct CloudM.Hydraxi;flow_teams"																		// FCVAR_HIDDEN
alias "bots_addZ" "bot_add_ct FPSGAMERGOD1999;flow_teams"																		// FCVAR_HIDDEN
																																						 
alias "bot_add_var" "bot_add_ct Liquid;bot_add_t UnderDOG MIKE"																	// FCVAR_HIDDEN
alias "bots_add_V" "bot_add_ct Mau5Hau5 | tEye;flow_teams_x;"																	// FCVAR_HIDDEN
alias "bots_add_C" "bot_add_ct Nashville Dog;flow_teams_x"																		// FCVAR_HIDDEN
alias "bots_add_Y" "bot_add_ct Oxford Smith;flow_teams_x"																		// FCVAR_HIDDEN
alias "bots_add_X" "bot_add_ct CloudM.Hydraxi;flow_teams_x"																		// FCVAR_HIDDEN
alias "bots_add_Z" "bot_add_ct FPSGAMERGOD1999;flow_teams_x"																	// FCVAR_HIDDEN
																																						 
alias "_bot_add_var" "bot_add_t Liquid;bot_add_t UnderDOG MIKE"																	// FCVAR_HIDDEN
alias "_bots_add_V" "bot_add_t Mau5Hau5 | tEye;flow_teams_x;"																	// FCVAR_HIDDEN
alias "_bots_add_C" "bot_add_t Nashville Dog;flow_teams_x"																		// FCVAR_HIDDEN
alias "_bots_add_Y" "bot_add_t Oxford Smith;flow_teams_x"																		// FCVAR_HIDDEN
alias "_bots_add_X" "bot_add_t CloudM.Hydraxi;flow_teams_x"																		// FCVAR_HIDDEN
alias "_bots_add_Z" "bot_add_t FPSGAMERGOD1999;flow_teams_x"																	// FCVAR_HIDDEN
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		       CLIENT
alias "game_pause" "mp_pause_match"											 											// FCVAR_CLIENT
alias "game_unpause" "mp_unpause_match"										 											// FCVAR_CLIENT
alias "round_reset" "iclear;map de_dust2;mod_fire_debuggerZ;_spline_angles"												// FCVAR_CLIENT
alias "offline_bots" "32_bit_;sv_legacy_jump_play;float_teams"															// FCVAR_CLIENT
alias "mat_hack_state" "mat_hack_on"										 											// FCVAR_CLIENT
alias "sv_newfangled_jump" "bhop_rescind;bhop_retract;mod_fire_debuggerY;_spline_angles"								// FCVAR_CLIENT
alias "sv_legacy_jump_play" "bhop_reticulate;bhop_triangulater;float_teams;ms3;mod_fire_debuggerX;_spline_angles"		// FCVAR_CLIENT
alias "sv_legacy_jump" "bhop_reticulate;bhop_triangulate;ms3;mod_fire_debuggerX;_spline_angles"							// FCVAR_CLIENT
alias "clamp_ai" "bot_dont_shoot 1"																						// FCVAR_CLIENT
alias "flow_ai" "bot_dont_shoot 0"																						// FCVAR_CLIENT
alias "clamp_ai_full" "bot_dont_shoot 1;sb_stop 1"																		// FCVAR_CLIENT
alias "flow_ai_full" "bot_dont_shoot 0;sb_stop 0"																		// FCVAR_CLIENT
alias "greenscreen" "greenscreen_state"																					// FCVAR_CLIENT
alias "yellowscreen" "yellowscreen_state"																				// FCVAR_CLIENT
alias "bluescreen" "bluescreen_state"																					// FCVAR_CLIENT
alias "mat_hack" "mat_hack_state"																						// FCVAR_CLIENT
alias "m4" "give weapon_m4a1_silencer;give weapon_deagle;givecurrentammo"												// FCVAR_CLIENT
alias "clamp_buy_time" "mp_buytime 650"																					// FCVAR_CLIENT
alias "clamp_team_selection" "mp_force_assign_teams 1"																	// FCVAR_CLIENT
alias "flow_team_selection" "mp_force_assign_teams 0"																	// FCVAR_CLIENT
alias "render_default_flow" "cl_maxrenderable_dist 3000"																// FCVAR_CLIENT
alias "render_flow_control" "cl_maxrenderable_dist 9999"																// FCVAR_CLIENT


																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		   DEVELOPMENTONLY

alias "clamp_crosshair" "crosshair_redist01;crosshair_redist02;crosshair_redist03"										// FCVAR_DEVELOPMENTONLY

//	_Environment_Setup_

ENGINE_flowcontrol_setup			// FCVAR_DEVELOPMENTONLY
ENGINE_clampcontrol_setup			// FCVAR_DEVELOPMENTONLY
ENGINE_cvarlist_search				// FCVAR_DEVELOPMENTONLY
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		      ARCHIVED
													
alias "test_remove_CT" "32_bit_;sv_legacy_jump_play;float_teams;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct"									  										  // FCVAR_ARCHIVED
alias "test_deathmatch" "mp_respawn_on_death_t 1;mp_respawn_on_death_ct - 1" 										// FCVAR_ARCHIVED | defaults are 0;
																																						 



//			#Resounding_PRINT

clear;echo " ";echo " ";echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: sv_newfangled_jump";echo "ConVar desc: re-locks new-styled hopping from CS: GO";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence.";echo " ";echo "ConVar create: cl_viewbob_0";echo "ConVar desc: Disables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: cl_viewbob_1";echo "ConVar desc: Enables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: agent_cvarlist";echo "ConVar desc: List all of the ConVars articulated by this package."
echo " ";echo "ConVar create: sv_legacy_jump_play";echo "ConVar desc: Enables bhop with bots";echo " ";echo " ";echo " ";echo " "









																																							//															REFERENCED

//alias "flow_teams_ct" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0;kick_ct"
//alias "flow_teams_t" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0;kick_t"
//iclear;echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence."
//alias "flow_teams" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"							//<FCVAR_REFERENCED  ^      ^
//alias "flow_teams_x" "bot_quota 7;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"							// FCVAR_REFERENCED
//alias "t_teams_bots" "bot_add t;bot_add t;bot_add t;bot_add t;bot_add t"										// FCVAR_REFERENCED
//alias "ct_teams_bots" "bot_add ct;bot_add ct;bot_add ct;bot_add ct;bot_add ct"								// FCVAR_REFERENCED
//alias "_teams" "bot_quota 9;mp_autokick 1;mp_autoteambalance 1;mp_limitteams 2;t_teams_bots;ct_teams_bots"	// FCVAR_REFERENCED
//alias "clamp_teams" "_teams"																					// FCVAR_REFERENCED
																																						
																																						
																																						
				ifTo;		bool											;				+;
					configHopArrayScalar;
										also; ConVarLayerVector				;	then	
																					point_clientcmd
											 configCvarListBoolean			;			const.	                                                                                                                                                                                                                                                                                                            io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/                                                           0040777 0000000 0000000 00000000000 12765171247 014366  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/AMTlib.cfg                                                 0100777 0000000 0000000 00000045514 12763550567 016174  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       //
//											PUBLIC FACING LIBRARIES
//
//
//
//					SV_CHAIN

alias "_hook" "echo  ;echo  ;echo  ;echo"
alias "config_hook_process" "exec \switches\sv_switches.cfg;sv_cheats 1;sv_client_min_interp_ratio 0;sv_cheats 0"
alias "config_hook_resound" "echo  ;echo  ;echo  ;echo                      {CONFIG HOOK EXECUTED};_hook"
alias "config_hook_boolean" "alias  "clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear"
alias "config_toast" "exec \engine\point_main\_config_toast.cfg"


//	exec \trigger\sv_hook.cfg
//
//____________________________________________________________________________________________________________________________________________________\\
//
//
//					SV_HOOK
//
//				HOOKS of CONFIGURATION CHAIN
//				 prints splash toast, loads
//						config main
//

config_toast
config_hook_process

//____________________________________________________________________________________________________________________________________________________\\

//					SWITCHES


alias "ENGINE_flowcontrol_setup" "sv_cheats 1;mp_roundtime 75;mp_roundtime_defuse 0"				// FCVAR_DEVELOPMENTONLY
alias "_spline_angles" "sv_cheats 1;mp_roundtime 75;mp_roundtime_defuse 0"							// FCVAR_DEVELOPMENTONLY
alias "ENGINE_clampcontrol_setup" "exec sv_hop_arrays.cfg"											// FCVAR_DEVELOPMENTONLY
alias "ENGINE_cvarlist_search" "exec \switches\agent_cvar_search.cfg"								// FCVAR_DEVELOPMENTONLY


																																								
alias "m4" "give weapon_m4a1_silencer;give weapon_deagle;givecurrentammo"							// FCVAR_CLIENT
alias "clamp_buy_time" "mp_buytime 650"																// FCVAR_CLIENT
alias "clamp_team_selection" "mp_force_assign_teams 1"												// FCVAR_CLIENT
alias "flow_team_selection" "mp_force_assign_teams 0"												// FCVAR_CLIENT
alias "render_default_flow" "cl_maxrenderable_dist 3000"											// FCVAR_CLIENT
alias "render_flow_control" "cl_maxrenderable_dist 9999"											// FCVAR_CLIENT


//____________________________________________________________________________________________________________________________________________________\\
//
//
//
//
//
//
//
//
//Test ways of making the FCVAR_HIDDEN and FCVAR_DEVELOPMENTONLY ConVars be re-written at the very end of config load, to cause them to be 'hidden'


				//											ConVars
//____________________________________________________________________________________________________________________________________________________\\
																																						
														//		   HIDDEN
alias "crosshair_redist01" "cl_crosshair_dynamic_splitdist 2;cl_crosshair_dynamic_splitalpha_outermod 0.300000"					// FCVAR_HIDDEN
alias "crosshair_redist02" "cl_crosshair_dynamic_splitalpha_innermod 1;cl_crosshair_dynamic_maxdist_splitratio 0.05"			// FCVAR_HIDDEN
alias "crosshair_redist03" "cl_crosshair_dynamic_maxdist_splitratio 0.05;cl_crosshaircolor 4;cl_crosshairsize 3.5897877"		// FCVAR_HIDDEN
alias "iclear" "exec sv_hop_arrays.cfg;mp_buy_anywhere 1"																		// FCVAR_HIDDEN
alias "bhop_reticulate" "iclear;mirv_cvar_unhide_all;sv_enablebunnyhopping 1;sv_airaccelerate 1000"								// FCVAR_HIDDEN
alias "bhop_triangulate" "iclear;bot_kick;mp_warmup_end;sv_staminajumpcost 0;sv_staminalandcost 0"								// FCVAR_HIDDEN
alias "bhop_triangulater" "iclear;mp_warmup_end;sv_staminajumpcost 0;sv_staminalandcost 0"										// FCVAR_HIDDEN
alias "bhop_rescind" "iclear;mirv_cvar_unhide_all;sv_enablebunnyhopping 0;sv_airaccelerate 12 "									// FCVAR_HIDDEN
alias "bhop_retract" "iclear;sv_staminajumpcost .080;sv_staminalandcost .050"													// FCVAR_HIDDEN
alias "clamp_debuggers_A" "say [Source Jump Behaviour Mode]: Legacy"															// FCVAR_HIDDEN
alias "clamp_debuggers_B" "say [Source Jump Behaviour Mode]: New Fangled"														// FCVAR_HIDDEN
alias "clamp_debuggers_C" "say [ROUND RESET]"																					// FCVAR_HIDDEN
alias "clamp_debuggers_N" "say [WARMUP CANCELLED]"																				// FCVAR_HIDDEN
alias "mod_fire_debuggerX" "iclear;echo " ";echo [Source Jump Behaviour Mode]: Legacy;clamp_debuggers_A"						// FCVAR_HIDDEN
alias "mod_fire_debuggerY" "iclear;echo " ";echo [Source Jump Behaviour Mode]: New Fangled;clamp_debuggers_B"					// FCVAR_HIDDEN
alias "mod_fire_debuggerZ" "iclear;echo " ";echo [ROUND RESET];clamp_debuggers_C"												// FCVAR_HIDDEN
alias "mod_fire_debuggerC" "iclear;echo " ";echo [WARMUP CANCELLED];clamp_debuggers_N"											// FCVAR_HIDDEN
alias "mat_hack_on" "r_drawothermodels 2; alias mat_hack_state mat_hack_off"													// FCVAR_HIDDEN
alias "mat_hack_off" "r_drawothermodels 1; alias mat_hack_state mat_hack_on"													// FCVAR_HIDDEN
alias "sv_debug_workerA" "exec _extenuating_arrays.cfg"																			// FCVAR_HIDDEN
alias "32_bit_" "mp_autoteambalance 1;bot_quota 10"																				// FCVAR_HIDDEN
//alias "float_teams" "mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"														// FCVAR_HIDDEN
alias "add_ct_bots" "bot_add_ct FPSGAMERGOD1999;bot_add_ct Oxford Smith;bot_add_ct Mau5Hau5 | tEye;bot_add_ct Nashville Dog"	// FCVAR_HIDDEN
alias "round_endwarmup" "mp_warmup_end;bot_kick;mod_fire_debuggerC;_spline_angles"												// FCVAR_HIDDEN
alias "ms3" "player_limit_jump_speed 0"																							// FCVAR_HIDDEN


													//		        BOTS
																																						 
alias "add_t_bots" "bot_add_ct FPSGAMERGOD1999;bot_add_ct CloudM.Hydraxi;bot_add_ct Oxford Smith;bot_add_ct Mau5Hau5 | tEye;bot_add_ct Nashville Dog"
																																//^FCVAR_HIDDEN
 alias "five_bots_CT" "bot_quota_mode 0;_bots_add_V;_bots_add_C;_bots_add_Y;_bots_add_X;_bots_add_Z;bot_add_PASS2;_bot_add_var"	// FCVAR_HIDDEN
 alias "five_bots_T" "bot_quota_mode 0;bots_add_V;bots_add_C;bots_add_Y;bots_add_X;bots_add_Z;bot_add_PASS1;bot_add_var"		// FCVAR_HIDDEN
alias "three_bots" "bot_quota_mode 0;bots_addV;bots_addC;bots_addY;bots_addX;bots_addZ"											// FCVAR_HIDDEN
alias "kick_t" "bot_kick t;bot_kick t;bot_kick t;bot_kick t;bot_kick t;bot_quota 5"												// FCVAR_HIDDEN
alias "kick_ct" "bot_kick ct;bot_kick ct;bot_kick ct;bot_kick ct;bot_kick ct;bot_quota 5"										// FCVAR_HIDDEN
																																						 
alias "bot_add_PASS1" "bot_add_ct Lady Grey;bot_add_ct Emotional Surgery"														// FCVAR_HIDDEN
alias "bot_add_PASS2" "bot_add_t Lady Grey;bot_add_t Emotional Surgery"															// FCVAR_HIDDEN
alias "bots_addV" "bot_add_ct Mau5Hau5 | tEye;flow_teams"																		// FCVAR_HIDDEN
alias "bots_addC" "bot_add_ct Nashville Dog;flow_teams"																			// FCVAR_HIDDEN
alias "bots_addY" "bot_add_ct Oxford Smith;flow_teams"																			// FCVAR_HIDDEN
alias "bots_addX" "bot_add_ct CloudM.Hydraxi;flow_teams"																		// FCVAR_HIDDEN
alias "bots_addZ" "bot_add_ct FPSGAMERGOD1999;flow_teams"																		// FCVAR_HIDDEN
																																						 
alias "bot_add_var" "bot_add_ct Liquid;bot_add_t UnderDOG MIKE"																	// FCVAR_HIDDEN
alias "bots_add_V" "bot_add_ct Mau5Hau5 | tEye;flow_teams_x;"																	// FCVAR_HIDDEN
alias "bots_add_C" "bot_add_ct Nashville Dog;flow_teams_x"																		// FCVAR_HIDDEN
alias "bots_add_Y" "bot_add_ct Oxford Smith;flow_teams_x"																		// FCVAR_HIDDEN
alias "bots_add_X" "bot_add_ct CloudM.Hydraxi;flow_teams_x"																		// FCVAR_HIDDEN
alias "bots_add_Z" "bot_add_ct FPSGAMERGOD1999;flow_teams_x"																	// FCVAR_HIDDEN
																																						 
alias "_bot_add_var" "bot_add_t Liquid;bot_add_t UnderDOG MIKE"																	// FCVAR_HIDDEN
alias "_bots_add_V" "bot_add_t Mau5Hau5 | tEye;flow_teams_x;"																	// FCVAR_HIDDEN
alias "_bots_add_C" "bot_add_t Nashville Dog;flow_teams_x"																		// FCVAR_HIDDEN
alias "_bots_add_Y" "bot_add_t Oxford Smith;flow_teams_x"																		// FCVAR_HIDDEN
alias "_bots_add_X" "bot_add_t CloudM.Hydraxi;flow_teams_x"																		// FCVAR_HIDDEN
alias "_bots_add_Z" "bot_add_t FPSGAMERGOD1999;flow_teams_x"																	// FCVAR_HIDDEN
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		       CLIENT
alias "game_pause" "mp_pause_match"											 											// FCVAR_CLIENT
alias "game_unpause" "mp_unpause_match"										 											// FCVAR_CLIENT
alias "round_reset" "iclear;map de_dust2;mod_fire_debuggerZ;_spline_angles"												// FCVAR_CLIENT
alias "offline_bots" "32_bit_;sv_legacy_jump_play;float_teams"															// FCVAR_CLIENT
alias "mat_hack_state" "mat_hack_on"										 											// FCVAR_CLIENT
alias "sv_newfangled_jump" "bhop_rescind;bhop_retract;mod_fire_debuggerY;_spline_angles"								// FCVAR_CLIENT
alias "sv_legacy_jump_play" "bhop_reticulate;bhop_triangulater;float_teams;ms3;mod_fire_debuggerX;_spline_angles"		// FCVAR_CLIENT
alias "sv_legacy_jump" "bhop_reticulate;bhop_triangulate;ms3;mod_fire_debuggerX;_spline_angles"							// FCVAR_CLIENT
alias "clamp_ai" "bot_dont_shoot 1"																						// FCVAR_CLIENT
alias "flow_ai" "bot_dont_shoot 0"																						// FCVAR_CLIENT
alias "clamp_ai_full" "bot_dont_shoot 1;sb_stop 1"																		// FCVAR_CLIENT
alias "flow_ai_full" "bot_dont_shoot 0;sb_stop 0"																		// FCVAR_CLIENT
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		   DEVELOPMENTONLY

alias "clamp_crosshair" "crosshair_redist01;crosshair_redist02;crosshair_redist03"										// FCVAR_DEVELOPMENTONLY

//															 _Environment_Setup_

ENGINE_flowcontrol_setup															// FCVAR_DEVELOPMENTONLY
ENGINE_clampcontrol_setup															// FCVAR_DEVELOPMENTONLY
ENGINE_cvarlist_search																// FCVAR_DEVELOPMENTONLY
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		      ARCHIVED
													
alias "test_remove_CT" "32_bit_;sv_legacy_jump_play;float_teams;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct"									  										  // FCVAR_ARCHIVED
alias "test_deathmatch" "mp_respawn_on_death_t 1;mp_respawn_on_death_ct - 1" 										// FCVAR_ARCHIVED | defaults are 0;
																																						 



//			#Resounding_PRINT

clear;echo " ";echo " ";echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: sv_newfangled_jump";echo "ConVar desc: re-locks new-styled hopping from CS: GO";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence.";echo " ";echo "ConVar create: cl_viewbob_0";echo "ConVar desc: Disables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: cl_viewbob_1";echo "ConVar desc: Enables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: agent_cvarlist";echo "ConVar desc: List all of the ConVars articulated by this package."
echo " ";echo "ConVar create: sv_legacy_jump_play";echo "ConVar desc: Enables bhop with bots";echo " ";echo " ";echo " ";echo " "









																																							//															REFERENCED

//alias "flow_teams_ct" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0;kick_ct"
//alias "flow_teams_t" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0;kick_t"
//iclear;echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence."
//alias "flow_teams" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"							//<FCVAR_REFERENCED  ^      ^
//alias "flow_teams_x" "bot_quota 7;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"							// FCVAR_REFERENCED
//alias "t_teams_bots" "bot_add t;bot_add t;bot_add t;bot_add t;bot_add t"										// FCVAR_REFERENCED
//alias "ct_teams_bots" "bot_add ct;bot_add ct;bot_add ct;bot_add ct;bot_add ct"								// FCVAR_REFERENCED
//alias "_teams" "bot_quota 9;mp_autokick 1;mp_autoteambalance 1;mp_limitteams 2;t_teams_bots;ct_teams_bots"	// FCVAR_REFERENCED
//alias "clamp_teams" "_teams"																					// FCVAR_REFERENCED





























alias "viewbob_amtlib_01" "cl_bobcycle 0.980000;cl_use_new_headbob 0;cl_bobup 0.5" 										//		FLAG: FCVAR_HIDDEN
alias "viewbob_amtlib_02" "cl_bob_version -1;cl_bobamt_vert 0" 															//		FLAG: FCVAR_HIDDEN
alias "viewbob_amtlib_03" "cl_bobamt_lat 0;cl_bob_lower_amt 0" 															//		FLAG: FCVAR_HIDDEN
alias "viewbob_antlib_01" "cl_bobcycle 0.98;cl_use_new_headbob 1;cl_bobup 0.5" 											//		FLAG: FCVAR_HIDDEN
alias "viewbob_antlib_02" "cl_bob_version 0;cl_bobamt_vert 0.25" 														//		FLAG: FCVAR_HIDDEN
alias "viewbob_antlib_03" "cl_bobamt_lat 0.4";cl_bob_lower_amt 21"" 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_spacer" "echo  ;echo  ;echo  ;echo  ;echo  ;echo  " 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_onespace" "echo  ;echo  ;echo  ;echo  ;" 															//		FLAG: FCVAR_HIDDEN
alias "_cvarlist_header" "echo                   Printing CvarList..." 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_transam" "echo {ConVar, NULL}: viewport_default" 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_index" "echo {ConVar, SUBTRACT}: disable_shells;echo {ConVar, ADD}: enable_shells" 					//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_vagrant" "echo {ConVar, SUBTRACT}: disable_tracers;echo {ConVar, ADD}: enable_tracers" 				//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_laymans" "echo {ConVar, SUBTRACT}: disable_flashes;echo {ConVar, ADD}: enable_flashes" 				//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_op" "echo {ConVar, SUBTRACT}: disable_post_process;echo {ConVar, ADD}: enable_post_process" 			//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_xml" "echo {ConVar, SUBTRACT}: clamp_peripherals;echo {ConVar, ADD}: flow_peripherals" 				//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_seq" "echo {ConVar}: round_endwarmup;echo {ConVar, SUBTRACT}: cl_viewbob_0;echo {ConVar, ADD}: cl_viewbob_1" 																										  //      FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_" "echo  ;echo  ;echo  ;echo  ;echo Successfully Printed ( 27 ) cvars.;echo  ;echo  ;echo  ;echo  " 	//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_illbin" "echo {ConVar}: _camera;echo {ConVar}: _play;echo {ConVar}: viewport_compact;echo {ConVar}: viewport_cubed" 																										   //      FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_builder" "sv_cvarlist_vagrant;sv_cvarlist_laymans;sv_cvarlist_op;sv_cvarlist_xml" 					//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_worker" "sv_cvarlist_sequencer;sv_cvarlist_illbin;sv_cvarlist_seq;sv_cvarlist_transam;sv_cvarlist_kstyle;sv_cvarlist_index" 																																							// ^ <- FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_kstyle" "echo {ConVar, SUBTRACT}: disable_visual_recoil;echo {ConVar, ADD}: enable_visual_recoil;echo {ConVar, NULL}: default_visual_recoil" 																								 //		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_sequencer" "echo {ConVar}: m4;echo {ConVar}: sv_legacy_jump;echo {ConVar}: sv_newfangled_jump;echo {ConVar}: round_reset" 																											//		FLAG: FCVAR_HIDDEN

																																					
																																					
																																					
																																					
alias "cl_viewbob_0" "viewbob_amtlib_01;viewbob_amtlib_02;viewbob_amtlib_03" 									//		FLAG: FCVAR_CLIENT
alias "disable_visual_recoil" "weapon_recoil_scale 0;weapon_recoil_view_punch_extra 0" 							//		FLAG: FCVAR_CLIENT
alias "enable_visual_recoil" "weapon_recoil_view_punch_extra 0.14646326532;weapon_recoil_scale 1.787765" 		//		FLAG: FCVAR_CLIENT
alias "default_visual_recoil" "weapon_recoil_view_punch_extra 0.055;weapon_recoil_scale 2.0" 					//		FLAG: FCVAR_CLIENT
alias "enable_shells" "cl_ejectbrass 1" 																		//		FLAG: FCVAR_CLIENT
alias "disable_shells" "cl_ejectbrass 0" 																		//		FLAG: FCVAR_CLIENT
alias "cl_viewbob_1" "viewbob_antlib_01;viewbob_antlib_02;viewbob_antlib_03" 									//		FLAG: FCVAR_CLIENT
alias "disable_tracers" "r_drawtracers 0;r_drawtracers_firstperson 0" 											//		FLAG: FCVAR_CLIENT
alias "enable_tracers" "r_drawtracers 1;r_drawtracers_firstperson 1" 											//		FLAG: FCVAR_CLIENT
alias "disable_flashes" "sv_flashbang_strength 0" 																//		FLAG: FCVAR_CLIENT
alias "enable_flashes" "sv_flashbang_strength 3.55" 															//		FLAG: FCVAR_CLIENT
alias "disable_post_process" "mat_postprocess_enable 0" 														//		FLAG: FCVAR_CLIENT
alias "enable_post_process" "mat_postprocess_enable 1" 															//		FLAG: FCVAR_CLIENT
alias "disable_grenade_radio" "sv_ignoregrenaderadio 1" 														//		FLAG: FCVAR_CLIENT
alias "enable_grenade_radio" "sv_ignoregrenaderadio 0" 															//		FLAG: FCVAR_CLIENT
alias "cl_clamp_bin" "disable_visual_recoil;disable_tracers;cl_viewbob_0" 										//		FLAG: FCVAR_CLIENT
alias "cl_clamp_cue" "disable_flashes;disable_post_process;disable_grenade_radio" 								//		FLAG: FCVAR_CLIENT
alias "clamp_peripherals" "cl_clamp_bin;cl_clamp_cue" 															//		FLAG: FCVAR_CLIENT
alias "cl_flow_bin" "enable_visual_recoil;enable_tracers;cl_viewbob_1" 											//		FLAG: FCVAR_CLIENT
alias "cl_flow_cue" "enable_flashes;enable_post_process;enable_grenade_radio" 									//		FLAG: FCVAR_CLIENT
alias "flow_peripherals" "cl_flow_bin;cl_flow_cue" 																//		FLAG: FCVAR_CLIENT
alias "viewport_compact" "r_aspectratio 2.22" 																	//		FLAG: FCVAR_CLIENT
alias "viewport_default" "r_aspectratio 0" 																		//		FLAG: FCVAR_CLIENT
alias "viewport_cubed" "r_aspectratio 3.00000000043543" 														//		FLAG: FCVAR_CLIENT
alias "_camera" "r_drawviewmodel 0;hidehud 4" 																	//		FLAG: FCVAR_CLIENT
alias "_play" "r_drawviewmodel 1;hidehud 0" 																	//		FLAG: FCVAR_CLIENT
alias "agent_cvarlist" "clear;sv_cvarlist_onespace;_cvarlist_header;sv_cvarlist_spacer;sv_cvarlist_worker;sv_cvarlist_builder;sv_cvarlist_" 
																												//     ^FLAG: FCVAR_CLIENT
																												
																												
																												
																												amtlib_fire_off;pak_pck
																																			
																																			














                                                                                                                                                                                    io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/construct/                                                 0040777 0000000 0000000 00000000000 12763503205 016401  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/construct/conf.cfg                                         0100777 0000000 0000000 00000000253 12763546506 020022  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       // 		This file used to structure binds or toggles that may be broken by the _developmentonly or _hidden flagging system, and may require 
//	additional hotfixing.
//

                                                                                                                                                                                                                                                                                                                                                     io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/draftenv/                                                  0040777 0000000 0000000 00000000000 12763525236 016176  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/draftenv/DRAFT/                                            0040777 0000000 0000000 00000000000 12765171247 017037  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/draftenv/DRAFT/convars.txt                                 0100777 0000000 0000000 00000037003 12763532453 021254  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       //					SV_CHAIN

alias "_hook" "echo  ;echo  ;echo  ;echo"
alias "config_hook_process" "exec \switches\sv_switches.cfg;sv_cheats 1;sv_client_min_interp_ratio 0;sv_cheats 0"
alias "config_hook_resound" "echo  ;echo  ;echo  ;echo                      {CONFIG HOOK EXECUTED};_hook"
alias "config_hook_boolean" "alias  "clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear"
alias "config_toast" "exec \engine\point_main\_config_toast.cfg"


//	exec \trigger\sv_hook.cfg
//
//____________________________________________________________________________________________________________________________________________________\\
//
//
//					SV_HOOK
//
//				HOOKS of CONFIGURATION CHAIN
//				 prints splash toast, loads
//						config main
//

config_toast
config_hook_process
//____________________________________________________________________________________________________________________________________________________\\

																																						
																																						
																																						
																																						
																																						

//____________________________________________________________________________________________________________________________________________________\\

//					SWITCHES

alias "_spline_angles" "null_this_convarIS"														// FCVAR_DEVELOPMENTONLY
alias "ENGINE_flowcontrol_setup" "null_this_convarIS"											// FCVAR_DEVELOPMENTONLY
alias "ENGINE_clampcontrol_setup" "null_this_convarIS"											// FCVAR_DEVELOPMENTONLY
alias "ENGINE_cvarlist_search" "null_this_convarIS"												// FCVAR_DEVELOPMENTONLY
																																						
																																						
alias "m4" "give weapon_m4a1_silencer;give weapon_deagle;givecurrentammo"							// FCVAR_CLIENT
alias "clamp_buy_time" "mp_buytime 650"																// FCVAR_CLIENT
alias "clamp_team_selection" "mp_force_assign_teams 1"												// FCVAR_CLIENT
alias "flow_team_selection" "mp_force_assign_teams 0"												// FCVAR_CLIENT
alias "render_default_flow" "cl_maxrenderable_dist 3000"											// FCVAR_CLIENT
alias "render_flow_control" "cl_maxrenderable_dist 9999"											// FCVAR_CLIENT


//____________________________________________________________________________________________________________________________________________________\\
//
//
//
//
//
//
//
//
//Test ways of making the FCVAR_HIDDEN and FCVAR_DEVELOPMENTONLY ConVars be re-written at the very end of config load, to cause them to be 'hidden'


				//											ConVars
//____________________________________________________________________________________________________________________________________________________\\
																																						
														//		   HIDDEN
														
alias "crosshair_redist01" "null_could_not"						// FCVAR_HIDDEN
alias "crosshair_redist02" "null_could_not"						// FCVAR_HIDDEN
alias "crosshair_redist03" "null_could_not"						// FCVAR_HIDDEN
alias "iclear" "null_could_not"									// FCVAR_HIDDEN
alias "bhop_reticulate" "null_could_not"						// FCVAR_HIDDEN
alias "bhop_triangulate" "null_could_not"						// FCVAR_HIDDEN
alias "bhop_triangulater" "null_could_not"						// FCVAR_HIDDEN
alias "bhop_rescind" "null_could_not"							// FCVAR_HIDDEN
alias "bhop_retract" "null_could_not"							// FCVAR_HIDDEN
alias "clamp_debuggers_A" "null_could_not"						// FCVAR_HIDDEN
alias "clamp_debuggers_B" "null_could_not"						// FCVAR_HIDDEN
alias "clamp_debuggers_C" "null_could_not"						// FCVAR_HIDDEN
alias "clamp_debuggers_N" "null_could_not"						// FCVAR_HIDDEN
alias "mod_fire_debuggerX" "inull_could_not"					// FCVAR_HIDDEN
alias "mod_fire_debuggerY" "null_could_not"						// FCVAR_HIDDEN
alias "mod_fire_debuggerZ" "inull_could_not"					// FCVAR_HIDDEN
alias "mod_fire_debuggerC" "null_could_not"						// FCVAR_HIDDEN
alias "mat_hack_on" "null_could_not"							// FCVAR_HIDDEN
alias "mat_hack_off" "rnull_could_not"							// FCVAR_HIDDEN
alias "sv_debug_workerA" "null_could_not"						// FCVAR_HIDDEN
alias "32_bit_" "null_could_not"								// FCVAR_HIDDEN
//alias "float_teams" "null_could_not"							// FCVAR_HIDDEN
alias "add_ct_bots" "null_could_not"							// FCVAR_HIDDEN
alias "ms3" "null_could_not"									// FCVAR_HIDDEN


													//		        BOTS
																																						 
alias "add_t_bots" "null_could_not"								// FCVAR_HIDDEN
 alias "five_bots_CT" "null_could_not"							// FCVAR_HIDDEN
 alias "five_bots_T" "null_could_not"							// FCVAR_HIDDEN
alias "three_bots" "null_could_not"								// FCVAR_HIDDEN
alias "kick_t" "null_could_not"									// FCVAR_HIDDEN
alias "kick_ct" "null_could_not"								// FCVAR_HIDDEN
																																						 
alias "bot_add_PASS1" "null_could_not"							// FCVAR_HIDDEN
alias "bot_add_PASS2" "null_could_not"							// FCVAR_HIDDEN
alias "bots_addV" "null_could_not"								// FCVAR_HIDDEN
alias "bots_addC" "null_could_not"								// FCVAR_HIDDEN
alias "bots_addY" "null_could_not"								// FCVAR_HIDDEN
alias "bots_addX" "null_could_not"								// FCVAR_HIDDEN
alias "bots_addZ" "null_could_not"								// FCVAR_HIDDEN
																																						 
alias "bot_add_var" "null_could_not"							// FCVAR_HIDDEN
alias "bots_add_V" "null_could_not"								// FCVAR_HIDDEN
alias "bots_add_C" "null_could_not"								// FCVAR_HIDDEN
alias "bots_add_Y" "null_could_not"								// FCVAR_HIDDEN
alias "bots_add_X" "null_could_not"								// FCVAR_HIDDEN
alias "bots_add_Z" "null_could_not"								// FCVAR_HIDDEN
																																						 
alias "_bot_add_var" "null_could_not"							// FCVAR_HIDDEN
alias "_bots_add_V" "null_could_not"							// FCVAR_HIDDEN
alias "_bots_add_C" "null_could_not"							// FCVAR_HIDDEN
alias "_bots_add_Y" "null_could_not"							// FCVAR_HIDDEN
alias "_bots_add_X" "null_could_not"							// FCVAR_HIDDEN
alias "_bots_add_Z" "null_could_not"							// FCVAR_HIDDEN
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		       CLIENT
alias "game_pause" "mp_pause_match"											 											// FCVAR_CLIENT
alias "game_unpause" "mp_unpause_match"										 											// FCVAR_CLIENT
alias "round_reset" "iclear;map de_dust2;mod_fire_debuggerZ;_spline_angles"												// FCVAR_CLIENT
alias "offline_bots" "32_bit_;sv_legacy_jump_play;float_teams"															// FCVAR_CLIENT
alias "mat_hack_state" "mat_hack_on"										 											// FCVAR_CLIENT
alias "sv_newfangled_jump" "bhop_rescind;bhop_retract;mod_fire_debuggerY;_spline_angles"								// FCVAR_CLIENT
alias "sv_legacy_jump_play" "bhop_reticulate;bhop_triangulater;float_teams;ms3;mod_fire_debuggerX;_spline_angles"		// FCVAR_CLIENT
alias "sv_legacy_jump" "bhop_reticulate;bhop_triangulate;ms3;mod_fire_debuggerX;_spline_angles"							// FCVAR_CLIENT
alias "clamp_ai" "bot_dont_shoot 1"																						// FCVAR_CLIENT
alias "flow_ai" "bot_dont_shoot 0"																						// FCVAR_CLIENT
alias "clamp_ai_full" "bot_dont_shoot 1;sb_stop 1"																		// FCVAR_CLIENT
alias "flow_ai_full" "bot_dont_shoot 0;sb_stop 0"																		// FCVAR_CLIENT
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		   DEVELOPMENTONLY

alias "clamp_crosshair" "crosshair_redist01;crosshair_redist02;crosshair_redist03"										// FCVAR_DEVELOPMENTONLY

//															 _Environment_Setup_

ENGINE_flowcontrol_setup															// FCVAR_DEVELOPMENTONLY
ENGINE_clampcontrol_setup															// FCVAR_DEVELOPMENTONLY
ENGINE_cvarlist_search																// FCVAR_DEVELOPMENTONLY
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		      ARCHIVED
													
alias "test_remove_CT" "32_bit_;sv_legacy_jump_play;float_teams;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct"									  										  // FCVAR_ARCHIVED
alias "test_deathmatch" "mp_respawn_on_death_t 1;mp_respawn_on_death_ct - 1" 										// FCVAR_ARCHIVED | defaults are 0;
																																						 



//			#Resounding_PRINT

clear;echo " ";echo " ";echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: sv_newfangled_jump";echo "ConVar desc: re-locks new-styled hopping from CS: GO";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence.";echo " ";echo "ConVar create: cl_viewbob_0";echo "ConVar desc: Disables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: cl_viewbob_1";echo "ConVar desc: Enables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: agent_cvarlist";echo "ConVar desc: List all of the ConVars articulated by this package."
echo " ";echo "ConVar create: sv_legacy_jump_play";echo "ConVar desc: Enables bhop with bots";echo " ";echo " ";echo " ";echo " "









																																							//															REFERENCED

//alias "flow_teams_ct" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0;kick_ct"
//alias "flow_teams_t" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0;kick_t"
//iclear;echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence."
//alias "flow_teams" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"							//<FCVAR_REFERENCED  ^      ^
//alias "flow_teams_x" "bot_quota 7;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"							// FCVAR_REFERENCED
//alias "t_teams_bots" "bot_add t;bot_add t;bot_add t;bot_add t;bot_add t"										// FCVAR_REFERENCED
//alias "ct_teams_bots" "bot_add ct;bot_add ct;bot_add ct;bot_add ct;bot_add ct"								// FCVAR_REFERENCED
//alias "_teams" "bot_quota 9;mp_autokick 1;mp_autoteambalance 1;mp_limitteams 2;t_teams_bots;ct_teams_bots"	// FCVAR_REFERENCED
//alias "clamp_teams" "_teams"																					// FCVAR_REFERENCED





amtlib_fire_off;pak_pck























alias "viewbob_amtlib_01" "null_could_not" 										//		FLAG: FCVAR_HIDDEN
alias "viewbob_amtlib_02" "null_could_not" 										//		FLAG: FCVAR_HIDDEN
alias "viewbob_amtlib_03" "null_could_not" 										//		FLAG: FCVAR_HIDDEN
alias "viewbob_antlib_01" "null_could_not" 										//		FLAG: FCVAR_HIDDEN
alias "viewbob_antlib_02" "null_could_not" 										//		FLAG: FCVAR_HIDDEN
alias "viewbob_antlib_03" "null_could_not" 										//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_spacer" "null_could_not" 									//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_onespace" "null_could_not" 									//		FLAG: FCVAR_HIDDEN
alias "_cvarlist_header" "null_could_not" 										//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_transam" "null_could_not" 									//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_index" "null_could_not" 										//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_vagrant" "null_could_not" 									//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_laymans" "null_could_not" 									//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_op" "null_could_not" 										//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_xml" "null_could_not" 										//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_seq" "null_could_not" 										//      FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_" "null_could_not" 											//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_illbin" "null_could_not" 									//      FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_builder" "null_could_not" 									//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_worker" "null_could_not" 									//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_kstyle" "null_could_not" 									//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_sequencer" "null_could_not" 									//		FLAG: FCVAR_HIDDEN

																																					
																																					
																																					
																																					
alias "cl_viewbob_0" "viewbob_amtlib_01;viewbob_amtlib_02;viewbob_amtlib_03" 									//		FLAG: FCVAR_CLIENT
alias "disable_visual_recoil" "weapon_recoil_scale 0;weapon_recoil_view_punch_extra 0" 							//		FLAG: FCVAR_CLIENT
alias "enable_visual_recoil" "weapon_recoil_view_punch_extra 0.14646326532;weapon_recoil_scale 1.787765" 		//		FLAG: FCVAR_CLIENT
alias "default_visual_recoil" "weapon_recoil_view_punch_extra 0.055;weapon_recoil_scale 2.0" 					//		FLAG: FCVAR_CLIENT
alias "enable_shells" "cl_ejectbrass 1" 																		//		FLAG: FCVAR_CLIENT
alias "disable_shells" "cl_ejectbrass 0" 																		//		FLAG: FCVAR_CLIENT
alias "cl_viewbob_1" "viewbob_antlib_01;viewbob_antlib_02;viewbob_antlib_03" 									//		FLAG: FCVAR_CLIENT
alias "disable_tracers" "r_drawtracers 0;r_drawtracers_firstperson 0" 											//		FLAG: FCVAR_CLIENT
alias "enable_tracers" "r_drawtracers 1;r_drawtracers_firstperson 1" 											//		FLAG: FCVAR_CLIENT
alias "disable_flashes" "sv_flashbang_strength 0" 																//		FLAG: FCVAR_CLIENT
alias "enable_flashes" "sv_flashbang_strength 3.55" 															//		FLAG: FCVAR_CLIENT
alias "disable_post_process" "mat_postprocess_enable 0" 														//		FLAG: FCVAR_CLIENT
alias "enable_post_process" "mat_postprocess_enable 1" 															//		FLAG: FCVAR_CLIENT
alias "disable_grenade_radio" "sv_ignoregrenaderadio 1" 														//		FLAG: FCVAR_CLIENT
alias "enable_grenade_radio" "sv_ignoregrenaderadio 0" 															//		FLAG: FCVAR_CLIENT
alias "cl_clamp_bin" "disable_visual_recoil;disable_tracers;cl_viewbob_0" 										//		FLAG: FCVAR_CLIENT
alias "cl_clamp_cue" "disable_flashes;disable_post_process;disable_grenade_radio" 								//		FLAG: FCVAR_CLIENT
alias "clamp_peripherals" "cl_clamp_bin;cl_clamp_cue" 															//		FLAG: FCVAR_CLIENT
alias "cl_flow_bin" "enable_visual_recoil;enable_tracers;cl_viewbob_1" 											//		FLAG: FCVAR_CLIENT
alias "cl_flow_cue" "enable_flashes;enable_post_process;enable_grenade_radio" 									//		FLAG: FCVAR_CLIENT
alias "flow_peripherals" "cl_flow_bin;cl_flow_cue" 																//		FLAG: FCVAR_CLIENT
alias "viewport_compact" "r_aspectratio 2.22" 																	//		FLAG: FCVAR_CLIENT
alias "viewport_default" "r_aspectratio 0" 																		//		FLAG: FCVAR_CLIENT
alias "viewport_cubed" "r_aspectratio 3.00000000043543" 														//		FLAG: FCVAR_CLIENT
alias "_camera" "r_drawviewmodel 0;hidehud 4" 																	//		FLAG: FCVAR_CLIENT
alias "_play" "r_drawviewmodel 1;hidehud 0" 																	//		FLAG: FCVAR_CLIENT
alias "agent_cvarlist" "clear;sv_cvarlist_onespace;_cvarlist_header;sv_cvarlist_spacer;sv_cvarlist_worker;sv_cvarlist_builder;sv_cvarlist_" 
																												//     ^FLAG: FCVAR_CLIENT
																																				
																																				
//	old-FINAL LOAD
_spline_angles
clamp_crosshair
clamp_buy_time
clamp_team_selection
render_flow_control
//ass













                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/draftenv/DRAFT/convars.txt.bak                             0100777 0000000 0000000 00000046112 12763527676 022024  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       //					SV_CHAIN

alias "_hook" "echo  ;echo  ;echo  ;echo"
alias "config_hook_process" "exec \switches\sv_switches.cfg;sv_cheats 1;sv_client_min_interp_ratio 0;sv_cheats 0"
alias "config_hook_resound" "echo  ;echo  ;echo  ;echo                      {CONFIG HOOK EXECUTED};_hook"
alias "config_hook_boolean" "alias  "clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear"
alias "config_toast" "exec \engine\point_main\_config_toast.cfg"


//	exec \trigger\sv_hook.cfg
//
//____________________________________________________________________________________________________________________________________________________\\
//
//
//					SV_HOOK
//
//				HOOKS of CONFIGURATION CHAIN
//				 prints splash toast, loads
//						config main
//

config_toast
config_hook_process
//____________________________________________________________________________________________________________________________________________________\\

																																						
																																						
																																						
																																						
																																						

//____________________________________________________________________________________________________________________________________________________\\

//					SWITCHES


alias "ENGINE_flowcontrol_setup" "sv_cheats 1;mp_roundtime 75;mp_roundtime_defuse 0"				// FCVAR_DEVELOPMENTONLY
alias "_spline_angles" "sv_cheats 1;mp_roundtime 75;mp_roundtime_defuse 0"							// FCVAR_DEVELOPMENTONLY
alias "ENGINE_clampcontrol_setup" "exec sv_hop_arrays.cfg"											// FCVAR_DEVELOPMENTONLY
alias "ENGINE_cvarlist_search" "exec \switches\agent_cvar_search.cfg"								// FCVAR_DEVELOPMENTONLY
alias "m4" "give weapon_m4a1_silencer;give weapon_deagle;givecurrentammo"							// FCVAR_CLIENT
alias "clamp_buy_time" "mp_buytime 650"																// FCVAR_CLIENT
alias "clamp_team_selection" "mp_force_assign_teams 1"												// FCVAR_CLIENT
alias "flow_team_selection" "mp_force_assign_teams 0"												// FCVAR_CLIENT
alias "render_default_flow" "cl_maxrenderable_dist 3000"											// FCVAR_CLIENT
alias "render_flow_control" "cl_maxrenderable_dist 9999"											// FCVAR_CLIENT


//____________________________________________________________________________________________________________________________________________________\\
//
//
//
//
//
//
//
//
//Test ways of making the FCVAR_HIDDEN and FCVAR_DEVELOPMENTONLY ConVars be re-written at the very end of config load, to cause them to be 'hidden'


				//											ConVars
//____________________________________________________________________________________________________________________________________________________\\
																																						
														//		   HIDDEN
alias "crosshair_redist01" "cl_crosshair_dynamic_splitdist 2;cl_crosshair_dynamic_splitalpha_outermod 0.300000"					// FCVAR_HIDDEN
alias "crosshair_redist02" "cl_crosshair_dynamic_splitalpha_innermod 1;cl_crosshair_dynamic_maxdist_splitratio 0.05"			// FCVAR_HIDDEN
alias "crosshair_redist03" "cl_crosshair_dynamic_maxdist_splitratio 0.05;cl_crosshaircolor 4;cl_crosshairsize 3.5897877"		// FCVAR_HIDDEN
alias "iclear" "exec sv_hop_arrays.cfg;mp_buy_anywhere 1"																		// FCVAR_HIDDEN
alias "bhop_reticulate" "iclear;mirv_cvar_unhide_all;sv_enablebunnyhopping 1;sv_airaccelerate 1000"								// FCVAR_HIDDEN
alias "bhop_triangulate" "iclear;bot_kick;mp_warmup_end;sv_staminajumpcost 0;sv_staminalandcost 0"								// FCVAR_HIDDEN
alias "bhop_triangulater" "iclear;mp_warmup_end;sv_staminajumpcost 0;sv_staminalandcost 0"										// FCVAR_HIDDEN
alias "bhop_rescind" "iclear;mirv_cvar_unhide_all;sv_enablebunnyhopping 0;sv_airaccelerate 12 "									// FCVAR_HIDDEN
alias "bhop_retract" "iclear;sv_staminajumpcost .080;sv_staminalandcost .050"													// FCVAR_HIDDEN
alias "clamp_debuggers_A" "say [Source Jump Behaviour Mode]: Legacy"															// FCVAR_HIDDEN
alias "clamp_debuggers_B" "say [Source Jump Behaviour Mode]: New Fangled"														// FCVAR_HIDDEN
alias "clamp_debuggers_C" "say [ROUND RESET]"																					// FCVAR_HIDDEN
alias "clamp_debuggers_N" "say [WARMUP CANCELLED]"																				// FCVAR_HIDDEN
alias "mod_fire_debuggerX" "iclear;echo " ";echo [Source Jump Behaviour Mode]: Legacy;clamp_debuggers_A"						// FCVAR_HIDDEN
alias "mod_fire_debuggerY" "iclear;echo " ";echo [Source Jump Behaviour Mode]: New Fangled;clamp_debuggers_B"					// FCVAR_HIDDEN
alias "mod_fire_debuggerZ" "iclear;echo " ";echo [ROUND RESET];clamp_debuggers_C"												// FCVAR_HIDDEN
alias "mod_fire_debuggerC" "iclear;echo " ";echo [WARMUP CANCELLED];clamp_debuggers_N"											// FCVAR_HIDDEN
alias "mat_hack_on" "r_drawothermodels 2; alias mat_hack_state mat_hack_off"													// FCVAR_HIDDEN
alias "mat_hack_off" "r_drawothermodels 1; alias mat_hack_state mat_hack_on"													// FCVAR_HIDDEN
alias "sv_debug_workerA" "exec _extenuating_arrays.cfg"																			// FCVAR_HIDDEN
alias "32_bit_" "mp_autoteambalance 1;bot_quota 10"																				// FCVAR_HIDDEN
//alias "float_teams" "mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"														// FCVAR_HIDDEN
alias "add_ct_bots" "bot_add_ct FPSGAMERGOD1999;bot_add_ct Oxford Smith;bot_add_ct Mau5Hau5 | tEye;bot_add_ct Nashville Dog"	// FCVAR_HIDDEN
alias "round_endwarmup" "mp_warmup_end;bot_kick;mod_fire_debuggerC;_spline_angles"												// FCVAR_HIDDEN
alias "ms3" "player_limit_jump_speed 0"																							// FCVAR_HIDDEN


													//		        BOTS
																																						 
alias "add_t_bots" "bot_add_ct FPSGAMERGOD1999;bot_add_ct CloudM.Hydraxi;bot_add_ct Oxford Smith;bot_add_ct Mau5Hau5 | tEye;bot_add_ct Nashville Dog"
																																//^FCVAR_HIDDEN
 alias "five_bots_CT" "bot_quota_mode 0;_bots_add_V;_bots_add_C;_bots_add_Y;_bots_add_X;_bots_add_Z;bot_add_PASS2;_bot_add_var"	// FCVAR_HIDDEN
 alias "five_bots_T" "bot_quota_mode 0;bots_add_V;bots_add_C;bots_add_Y;bots_add_X;bots_add_Z;bot_add_PASS1;bot_add_var"		// FCVAR_HIDDEN
alias "three_bots" "bot_quota_mode 0;bots_addV;bots_addC;bots_addY;bots_addX;bots_addZ"											// FCVAR_HIDDEN
alias "kick_t" "bot_kick t;bot_kick t;bot_kick t;bot_kick t;bot_kick t;bot_quota 5"												// FCVAR_HIDDEN
alias "kick_ct" "bot_kick ct;bot_kick ct;bot_kick ct;bot_kick ct;bot_kick ct;bot_quota 5"										// FCVAR_HIDDEN
																																						 
alias "bot_add_PASS1" "bot_add_ct Lady Grey;bot_add_ct Emotional Surgery"														// FCVAR_HIDDEN
alias "bot_add_PASS2" "bot_add_t Lady Grey;bot_add_t Emotional Surgery"															// FCVAR_HIDDEN
alias "bots_addV" "bot_add_ct Mau5Hau5 | tEye;flow_teams"																		// FCVAR_HIDDEN
alias "bots_addC" "bot_add_ct Nashville Dog;flow_teams"																			// FCVAR_HIDDEN
alias "bots_addY" "bot_add_ct Oxford Smith;flow_teams"																			// FCVAR_HIDDEN
alias "bots_addX" "bot_add_ct CloudM.Hydraxi;flow_teams"																		// FCVAR_HIDDEN
alias "bots_addZ" "bot_add_ct FPSGAMERGOD1999;flow_teams"																		// FCVAR_HIDDEN
																																						 
alias "bot_add_var" "bot_add_ct Liquid;bot_add_t UnderDOG MIKE"																	// FCVAR_HIDDEN
alias "bots_add_V" "bot_add_ct Mau5Hau5 | tEye;flow_teams_x;"																	// FCVAR_HIDDEN
alias "bots_add_C" "bot_add_ct Nashville Dog;flow_teams_x"																		// FCVAR_HIDDEN
alias "bots_add_Y" "bot_add_ct Oxford Smith;flow_teams_x"																		// FCVAR_HIDDEN
alias "bots_add_X" "bot_add_ct CloudM.Hydraxi;flow_teams_x"																		// FCVAR_HIDDEN
alias "bots_add_Z" "bot_add_ct FPSGAMERGOD1999;flow_teams_x"																	// FCVAR_HIDDEN
																																						 
alias "_bot_add_var" "bot_add_t Liquid;bot_add_t UnderDOG MIKE"																	// FCVAR_HIDDEN
alias "_bots_add_V" "bot_add_t Mau5Hau5 | tEye;flow_teams_x;"																	// FCVAR_HIDDEN
alias "_bots_add_C" "bot_add_t Nashville Dog;flow_teams_x"																		// FCVAR_HIDDEN
alias "_bots_add_Y" "bot_add_t Oxford Smith;flow_teams_x"																		// FCVAR_HIDDEN
alias "_bots_add_X" "bot_add_t CloudM.Hydraxi;flow_teams_x"																		// FCVAR_HIDDEN
alias "_bots_add_Z" "bot_add_t FPSGAMERGOD1999;flow_teams_x"																	// FCVAR_HIDDEN
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		       CLIENT
alias "game_pause" "mp_pause_match"											 											// FCVAR_CLIENT
alias "game_unpause" "mp_unpause_match"										 											// FCVAR_CLIENT
alias "round_reset" "iclear;map de_dust2;mod_fire_debuggerZ;_spline_angles"												// FCVAR_CLIENT
alias "offline_bots" "32_bit_;sv_legacy_jump_play;float_teams"															// FCVAR_CLIENT
alias "mat_hack_state" "mat_hack_on"										 											// FCVAR_CLIENT
alias "sv_newfangled_jump" "bhop_rescind;bhop_retract;mod_fire_debuggerY;_spline_angles"								// FCVAR_CLIENT
alias "sv_legacy_jump_play" "bhop_reticulate;bhop_triangulater;float_teams;ms3;mod_fire_debuggerX;_spline_angles"		// FCVAR_CLIENT
alias "sv_legacy_jump" "bhop_reticulate;bhop_triangulate;ms3;mod_fire_debuggerX;_spline_angles"							// FCVAR_CLIENT
alias "clamp_ai" "bot_dont_shoot 1"																						// FCVAR_CLIENT
alias "flow_ai" "bot_dont_shoot 0"																						// FCVAR_CLIENT
alias "clamp_ai_full" "bot_dont_shoot 1;sb_stop 1"																		// FCVAR_CLIENT
alias "flow_ai_full" "bot_dont_shoot 0;sb_stop 0"																		// FCVAR_CLIENT
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		   DEVELOPMENTONLY

alias "clamp_crosshair" "crosshair_redist01;crosshair_redist02;crosshair_redist03"										// FCVAR_DEVELOPMENTONLY

//															 _Environment_Setup_

ENGINE_flowcontrol_setup															// FCVAR_DEVELOPMENTONLY
ENGINE_clampcontrol_setup															// FCVAR_DEVELOPMENTONLY
ENGINE_cvarlist_search																// FCVAR_DEVELOPMENTONLY
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		      ARCHIVED
													
alias "test_remove_CT" "32_bit_;sv_legacy_jump_play;float_teams;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct"									  										  // FCVAR_ARCHIVED
alias "test_deathmatch" "mp_respawn_on_death_t 1;mp_respawn_on_death_ct - 1" 										// FCVAR_ARCHIVED | defaults are 0;
																																						 



//			#Resounding_PRINT

clear;echo " ";echo " ";echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: sv_newfangled_jump";echo "ConVar desc: re-locks new-styled hopping from CS: GO";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence.";echo " ";echo "ConVar create: cl_viewbob_0";echo "ConVar desc: Disables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: cl_viewbob_1";echo "ConVar desc: Enables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: agent_cvarlist";echo "ConVar desc: List all of the ConVars articulated by this package."
echo " ";echo "ConVar create: sv_legacy_jump_play";echo "ConVar desc: Enables bhop with bots";echo " ";echo " ";echo " ";echo " "









																																							//															REFERENCED

//alias "flow_teams_ct" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0;kick_ct"
//alias "flow_teams_t" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0;kick_t"
//iclear;echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence."
//alias "flow_teams" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"							//<FCVAR_REFERENCED  ^      ^
//alias "flow_teams_x" "bot_quota 7;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"							// FCVAR_REFERENCED
//alias "t_teams_bots" "bot_add t;bot_add t;bot_add t;bot_add t;bot_add t"										// FCVAR_REFERENCED
//alias "ct_teams_bots" "bot_add ct;bot_add ct;bot_add ct;bot_add ct;bot_add ct"								// FCVAR_REFERENCED
//alias "_teams" "bot_quota 9;mp_autokick 1;mp_autoteambalance 1;mp_limitteams 2;t_teams_bots;ct_teams_bots"	// FCVAR_REFERENCED
//alias "clamp_teams" "_teams"																					// FCVAR_REFERENCED





amtlib_fire_off;pak_pck























alias "viewbob_amtlib_01" "cl_bobcycle 0.980000;cl_use_new_headbob 0;cl_bobup 0.5" 										//		FLAG: FCVAR_HIDDEN
alias "viewbob_amtlib_02" "cl_bob_version -1;cl_bobamt_vert 0" 															//		FLAG: FCVAR_HIDDEN
alias "viewbob_amtlib_03" "cl_bobamt_lat 0;cl_bob_lower_amt 0" 															//		FLAG: FCVAR_HIDDEN
alias "viewbob_antlib_01" "cl_bobcycle 0.98;cl_use_new_headbob 1;cl_bobup 0.5" 											//		FLAG: FCVAR_HIDDEN
alias "viewbob_antlib_02" "cl_bob_version 0;cl_bobamt_vert 0.25" 														//		FLAG: FCVAR_HIDDEN
alias "viewbob_antlib_03" "cl_bobamt_lat 0.4";cl_bob_lower_amt 21"" 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_spacer" "echo  ;echo  ;echo  ;echo  ;echo  ;echo  " 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_onespace" "echo  ;echo  ;echo  ;echo  ;" 															//		FLAG: FCVAR_HIDDEN
alias "_cvarlist_header" "echo                   Printing CvarList..." 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_transam" "echo {ConVar, NULL}: viewport_default" 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_index" "echo {ConVar, SUBTRACT}: disable_shells;echo {ConVar, ADD}: enable_shells" 					//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_vagrant" "echo {ConVar, SUBTRACT}: disable_tracers;echo {ConVar, ADD}: enable_tracers" 				//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_laymans" "echo {ConVar, SUBTRACT}: disable_flashes;echo {ConVar, ADD}: enable_flashes" 				//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_op" "echo {ConVar, SUBTRACT}: disable_post_process;echo {ConVar, ADD}: enable_post_process" 			//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_xml" "echo {ConVar, SUBTRACT}: clamp_peripherals;echo {ConVar, ADD}: flow_peripherals" 				//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_seq" "echo {ConVar}: round_endwarmup;echo {ConVar, SUBTRACT}: cl_viewbob_0;echo {ConVar, ADD}: cl_viewbob_1" 																										  //      FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_" "echo  ;echo  ;echo  ;echo  ;echo Successfully Printed ( 27 ) cvars.;echo  ;echo  ;echo  ;echo  " 	//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_illbin" "echo {ConVar}: _camera;echo {ConVar}: _play;echo {ConVar}: viewport_compact;echo {ConVar}: viewport_cubed" 																										   //      FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_builder" "sv_cvarlist_vagrant;sv_cvarlist_laymans;sv_cvarlist_op;sv_cvarlist_xml" 					//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_worker" "sv_cvarlist_sequencer;sv_cvarlist_illbin;sv_cvarlist_seq;sv_cvarlist_transam;sv_cvarlist_kstyle;sv_cvarlist_index" 																																							// ^ <- FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_kstyle" "echo {ConVar, SUBTRACT}: disable_visual_recoil;echo {ConVar, ADD}: enable_visual_recoil;echo {ConVar, NULL}: default_visual_recoil" 																								 //		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_sequencer" "echo {ConVar}: m4;echo {ConVar}: sv_legacy_jump;echo {ConVar}: sv_newfangled_jump;echo {ConVar}: round_reset" 																											//		FLAG: FCVAR_HIDDEN

																																					
																																					
																																					
																																					
alias "cl_viewbob_0" "viewbob_amtlib_01;viewbob_amtlib_02;viewbob_amtlib_03" 									//		FLAG: FCVAR_CLIENT
alias "disable_visual_recoil" "weapon_recoil_scale 0;weapon_recoil_view_punch_extra 0" 							//		FLAG: FCVAR_CLIENT
alias "enable_visual_recoil" "weapon_recoil_view_punch_extra 0.14646326532;weapon_recoil_scale 1.787765" 		//		FLAG: FCVAR_CLIENT
alias "default_visual_recoil" "weapon_recoil_view_punch_extra 0.055;weapon_recoil_scale 2.0" 					//		FLAG: FCVAR_CLIENT
alias "enable_shells" "cl_ejectbrass 1" 																		//		FLAG: FCVAR_CLIENT
alias "disable_shells" "cl_ejectbrass 0" 																		//		FLAG: FCVAR_CLIENT
alias "cl_viewbob_1" "viewbob_antlib_01;viewbob_antlib_02;viewbob_antlib_03" 									//		FLAG: FCVAR_CLIENT
alias "disable_tracers" "r_drawtracers 0;r_drawtracers_firstperson 0" 											//		FLAG: FCVAR_CLIENT
alias "enable_tracers" "r_drawtracers 1;r_drawtracers_firstperson 1" 											//		FLAG: FCVAR_CLIENT
alias "disable_flashes" "sv_flashbang_strength 0" 																//		FLAG: FCVAR_CLIENT
alias "enable_flashes" "sv_flashbang_strength 3.55" 															//		FLAG: FCVAR_CLIENT
alias "disable_post_process" "mat_postprocess_enable 0" 														//		FLAG: FCVAR_CLIENT
alias "enable_post_process" "mat_postprocess_enable 1" 															//		FLAG: FCVAR_CLIENT
alias "disable_grenade_radio" "sv_ignoregrenaderadio 1" 														//		FLAG: FCVAR_CLIENT
alias "enable_grenade_radio" "sv_ignoregrenaderadio 0" 															//		FLAG: FCVAR_CLIENT
alias "cl_clamp_bin" "disable_visual_recoil;disable_tracers;cl_viewbob_0" 										//		FLAG: FCVAR_CLIENT
alias "cl_clamp_cue" "disable_flashes;disable_post_process;disable_grenade_radio" 								//		FLAG: FCVAR_CLIENT
alias "clamp_peripherals" "cl_clamp_bin;cl_clamp_cue" 															//		FLAG: FCVAR_CLIENT
alias "cl_flow_bin" "enable_visual_recoil;enable_tracers;cl_viewbob_1" 											//		FLAG: FCVAR_CLIENT
alias "cl_flow_cue" "enable_flashes;enable_post_process;enable_grenade_radio" 									//		FLAG: FCVAR_CLIENT
alias "flow_peripherals" "cl_flow_bin;cl_flow_cue" 																//		FLAG: FCVAR_CLIENT
alias "viewport_compact" "r_aspectratio 2.22" 																	//		FLAG: FCVAR_CLIENT
alias "viewport_default" "r_aspectratio 0" 																		//		FLAG: FCVAR_CLIENT
alias "viewport_cubed" "r_aspectratio 3.00000000043543" 														//		FLAG: FCVAR_CLIENT
alias "_camera" "r_drawviewmodel 0;hidehud 4" 																	//		FLAG: FCVAR_CLIENT
alias "_play" "r_drawviewmodel 1;hidehud 0" 																	//		FLAG: FCVAR_CLIENT
alias "agent_cvarlist" "clear;sv_cvarlist_onespace;_cvarlist_header;sv_cvarlist_spacer;sv_cvarlist_worker;sv_cvarlist_builder;sv_cvarlist_" 
																												//     ^FLAG: FCVAR_CLIENT
																																				
																																				
//	old-FINAL LOAD
_spline_angles
clamp_crosshair
clamp_buy_time
clamp_team_selection
render_flow_control
//ass













                                                                                                                                                                                                                                                                                                                                                                                                                                                      io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/draftenv/DRAFT/renamed_convars.cfg                         0100777 0000000 0000000 00000046653 12763535371 022704  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       //					SV_CHAIN

alias "_hook" "echo  ;echo  ;echo  ;echo"
alias "config_hook_process" "exec \switches\sv_switches.cfg;sv_cheats 1;sv_client_min_interp_ratio 0;sv_cheats 0"
alias "config_hook_resound" "echo  ;echo  ;echo  ;echo                      {CONFIG HOOK EXECUTED};_hook"
alias "config_hook_boolean" "alias  "clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear"
alias "config_toast" "exec \engine\point_main\_config_toast.cfg"


//	exec \trigger\sv_hook.cfg
//
//____________________________________________________________________________________________________________________________________________________\\
//
//
//					SV_HOOK
//
//				HOOKS of CONFIGURATION CHAIN
//				 prints splash toast, loads
//						config main
//

config_toast
config_hook_process
//____________________________________________________________________________________________________________________________________________________\\

																																						
																																						
																																						
																																						
																																						

//____________________________________________________________________________________________________________________________________________________\\

//					SWITCHES


alias "ENGINE_flowcontrol_setup" "sv_cheats 1;mp_roundtime 75;mp_roundtime_defuse 0"				// FCVAR_DEVELOPMENTONLY
alias "_spline_angles" "sv_cheats 1;mp_roundtime 75;mp_roundtime_defuse 0"							// FCVAR_DEVELOPMENTONLY
alias "ENGINE_clampcontrol_setup" "exec sv_hop_arrays.cfg"											// FCVAR_DEVELOPMENTONLY
alias "ENGINE_cvarlist_search" "exec \switches\agent_cvar_search.cfg"								// FCVAR_DEVELOPMENTONLY
alias "m4" "give weapon_m4a1_silencer;give weapon_deagle;givecurrentammo"							// FCVAR_CLIENT
alias "clamp_buy_time" "mp_buytime 650"																// FCVAR_CLIENT
alias "clamp_team_selection" "mp_force_assign_teams 1"												// FCVAR_CLIENT
alias "flow_team_selection" "mp_force_assign_teams 0"												// FCVAR_CLIENT
alias "render_default_flow" "cl_maxrenderable_dist 3000"											// FCVAR_CLIENT
alias "render_flow_control" "cl_maxrenderable_dist 9999"											// FCVAR_CLIENT


//____________________________________________________________________________________________________________________________________________________\\
//
//
//
//
//
//
//
//
//Test ways of making the FCVAR_HIDDEN and FCVAR_DEVELOPMENTONLY ConVars be re-written at the very end of config load, to cause them to be 'hidden'


				//											ConVars
//____________________________________________________________________________________________________________________________________________________\\
																																						
														//		   HIDDEN
alias "^crosshair_redist01" "cl_crosshair_dynamic_splitdist 2;cl_crosshair_dynamic_splitalpha_outermod 0.300000"				// FCVAR_HIDDEN
alias "^crosshair_redist02" "cl_crosshair_dynamic_splitalpha_innermod 1;cl_crosshair_dynamic_maxdist_splitratio 0.05"			// FCVAR_HIDDEN
alias "^crosshair_redist03" "cl_crosshair_dynamic_maxdist_splitratio 0.05;cl_crosshaircolor 4;cl_crosshairsize 3.5897877"		// FCVAR_HIDDEN
alias "^iclear" "exec sv_hop_arrays.cfg;mp_buy_anywhere 1"																		// FCVAR_HIDDEN
alias "^bhop_reticulate" "^iclear;mirv_cvar_unhide_all;sv_enablebunnyhopping 1;sv_airaccelerate 1000"							// FCVAR_HIDDEN
alias "^bhop_triangulate" "^iclear;bot_kick;mp_warmup_end;sv_staminajumpcost 0;sv_staminalandcost 0"							// FCVAR_HIDDEN
alias "^bhop_triangulater" "^iclear;mp_warmup_end;sv_staminajumpcost 0;sv_staminalandcost 0"									// FCVAR_HIDDEN
alias "^bhop_rescind" "^iclear;mirv_cvar_unhide_all;sv_enablebunnyhopping 0;sv_airaccelerate 12 "								// FCVAR_HIDDEN
alias "^bhop_retract" "^iclear;sv_staminajumpcost .080;sv_staminalandcost .050"													// FCVAR_HIDDEN
alias "^clamp_debuggers_A" "say [Source Jump Behaviour Mode]: Legacy"															// FCVAR_HIDDEN
alias "^clamp_debuggers_B" "say [Source Jump Behaviour Mode]: New Fangled"														// FCVAR_HIDDEN
alias "^clamp_debuggers_C" "say [ROUND RESET]"																					// FCVAR_HIDDEN
alias "clamp_debuggers_N" "say [WARMUP CANCELLED]"																				// FCVAR_HIDDEN
alias "^mod_fire_debuggerX" "^iclear;echo " ";echo [Source Jump Behaviour Mode]: Legacy;^clamp_debuggers_A"						// FCVAR_HIDDEN
alias "^mod_fire_debuggerY" "^iclear;echo " ";echo [Source Jump Behaviour Mode]: New Fangled;^clamp_debuggers_B"				// FCVAR_HIDDEN
alias "^mod_fire_debuggerZ" "^iclear;echo " ";echo [ROUND RESET];^clamp_debuggers_C"											// FCVAR_HIDDEN
alias "^mod_fire_debuggerC" "^iclear;echo " ";echo [WARMUP CANCELLED];clamp_debuggers_N"										// FCVAR_HIDDEN
alias "^mat_hack_on" "r_drawothermodels 2; alias mat_hack_state ^mat_hack_off"													// FCVAR_HIDDEN
alias "^mat_hack_off" "r_drawothermodels 1; alias mat_hack_state ^mat_hack_on"													// FCVAR_HIDDEN
alias "^sv_debug_workerA" "exec _extenuating_arrays.cfg"																		// FCVAR_HIDDEN
alias "^32_bit_" "mp_autoteambalance 1;bot_quota 10"																			// FCVAR_HIDDEN
//alias "float_teams" "mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"														// FCVAR_HIDDEN
alias "^add_ct_bots" "bot_add_ct FPSGAMERGOD1999;bot_add_ct Oxford Smith;bot_add_ct Mau5Hau5 | tEye;bot_add_ct Nashville Dog"	// FCVAR_HIDDEN
alias "^round_endwarmup" "mp_warmup_end;bot_kick;^mod_fire_debuggerC;_spline_angles"											// FCVAR_HIDDEN
alias "^ms3" "player_limit_jump_speed 0"																						// FCVAR_HIDDEN


													//		        BOTS
																																						 
alias "^add_t_bots" "bot_add_ct FPSGAMERGOD1999;bot_add_ct CloudM.Hydraxi;bot_add_ct Oxford Smith;bot_add_ct Mau5Hau5 | tEye;bot_add_ct Nashville Dog"
																																//^FCVAR_CLIENT
 alias "five_bots_CT" "bot_quota_mode 0;^_bots_add_V;^_bots_add_C;^_bots_add_Y;^_bots_add_X;^_bots_add_Z;^bot_add_PASS2;^_bot_add_var"	
																																// FCVAR_HIDDEN
 alias "five_bots_T" "bot_quota_mode 0;^bots_add_V;^bots_add_C;^bots_add_Y;^bots_add_X;^bots_add_Z;^bot_add_PASS1;^bot_add_var"	// FCVAR_HIDDEN
alias "three_bots" "bot_quota_mode 0;^bots_addV;^bots_addC;^bots_addY;^bots_addX;^bots_addZ"									// FCVAR_CLIENT
alias "k_bots" "bot_kick"																										// FCVAR_CLIENT
alias "b_kick" " bot_kick"																										// FCVAR_CLIENT
alias "botkick" "bot_kick"																										// FCVAR_CLIENT
alias "kickbot" "bot_kick"																										// FCVAR_CLIENT
alias "kickbots" "bot_kick"																										// FCVAR_CLIENT
//alias "kick_ct" "bot_kick ct;bot_kick ct;bot_kick ct;bot_kick ct;bot_kick ct;bot_quota 5"										// FCVAR_ARCHIVED
																																						 
alias "^bot_add_PASS1" "bot_add_ct Lady Grey;bot_add_ct Emotional Surgery"														// FCVAR_HIDDEN
alias "^bot_add_PASS2" "bot_add_t Lady Grey;bot_add_t Emotional Surgery"														// FCVAR_HIDDEN
alias "^bots_addV" "bot_add_ct Mau5Hau5 | tEye;flow_teams"																		// FCVAR_HIDDEN
alias "^bots_addC" "bot_add_ct Nashville Dog;flow_teams"																		// FCVAR_HIDDEN
alias "^bots_addY" "bot_add_ct Oxford Smith;flow_teams"																			// FCVAR_HIDDEN
alias "^bots_addX" "bot_add_ct CloudM.Hydraxi;flow_teams"																		// FCVAR_HIDDEN
alias "^bots_addZ" "bot_add_ct FPSGAMERGOD1999;flow_teams"																		// FCVAR_HIDDEN
																																						 
alias "^bot_add_var" "bot_add_ct Liquid;bot_add_t UnderDOG MIKE"																// FCVAR_HIDDEN
alias "^bots_add_V" "bot_add_ct Mau5Hau5 | tEye;flow_teams_x;"																	// FCVAR_HIDDEN
alias "^bots_add_C" "bot_add_ct Nashville Dog;flow_teams_x"																		// FCVAR_HIDDEN
alias "^bots_add_Y" "bot_add_ct Oxford Smith;flow_teams_x"																		// FCVAR_HIDDEN
alias "^bots_add_X" "bot_add_ct CloudM.Hydraxi;flow_teams_x"																	// FCVAR_HIDDEN
alias "^bots_add_Z" "bot_add_ct FPSGAMERGOD1999;flow_teams_x"																	// FCVAR_HIDDEN
																																						 
alias "^_bot_add_var" "bot_add_t Liquid;bot_add_t UnderDOG MIKE"																// FCVAR_HIDDEN
alias "^_bots_add_V" "bot_add_t Mau5Hau5 | tEye;flow_teams_x;"																	// FCVAR_HIDDEN
alias "^_bots_add_C" "bot_add_t Nashville Dog;flow_teams_x"																		// FCVAR_HIDDEN
alias "^_bots_add_Y" "bot_add_t Oxford Smith;flow_teams_x"																		// FCVAR_HIDDEN
alias "^_bots_add_X" "bot_add_t CloudM.Hydraxi;flow_teams_x"																	// FCVAR_HIDDEN
alias "^_bots_add_Z" "bot_add_t FPSGAMERGOD1999;flow_teams_x"																	// FCVAR_HIDDEN
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		       CLIENT
alias "game_pause" "mp_pause_match"											 											// FCVAR_CLIENT
alias "game_unpause" "mp_unpause_match"										 											// FCVAR_CLIENT
alias "round_reset" "iclear;map de_dust2;^mod_fire_debuggerZ;_spline_angles"											// FCVAR_CLIENT
alias "offline_bots" "^32_bit_;sv_legacy_jump_play;float_teams"															// FCVAR_CLIENT
alias "mat_hack_state" "mat_hack_on"										 											// FCVAR_CLIENT
alias "sv_newfangled_jump" "^bhop_rescind;^bhop_retract;^mod_fire_debuggerY;_spline_angles"								// FCVAR_CLIENT
alias "sv_legacy_jump_play" "^bhop_reticulate;^bhop_triangulater;float_teams;^ms3;^mod_fire_debuggerX;_spline_angles"	// FCVAR_CLIENT
alias "sv_legacy_jump" "^bhop_reticulate;^bhop_triangulate;^ms3;^mod_fire_debuggerX;_spline_angles"						// FCVAR_CLIENT
alias "clamp_ai" "bot_dont_shoot 1"																						// FCVAR_CLIENT
alias "flow_ai" "bot_dont_shoot 0"																						// FCVAR_CLIENT
alias "clamp_ai_full" "bot_dont_shoot 1;sb_stop 1"																		// FCVAR_CLIENT
alias "flow_ai_full" "bot_dont_shoot 0;sb_stop 0"																		// FCVAR_CLIENT
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		   DEVELOPMENTONLY

alias "clamp_crosshair" "^crosshair_redist01;^crosshair_redist02;^crosshair_redist03"										// FCVAR_DEVELOPMENTONLY

//															 _Environment_Setup_

ENGINE_flowcontrol_setup															// FCVAR_DEVELOPMENTONLY
ENGINE_clampcontrol_setup															// FCVAR_DEVELOPMENTONLY
ENGINE_cvarlist_search																// FCVAR_DEVELOPMENTONLY
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		      ARCHIVED
													
alias "test_remove_CT" "^32_bit_;sv_legacy_jump_play;float_teams;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct"									  										  // FCVAR_ARCHIVED
alias "test_deathmatch" "mp_respawn_on_death_t 1;mp_respawn_on_death_ct - 1" 										// FCVAR_ARCHIVED | defaults are 0;
																																						 



//			#Resounding_PRINT

clear;echo " ";echo " ";echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: sv_newfangled_jump";echo "ConVar desc: re-locks new-styled hopping from CS: GO";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence.";echo " ";echo "ConVar create: cl_viewbob_0";echo "ConVar desc: Disables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: cl_viewbob_1";echo "ConVar desc: Enables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: agent_cvarlist";echo "ConVar desc: List all of the ConVars articulated by this package."
echo " ";echo "ConVar create: sv_legacy_jump_play";echo "ConVar desc: Enables bhop with bots";echo " ";echo " ";echo " ";echo " "









																																							//															REFERENCED

//alias "flow_teams_ct" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0;kick_ct"
//alias "flow_teams_t" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0;kick_t"
//iclear;echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence."
//alias "flow_teams" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"							//<FCVAR_REFERENCED  ^      ^
//alias "flow_teams_x" "bot_quota 7;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"							// FCVAR_REFERENCED
//alias "t_teams_bots" "bot_add t;bot_add t;bot_add t;bot_add t;bot_add t"										// FCVAR_REFERENCED
//alias "ct_teams_bots" "bot_add ct;bot_add ct;bot_add ct;bot_add ct;bot_add ct"								// FCVAR_REFERENCED
//alias "_teams" "bot_quota 9;mp_autokick 1;mp_autoteambalance 1;mp_limitteams 2;t_teams_bots;ct_teams_bots"	// FCVAR_REFERENCED
//alias "clamp_teams" "_teams"																					// FCVAR_REFERENCED





amtlib_fire_off;pak_pck























alias "^viewbob_amtlib_01" "cl_bobcycle 0.980000;cl_use_new_headbob 0;cl_bobup 0.5" 										//		FLAG: FCVAR_HIDDEN
alias "^viewbob_amtlib_02" "cl_bob_version -1;cl_bobamt_vert 0" 															//		FLAG: FCVAR_HIDDEN
alias "^viewbob_amtlib_03" "cl_bobamt_lat 0;cl_bob_lower_amt 0" 															//		FLAG: FCVAR_HIDDEN
alias "^viewbob_antlib_01" "cl_bobcycle 0.98;cl_use_new_headbob 1;cl_bobup 0.5" 											//		FLAG: FCVAR_HIDDEN
alias "^viewbob_antlib_02" "cl_bob_version 0;cl_bobamt_vert 0.25" 														//		FLAG: FCVAR_HIDDEN
alias "^viewbob_antlib_03" "cl_bobamt_lat 0.4";cl_bob_lower_amt 21"" 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_spacer" "echo  ;echo  ;echo  ;echo  ;echo  ;echo  " 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_onespace" "echo  ;echo  ;echo  ;echo  ;" 															//		FLAG: FCVAR_HIDDEN
alias "_cvarlist_header" "echo                   Printing CvarList..." 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_transam" "echo {ConVar, NULL}: viewport_default" 													//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_index" "echo {ConVar, SUBTRACT}: disable_shells;echo {ConVar, ADD}: enable_shells" 					//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_vagrant" "echo {ConVar, SUBTRACT}: disable_tracers;echo {ConVar, ADD}: enable_tracers" 				//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_laymans" "echo {ConVar, SUBTRACT}: disable_flashes;echo {ConVar, ADD}: enable_flashes" 				//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_op" "echo {ConVar, SUBTRACT}: disable_post_process;echo {ConVar, ADD}: enable_post_process" 			//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_xml" "echo {ConVar, SUBTRACT}: clamp_peripherals;echo {ConVar, ADD}: flow_peripherals" 				//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_seq" "echo {ConVar}: round_endwarmup;echo {ConVar, SUBTRACT}: cl_viewbob_0;echo {ConVar, ADD}: cl_viewbob_1" 																										  //      FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_" "echo  ;echo  ;echo  ;echo  ;echo Successfully Printed ( 27 ) cvars.;echo  ;echo  ;echo  ;echo  " 	//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_illbin" "echo {ConVar}: _camera;echo {ConVar}: _play;echo {ConVar}: viewport_compact;echo {ConVar}: viewport_cubed" 																										   //      FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_builder" "sv_cvarlist_vagrant;sv_cvarlist_laymans;sv_cvarlist_op;sv_cvarlist_xml" 					//		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_worker" "sv_cvarlist_sequencer;sv_cvarlist_illbin;sv_cvarlist_seq;sv_cvarlist_transam;sv_cvarlist_kstyle;sv_cvarlist_index" 																																							// ^ <- FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_kstyle" "echo {ConVar, SUBTRACT}: disable_visual_recoil;echo {ConVar, ADD}: enable_visual_recoil;echo {ConVar, NULL}: default_visual_recoil" 																								 //		FLAG: FCVAR_HIDDEN
alias "sv_cvarlist_sequencer" "echo {ConVar}: m4;echo {ConVar}: sv_legacy_jump;echo {ConVar}: sv_newfangled_jump;echo {ConVar}: round_reset" 																											//		FLAG: FCVAR_HIDDEN

																																					
																																					
																																					
																																					
alias "cl_viewbob_0" "^viewbob_amtlib_01;^viewbob_amtlib_02;^viewbob_amtlib_03" 									//		FLAG: FCVAR_CLIENT
alias "disable_visual_recoil" "weapon_recoil_scale 0;weapon_recoil_view_punch_extra 0" 							//		FLAG: FCVAR_CLIENT
alias "enable_visual_recoil" "weapon_recoil_view_punch_extra 0.14646326532;weapon_recoil_scale 1.787765" 		//		FLAG: FCVAR_CLIENT
alias "default_visual_recoil" "weapon_recoil_view_punch_extra 0.055;weapon_recoil_scale 2.0" 					//		FLAG: FCVAR_CLIENT
alias "enable_shells" "cl_ejectbrass 1" 																		//		FLAG: FCVAR_CLIENT
alias "disable_shells" "cl_ejectbrass 0" 																		//		FLAG: FCVAR_CLIENT
alias "cl_viewbob_1" "^viewbob_antlib_01;^viewbob_antlib_02;^viewbob_antlib_03" 									//		FLAG: FCVAR_CLIENT
alias "disable_tracers" "r_drawtracers 0;r_drawtracers_firstperson 0" 											//		FLAG: FCVAR_CLIENT
alias "enable_tracers" "r_drawtracers 1;r_drawtracers_firstperson 1" 											//		FLAG: FCVAR_CLIENT
alias "disable_flashes" "sv_flashbang_strength 0" 																//		FLAG: FCVAR_CLIENT
alias "enable_flashes" "sv_flashbang_strength 3.55" 															//		FLAG: FCVAR_CLIENT
alias "disable_post_process" "mat_postprocess_enable 0" 														//		FLAG: FCVAR_CLIENT
alias "enable_post_process" "mat_postprocess_enable 1" 															//		FLAG: FCVAR_CLIENT
alias "disable_grenade_radio" "sv_ignoregrenaderadio 1" 														//		FLAG: FCVAR_CLIENT
alias "enable_grenade_radio" "sv_ignoregrenaderadio 0" 															//		FLAG: FCVAR_CLIENT
alias "cl_clamp_bin" "disable_visual_recoil;disable_tracers;cl_viewbob_0" 										//		FLAG: FCVAR_CLIENT
alias "cl_clamp_cue" "disable_flashes;disable_post_process;disable_grenade_radio" 								//		FLAG: FCVAR_CLIENT
alias "clamp_peripherals" "cl_clamp_bin;cl_clamp_cue" 															//		FLAG: FCVAR_CLIENT
alias "cl_flow_bin" "enable_visual_recoil;enable_tracers;cl_viewbob_1" 											//		FLAG: FCVAR_CLIENT
alias "cl_flow_cue" "enable_flashes;enable_post_process;enable_grenade_radio" 									//		FLAG: FCVAR_CLIENT
alias "flow_peripherals" "cl_flow_bin;cl_flow_cue" 																//		FLAG: FCVAR_CLIENT
alias "viewport_compact" "r_aspectratio 2.22" 																	//		FLAG: FCVAR_CLIENT
alias "viewport_default" "r_aspectratio 0" 																		//		FLAG: FCVAR_CLIENT
alias "viewport_cubed" "r_aspectratio 3.00000000043543" 														//		FLAG: FCVAR_CLIENT
alias "_camera" "r_drawviewmodel 0;hidehud 4" 																	//		FLAG: FCVAR_CLIENT
alias "_play" "r_drawviewmodel 1;hidehud 0" 																	//		FLAG: FCVAR_CLIENT
alias "agent_cvarlist" "clear;sv_cvarlist_onespace;_cvarlist_header;sv_cvarlist_spacer;sv_cvarlist_worker;sv_cvarlist_builder;sv_cvarlist_" 
																												//     ^FLAG: FCVAR_CLIENT
																																				
																																				
//	old-FINAL LOAD
_spline_angles
clamp_crosshair
clamp_buy_time
clamp_team_selection
render_flow_control
//ass













                                                                                     io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/pack.cfg                                                   0100777 0000000 0000000 00000000266 12763546506 015773  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       



						struct_environment;
											.development
						
						
						




























rebuild_outer_layer;pack_fire_off;pak_rbld                                                                                                                                                                                                                                                                                                                                          io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/packager/                                                  0040777 0000000 0000000 00000000000 12765171247 016143  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/packager/client_convars.cfg                                0100777 0000000 0000000 00000010377 12763545450 021644  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       
													//		       CLIENT
													
alias "m4" "give weapon_m4a1_silencer;give weapon_deagle;givecurrentammo"												// FCVAR_CLIENT
alias "clamp_buy_time" "mp_buytime 650"																					// FCVAR_CLIENT
alias "clamp_team_selection" "mp_force_assign_teams 1"																	// FCVAR_CLIENT
alias "flow_team_selection" "mp_force_assign_teams 0"																	// FCVAR_CLIENT
alias "render_default_flow" "cl_maxrenderable_dist 3000"																// FCVAR_CLIENT
alias "render_flow_control" "cl_maxrenderable_dist 9999"																// FCVAR_CLIENT
alias "game_pause" "mp_pause_match"											 											// FCVAR_CLIENT
alias "game_unpause" "mp_unpause_match"										 											// FCVAR_CLIENT
alias "round_reset" "^iclear;map de_dust2;^mod_fire_debuggerZ;^_spline_angles"											// FCVAR_CLIENT
alias "offline_bots" "^32_bit_;sv_legacy_jump_play;^float_teams"														// FCVAR_CLIENT
alias "mat_hack_state" "mat_hack_on"										 											// FCVAR_CLIENT
alias "sv_newfangled_jump" "^bhop_rescind;^bhop_retract;^mod_fire_debuggerY;^_spline_angles"							// FCVAR_CLIENT
alias "sv_legacy_jump_play" "^bhop_reticulate;^bhop_triangulater;^float_teams;^ms3;^mod_fire_debuggerX;^_spline_angles"	// FCVAR_CLIENT
alias "sv_legacy_jump" "^bhop_reticulate;^bhop_triangulate;^ms3;^mod_fire_debuggerX;^_spline_angles"					// FCVAR_CLIENT
alias "clamp_ai" "bot_dont_shoot 1"																						// FCVAR_CLIENT
alias "flow_ai" "bot_dont_shoot 0"																						// FCVAR_CLIENT
alias "clamp_ai_full" "bot_dont_shoot 1;sb_stop 1"																		// FCVAR_CLIENT
alias "flow_ai_full" "bot_dont_shoot 0;sb_stop 0"																		// FCVAR_CLIENT
alias "cl_viewbob_0" "^viewbob_amtlib_01;^viewbob_amtlib_02;^viewbob_amtlib_03" 										// FCVAR_CLIENT
alias "disable_visual_recoil" "weapon_recoil_scale 0;weapon_recoil_view_punch_extra 0" 									// FCVAR_CLIENT
alias "enable_visual_recoil" "weapon_recoil_view_punch_extra 0.14646326532;weapon_recoil_scale 1.787765" 				// FCVAR_CLIENT
alias "default_visual_recoil" "weapon_recoil_view_punch_extra 0.055;weapon_recoil_scale 2.0" 							// FCVAR_CLIENT
alias "enable_shells" "cl_ejectbrass 1" 																				// FCVAR_CLIENT
alias "disable_shells" "cl_ejectbrass 0" 																				// FCVAR_CLIENT
alias "cl_viewbob_1" "^viewbob_antlib_01;^viewbob_antlib_02;^viewbob_antlib_03" 										// FCVAR_CLIENT
alias "disable_tracers" "r_drawtracers 0;r_drawtracers_firstperson 0" 													// FCVAR_CLIENT
alias "enable_tracers" "r_drawtracers 1;r_drawtracers_firstperson 1" 													// FCVAR_CLIENT
alias "disable_flashes" "sv_flashbang_strength 0" 																		// FCVAR_CLIENT
alias "enable_flashes" "sv_flashbang_strength 3.55" 																	// FCVAR_CLIENT
alias "disable_post_process" "mat_postprocess_enable 0" 																// FCVAR_CLIENT
alias "enable_post_process" "mat_postprocess_enable 1" 																	// FCVAR_CLIENT
alias "disable_grenade_radio" "sv_ignoregrenaderadio 1" 																// FCVAR_CLIENT
alias "enable_grenade_radio" "sv_ignoregrenaderadio 0" 																	// FCVAR_CLIENT
alias "cl_clamp_bin" "disable_visual_recoil;disable_tracers;cl_viewbob_0" 												// FCVAR_CLIENT
alias "cl_clamp_cue" "disable_flashes;disable_post_process;disable_grenade_radio" 										// FCVAR_CLIENT
alias "clamp_peripherals" "cl_clamp_bin;cl_clamp_cue" 																	// FCVAR_CLIENT
alias "cl_flow_bin" "enable_visual_recoil;enable_tracers;cl_viewbob_1" 													// FCVAR_CLIENT
alias "cl_flow_cue" "enable_flashes;enable_post_process;enable_grenade_radio" 											// FCVAR_CLIENT
alias "flow_peripherals" "cl_flow_bin;cl_flow_cue" 																		// FCVAR_CLIENT
alias "viewport_compact" "r_aspectratio 2.22" 																			// FCVAR_CLIENT
alias "viewport_default" "r_aspectratio 0" 																				// FCVAR_CLIENT
alias "viewport_cubed" "r_aspectratio 3.00000000043543" 																// FCVAR_CLIENT
alias "_camera" "r_drawviewmodel 0;hidehud 4" 																			// FCVAR_CLIENT
alias "_play" "r_drawviewmodel 1;hidehud 0" 																			// FCVAR_CLIENT
alias "agent_cvarlist" "clear;^sv_cvarlist_onespace;^_cvarlist_header;^sv_cvarlist_spacer;^sv_cvarlist_worker;^sv_cvarlist_builder;^sv_cvarlist_" 
																														// FCVAR_CLIENT                                                                                                                                                                                                                                                                 io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/packager/development.cfg                                   0100777 0000000 0000000 00000001025 12763543322 021137  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       //
//											DEVELOPMENT LIBRARIES
//
//
//	.
	//	.
		//	.
			


					{						;		  null_func
											;		.development
							.public		;		struct_environment

							if;		AreConVarsLinkable;		then;		ConVarLayerVector
															bool
							when;		point_clientcmd			;		then;  
							
							ifVector; virtual					;		
									
										.public					;		
											*child				;		-
											*parent				;		+
									
							const	;		write_null_factors
					}
					
					
					
dev_fire_off;pak_rst
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/packager/pack/                                             0040777 0000000 0000000 00000000000 12762402626 017054  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/packager/pack/result.cfg                                   0100777 0000000 0000000 00000000065 12763544500 021053  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       result_fire_off


//	DEVELOPMENT (variables)


                                                                                                                                                                                                                                                                                                                                                                                                                                                                           io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/point_main/                                                0040777 0000000 0000000 00000000000 12765171247 016523  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/point_main/CVARlib.cfg                                     0100777 0000000 0000000 00000012617 12763525771 020440  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       //____________________________________________________________________________________________________________________________________________________\\








						// 							CVARLIST_ARCHIVE_PRINTER
alias "agent_2space" "echo  ;echo  ;"
alias "smspc" "echo  ;echo  ;"
alias "vwbob" "echo (Cvar:  cl_viewbob_0)"
alias "vwbob2" "echo (Cvar:  cl_viewbob_1)"
alias "cvar_cl_viewbob_0" "agent_2space;vwbob;echo {ConVar desc}: Disables walking animation-based viewbobbing;smspc"
alias "cvar_cl_viewbob_1" "agent_2space;vwbob2;echo {ConVar desc}: Enables walking animation-based viewbobbing;smspc"
alias "visre" "echo (Cvar:  disable_visual_recoil)"
alias "visre2" "echo (Cvar:  enable_visual_recoil)"
alias "visre3" "echo (Cvar:  default_visual_recoil)"
alias "cvar_disable_visual_recoil" "agent_2space;visre;echo {ConVar desc}: Disables visual recoil;smspc"
alias "cvar_enable_visual_recoil" "agent_2space;visre2;echo {ConVar desc}: Enables visual recoil;smspc"
alias "cvar_default_visual_recoil" "agent_2space;visre3;echo {ConVar desc}: Designates default visual recoil;smspc"
alias "shllz" "echo (Cvar:  enable_shells)"
alias "shllz2" "echo (Cvar:  disable_shells)"
alias "cvar_enable_shells" "agent_2space;shllz;echo {ConVar desc}: Enables drawing of bullet shells;smspc"
alias "cvar_disable_shells" "agent_2space;shllz2;echo {ConVar desc}: Disables drawing of bullet shells;smspc"
alias "tracert" "echo (Cvar:  disable_tracers)"
alias "tracert2" "echo (Cvar:  enable_tracers)"
alias "cvar_disable_tracers" "agent_2space;tracert;echo {ConVar desc}: Disables drawing of bullet 'tracers', or visual bullet travel;smspc"
alias "cvar_enable_tracers" "agent_2space;tracert2;echo {ConVar desc}: Enables drawing of bullet 'tracers', or visual bullet travel;smspc"
alias "flsn" "echo (Cvar:  enable_flashes)"
alias "flsn2" "echo (Cvar:  disable_flashes)"
alias "cvar_enable_flashes" "agent_2space;flsn;echo {ConVar desc}: Enables drawing of flashbang effects;agent_2space"
alias "cvar_disable_flashes" "agent_2space;flsn2;echo {ConVar desc}: Disables drawing of flashbang effects;agent_2space"
alias "pstprc" "echo (Cvar:  disable_post_process)"
alias "pstprc2" "echo (Cvar:  enable_post_process)"
alias "cvar_disable_post_process" "agent_2space;pstprc;echo {ConVar desc}: Disables drawing of post-processing effects;agent_2space"
alias "cvar_enable_post_process" "agent_2space;pstprc2;echo {ConVar desc}: Enables drawing of post-processing effects;agent_2space"
alias "grnrad" "echo (Cvar:  disable_grenade_radio)"
alias "grnrad2" "echo (Cvar:  enable_grenade_radio)"
alias "cvar_disable_grenade_radio" "agent_2space;grnrad;echo {ConVar desc}: Disables rendering of 'fire in the hole' messages;smspc"
alias "cvar_enable_grenade_radio" "agent_2space;grnrad2;echo {ConVar desc}: Enables rendering of 'fire in the hole' messages;smspc"
alias "clmpX" "echo (Cvar:  clamp_peripherals)"
alias "clmpY" "echo (Cvar:  flow_peripherals)"
alias "cvar_clamp_peripherals" "agent_2space;clmpX;echo {ConVar desc}: Disables rendering of a multitude of background peripherals;smspc"
alias "cvar_flow_peripherals" "agent_2space;clmpY;echo {ConVar desc}: Enables rendering of a multitude of background peripherals;smspc"
alias "viewportT" "echo (Cvar:  viewport_compact)"
alias "viewportC" "echo (Cvar:  viewport_cubed)"
alias "viewportGc" "echo (Cvar:  viewport_default)"
alias "cvar_viewport_compact" "agent_2space;viewportT;echo {ConVar desc}: Soft-Locks viewport to Compact View;smspc"
alias "cvar_viewport_cubed" "agent_2space;viewportC;echo {ConVar desc}: Soft-Locks viewport to Cubed View;smspc"
alias "cvar_viewport_default" "agent_2space;viewportGc;echo {ConVar desc}: Re-Locks viewport to Default View;smspc"
alias "camZx" "echo (Cvar:  _camera)"
alias "cvar_camera" "agent_2space;camZx;echo {ConVar desc}: Soft-Locks current viewport to hudless Camera mode;smspc"
alias "camZxa" "echo (Cvar:  _camera)"
alias "cvar__camera" "agent_2space;camZxa;echo {ConVar desc}: Soft-Locks current viewport to hudless Camera mode;smspc"
alias "_ply" "echo (Cvar:  _play)"
alias "cvar_play" "agent_2space;_ply;echo {ConVar desc}: Soft-Locks current viewport to hud-entitled Playing mode;smspc"
alias "_plyat" "echo (Cvar:  _play)"
alias "cvar__play" "agent_2space;_plyat;echo {ConVar desc}: Soft-Locks current viewport to hud-entitled Playing mode;smspc"
alias "lgcy" "echo (Cvar:  sv_legacy_jump)"
alias "nwfng" "echo (Cvar:  sv_newfangled_jump)"
alias "cvar_sv_legacy_jump" "agent_2space;lgcy;echo {ConVar desc}: Soft-Locks current jump mode to Solo Bhopping status;smspc"
alias "cvar_sv_newfangled_jump" "agent_2space;nwfng;echo {ConVar desc}: Re-Locks current jump mode to Default CS: GO state;smspc"
alias "endRnd" "echo (Cvar:  round_endwarmup)"
alias "cvar_round_endwarmup" "agent_2space;endRnd;echo {ConVar desc}: Ends the warmup sequence, also kicks AI players from local games;smspc"
alias "resRnd" "echo (Cvar:  round_reset)"
alias "cvar_round_reset" "agent_2space;resRnd;echo {ConVar desc}: Loads De_Dust2;smspc"
alias "PlyHop" "echo (Cvar:  sv_legacy_jump_play)"
alias "cvar_sv_legacy_jump_play" "agent_2space;PlyHop;echo {ConVar desc}: Enables Bhop mode with bots;smspc"
alias "emfour" "echo (Cvar:  m4)"
alias "cvar_m4" "agent_2space;emfour;echo {ConVar desc}: Gives the user an M4A1 silenced Maverick;smspc"
//____________________________________________________________________________________________________________________________________________________\\                                                                                                                 io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/point_main/CVARlib2.cfg                                    0100777 0000000 0000000 00000012617 12763546422 020516  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       //____________________________________________________________________________________________________________________________________________________\\








						// 							CVARLIST_ARCHIVE_PRINTER
alias "agent_2space" "echo  ;echo  ;"
alias "smspc" "echo  ;echo  ;"
alias "vwbob" "echo (Cvar:  cl_viewbob_0)"
alias "vwbob2" "echo (Cvar:  cl_viewbob_1)"
alias "cvar_cl_viewbob_0" "agent_2space;vwbob;echo {ConVar desc}: Disables walking animation-based viewbobbing;smspc"
alias "cvar_cl_viewbob_1" "agent_2space;vwbob2;echo {ConVar desc}: Enables walking animation-based viewbobbing;smspc"
alias "visre" "echo (Cvar:  disable_visual_recoil)"
alias "visre2" "echo (Cvar:  enable_visual_recoil)"
alias "visre3" "echo (Cvar:  default_visual_recoil)"
alias "cvar_disable_visual_recoil" "agent_2space;visre;echo {ConVar desc}: Disables visual recoil;smspc"
alias "cvar_enable_visual_recoil" "agent_2space;visre2;echo {ConVar desc}: Enables visual recoil;smspc"
alias "cvar_default_visual_recoil" "agent_2space;visre3;echo {ConVar desc}: Designates default visual recoil;smspc"
alias "shllz" "echo (Cvar:  enable_shells)"
alias "shllz2" "echo (Cvar:  disable_shells)"
alias "cvar_enable_shells" "agent_2space;shllz;echo {ConVar desc}: Enables drawing of bullet shells;smspc"
alias "cvar_disable_shells" "agent_2space;shllz2;echo {ConVar desc}: Disables drawing of bullet shells;smspc"
alias "tracert" "echo (Cvar:  disable_tracers)"
alias "tracert2" "echo (Cvar:  enable_tracers)"
alias "cvar_disable_tracers" "agent_2space;tracert;echo {ConVar desc}: Disables drawing of bullet 'tracers', or visual bullet travel;smspc"
alias "cvar_enable_tracers" "agent_2space;tracert2;echo {ConVar desc}: Enables drawing of bullet 'tracers', or visual bullet travel;smspc"
alias "flsn" "echo (Cvar:  enable_flashes)"
alias "flsn2" "echo (Cvar:  disable_flashes)"
alias "cvar_enable_flashes" "agent_2space;flsn;echo {ConVar desc}: Enables drawing of flashbang effects;agent_2space"
alias "cvar_disable_flashes" "agent_2space;flsn2;echo {ConVar desc}: Disables drawing of flashbang effects;agent_2space"
alias "pstprc" "echo (Cvar:  disable_post_process)"
alias "pstprc2" "echo (Cvar:  enable_post_process)"
alias "cvar_disable_post_process" "agent_2space;pstprc;echo {ConVar desc}: Disables drawing of post-processing effects;agent_2space"
alias "cvar_enable_post_process" "agent_2space;pstprc2;echo {ConVar desc}: Enables drawing of post-processing effects;agent_2space"
alias "grnrad" "echo (Cvar:  disable_grenade_radio)"
alias "grnrad2" "echo (Cvar:  enable_grenade_radio)"
alias "cvar_disable_grenade_radio" "agent_2space;grnrad;echo {ConVar desc}: Disables rendering of 'fire in the hole' messages;smspc"
alias "cvar_enable_grenade_radio" "agent_2space;grnrad2;echo {ConVar desc}: Enables rendering of 'fire in the hole' messages;smspc"
alias "clmpX" "echo (Cvar:  clamp_peripherals)"
alias "clmpY" "echo (Cvar:  flow_peripherals)"
alias "cvar_clamp_peripherals" "agent_2space;clmpX;echo {ConVar desc}: Disables rendering of a multitude of background peripherals;smspc"
alias "cvar_flow_peripherals" "agent_2space;clmpY;echo {ConVar desc}: Enables rendering of a multitude of background peripherals;smspc"
alias "viewportT" "echo (Cvar:  viewport_compact)"
alias "viewportC" "echo (Cvar:  viewport_cubed)"
alias "viewportGc" "echo (Cvar:  viewport_default)"
alias "cvar_viewport_compact" "agent_2space;viewportT;echo {ConVar desc}: Soft-Locks viewport to Compact View;smspc"
alias "cvar_viewport_cubed" "agent_2space;viewportC;echo {ConVar desc}: Soft-Locks viewport to Cubed View;smspc"
alias "cvar_viewport_default" "agent_2space;viewportGc;echo {ConVar desc}: Re-Locks viewport to Default View;smspc"
alias "camZx" "echo (Cvar:  _camera)"
alias "cvar_camera" "agent_2space;camZx;echo {ConVar desc}: Soft-Locks current viewport to hudless Camera mode;smspc"
alias "camZxa" "echo (Cvar:  _camera)"
alias "cvar__camera" "agent_2space;camZxa;echo {ConVar desc}: Soft-Locks current viewport to hudless Camera mode;smspc"
alias "_ply" "echo (Cvar:  _play)"
alias "cvar_play" "agent_2space;_ply;echo {ConVar desc}: Soft-Locks current viewport to hud-entitled Playing mode;smspc"
alias "_plyat" "echo (Cvar:  _play)"
alias "cvar__play" "agent_2space;_plyat;echo {ConVar desc}: Soft-Locks current viewport to hud-entitled Playing mode;smspc"
alias "lgcy" "echo (Cvar:  sv_legacy_jump)"
alias "nwfng" "echo (Cvar:  sv_newfangled_jump)"
alias "cvar_sv_legacy_jump" "agent_2space;lgcy;echo {ConVar desc}: Soft-Locks current jump mode to Solo Bhopping status;smspc"
alias "cvar_sv_newfangled_jump" "agent_2space;nwfng;echo {ConVar desc}: Re-Locks current jump mode to Default CS: GO state;smspc"
alias "endRnd" "echo (Cvar:  round_endwarmup)"
alias "cvar_round_endwarmup" "agent_2space;endRnd;echo {ConVar desc}: Ends the warmup sequence, also kicks AI players from local games;smspc"
alias "resRnd" "echo (Cvar:  round_reset)"
alias "cvar_round_reset" "agent_2space;resRnd;echo {ConVar desc}: Loads De_Dust2;smspc"
alias "PlyHop" "echo (Cvar:  sv_legacy_jump_play)"
alias "cvar_sv_legacy_jump_play" "agent_2space;PlyHop;echo {ConVar desc}: Enables Bhop mode with bots;smspc"
alias "emfour" "echo (Cvar:  m4)"
alias "cvar_m4" "agent_2space;emfour;echo {ConVar desc}: Gives the user an M4A1 silenced Maverick;smspc"
//____________________________________________________________________________________________________________________________________________________\\                                                                                                                 io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/point_main/module.cfg                                      0100777 0000000 0000000 00000000115 12763544322 020462  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       

alias "pointto_DEVPACK" "echo {System} packaged, Proceeding to result..."                                                                                                                                                                                                                                                                                                                                                                                                                                                   io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/point_main/notifier_input.cfg                              0100777 0000000 0000000 00000000052 12763522034 022227  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       echo "cEngine. Build Process Executing..."                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/point_main/notifier_main.cfg                               0100777 0000000 0000000 00000000122 12763522245 022016  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       echo " "
echo " "
echo "cEngine. Build Process Executing..."
echo " "
echo " "                                                                                                                                                                                                                                                                                                                                                                                                                                              io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/point_main/notifier_output.cfg                             0100777 0000000 0000000 00000000117 12763522222 022431  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       echo " "
echo " "
echo "cEngine. Build Process Executed."
echo " "
echo " "                                                                                                                                                                                                                                                                                                                                                                                                                                                 io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/point_main/_config_toast.cfg                               0100777 0000000 0000000 00000001605 12763502327 022017  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       clear;echo " ";echo " ";echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: sv_newfangled_jump";echo "ConVar desc: re-locks new-styled hopping from CS: GO";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence.";echo " ";echo "ConVar create: cl_viewbob_0";echo "ConVar desc: Disables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: cl_viewbob_1";echo "ConVar desc: Enables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: agent_cvarlist";echo "ConVar desc: List all of the ConVars articulated by this package."
echo " ";echo "ConVar create: sv_legacy_jump_play";echo "ConVar desc: Enables bhop with bots";echo " ";echo " ";echo " ";echo " "                                                                                                                           io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/rebuild.cfg                                                0100777 0000000 0000000 00000046574 12763545363 016517  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       //					SV_CHAIN

alias "_hook" "echo  ;echo  ;echo  ;echo"
alias "config_hook_process" "exec \switches\sv_switches.cfg;sv_cheats 1;sv_client_min_interp_ratio 0;sv_cheats 0"
alias "config_hook_resound" "echo  ;echo  ;echo  ;echo                      {CONFIG HOOK EXECUTED};_hook"
alias "config_hook_boolean" "alias  "clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear;clear"
alias "config_toast" "exec \engine\point_main\_config_toast.cfg"


//	exec \trigger\sv_hook.cfg
//
//____________________________________________________________________________________________________________________________________________________\\
//
//
//					SV_HOOK
//
//				HOOKS of CONFIGURATION CHAIN
//				 prints splash toast, loads
//						config main
//

config_toast
config_hook_process
//____________________________________________________________________________________________________________________________________________________\\

																																						
																																						
																																						
																																						
																																						

//____________________________________________________________________________________________________________________________________________________\\

//					SWITCHES


alias "^ENGINE_flowcontrol_setup" "sv_cheats 1;mp_roundtime 75;mp_roundtime_defuse 0"				// FCVAR_DEVELOPMENTONLY
alias "^_spline_angles" "sv_cheats 1;mp_roundtime 75;mp_roundtime_defuse 0"							// FCVAR_DEVELOPMENTONLY
alias "^ENGINE_clampcontrol_setup" "exec config_arrays.cfg"											// FCVAR_DEVELOPMENTONLY
alias "^ENGINE_cvarlist_search" "exec \engine\point_main\CVARlib.cfg"								// FCVAR_DEVELOPMENTONLY
alias "m4" "give weapon_m4a1_silencer;give weapon_deagle;givecurrentammo"							// FCVAR_CLIENT
alias "clamp_buy_time" "mp_buytime 650"																// FCVAR_CLIENT
alias "clamp_team_selection" "mp_force_assign_teams 1"												// FCVAR_CLIENT
alias "flow_team_selection" "mp_force_assign_teams 0"												// FCVAR_CLIENT
alias "render_default_flow" "cl_maxrenderable_dist 3000"											// FCVAR_CLIENT
alias "render_flow_control" "cl_maxrenderable_dist 9999"											// FCVAR_CLIENT


//____________________________________________________________________________________________________________________________________________________\\
//
//
//
//
//
//
//
//
//Test ways of making the FCVAR_HIDDEN and FCVAR_DEVELOPMENTONLY ConVars be re-written at the very end of config load, to cause them to be 'hidden'


				//											ConVars
//____________________________________________________________________________________________________________________________________________________\\
																																						
														//		   HIDDEN
alias "^crosshair_redist01" "cl_crosshair_dynamic_splitdist 2;cl_crosshair_dynamic_splitalpha_outermod 0.300000"				// FCVAR_HIDDEN
alias "^crosshair_redist02" "cl_crosshair_dynamic_splitalpha_innermod 1;cl_crosshair_dynamic_maxdist_splitratio 0.05"			// FCVAR_HIDDEN
alias "^crosshair_redist03" "cl_crosshair_dynamic_maxdist_splitratio 0.05;cl_crosshaircolor 4;cl_crosshairsize 3.5897877"		// FCVAR_HIDDEN
alias "^iclear" "exec sv_hop_arrays.cfg;mp_buy_anywhere 1"																		// FCVAR_HIDDEN
alias "^bhop_reticulate" "^iclear;mirv_cvar_unhide_all;sv_enablebunnyhopping 1;sv_airaccelerate 1000"							// FCVAR_HIDDEN
alias "^bhop_triangulate" "^iclear;bot_kick;mp_warmup_end;sv_staminajumpcost 0;sv_staminalandcost 0"							// FCVAR_HIDDEN
alias "^bhop_triangulater" "^iclear;mp_warmup_end;sv_staminajumpcost 0;sv_staminalandcost 0"									// FCVAR_HIDDEN
alias "^bhop_rescind" "^iclear;mirv_cvar_unhide_all;sv_enablebunnyhopping 0;sv_airaccelerate 12 "								// FCVAR_HIDDEN
alias "^bhop_retract" "^iclear;sv_staminajumpcost .080;sv_staminalandcost .050"													// FCVAR_HIDDEN
alias "^clamp_debuggers_A" "say [Source Jump Behaviour Mode]: Legacy"															// FCVAR_HIDDEN
alias "^clamp_debuggers_B" "say [Source Jump Behaviour Mode]: New Fangled"														// FCVAR_HIDDEN
alias "^clamp_debuggers_C" "say [ROUND RESET]"																					// FCVAR_HIDDEN
alias "clamp_debuggers_N" "say [WARMUP CANCELLED]"																				// FCVAR_HIDDEN
alias "^mod_fire_debuggerX" "^iclear;echo " ";echo [Source Jump Behaviour Mode]: Legacy;^clamp_debuggers_A"						// FCVAR_HIDDEN
alias "^mod_fire_debuggerY" "^iclear;echo " ";echo [Source Jump Behaviour Mode]: New Fangled;^clamp_debuggers_B"				// FCVAR_HIDDEN
alias "^mod_fire_debuggerZ" "^iclear;echo " ";echo [ROUND RESET];^clamp_debuggers_C"											// FCVAR_HIDDEN
alias "^mod_fire_debuggerC" "^iclear;echo " ";echo [WARMUP CANCELLED];clamp_debuggers_N"										// FCVAR_HIDDEN
alias "^mat_hack_on" "r_drawothermodels 2; alias mat_hack_state ^mat_hack_off"													// FCVAR_HIDDEN
alias "^mat_hack_off" "r_drawothermodels 1; alias mat_hack_state ^mat_hack_on"													// FCVAR_HIDDEN
alias "^sv_debug_workerA" "exec _extenuating_arrays.cfg"																		// FCVAR_HIDDEN
alias "^32_bit_" "mp_autoteambalance 1;bot_quota 10"																			// FCVAR_HIDDEN
alias "^float_teams" "mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"														// FCVAR_HIDDEN
alias "^add_ct_bots" "bot_add_ct FPSGAMERGOD1999;bot_add_ct Oxford Smith;bot_add_ct Mau5Hau5 | tEye;bot_add_ct Nashville Dog"	// FCVAR_HIDDEN
alias "^round_endwarmup" "mp_warmup_end;bot_kick;^mod_fire_debuggerC;^_spline_angles"											// FCVAR_HIDDEN
alias "^ms3" "player_limit_jump_speed 0"																						// FCVAR_HIDDEN


													//		        BOTS
																																						 
alias "^add_t_bots" "bot_add_ct FPSGAMERGOD1999;bot_add_ct CloudM.Hydraxi;bot_add_ct Oxford Smith;bot_add_ct Mau5Hau5 | tEye;bot_add_ct Nashville Dog"
																																//^FCVAR_CLIENT
 alias "five_bots_CT" "bot_quota_mode 0;^_bots_add_V;^_bots_add_C;^_bots_add_Y;^_bots_add_X;^_bots_add_Z;^bot_add_PASS2;^_bot_add_var"	
																																// FCVAR_HIDDEN
 alias "five_bots_T" "bot_quota_mode 0;^bots_add_V;^bots_add_C;^bots_add_Y;^bots_add_X;^bots_add_Z;^bot_add_PASS1;^bot_add_var"	// FCVAR_HIDDEN
alias "three_bots" "bot_quota_mode 0;^bots_addV;^bots_addC;^bots_addY;^bots_addX;^bots_addZ"									// FCVAR_CLIENT
alias "k_bots" "bot_kick"																										// FCVAR_CLIENT
alias "b_kick" " bot_kick"																										// FCVAR_CLIENT
alias "botkick" "bot_kick"																										// FCVAR_CLIENT
alias "kickbot" "bot_kick"																										// FCVAR_CLIENT
alias "kickbots" "bot_kick"																										// FCVAR_CLIENT
//alias "kick_ct" "bot_kick ct;bot_kick ct;bot_kick ct;bot_kick ct;bot_kick ct;bot_quota 5"										// FCVAR_ARCHIVED
																																						 
alias "^bot_add_PASS1" "bot_add_ct Lady Grey;bot_add_ct Emotional Surgery"														// FCVAR_HIDDEN
alias "^bot_add_PASS2" "bot_add_t Lady Grey;bot_add_t Emotional Surgery"														// FCVAR_HIDDEN
alias "^bots_addV" "bot_add_ct Mau5Hau5 | tEye;flow_teams"																		// FCVAR_HIDDEN
alias "^bots_addC" "bot_add_ct Nashville Dog;flow_teams"																		// FCVAR_HIDDEN
alias "^bots_addY" "bot_add_ct Oxford Smith;flow_teams"																			// FCVAR_HIDDEN
alias "^bots_addX" "bot_add_ct CloudM.Hydraxi;flow_teams"																		// FCVAR_HIDDEN
alias "^bots_addZ" "bot_add_ct FPSGAMERGOD1999;flow_teams"																		// FCVAR_HIDDEN
																																						 
alias "^bot_add_var" "bot_add_ct Liquid;bot_add_t UnderDOG MIKE"																// FCVAR_HIDDEN
alias "^bots_add_V" "bot_add_ct Mau5Hau5 | tEye;flow_teams_x;"																	// FCVAR_HIDDEN
alias "^bots_add_C" "bot_add_ct Nashville Dog;flow_teams_x"																		// FCVAR_HIDDEN
alias "^bots_add_Y" "bot_add_ct Oxford Smith;flow_teams_x"																		// FCVAR_HIDDEN
alias "^bots_add_X" "bot_add_ct CloudM.Hydraxi;flow_teams_x"																	// FCVAR_HIDDEN
alias "^bots_add_Z" "bot_add_ct FPSGAMERGOD1999;flow_teams_x"																	// FCVAR_HIDDEN
																																						 
alias "^_bot_add_var" "bot_add_t Liquid;bot_add_t UnderDOG MIKE"																// FCVAR_HIDDEN
alias "^_bots_add_V" "bot_add_t Mau5Hau5 | tEye;flow_teams_x;"																	// FCVAR_HIDDEN
alias "^_bots_add_C" "bot_add_t Nashville Dog;flow_teams_x"																		// FCVAR_HIDDEN
alias "^_bots_add_Y" "bot_add_t Oxford Smith;flow_teams_x"																		// FCVAR_HIDDEN
alias "^_bots_add_X" "bot_add_t CloudM.Hydraxi;flow_teams_x"																	// FCVAR_HIDDEN
alias "^_bots_add_Z" "bot_add_t FPSGAMERGOD1999;flow_teams_x"																	// FCVAR_HIDDEN
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		       CLIENT
alias "game_pause" "mp_pause_match"											 											// FCVAR_CLIENT
alias "game_unpause" "mp_unpause_match"										 											// FCVAR_CLIENT
alias "round_reset" "iclear;map de_dust2;^mod_fire_debuggerZ;^_spline_angles"											// FCVAR_CLIENT
alias "offline_bots" "^32_bit_;sv_legacy_jump_play;float_teams"															// FCVAR_CLIENT
alias "mat_hack_state" "mat_hack_on"										 											// FCVAR_CLIENT
alias "sv_newfangled_jump" "^bhop_rescind;^bhop_retract;^mod_fire_debuggerY;^_spline_angles"								// FCVAR_CLIENT
alias "sv_legacy_jump_play" "^bhop_reticulate;^bhop_triangulater;float_teams;^ms3;^mod_fire_debuggerX;^_spline_angles"	// FCVAR_CLIENT
alias "sv_legacy_jump" "^bhop_reticulate;^bhop_triangulate;^ms3;^mod_fire_debuggerX;^_spline_angles"						// FCVAR_CLIENT
alias "clamp_ai" "bot_dont_shoot 1"																						// FCVAR_CLIENT
alias "flow_ai" "bot_dont_shoot 0"																						// FCVAR_CLIENT
alias "clamp_ai_full" "bot_dont_shoot 1;sb_stop 1"																		// FCVAR_CLIENT
alias "flow_ai_full" "bot_dont_shoot 0;sb_stop 0"																		// FCVAR_CLIENT
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		   DEVELOPMENTONLY

alias "clamp_crosshair" "^crosshair_redist01;^crosshair_redist02;^crosshair_redist03"					// FCVAR_DEVELOPMENTONLY

//															 _Environment_Setup_

ENGINE_flowcontrol_setup															// FCVAR_DEVELOPMENTONLY
ENGINE_clampcontrol_setup															// FCVAR_DEVELOPMENTONLY
ENGINE_cvarlist_search																// FCVAR_DEVELOPMENTONLY
																																						
//____________________________________________________________________________________________________________________________________________________\\
																																						
													//		      ARCHIVED
													
alias "test_remove_CT" "^32_bit_;sv_legacy_jump_play;float_teams;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct;bot_quota 5;bot_kick ct"									  										  // FCVAR_ARCHIVED
alias "test_deathmatch" "mp_respawn_on_death_t 1;mp_respawn_on_death_ct - 1" 									   // FCVAR_ARCHIVED | defaults are 0;
																																						 



//			#Resounding_PRINT

clear;echo " ";echo " ";echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: sv_newfangled_jump";echo "ConVar desc: re-locks new-styled hopping from CS: GO";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence.";echo " ";echo "ConVar create: cl_viewbob_0";echo "ConVar desc: Disables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: cl_viewbob_1";echo "ConVar desc: Enables viewbobbing in place of the old missing cvar";echo " ";echo "ConVar create: agent_cvarlist";echo "ConVar desc: List all of the ConVars articulated by this package."
echo " ";echo "ConVar create: sv_legacy_jump_play";echo "ConVar desc: Enables bhop with bots";echo " ";echo " ";echo " ";echo " "









																																							//															REFERENCED

//alias "flow_teams_ct" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0;kick_ct"
//alias "flow_teams_t" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0;kick_t"
//iclear;echo " ";echo "ConVar create: sv_legacy_jump";echo "ConVar desc: unlocks legacy-styled hopping akin to CS:S/1.6";echo " ";echo "ConVar create: round_reset";echo "ConVar desc: Reloads Dust2";echo " ";echo "ConVar create: round_endwarmup";echo "ConVar desc: Ends the warmup sequence."
//alias "flow_teams" "bot_quota 5;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"							//<FCVAR_REFERENCED  ^      ^
//alias "flow_teams_x" "bot_quota 7;mp_autokick 0;mp_autoteambalance 0;mp_limitteams 0"							// FCVAR_REFERENCED
//alias "t_teams_bots" "bot_add t;bot_add t;bot_add t;bot_add t;bot_add t"										// FCVAR_REFERENCED
//alias "ct_teams_bots" "bot_add ct;bot_add ct;bot_add ct;bot_add ct;bot_add ct"								// FCVAR_REFERENCED
//alias "_teams" "bot_quota 9;mp_autokick 1;mp_autoteambalance 1;mp_limitteams 2;t_teams_bots;ct_teams_bots"	// FCVAR_REFERENCED
//alias "clamp_teams" "_teams"																					// FCVAR_REFERENCED





























alias "^viewbob_amtlib_01" "cl_bobcycle 0.980000;cl_use_new_headbob 0;cl_bobup 0.5" 										//		FLAG: FCVAR_HIDDEN
alias "^viewbob_amtlib_02" "cl_bob_version -1;cl_bobamt_vert 0" 															//		FLAG: FCVAR_HIDDEN
alias "^viewbob_amtlib_03" "cl_bobamt_lat 0;cl_bob_lower_amt 0" 															//		FLAG: FCVAR_HIDDEN
alias "^viewbob_antlib_01" "cl_bobcycle 0.98;cl_use_new_headbob 1;cl_bobup 0.5" 											//		FLAG: FCVAR_HIDDEN
alias "^viewbob_antlib_02" "cl_bob_version 0;cl_bobamt_vert 0.25" 														//		FLAG: FCVAR_HIDDEN
alias "^viewbob_antlib_03" "cl_bobamt_lat 0.4";cl_bob_lower_amt 21"" 													//		FLAG: FCVAR_HIDDEN
alias "^sv_cvarlist_spacer" "echo  ;echo  ;echo  ;echo  ;echo  ;echo  " 													//		FLAG: FCVAR_HIDDEN
alias "^sv_cvarlist_onespace" "echo  ;echo  ;echo  ;echo  ;" 															//		FLAG: FCVAR_HIDDEN
alias "^_cvarlist_header" "echo                   Printing CvarList..." 													//		FLAG: FCVAR_HIDDEN
alias "^sv_cvarlist_transam" "echo {ConVar, NULL}: viewport_default" 													//		FLAG: FCVAR_HIDDEN
alias "^sv_cvarlist_index" "echo {ConVar, SUBTRACT}: disable_shells;echo {ConVar, ADD}: enable_shells" 					//		FLAG: FCVAR_HIDDEN
alias "^sv_cvarlist_vagrant" "echo {ConVar, SUBTRACT}: disable_tracers;echo {ConVar, ADD}: enable_tracers" 				//		FLAG: FCVAR_HIDDEN
alias "^sv_cvarlist_laymans" "echo {ConVar, SUBTRACT}: disable_flashes;echo {ConVar, ADD}: enable_flashes" 				//		FLAG: FCVAR_HIDDEN
alias "^sv_cvarlist_op" "echo {ConVar, SUBTRACT}: disable_post_process;echo {ConVar, ADD}: enable_post_process" 			//		FLAG: FCVAR_HIDDEN
alias "^sv_cvarlist_xml" "echo {ConVar, SUBTRACT}: clamp_peripherals;echo {ConVar, ADD}: flow_peripherals" 				//		FLAG: FCVAR_HIDDEN
alias "^sv_cvarlist_seq" "echo {ConVar}: round_endwarmup;echo {ConVar, SUBTRACT}: cl_viewbob_0;echo {ConVar, ADD}: cl_viewbob_1" 																										  //      FLAG: FCVAR_HIDDEN
alias "^sv_cvarlist_" "echo  ;echo  ;echo  ;echo  ;echo Successfully Printed ( 27 ) cvars.;echo  ;echo  ;echo  ;echo  " 	//		FLAG: FCVAR_HIDDEN
alias "^sv_cvarlist_illbin" "echo {ConVar}: _camera;echo {ConVar}: _play;echo {ConVar}: viewport_compact;echo {ConVar}: viewport_cubed" 																										   //      FLAG: FCVAR_HIDDEN
alias "^sv_cvarlist_builder" "^sv_cvarlist_vagrant;^sv_cvarlist_laymans;^sv_cvarlist_op;^sv_cvarlist_xml" 					//		FLAG: FCVAR_HIDDEN
alias "^sv_cvarlist_worker" "sv_cvarlist_sequencer;^sv_cvarlist_illbin;^sv_cvarlist_seq;^sv_cvarlist_transam;^sv_cvarlist_kstyle;^sv_cvarlist_index" 																																							// ^ <- FLAG: FCVAR_HIDDEN
alias "^sv_cvarlist_kstyle" "echo {ConVar, SUBTRACT}: disable_visual_recoil;echo {ConVar, ADD}: enable_visual_recoil;echo {ConVar, NULL}: default_visual_recoil" 																								 //		FLAG: FCVAR_HIDDEN
alias "^sv_cvarlist_sequencer" "echo {ConVar}: m4;echo {ConVar}: sv_legacy_jump;echo {ConVar}: sv_newfangled_jump;echo {ConVar}: round_reset" 																											//		FLAG: FCVAR_HIDDEN

																																					
																																					
																																					
																																					
alias "cl_viewbob_0" "^viewbob_amtlib_01;^viewbob_amtlib_02;^viewbob_amtlib_03" 									//		FLAG: FCVAR_CLIENT
alias "disable_visual_recoil" "weapon_recoil_scale 0;weapon_recoil_view_punch_extra 0" 							//		FLAG: FCVAR_CLIENT
alias "enable_visual_recoil" "weapon_recoil_view_punch_extra 0.14646326532;weapon_recoil_scale 1.787765" 		//		FLAG: FCVAR_CLIENT
alias "default_visual_recoil" "weapon_recoil_view_punch_extra 0.055;weapon_recoil_scale 2.0" 					//		FLAG: FCVAR_CLIENT
alias "enable_shells" "cl_ejectbrass 1" 																		//		FLAG: FCVAR_CLIENT
alias "disable_shells" "cl_ejectbrass 0" 																		//		FLAG: FCVAR_CLIENT
alias "cl_viewbob_1" "^viewbob_antlib_01;^viewbob_antlib_02;^viewbob_antlib_03" 									//		FLAG: FCVAR_CLIENT
alias "disable_tracers" "r_drawtracers 0;r_drawtracers_firstperson 0" 											//		FLAG: FCVAR_CLIENT
alias "enable_tracers" "r_drawtracers 1;r_drawtracers_firstperson 1" 											//		FLAG: FCVAR_CLIENT
alias "disable_flashes" "sv_flashbang_strength 0" 																//		FLAG: FCVAR_CLIENT
alias "enable_flashes" "sv_flashbang_strength 3.55" 															//		FLAG: FCVAR_CLIENT
alias "disable_post_process" "mat_postprocess_enable 0" 														//		FLAG: FCVAR_CLIENT
alias "enable_post_process" "mat_postprocess_enable 1" 															//		FLAG: FCVAR_CLIENT
alias "disable_grenade_radio" "sv_ignoregrenaderadio 1" 														//		FLAG: FCVAR_CLIENT
alias "enable_grenade_radio" "sv_ignoregrenaderadio 0" 															//		FLAG: FCVAR_CLIENT
alias "cl_clamp_bin" "disable_visual_recoil;disable_tracers;cl_viewbob_0" 										//		FLAG: FCVAR_CLIENT
alias "cl_clamp_cue" "disable_flashes;disable_post_process;disable_grenade_radio" 								//		FLAG: FCVAR_CLIENT
alias "clamp_peripherals" "cl_clamp_bin;cl_clamp_cue" 															//		FLAG: FCVAR_CLIENT
alias "cl_flow_bin" "enable_visual_recoil;enable_tracers;cl_viewbob_1" 											//		FLAG: FCVAR_CLIENT
alias "cl_flow_cue" "enable_flashes;enable_post_process;enable_grenade_radio" 									//		FLAG: FCVAR_CLIENT
alias "flow_peripherals" "cl_flow_bin;cl_flow_cue" 																//		FLAG: FCVAR_CLIENT
alias "viewport_compact" "r_aspectratio 2.22" 																	//		FLAG: FCVAR_CLIENT
alias "viewport_default" "r_aspectratio 0" 																		//		FLAG: FCVAR_CLIENT
alias "viewport_cubed" "r_aspectratio 3.00000000043543" 														//		FLAG: FCVAR_CLIENT
alias "_camera" "r_drawviewmodel 0;hidehud 4" 																	//		FLAG: FCVAR_CLIENT
alias "_play" "r_drawviewmodel 1;hidehud 0" 																	//		FLAG: FCVAR_CLIENT
alias "agent_cvarlist" "clear;^sv_cvarlist_onespace;^_cvarlist_header;^sv_cvarlist_spacer;^sv_cvarlist_worker;^sv_cvarlist_builder;^sv_cvarlist_" 
																												//     ^FLAG: FCVAR_CLIENT
																																				
																																				
//	old-FINAL LOAD





//ass












amtlib_fire_off;pak_pck
                                                                                                                                    io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/Shortcut_draft_env.lnk                                     0100777 0000000 0000000 00000004157 12763525234 020743  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       L        �      F�     ��3���3���3�                       ! P�O� �:i�� +00� /D:\                   V 1     �H'8 Archive @ 	  ﾊH��H'8.   E                   �o# A r c h i v e    P 1     �H1_ Cloud < 	  ﾥHm��H1_.   �                   ��� C l o u d    P 1     �H& Files < 	  ﾱH`�H&.   W                   u F i l e s    V 1     
IH Backups @ 	  ﾊH�
IH.   F                   }i� B a c k u p s    r 1     
IH Clean Game Files  R 	  �
IMG
IH.   J                  }i� C l e a n   G a m e   F i l e s     � 1     
ImG0 Counter-Strike Global Offensive p 	  �
I�F
ImG.   #H                  �� C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e   . N 1     
IQ csgo  : 	  �
I�F
IQ.   �H                  <�� c s g o    J 1     
I$G cfg 8 	  �
I$G
I$G.   7I                  }[ c f g    T 1     "I{� engine  > 	  �"I��"I{�.   �	                  �X� e n g i n e    Z 1     &I�\ draftenv  B 	  �&I�\&I�\.   ^�	                  X� d r a f t e n v    P 1     &I�\ DRAFT < 	  �&I�\&I�\.   _�	                  �sD R A F T      �            9       �         ��8F   Media Volume D:\Archive\Cloud\Files\Backups\Clean Game Files\Counter-Strike Global Offensive\csgo\cfg\engine\draftenv\DRAFT   . \ D R A F T `     �X       agentmain       �f[$N#M�Jy��[g��Ms��������f[$N#M�Jy��[g��Ms���������  	  �  1SPS�0��C �G����sf"�   d       k   d r a f t e n v   ( D : \ A r c h i v e \ C l o u d \ F i l e s \ B a c k u p s \ C l e a n   G a m e   F i l e s \ C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e \ c s g o \ c f g \ e n g i n e )         �   1SPS0�%��G��`���   
          D R A F T          @    	�3�)             F i l e   f o l d e r          @   ��3�      1SPS�jc(=���� �O���          o   D : \ A r c h i v e \ C l o u d \ F i l e s \ B a c k u p s \ C l e a n   G a m e   F i l e s \ C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e \ c s g o \ c f g \ e n g i n e \ d r a f t e n v \ D R A F T         9   1SPS�mD��pH�H@.�=x�   h    H   LtA`�B��uM�r��                                                                                                                                                                                                                                                                                                                                                                                                                             io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/Shortcut_engine_functions.cfg.lnk                          0100777 0000000 0000000 00000003040 12763504431 023050  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       L        �      F�      V`5��V`5����5��                      � P�O� �:i�� +00� /D:\                   V 1     �H'8 Archive @ 	  ﾊH��H'8.   E                   �o# A r c h i v e    P 1     �H1_ Cloud < 	  ﾥHm��H1_.   �                   ��� C l o u d    P 1     �H& Files < 	  ﾱH`�H&.   W                   u F i l e s    V 1     
IH Backups @ 	  ﾊH�
IH.   F                   }i� B a c k u p s    r 1     
IH Clean Game Files  R 	  �
IMG
IH.   J                  }i� C l e a n   G a m e   F i l e s     � 1     
ImG0 Counter-Strike Global Offensive p 	  �
I�F
ImG.   #H                  �� C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e   . N 1     
IQ csgo  : 	  �
I�F
IQ.   �H                  <�� c s g o    J 1     
I$G cfg 8 	  �
I$G
I$G.   7I                  }[ c f g    ~ 2    &I�I  engine_functions.cfg  Z 	  �&I�I&I�I.   Q�	                  92 e n g i n e _ f u n c t i o n s . c f g   $   �            9       �         ��8F   Media Volume D:\Archive\Cloud\Files\Backups\Clean Game Files\Counter-Strike Global Offensive\csgo\cfg\engine_functions.cfg   . \ e n g i n e _ f u n c t i o n s . c f g X D : \ A r c h i v e \ C l o u d \ F i l e s \ B a c k u p s \ C l e a n   G a m e   F i l e s \ C o u n t e r - S t r i k e   G l o b a l   O f f e n s i v e \ c s g o \ c f g `     �X       agentmain       �f[$N#M�Jy�ɺe��Ms��������f[$N#M�Jy�ɺe��Ms��������E   	  �9   1SPS�mD��pH�H@.�=x�   h    H   LtA`�B��uM�r��                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine/Shortcut_icvar.h_reference_names.lnk                       0100777 0000000 0000000 00000003661 12763517766 023540  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       L        �      F�      _⤼Y�_⤼Y���� i���                     � P�O� �:i�� +00� /D:\                   V 1     #I� Archive @ 	  ﾊH�#I�.   E                   �}� A r c h i v e    T 1     IO� Canvas  > 	  ﾥHr�IO�.   �V                   Kx� C a n v a s    � 1     I PROJEKTS (Greenprints)  ^ 	  ﾻH�[I.   ��                   �	P R O J E K T S   ( G r e e n p r i n t s )   & N 1     !Ii Code  : 	  ��H�p!Ii.   l�	                  ��< C o d e    t 1     I�; Game Modification T 	  �I+�I�;.   &	                  Y<� G a m e   M o d i f i c a t i o n     f 1     "I � Source Files  J 	  �I�;"I �.   �E	                  4` S o u r c e   F i l e s    � 1     I�; Source SDK Master 2013  ^ 	  �I�;I�;.   �E	                  A�? S o u r c e   S D K   M a s t e r   2 0 1 3   & � 1     I�; source-sdk-2013-master  ^ 	  �I�;I�;.   �E	                  Z] s o u r c e - s d k - 2 0 1 3 - m a s t e r   & H 1     I�; mp  6 	  �I�;I�;.   �E	                  i% m p    J 1     I�; src 8 	  �I�;I�;.   �E	                  Z] s r c    T 1     &I�; public  > 	  �I�;&I�;.   KP	                  ��p u b l i c    V 2 �  *Gu  icvar.h @ 	  �I�;I�;.   �P	                  ��� i c v a r . h      �            9       �         ��8F   Media Volume D:\Archive\Canvas\PROJEKTS (Greenprints)\Code\Game Modification\Source Files\Source SDK Master 2013\source-sdk-2013-master\mp\src\public\icvar.h  	 . \ i c v a r . h � D : \ A r c h i v e \ C a n v a s \ P R O J E K T S   ( G r e e n p r i n t s ) \ C o d e \ G a m e   M o d i f i c a t i o n \ S o u r c e   F i l e s \ S o u r c e   S D K   M a s t e r   2 0 1 3 \ s o u r c e - s d k - 2 0 1 3 - m a s t e r \ m p \ s r c \ p u b l i c `     �X       agentmain       �f[$N#M�Jy���f��Ms��������f[$N#M�Jy���f��Ms��������E   	  �9   1SPS�mD��pH�H@.�=x�   h    H   LtA`�B��uM�r��                                                                                           io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine_functions.cfg                                              0100777 0000000 0000000 00000005162 12764460206 017136  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       
//									INTERNAL SCRIPTING PACKAGER SYSTEM

alias "null_func" ""																												//NULL_FUNC
alias "null_could_not" "echo                      Could not find ConVar..."  														//_HIDDEN
alias "null_this_convarIS" "echo          [ENGINE]: ConVar locked by AES; flag returns: FCVAR_DEVELOPMENTONLY 	//_DEVELOPMENT"

alias "write_null_factors" " "
alias "write_null_factors_scale" ""

alias "ENGINEFlowControlSetup" "ENGINE_flowcontrol_setup"


alias "{" "exec \engine\point_main\notifier_input.cfg"		//  Notifies that the engine is starting to load a block of functions.
alias "}" "exec \engine\point_main\notifier_output.cfg"		//  Notifies that the engine has completed loading a block of functions.

alias ".public" ""
//  Sets public-facing vars to the front

alias ".development" "exec \engine\point_main\module.cfg"
//  Sets module printer to active state.

alias "struct_environment" "exec \engine\point_main\CVARlib.cfg"
//

alias "cl_link_vars" "exec \engine\packager\client_convars.cfg"
alias "AreConVarsLinkable" "cl_link_clientvars"
//  

alias "ConVarLayerVector" ""
//  

alias "point_clientcmd" "exec config_binds.cfg"
//  

alias "bool" "echo [ENGINE]: bool returned 1048576.;ENGINE_cvarlist_search"
//  

alias "const" "^ENGINE_flowcontrol_setup;^clamp_crosshair;^clamp_buy_time;clamp_team_selection"
//  Sets configuration constants, settings and aliases that never change.
alias "const." "ENGINE_flowcontrol_setup;clamp_crosshair;clamp_buy_time;clamp_team_selection"
//  Sets configuration constants, settings and aliases that never change.

alias "ifVector" "^_spline_angles"
//  

alias "virtual" "^ENGINE_cvarlist_search;^ENGINE_clampcontrol_setup"
//  

alias "*child" ""
//  Sets the selected file's child cfg.

alias "*parent" ""
//  Sets the selected file's parent cfg.

alias "+" "sv_cheats 1"
//  

alias "if" ""
//  

alias "then" "render_flow_control"
//  

alias "when" ""
//

alias "-"
//  
alias "ifTo" "exec config_arrays.cfg"
alias "configHopArrayScalar" "exec confighop_arrays.cfg"
alias "also" "echo [ENGINE]: Engine returned 'also' - now do X."
alias "configCvarListBoolean" "exec \switches\agent_cvar_search.cfg"



	// Can these two convars be aliased?
//	virtual bool AreConVarsLinkable( const ConVar *child, const ConVar *parent ) = 0;
//ConCommandBase


	// Register, unregister commands
//	virtual void			RegisterConCommand( ConCommandBase *pCommandBase ) = 0;
//	virtual void			UnregisterConCommand( ConCommandBase *pCommandBase ) = 0;
//	virtual void			UnregisterConCommands( CVarDLLIdentifier_t id ) = 0;

alias "#_+" " "                                                                                                                                                                                                                                                                                                                                                                                                              io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/engine_sys.cfg                                                    0100777 0000000 0000000 00000001614 12763520532 015740  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       



































































































































































































alias "amtlib_fire_off" "echo AMTlibrary_CLEAR"
alias "pack_fire_off" "echo pack_CLEAR"
alias "rebuild_fire_off" "echo rebuild_CLEAR"
alias "dev_fire_off" "echo development_CLEAR"
alias "result_fire_off" "echo #RESULT_CLEAR"
alias "rebuild_outer_layer" "exec \engine\construct\conf.cfg"


alias "pak_pck" "exec \engine\pack.cfg";alias "pak_rbld" "exec \engine\rebuild.cfg";alias "pak_dev" "exec \engine\packager\development.cfg";alias "pak_rst" "exec \engine\packager\pack\result.cfg";exec \engine\AMTlib.cfg                                                                                                                    io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/switches/                                                         0040777 0000000 0000000 00000000000 12765171247 014752  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/switches/agent_cvar_search.cfg                                    0100777 0000000 0000000 00000012051 12761777647 021104  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       alias "agent_2space" "echo  ;echo  ;"
alias "smspc" "echo  ;echo  ;"
alias "vwbob" "echo (Cvar:  cl_viewbob_0)"
alias "vwbob2" "echo (Cvar:  cl_viewbob_1)"
alias "cvar_cl_viewbob_0" "agent_2space;vwbob;echo {ConVar desc}: Disables walking animation-based viewbobbing;smspc"
alias "cvar_cl_viewbob_1" "agent_2space;vwbob2;echo {ConVar desc}: Enables walking animation-based viewbobbing;smspc"
alias "visre" "echo (Cvar:  disable_visual_recoil)"
alias "visre2" "echo (Cvar:  enable_visual_recoil)"
alias "visre3" "echo (Cvar:  default_visual_recoil)"
alias "cvar_disable_visual_recoil" "agent_2space;visre;echo {ConVar desc}: Disables visual recoil;smspc"
alias "cvar_enable_visual_recoil" "agent_2space;visre2;echo {ConVar desc}: Enables visual recoil;smspc"
alias "cvar_default_visual_recoil" "agent_2space;visre3;echo {ConVar desc}: Designates default visual recoil;smspc"
alias "shllz" "echo (Cvar:  enable_shells)"
alias "shllz2" "echo (Cvar:  disable_shells)"
alias "cvar_enable_shells" "agent_2space;shllz;echo {ConVar desc}: Enables drawing of bullet shells;smspc"
alias "cvar_disable_shells" "agent_2space;shllz2;echo {ConVar desc}: Disables drawing of bullet shells;smspc"
alias "tracert" "echo (Cvar:  disable_tracers)"
alias "tracert2" "echo (Cvar:  enable_tracers)"
alias "cvar_disable_tracers" "agent_2space;tracert;echo {ConVar desc}: Disables drawing of bullet 'tracers', or visual bullet travel;smspc"
alias "cvar_enable_tracers" "agent_2space;tracert2;echo {ConVar desc}: Enables drawing of bullet 'tracers', or visual bullet travel;smspc"
alias "flsn" "echo (Cvar:  enable_flashes)"
alias "flsn2" "echo (Cvar:  disable_flashes)"
alias "cvar_enable_flashes" "agent_2space;flsn;echo {ConVar desc}: Enables drawing of flashbang effects;agent_2space"
alias "cvar_disable_flashes" "agent_2space;flsn2;echo {ConVar desc}: Disables drawing of flashbang effects;agent_2space"
alias "pstprc" "echo (Cvar:  disable_post_process)"
alias "pstprc2" "echo (Cvar:  enable_post_process)"
alias "cvar_disable_post_process" "agent_2space;pstprc;echo {ConVar desc}: Disables drawing of post-processing effects;agent_2space"
alias "cvar_enable_post_process" "agent_2space;pstprc2;echo {ConVar desc}: Enables drawing of post-processing effects;agent_2space"
alias "grnrad" "echo (Cvar:  disable_grenade_radio)"
alias "grnrad2" "echo (Cvar:  enable_grenade_radio)"
alias "cvar_disable_grenade_radio" "agent_2space;grnrad;echo {ConVar desc}: Disables rendering of 'fire in the hole' messages;smspc"
alias "cvar_enable_grenade_radio" "agent_2space;grnrad2;echo {ConVar desc}: Enables rendering of 'fire in the hole' messages;smspc"
alias "clmpX" "echo (Cvar:  clamp_peripherals)"
alias "clmpY" "echo (Cvar:  flow_peripherals)"
alias "cvar_clamp_peripherals" "agent_2space;clmpX;echo {ConVar desc}: Disables rendering of a multitude of background peripherals;smspc"
alias "cvar_flow_peripherals" "agent_2space;clmpY;echo {ConVar desc}: Enables rendering of a multitude of background peripherals;smspc"
alias "viewportT" "echo (Cvar:  viewport_compact)"
alias "viewportC" "echo (Cvar:  viewport_cubed)"
alias "viewportGc" "echo (Cvar:  viewport_default)"
alias "cvar_viewport_compact" "agent_2space;viewportT;echo {ConVar desc}: Soft-Locks viewport to Compact View;smspc"
alias "cvar_viewport_cubed" "agent_2space;viewportC;echo {ConVar desc}: Soft-Locks viewport to Cubed View;smspc"
alias "cvar_viewport_default" "agent_2space;viewportGc;echo {ConVar desc}: Re-Locks viewport to Default View;smspc"
alias "camZx" "echo (Cvar:  _camera)"
alias "cvar_camera" "agent_2space;camZx;echo {ConVar desc}: Soft-Locks current viewport to hudless Camera mode;smspc"
alias "camZxa" "echo (Cvar:  _camera)"
alias "cvar__camera" "agent_2space;camZxa;echo {ConVar desc}: Soft-Locks current viewport to hudless Camera mode;smspc"
alias "_ply" "echo (Cvar:  _play)"
alias "cvar_play" "agent_2space;_ply;echo {ConVar desc}: Soft-Locks current viewport to hud-entitled Playing mode;smspc"
alias "_plyat" "echo (Cvar:  _play)"
alias "cvar__play" "agent_2space;_plyat;echo {ConVar desc}: Soft-Locks current viewport to hud-entitled Playing mode;smspc"
alias "lgcy" "echo (Cvar:  sv_legacy_jump)"
alias "nwfng" "echo (Cvar:  sv_newfangled_jump)"
alias "cvar_sv_legacy_jump" "agent_2space;lgcy;echo {ConVar desc}: Soft-Locks current jump mode to Solo Bhopping status;smspc"
alias "cvar_sv_newfangled_jump" "agent_2space;nwfng;echo {ConVar desc}: Re-Locks current jump mode to Default CS: GO state;smspc"
alias "endRnd" "echo (Cvar:  round_endwarmup)"
alias "cvar_round_endwarmup" "agent_2space;endRnd;echo {ConVar desc}: Ends the warmup sequence, also kicks AI players from local games;smspc"
alias "resRnd" "echo (Cvar:  round_reset)"
alias "cvar_round_reset" "agent_2space;resRnd;echo {ConVar desc}: Loads De_Dust2;smspc"
alias "PlyHop" "echo (Cvar:  sv_legacy_jump_play)"
alias "cvar_sv_legacy_jump_play" "agent_2space;PlyHop;echo {ConVar desc}: Enables Bhop mode with bots;smspc"
alias "emfour" "echo (Cvar:  m4)"
alias "cvar_m4" "agent_2space;emfour;echo {ConVar desc}: Gives the user an M4A1 silenced Maverick;smspc"



                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/switches/build/                                                   0040777 0000000 0000000 00000000000 12763551247 016051  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/switches/build/_extenuating_arrays.cfg                            0100777 0000000 0000000 00000007743 12762005471 022610  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       clear;config_hook_boolean;config_hook_resound

alias "sv_cvarlist_spacer" "echo  ;echo  ;echo  ;echo  ;echo  ;echo  "
alias "sv_cvarlist_onespace" "echo  ;echo  ;echo  ;echo  ;"
alias "_cvarlist_header" "echo                   Printing CvarList..."
alias "sv_cvarlist_sequencer" "echo {ConVar}: m4;echo {ConVar}: sv_legacy_jump;echo {ConVar}: sv_newfangled_jump;echo {ConVar}: round_reset"
alias "sv_cvarlist_illbin" "echo {ConVar}: _camera;echo {ConVar}: _play;echo {ConVar}: viewport_compact;echo {ConVar}: viewport_cubed"
alias "sv_cvarlist_transam" "echo {ConVar, NULL}: viewport_default"
alias "sv_cvarlist_seq" "echo {ConVar}: round_endwarmup;echo {ConVar, SUBTRACT}: cl_viewbob_0;echo {ConVar, ADD}: cl_viewbob_1"
alias "sv_cvarlist_kstyle" "echo {ConVar, SUBTRACT}: disable_visual_recoil;echo {ConVar, ADD}: enable_visual_recoil;echo {ConVar, NULL}: default_visual_recoil"
alias "sv_cvarlist_index" "echo {ConVar, SUBTRACT}: disable_shells;echo {ConVar, ADD}: enable_shells"
alias "sv_cvarlist_vagrant" "echo {ConVar, SUBTRACT}: disable_tracers;echo {ConVar, ADD}: enable_tracers"
alias "sv_cvarlist_laymans" "echo {ConVar, SUBTRACT}: disable_flashes;echo {ConVar, ADD}: enable_flashes"
alias "sv_cvarlist_op" "echo {ConVar, SUBTRACT}: disable_post_process;echo {ConVar, ADD}: enable_post_process"
alias "sv_cvarlist_xml" "echo {ConVar, SUBTRACT}: clamp_peripherals;echo {ConVar, ADD}: flow_peripherals"
alias "sv_cvarlist_worker" "sv_cvarlist_sequencer;sv_cvarlist_illbin;sv_cvarlist_seq;sv_cvarlist_transam;sv_cvarlist_kstyle;sv_cvarlist_index"
alias "sv_cvarlist_" "echo  ;echo  ;echo  ;echo  ;echo Successfully Printed ( 27 ) cvars.;echo  ;echo  ;echo  ;echo  "
alias "sv_cvarlist_builder" "sv_cvarlist_vagrant;sv_cvarlist_laymans;sv_cvarlist_op;sv_cvarlist_xml"

alias "agent_cvarlist" "clear;sv_cvarlist_onespace;_cvarlist_header;sv_cvarlist_spacer;sv_cvarlist_worker;sv_cvarlist_builder;sv_cvarlist_"



alias "viewbob_amtlib_01" "cl_bobcycle 0.980000;cl_use_new_headbob 0;cl_bobup 0.5"
alias "viewbob_amtlib_02" "cl_bob_version -1;cl_bobamt_vert 0"
alias "viewbob_amtlib_03" "cl_bobamt_lat 0;cl_bob_lower_amt 0"
alias "cl_viewbob_0" "viewbob_amtlib_01;viewbob_amtlib_02;viewbob_amtlib_03"


alias "viewbob_antlib_01" "cl_bobcycle 0.98;cl_use_new_headbob 1;cl_bobup 0.5"
alias "viewbob_antlib_02" "cl_bob_version 0;cl_bobamt_vert 0.25"
alias "viewbob_antlib_03" "cl_bobamt_lat 0.4";cl_bob_lower_amt 21""
alias "cl_viewbob_1" "viewbob_antlib_01;viewbob_antlib_02;viewbob_antlib_03"


alias "disable_visual_recoil" "weapon_recoil_scale 0;weapon_recoil_view_punch_extra 0"
alias "enable_visual_recoil" "weapon_recoil_view_punch_extra 0.14646326532;weapon_recoil_scale 1.787765"
alias "default_visual_recoil" "weapon_recoil_view_punch_extra 0.055;weapon_recoil_scale 2.0"

alias "enable_shells" "cl_ejectbrass 1"
alias "disable_shells" "cl_ejectbrass 0"

alias "disable_tracers" "r_drawtracers 0;r_drawtracers_firstperson 0"
alias "enable_tracers" "r_drawtracers 1;r_drawtracers_firstperson 1"

alias "disable_flashes" "sv_flashbang_strength 0"
alias "enable_flashes" "sv_flashbang_strength 3.55"

alias "disable_post_process" "mat_postprocess_enable 0"
alias "enable_post_process" "mat_postprocess_enable 1"

alias "disable_grenade_radio" "sv_ignoregrenaderadio 1"
alias "enable_grenade_radio" "sv_ignoregrenaderadio 0"

alias "cl_clamp_bin" "disable_visual_recoil;disable_tracers;cl_viewbob_0"
alias "cl_clamp_cue" "disable_flashes;disable_post_process;disable_grenade_radio"
alias "clamp_peripherals" "cl_clamp_bin;cl_clamp_cue"

alias "cl_flow_bin" "enable_visual_recoil;enable_tracers;cl_viewbob_1"
alias "cl_flow_cue" "enable_flashes;enable_post_process;enable_grenade_radio"
alias "flow_peripherals" "cl_flow_bin;cl_flow_cue"

alias "viewport_compact" "r_aspectratio 2.22"
alias "viewport_default" "r_aspectratio 0"
alias "viewport_cubed" "r_aspectratio 3.00000000043543"

alias "_camera" "r_drawviewmodel 0;hidehud 4"
alias "_play" "r_drawviewmodel 1;hidehud 0"

_spline_angles
                             io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/switches/sv_switches.cfg                                          0100777 0000000 0000000 00000005600 12764462717 020001  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       
alias "ENGINE_flowcontrol_setup" "sv_cheats 1;mp_roundtime 75;mp_roundtime_defuse 0"
alias "_spline_angles" "sv_cheats 1;mp_roundtime 75;mp_roundtime_defuse 0"
alias "ENGINE_clampcontrol_setup" "exec config_arrays.cfg"
alias "ENGINE_cvarlist_search" "exec \engine\point_main\CVARlib.cfg"










exec config_main.cfg






con_filter_text_out     " "
alias d_separator       "echo [ENGINE]: SYSTEM has been loaded!"
alias message           "echo No message..."
//print text notifications to heads-up-display
//defaults:  con_notifytime 8 ; contimes 8; con_filter_enable 0"
//alias showonscreen "developer 1; clear; d_separator; message; d_separator; con_filter_enable 1; contimes 6; con_notifytime 10; 
developer 1; clear; d_separator; message; d_separator; con_filter_enable 1; contimes 6; con_notifytime 10; 

















//
//alias mat_hack_state mat_hack_on							// FCVAR_REFERENCED
//alias mat_hack_on "r_drawothermodels 2; alias mat_hack_state mat_hack_off"  
//alias mat_hack_off "r_drawothermodels 1; alias mat_hack_state mat_hack_on"  
//bind <key> mat_hack_state
//
//alias "mat_hack" 
//r_drawothermodels 2
//r_drawothermodels 0
//bind <KEY> "mat_hackY"
//alias mat_hackY "; bind <KEY> clamp_RGBx"
//alias clamp_RGBx "; bind <KEY> mat_hackY"
//
//Toggle - Generic
//alias toggleon "echo On; r_drawothermodels 2; bind KEY toggleoff"
//alias toggleoff "echo Off; r_drawothermodels 0; bind KEY toggleon"
//bind KEY toggleon
//Replace +command with the command you wish to turn on
//Replace -command with the above command but turning it off
//Replace KEY with the key you wish to bind it to
//
//Example Toggle attack script
//alias toggleon "echo On; +attack; bind o toggleoff"
//alias toggleoff "echo Off; -attack; bind o toggleon"
//bind o toggleon
//
//In that general format.
//When you press the key, reload_state activates the on command. The on command changes reload_state to off. Vice versa for off. Toggles should //generally follow this format
//
//
//alias reload_state reload_on    
//alias reload_on "+reload; alias reload_state reload_off"  
//alias reload_off "-reload; alias reload_state reload_on"  
//bind <key> reload_state
//In that general format.
//When you press the key, reload_state activates the on command. The on command changes reload_state to off. Vice versa for off. Toggles should //generally follow this format
//
//Toggle - Generic
//alias toggleon "echo On; +command; bind KEY toggleoff"
//alias toggleoff "echo Off; -command; bind KEY toggleon"
//bind KEY toggleon
//Replace +command with the command you wish to turn on
//Replace -command with the above command but turning it off
//Replace KEY with the key you wish to bind it to
//
//Example Toggle attack script
//alias toggleon "echo On; +attack; bind o toggleoff"
//alias toggleoff "echo Off; -attack; bind o toggleon"
//bind o toggleon
//                                                                                                                                io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/trigger/                                                          0040777 0000000 0000000 00000000000 12765171247 014564  5                                                                                                    ustar 00                                                                                                                                                                                                                                                       io/CURRENT_CSGO_MOVIE+PLAY_CONFIG/trigger/sv_hook.cfg                                               0100777 0000000 0000000 00000000211 12763502775 016711  0                                                                                                    ustar 00                                                                                                                                                                                                                                                       //
//				HOOKS of CONFIGURATION CHAIN
//				 prints splash toast, loads
//						config main
//

config_toast
config_hook_process
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       