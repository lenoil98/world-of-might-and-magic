#pragma once


enum PLAYER_BUFFS {
    PLAYER_BUFF_RESIST_AIR = 0,
    PLAYER_BUFF_BLESS = 1,
    PLAYER_BUFF_RESIST_BODY = 2,
    PLAYER_BUFF_RESIST_EARTH = 3,
    PLAYER_BUFF_FATE = 4,
    PLAYER_BUFF_RESIST_FIRE = 5,
    PLAYER_BUFF_HAMMERHANDS = 6,
    PLAYER_BUFF_HASTE = 7,
    PLAYER_BUFF_HEROISM = 8,
    PLAYER_BUFF_RESIST_MIND = 9,
    PLAYER_BUFF_PAIN_REFLECTION = 10,
    PLAYER_BUFF_PRESERVATION = 11,
    PLAYER_BUFF_REGENERATION = 12,
    PLAYER_BUFF_SHIELD = 13,
    PLAYER_BUFF_STONESKIN = 14,
    PLAYER_BUFF_ACCURACY = 15,
    PLAYER_BUFF_ENDURANCE = 16,
    PLAYER_BUFF_INTELLIGENCE = 17,
    PLAYER_BUFF_LUCK = 18,
    PLAYER_BUFF_STRENGTH = 19,
    PLAYER_BUFF_WILLPOWER = 20,
    PLAYER_BUFF_SPEED = 21,
    PLAYER_BUFF_RESIST_WATER = 22,
    PLAYER_BUFF_WATER_WALK = 23
};

#define PLAYER_GUILD_BITS__FINED                1
#define PLAYER_GUILD_BITS__SPIRIT_MEMBERSHIP    58
#define PLAYER_GUILD_BITS__ARCOMAGE_WIN         103
#define PLAYER_GUILD_BITS__ARCOMAGE_LOSE        104

/*  301 */
enum PlayerSpeech {
    SPEECH_1 = 1,
    SPEECH_2 = 2,
    SPEECH_3 = 3,
    SPEECH_4 = 4,
    SPEECH_5 = 5,
    SPEECH_6 = 6,
    SPEECH_7 = 7,
    SPEECH_8 = 8,
    SPEECH_9 = 9,
    SPEECH_10 = 10,
    SPEECH_11 = 11,
    SPEECH_12 = 12,
    SPEECH_CantRestHere = 13,
    SPEECH_14 = 14,
    SPEECH_NoRoom = 15,  // when placing to inventory
    SPEECH_DO_POTION_FINE = 16,
    SPEECH_17 = 17,
    SPEECH_18 = 18,
    SPEECH_19 = 19,
    SPEECH_20 = 20,
    SPEECH_21 = 21,
    SPEECH_GoodDay = 22,  // greets on dialogue start
    SPEECH_GoodEvening = 23,
    SPEECH_24 = 24,  // damage - owww
    SPEECH_25 = 25,  // weak
    SPEECH_26 = 26,  // fear
    SPEECH_27 = 27,  // poisoned
    SPEECH_28 = 28,  // diseased
    SPEECH_29 = 29,  // insane
    SPEECH_30 = 30,  // cursed
    SPEECH_31 = 31,  // drunk
    SPEECH_32 = 32,  // uncnocious
    SPEECH_33 = 33,  // dead
    SPEECH_34 = 34,  // petrified
    SPEECH_35 = 35,  // eradicated
    SPEECH_36 = 36,
    SPEECH_37 = 37,
    SPEECH_NotEnoughGold = 38,
    SPEECH_39 = 39,  // cant use that
    SPEECH_40 = 40,
    SPEECH_41 = 41,
    SPEECH_42 = 42,
    SPEECH_43 = 43,
    SPEECH_44 = 44,
    SPEECH_45 = 45,
    SPEECH_46 = 46,
    SPEECH_47 = 47,  // Let's get out of here! (Plays when leaving an area when the party alert is red or yellow)
    SPEECH_48 = 48,
    SPEECH_49 = 49,
    SPEECH_50 = 50,
    SPEECH_51 = 51,
    SPEECH_52 = 52,  // ATTACK MISSED??
    SPEECH_53 = 53,
    SPEECH_54 = 54,
    SPEECH_55 = 55,
    SPEECH_56 = 56,
    SPEECH_57 = 57,
    SPEECH_58 = 58,
    SPEECH_59 = 59,
    SPEECH_60 = 60,
    SPEECH_61 = 61,
    SPEECH_62 = 62,
    SPEECH_63 = 63,
    SPEECH_64 = 64,
    SPEECH_Yell = 65,
    SPEECH_Falling_scream = 66,
    SPEECH_67 = 67,
    SPEECH_68 = 68,
    SPEECH_69 = 69,
    SPEECH_70 = 70,
    SPEECH_CarriageReady = 71,  // travelling by carriage
    SPEECH_SetSail = 72,        // travelling by sea
    SPEECH_73 = 73,
    SPEECH_74 = 74,
    SPEECH_75 = 75,
    SPEECH_76 = 76,
    SPEECH_77 = 77,
    SPEECH_78 = 78,
    SPEECH_79 = 79,
    SPEECH_80 = 80,
    SPEECH_81 = 81,
    SPEECH_82 = 82,
    SPEECH_83 = 83,
    SPEECH_84 = 84,
    SPEECH_85 = 85,
    SPEECH_86 = 86,
    SPEECH_87 = 87,
    SPEECH_88 = 88,
    SPEECH_89 = 89,
    SPEECH_90 = 90,
    SPEECH_91 = 91,
    SPEECH_92 = 92,
    SPEECH_93 = 93,
    SPEECH_94 = 94,
    SPEECH_95 = 95,
    SPEECH_96 = 96,
    SPEECH_97 = 97,
    SPEECH_98 = 98,
    SPEECH_99 = 99,  // zombie
    SPEECH_100 = 100,
    SPEECH_101 = 101,
    SPEECH_PickMe = 102,
    SPEECH_103 = 103,
    SPEECH_IDENTIFY_MONSTER_WEAKER = 104,
    SPEECH_IDENTIFY_MONSTER_STRONGER = 105,
    SPEECH_IDENTIFY_MONSTER_106 = 106,
    SPEECH_107 = 107,  // its just you and me now
    SPEECH_108 = 108,
    SPEECH_109 = 109,
    SPEECH_110 = 110,
};

