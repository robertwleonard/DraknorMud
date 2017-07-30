/**************************************************************************\
 *      The Sacred Codebase(Sacred) is copyright 1997-2003 by             *
 *      Chris Litchfield and Mark Archambault                             *
 *      Sacred has been created with much time and effort from many       *
 *      different people's input and ideas.                               *
 *      By using this code, you have agreed to follow the terms of the    *
 *      Sacred license, in the file doc/sacred.license                    *
\**************************************************************************/
#include "magic.h"
struct spell_function_table {
    char *spell_name;
    SPELL_FUN *spell_function;
    sh_int *gsn_pointer;
};

struct spell_function_table spell_func_table[] = {
  {"reserved",NULL,NULL},
  {"acid blast",spell_acid_blast,NULL},
  {"armor",spell_armor,NULL},
  {"bless",spell_bless,NULL},
  {"blindness",spell_blindness,&gsn_blindness},
  {"burning hands",spell_burning_hands,NULL},
  {"call lightning",spell_call_lightning,NULL},
  {"calm",spell_calm,NULL},
  {"cancellation",spell_cancellation,NULL},
  {"cause critical",spell_cause_critical,NULL},
  {"cause light",spell_cause_light,NULL},
  {"cause serious",spell_cause_serious,NULL},
  {"chain lightning",spell_chain_lightning,NULL},
  {"change sex",spell_change_sex,&gsn_change_sex},
  {"charm person",spell_charm_person,&gsn_charm_person},
  {"chill touch",spell_chill_touch,NULL},
  {"colour spray",spell_colour_spray,NULL},
  {"continual light",spell_continual_light,NULL},
  {"control weather",spell_control_weather,NULL},
  {"create food",spell_create_food,NULL},
  {"create rose",spell_create_rose,NULL},
  {"create spring",spell_create_spring,NULL},
  {"create water",spell_create_water,NULL},
  {"cure blindness",spell_cure_blindness,NULL},
  {"cure critical",spell_cure_critical,NULL},
  {"cure disease",spell_cure_disease,NULL},
  {"cure light",spell_cure_light,NULL},
  {"cure poison",spell_cure_poison,NULL},
  {"cure serious",spell_cure_serious,NULL},
  {"cure weaken", spell_cure_weaken, NULL},
  {"curse",spell_curse,&gsn_curse},
  {"demonfire",spell_demonfire,NULL},
  {"detect evil",spell_detect_evil,NULL},
  {"detect good",spell_detect_good,NULL},
  {"detect hidden",spell_detect_hidden,NULL},
  {"detect invis",spell_detect_invis,NULL},
  {"detect magic",spell_detect_magic,NULL},
  {"detect poison",spell_detect_poison,NULL},
  {"dispel evil",spell_dispel_evil,NULL},
  {"dispel good",spell_dispel_good,NULL},
  {"dispel magic",spell_dispel_magic,NULL},
  {"earthquake",spell_earthquake,NULL},
  {"enchant armor",spell_enchant_armor,NULL},
  {"enchant weapon",spell_enchant_weapon,NULL},
  {"energy drain",spell_energy_drain,NULL},
  {"faerie fire",spell_faerie_fire,NULL},
  {"faerie fog",spell_faerie_fog,NULL},
  {"farsight",spell_farsight,NULL},
  {"fireball",spell_fireball,NULL},
  {"fireproof",spell_fireproof,NULL},
  {"flamestrike",spell_flamestrike,NULL},
  {"fly",spell_fly,NULL},
  {"floating disc",spell_floating_disc,NULL},
  {"frenzy",spell_frenzy,NULL},
  {"gate",spell_gate,NULL},
  {"giant strength",spell_giant_strength,NULL},
  {"harm",spell_harm,NULL},
  {"haste",spell_haste,NULL},
  {"heal",spell_heal,NULL},
  {"heat metal",spell_heat_metal,NULL},
  {"holy word",spell_holy_word,NULL},
  {"identify",spell_identify,NULL},
  {"infravision",spell_infravision,NULL},
  {"invisibility",spell_invis,&gsn_invis},
  {"know alignment",spell_know_alignment,NULL},
  {"lightning bolt",spell_lightning_bolt,NULL},
  {"locate object",spell_locate_object,NULL},
  {"magic missile",spell_magic_missile,NULL},
  {"mass healing",spell_mass_healing,NULL},
  {"mass invis",spell_mass_invis,&gsn_mass_invis},
  {"nexus",spell_nexus,NULL},
  {"pass door",spell_pass_door,NULL},
  {"pestilence",spell_pestilence,NULL},
  {"plague",spell_plague,&gsn_plague},
  {"poison",spell_poison,&gsn_poison},
  {"portal",spell_portal,NULL},
  {"protection evil",spell_protection_evil,NULL},
  {"protection good",spell_protection_good,NULL},
  {"ray of truth",spell_ray_of_truth,NULL},
  {"recharge",spell_recharge,NULL},
  {"refresh",spell_refresh,NULL},
  {"rejuvination",spell_rejuvination,NULL}, //Added 1.30.05 RWLIII
  {"remove curse",spell_remove_curse,NULL},
  {"sanctuary",spell_sanctuary,&gsn_sanctuary},
  {"shadow walk",spell_shadow_walk,NULL},
  {"shield",spell_shield,NULL},
  {"shocking grasp",spell_shocking_grasp,NULL},
  {"sleep",spell_sleep,&gsn_sleep},
  {"slow",spell_slow,NULL},
  {"stone skin",spell_stone_skin,NULL},
  {"summon",spell_summon,NULL},
  {"teleport",spell_teleport,NULL},
  {"ventriloquate",spell_ventriloquate,NULL},
  {"weaken",spell_weaken,&gsn_weaken},
  {"word of recall",spell_word_of_recall,NULL},
  {"acid breath",spell_acid_breath,NULL},
  {"fire breath",spell_fire_breath,NULL},
  {"frost breath",spell_frost_breath,NULL},
  {"gas breath",spell_gas_breath,NULL},
  {"lightning breath",spell_lightning_breath,NULL},
  {"general purpose",spell_general_purpose,NULL},
  {"high explosive",spell_high_explosive,NULL},
  {"axe",spell_null,&gsn_axe},
  {"dagger",spell_null,&gsn_dagger},
  {"flail",spell_null,&gsn_flail},
  {"mace",spell_null,&gsn_mace},
  {"polearm",spell_null,&gsn_polearm},
  {"crossbow",spell_null,&gsn_crossbow},
  {"shield block",spell_null,&gsn_shield_block},
  {"spear",spell_null,&gsn_spear},
  {"sword",spell_null,&gsn_sword},
  {"whip",spell_null,&gsn_whip},
  {"backstab",spell_null,&gsn_backstab},
  {"bash",spell_null,&gsn_bash},
  {"tail",spell_null,&gsn_tail},
  {"stake",spell_null,&gsn_stake},
  {"berserk",spell_null,&gsn_berserk},
  {"dirt kicking",spell_null,&gsn_dirt},
  {"disarm",spell_null,&gsn_disarm},
  {"dodge",spell_null,&gsn_dodge},
  {"enhanced damage",spell_null,&gsn_enhanced_damage},
  {"envenom",spell_null,&gsn_envenom},
  {"hand to hand",spell_null,&gsn_hand_to_hand},
  {"kick",spell_null,&gsn_kick},
  {"parry",spell_null,&gsn_parry},
  {"rescue",spell_null,&gsn_rescue},
  {"trip",spell_null,&gsn_trip},
  {"sweep",spell_null,&gsn_sweep},
  {"double shot",spell_null, &gsn_double_shot},
  {"second attack",spell_null,&gsn_second_attack},
  {"third attack",spell_null,&gsn_third_attack},
  {"fourth attack",spell_null,&gsn_fourth_attack},
  {"fast healing",spell_null,&gsn_fast_healing},
  {"haggle",spell_null,&gsn_haggle},
  {"hide",spell_null,&gsn_hide},
  {"lore",spell_null,&gsn_lore},
  {"meditation",spell_null,&gsn_meditation},
  {"peek",spell_null,&gsn_peek},
  {"pick lock",spell_null,&gsn_pick_lock},
  {"sneak",spell_null,&gsn_sneak},
  {"steal",spell_null,&gsn_steal},
  {"scrolls",spell_null,&gsn_scrolls},
  {"descry",spell_null,&gsn_descry},
  {"staves",spell_null,&gsn_staves},
  {"wands",spell_null,&gsn_wands},
  {"recall",spell_null,&gsn_recall},
  {"drain blade",spell_drain_blade,NULL},
  {"shocking blade",spell_shocking_blade,NULL},
  {"flame blade",spell_flame_blade,NULL},
  {"frost blade",spell_frost_blade,NULL},
  {"sharp blade",spell_sharp_blade,NULL},
  {"vorpal blade",spell_vorpal_blade,NULL},
  {"erase",spell_null,&gsn_erase},
  {"empty",spell_null,&gsn_empty},
  {"butcher",spell_null,&gsn_butcher},
  {"brew",spell_null,&gsn_brew},
  {"scribe",spell_null,&gsn_scribe},
  {"craft",spell_null,&gsn_craft},
  {"create fountain",spell_create_fountain,NULL},
  {"spell_incinerate",spell_incinerate, NULL},
  {"spell_icicle",spell_icicle, NULL},
  {"spell_bigby_bash",spell_bigby_bash, NULL},
  {"spell_flame_aura",spell_flame_aura, NULL},
  {"spell_frost_aura",spell_flame_aura, NULL},
  {"spell_electric_aura",spell_flame_aura, NULL},
  {"spell_corrosive_aura",spell_flame_aura, NULL},
  {"spell_arcane_aura",spell_flame_aura, NULL},
  {"spell_holy_aura",spell_flame_aura, NULL},
  {"spell_dark_aura",spell_flame_aura, NULL},
  {"spell_deter",spell_deter, NULL},
  {"spell_aid",spell_aid, NULL},
  {"spell_metamorphose",spell_metamorphose, NULL},
  {"spell_betray",spell_betray, NULL},
  {"spell_quench",spell_quench, NULL},
  {"spell_sate",spell_sate, NULL},
  {"spell_resurrect",spell_resurrect, NULL},
  {"spell_make_bag",spell_make_bag, NULL},
  {"spell_fear",spell_fear, NULL},
  {"spell_fumble",spell_fumble, NULL},
  {"counter",spell_null, &gsn_counter},
  {"find familiar", spell_null, &gsn_familiar},
  {"deathgrip", spell_null, NULL},
  {"critical strike", spell_null, &gsn_critical},
  {"tithe", spell_null, &gsn_tithe},
  {"whirlwind", spell_null, &gsn_whirlwind},
  {"spell_martyr", spell_martyr, NULL},
  {"spell_life_transfer", spell_life_transfer, NULL},
  {"spell_moon_armor", spell_moon_armor, NULL},
  {"tumble", spell_null, &gsn_tumble},
  {"spell_phoenix", spell_phoenix, NULL},
  {"circle", spell_null, &gsn_circle},
  {"shatter", spell_null, &gsn_shatter},
  {"bind", spell_null, &gsn_bind},
  {"spell_water_walk", spell_water_walk, NULL},
  {"spell_regeneration", spell_regeneration, NULL},
  {"spell_ionwave", spell_ionwave, NULL},
  {"spell_holy_bolt", spell_holy_bolt, NULL},
  {"spell_vaccine", spell_vaccine, NULL},
  {"spell_fish_breath", spell_fish_breath, NULL},
  {"spell_mind_shield", spell_mind_shield, NULL},
  {"spell_power_transfer", spell_power_transfer, NULL},
  {"spell_confine", spell_confine, NULL},
  {"spell_cone_of_cold", spell_cone_of_cold, NULL},
  {"spell_fire_elemental", spell_fire_elemental, NULL},
  {"spell_banshee_scream", spell_banshee_scream, NULL},
  {"spell_sunbeam", spell_sunbeam, NULL},
  {"spell_sonic_blast", spell_sonic_blast, NULL},
  {"spell_insect_swarm", spell_insect_swarm, NULL},
  {"spell_tornado", spell_tornado, NULL},
  {"spell_hammer_of_thor", spell_hammer_of_thor, NULL},
  {"spell_entangle", spell_entangle, NULL},
  {"spell_flash", spell_flash, NULL},
  {"strangle", spell_null, &gsn_strangle},
  {"crosscut", spell_null, &gsn_crosscut},
  {"gore", spell_null, &gsn_gore},
  {"nerve", spell_null, &gsn_nerve},
  {"takedown", spell_null, &gsn_takedown},
  {"focus", spell_null, &gsn_focus},
  {"buckkick", spell_null, &gsn_buckkick},
  {"spell_familiarize_weapon", spell_familiarize_weapon, NULL},
  {"spell_invulnerability", spell_invulnerability, NULL},
  {"spell_thunder", spell_thunder, NULL},
  {"spell_empower_weapon", spell_empower_weapon, NULL},
  {"spell_dislocation", spell_dislocation, NULL},
  {"spell_eagle_spirit", spell_eagle_spirit, NULL},
  {"spell_bear_spirit", spell_bear_spirit, NULL},
  {"spell_tiger_spirit", spell_tiger_spirit, NULL},
  {"spell_dragon_spirit", spell_dragon_spirit, NULL},
  {"exotic", spell_null, &gsn_exotic},
  {"hunt", spell_null, &gsn_track},
  {"spell_scry", spell_scry, NULL},
  {"second cast", spell_null, &gsn_second_cast},
  {"third cast", spell_null, &gsn_third_cast},
  {"spell_cannibalism", spell_cannibalism, NULL},
  {"spell_clairvoyance", spell_clairvoyance, NULL},
  {"spell_fatigue", spell_fatigue, NULL},
  {"dart", spell_null, &gsn_dart},
  {"spell_mass_summon", spell_mass_summon, NULL},
  {"feint", spell_null, &gsn_feint},
  {"fifth attack", spell_null, &gsn_fifth_attack},
  {"dual attack", spell_null, &gsn_dual_attack},
  {"stomp", spell_null, &gsn_stomp},
  {"spell_turmoil", spell_turmoil, NULL},
  {"spell_strengthen", spell_strengthen, NULL},
  {"spell_nimbleness", spell_nimbleness, NULL},
  {"spell_holy_ritual", spell_holy_ritual, NULL },
  {"spell_unholy_ritual", spell_unholy_ritual, NULL },
  {"investigate", spell_null, &gsn_investigate},
  {"soul shroud", spell_soul_shroud, NULL },
  {"spirit shroud", spell_spirit_shroud, NULL },
  {"flame shroud", spell_soul_shroud, NULL },
  {"frost shroud", spell_soul_shroud, NULL },
  {"electric shroud", spell_soul_shroud, NULL },
  {"poison shroud", spell_poison_shroud, NULL },
  {"mass blindness", spell_mass_blindness, NULL },
  {"mass weaken", spell_mass_weaken, NULL },
  {"mass curse", spell_mass_curse, NULL },
  {"bone armor", spell_bone_armor, NULL },
  {"skeletal spike", spell_skeletal_spike, NULL },
  {"nightmare", spell_nightmare, NULL },
  {"bone rot", spell_bone_rot, NULL },
  {"poisonous dart", spell_poisonous_dart, NULL },
  {"spirit leech", spell_spirit_leech, NULL },
  {"forage",spell_null,&gsn_forage},
  {"repair",spell_null,&gsn_repair},
  {"sidestep",spell_null,&gsn_sidestep},
  {"blade weave",spell_null,&gsn_blade_weave},
  {"triple attack", spell_null, &gsn_triple_attack},
  {"ghostly wail",spell_ghostly_wail, NULL},
  {"holy runes",spell_holy_runes,NULL},
  {"throw",spell_null,&gsn_throw},
  {"rebrew",spell_null,&gsn_rebrew},
  {"transcribe",spell_null,&gsn_transcribe},
  {"aqua regia",spell_aqua_regia,NULL},
  {"aqua fortis",spell_aqua_fortis,NULL},
  {"aqua landhi",spell_aqua_landhi,NULL},
  {"aqua albedo",spell_aqua_albedo,NULL},
  {"aqua vitae",spell_aqua_vitae,NULL},
  {"aqua citrinitas",spell_aqua_citrinitas,NULL},
  {"aqua rubedo",spell_aqua_rubedo,NULL},
  {"sulfur blast",spell_sulfur_blast,NULL},
  {"adrenaline rush",spell_adrenaline_rush,NULL},
  {"dragon flame",spell_dragon_flame,NULL},
  {"inverted light",spell_inverted_light,&gsn_inverted_light},
  {"chameleon",spell_null,&gsn_chameleon},
  {"smoke bomb",spell_smoke_bomb,NULL},
  {"naja naja",spell_naja_naja,NULL},
  {"crotalus",spell_crotalus,NULL},
  {"acidic gas",spell_acidic_gas,NULL},
  {"clarity",spell_clarity,NULL},
  {"alacrity",spell_alacrity,NULL},
  {"hyracal pressure",spell_hyracal_pressure,NULL},
  {"prayer",spell_prayer,NULL},
  {"conviction",spell_conviction,NULL},
  {"faith",spell_faith,NULL},
  {"blessed shield",spell_blessed_shield,NULL},
  {"thorn blast", spell_thorn_blast, NULL},
  {"shield bash", spell_null, &gsn_shield_bash },
  {"demonic screech", spell_demonic_screech, NULL },
  {"rune wipe", spell_rune_wipe, NULL }
 /* {"guided_strike", spell_null, &gsn_guided_strike},
  {"crusade", spell_null, &gsn_crusade},
  {"spell_divine_intervention", spell_divine_intervention, NULL},
  {"spell_demonic_intervention", spell_demonic_intervention, NULL},
  {"layhands", spell_null, &gsn_layhands},
  {"spell_force_of_faith_darkflow", spell_force_of_faith_darkflow, NULL},
  {"spell_protection_negative", spell_protection_negative, NULL},
  {"spell_protection_holy", spell_protection_holy, NULL},
  ("spell_dark_fire", spell_dark_fire, NULL},
  {"spell_noble_truth", spell_noble_truth, NULL},
  {"spell_vile_intent", spell_vile_intent, NULL},
  {"spell_radiance", spell_radiance, NULL},
  {"spell_malevolent_shroud", spell_malevolent_shroud, NULL},*/
};