/*  339 */
enum CHARACTER_RACE {
    CHARACTER_RACE_HUMAN = 0,
    CHARACTER_RACE_ELF = 1,
    CHARACTER_RACE_GOBLIN = 2,
    CHARACTER_RACE_DWARF = 3,
};

#pragma warning(push)
#pragma warning(disable : 4341)
/*  328 */
enum PLAYER_SKILL_TYPE : int8_t {
    PLAYER_SKILL_STAFF = 0,
    PLAYER_SKILL_SWORD = 1,
    PLAYER_SKILL_DAGGER = 2,
    PLAYER_SKILL_AXE = 3,
    PLAYER_SKILL_SPEAR = 4,
    PLAYER_SKILL_BOW = 5,
    PLAYER_SKILL_MACE = 6,
    PLAYER_SKILL_BLASTER = 7,
    PLAYER_SKILL_SHIELD = 8,
    PLAYER_SKILL_LEATHER = 9,
    PLAYER_SKILL_CHAIN = 10,
    PLAYER_SKILL_PLATE = 11,
    PLAYER_SKILL_FIRE = 12,
    PLAYER_SKILL_AIR = 13,
    PLAYER_SKILL_WATER = 14,
    PLAYER_SKILL_EARTH = 15,
    PLAYER_SKILL_SPIRIT = 16,
    PLAYER_SKILL_MIND = 17,
    PLAYER_SKILL_BODY = 18,
    PLAYER_SKILL_LIGHT = 19,
    PLAYER_SKILL_DARK = 20,
    PLAYER_SKILL_ITEM_ID = 21,
    PLAYER_SKILL_MERCHANT = 22,
    PLAYER_SKILL_REPAIR = 23,
    PLAYER_SKILL_BODYBUILDING = 24,
    PLAYER_SKILL_MEDITATION = 25,
    PLAYER_SKILL_PERCEPTION = 26,
    PLAYER_SKILL_DIPLOMACY = 27,
    PLAYER_SKILL_TIEVERY = 28,
    PLAYER_SKILL_TRAP_DISARM = 29,
    PLAYER_SKILL_DODGE = 30,
    PLAYER_SKILL_UNARMED = 31,
    PLAYER_SKILL_MONSTER_ID = 32,
    PLAYER_SKILL_ARMSMASTER = 33,
    PLAYER_SKILL_STEALING = 34,
    PLAYER_SKILL_ALCHEMY = 35,
    PLAYER_SKILL_LEARNING = 36,
    PLAYER_SKILL_CLUB = 37,
    PLAYER_SKILL_MISC = 38,
    PLAYER_SKILL_INVALID = -1
};
#pragma warning(pop)

/*  329 */
enum PLAYER_CLASS_TYPE : uint8_t {
    PLAYER_CLASS_KNIGHT = 0,
    PLAYER_CLASS_CHEVALIER = 1,
    PLAYER_CLASS_CHAMPION = 2,
    PLAYER_CLASS_BLACK_KNIGHT = 3,
    PLAYER_CLASS_THIEF = 4,
    PLAYER_CLASS_ROGUE = 5,
    PLAYER_CLASS_SPY = 6,
    PLAYER_CLASS_ASSASSIN = 7,
    PLAYER_CLASS_MONK = 8,
    PLAYER_CLASS_INITIATE = 9,
    PLAYER_CLASS_MASTER = 10,
    PLAYER_CLASS_NINJA = 11,
    PLAYER_CLASS_PALADIN = 12,
    PLAYER_CLASS_CRUSADER = 13,
    PLAYER_CLASS_HERO = 14,
    PLAYER_CLASS_VILLIAN = 15,
    PLAYER_CLASS_ARCHER = 16,
    PLAYER_CLASS_WARRIOR_MAGE = 17,
    PLAYER_CLASS_MASTER_ARCHER = 18,
    PLAYER_CLASS_SNIPER = 19,
    PLAYER_CLASS_RANGER = 20,
    PLAYER_CLASS_HUNTER = 21,
    PLAYER_CLASS_RANGER_LORD = 22,
    PLAYER_CLASS_BOUNTY_HUNTER = 23,
    PLAYER_CLASS_CLERIC = 24,
    PLAYER_CLASS_PRIEST = 25,
    PLAYER_CLASS_PRIEST_OF_SUN = 26,
    PLAYER_CLASS_PRIEST_OF_MOON = 27,
    PLAYER_CLASS_DRUID = 28,
    PLAYER_CLASS_GREAT_DRUID = 29,
    PLAYER_CLASS_ARCH_DRUID = 30,
    PLAYER_CLASS_WARLOCK = 31,
    PLAYER_CLASS_SORCERER = 32,
    PLAYER_CLASS_WIZARD = 33,
    PLAYER_CLASS_ARCHMAGE = 34,
    PLAYER_CLASS_LICH = 35
};


enum CHARACTER_EXPRESSION_ID : uint16_t {
    CHARACTER_EXPRESSION_INVALID = 0,
    CHARACTER_EXPRESSION_1 = 1,
    CHARACTER_EXPRESSION_CURSED = 2,
    CHARACTER_EXPRESSION_WEAK = 3,
    CHARACTER_EXPRESSION_SLEEP = 4,
    CHARACTER_EXPRESSION_FEAR = 5,
    CHARACTER_EXPRESSION_DRUNK = 6,
    CHARACTER_EXPRESSION_INSANE = 7,
    CHARACTER_EXPRESSION_POISONED = 8,
    CHARACTER_EXPRESSION_DISEASED = 9,
    CHARACTER_EXPRESSION_PARALYZED = 10,
    CHARACTER_EXPRESSION_UNCONCIOUS = 11,
    CHARACTER_EXPRESSION_PERTIFIED = 12,
    CHARACTER_EXPRESSION_13 = 13,
    CHARACTER_EXPRESSION_14 = 14,
    CHARACTER_EXPRESSION_15 = 15,
    CHARACTER_EXPRESSION_16 = 16,
    CHARACTER_EXPRESSION_17 = 17,
    CHARACTER_EXPRESSION_18 = 18,
    CHARACTER_EXPRESSION_19 = 19,
    CHARACTER_EXPRESSION_20 = 20,
    CHARACTER_EXPRESSION_21 = 21,
    CHARACTER_EXPRESSION_22 = 22,
    CHARACTER_EXPRESSION_23 = 23,
    CHARACTER_EXPRESSION_24 = 24,
    CHARACTER_EXPRESSION_25 = 25,
    CHARACTER_EXPRESSION_26 = 26,
    CHARACTER_EXPRESSION_27 = 27,
    CHARACTER_EXPRESSION_28 = 28,
    CHARACTER_EXPRESSION_29 = 29,
    CHARACTER_EXPRESSION_30 = 30,
    CHARACTER_EXPRESSION_31 = 31,
    CHARACTER_EXPRESSION_32 = 32,
    CHARACTER_EXPRESSION_33 = 33,
    CHARACTER_EXPRESSION_DMGRECVD_MINOR = 34,
    CHARACTER_EXPRESSION_DMGRECVD_MODERATE = 35,
    CHARACTER_EXPRESSION_DMGRECVD_MAJOR = 36,
    CHARACTER_EXPRESSION_37 = 37,
    CHARACTER_EXPRESSION_38 = 38,
    CHARACTER_EXPRESSION_39 = 39,

    // ?

    CHARACTER_EXPRESSION_SCARED = 46,  // like falling

    CHARACTER_EXPRESSION_54 = 54,
    CHARACTER_EXPRESSION_55 = 55,
    CHARACTER_EXPRESSION_56 = 56,
    CHARACTER_EXPRESSION_57 = 57,
    CHARACTER_EXPRESSION_FALLING = 58,

    // ?

    CHARACTER_EXPRESSION_DEAD = 98,
    CHARACTER_EXPRESSION_ERADICATED = 99,
};

enum PLAYER_SEX : uint8_t { SEX_MALE = 0, SEX_FEMALE = 1 };


enum CHARACTER_ATTRIBUTE_TYPE {
    CHARACTER_ATTRIBUTE_STRENGTH = 0,
    CHARACTER_ATTRIBUTE_INTELLIGENCE = 1,
    CHARACTER_ATTRIBUTE_WILLPOWER = 2,
    CHARACTER_ATTRIBUTE_ENDURANCE = 3,
    CHARACTER_ATTRIBUTE_ACCURACY = 4,
    CHARACTER_ATTRIBUTE_SPEED = 5,
    CHARACTER_ATTRIBUTE_LUCK = 6,
    CHARACTER_ATTRIBUTE_HEALTH = 7,
    CHARACTER_ATTRIBUTE_MANA = 8,
    CHARACTER_ATTRIBUTE_AC_BONUS = 9,

    CHARACTER_ATTRIBUTE_RESIST_FIRE = 10,
    CHARACTER_ATTRIBUTE_RESIST_AIR = 11,
    CHARACTER_ATTRIBUTE_RESIST_WATER = 12,
    CHARACTER_ATTRIBUTE_RESIST_EARTH = 13,
    CHARACTER_ATTRIBUTE_RESIST_MIND = 14,
    CHARACTER_ATTRIBUTE_RESIST_BODY = 15,

    CHARACTER_ATTRIBUTE_SKILL_ALCHEMY = 16,
    CHARACTER_ATTRIBUTE_SKILL_STEALING = 17,
    CHARACTER_ATTRIBUTE_SKILL_TRAP_DISARM = 18,
    CHARACTER_ATTRIBUTE_SKILL_ITEM_ID = 19,
    CHARACTER_ATTRIBUTE_SKILL_MONSTER_ID = 20,
    CHARACTER_ATTRIBUTE_SKILL_ARMSMASTER = 21,
    CHARACTER_ATTRIBUTE_SKILL_DODGE = 22,
    CHARACTER_ATTRIBUTE_SKILL_UNARMED = 23,

    CHARACTER_ATTRIBUTE_LEVEL = 24,
    CHARACTER_ATTRIBUTE_ATTACK = 25,
    CHARACTER_ATTRIBUTE_MELEE_DMG_BONUS = 26,
    CHARACTER_ATTRIBUTE_MELEE_DMG_MIN = 27,
    CHARACTER_ATTRIBUTE_MELEE_DMG_MAX = 28,
    CHARACTER_ATTRIBUTE_RANGED_ATTACK = 29,
    CHARACTER_ATTRIBUTE_RANGED_DMG_BONUS = 30,
    CHARACTER_ATTRIBUTE_RANGED_DMG_MIN = 31,
    CHARACTER_ATTRIBUTE_RANGED_DMG_MAX = 32,
    CHARACTER_ATTRIBUTE_RESIST_SPIRIT = 33,

    CHARACTER_ATTRIBUTE_SKILL_FIRE = 34,
    CHARACTER_ATTRIBUTE_SKILL_AIR = 35,
    CHARACTER_ATTRIBUTE_SKILL_WATER = 36,
    CHARACTER_ATTRIBUTE_SKILL_EARTH = 37,
    CHARACTER_ATTRIBUTE_SKILL_SPIRIT = 38,
    CHARACTER_ATTRIBUTE_SKILL_MIND = 39,
    CHARACTER_ATTRIBUTE_SKILL_BODY = 40,
    CHARACTER_ATTRIBUTE_SKILL_LIGHT = 41,
    CHARACTER_ATTRIBUTE_SKILL_DARK = 42,
    CHARACTER_ATTRIBUTE_SKILL_MEDITATION = 43,
    CHARACTER_ATTRIBUTE_SKILL_BOW = 44,
    CHARACTER_ATTRIBUTE_SKILL_SHIELD = 45,
    CHARACTER_ATTRIBUTE_SKILL_LEARNING = 46
};
