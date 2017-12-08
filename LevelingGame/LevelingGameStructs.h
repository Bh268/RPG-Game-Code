#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <math.h>
using namespace std;




struct Skills{
    double Archery;
    double Sneak;
    double Sword;
    double Sheild;
    double Sword2;
    double Dagger;
    double Magic;
    
    
};

struct Weapons{
    //Sheilds
    int WoodSheild;
    int IronSheild;
    int CrystalSheild;
    int SteelSheild;
    //Two Handed Sword
    int Katana;
    int Beheader;
    //One Handed Weapons
    int Excaliber;
    int Dagger;
    int IronSword;
    int CrystalSword;
    
    //Bows
    int WeakBow = 5;
    int HeavyBow;
    int CrystalBow;
    //BowStrings
    int WeakBowString;
    int HeavyBowString;
    //Staffs and Scythe(Magic)
    int StaffOfDreams;
    int FireStaff;
    int WaterStaff;
    int EarthStaff;
    int LightningStaff;
    int AirStaff;
    int DarkStaff;
    int LightStaff;
    int DeathScythe;
    int LifeStaff;
    //Magic Weapons
    int FlameSword;
    int WaterSword;
    int EarthSword;
    int LightSword;
    int SoulSword;
    int FlameWarAxe;
    int WaterWarAxe;
    int EarthWarAxe;
    int LightWarAxe;
    int SoulWarAxe;
    int FlameBow;
    int WaterBow;
    int EarthBow;
    int LightBow;
    int SoulBow;
    //War Axe
    int IronWarAxe;
    int WeakWarAxe;
    int HeavyWarAxe;
    int CrystalWarAxe;
    

};



struct Armor{
    double LeatherArmor;
    double IronArmor;
    double CrystalArmor;
    

};

struct Class_{
    string Archer = "Archer";
    string Mage = "Mage";
    string Ninja = "Ninja";
    string Warrior = "Warrior";
    string Witch = "Witch";
    
   
    
};

struct Attribute{
    int Damage = 0;
    int Health = 0;
    int Defence = 0;
    int Critical = 0;
    int MP = 0;
    int Stealth = 0;
};

struct Items{
    double Money;
    double RabbitMeat;
    double RottenRabbitMeat;
    double CookedRabbitMeat;
    double Beef;
    double RottenBeef;
    double CookedBeef;
    double Blueberry;
    double Rasberry;
    double Wood;
    double Cherry;
    double Apple;
    double Crystal;
    double Iron;
    double Leather;
    double EarthIngot;
    double LightIngot;
    double WaterIngot;
    double FireIngot;
    double DarkIngot;
    double AirIngot;
    double LightningIngot;
    //Final Boss Drop
    double LifeIngot;
    double DeathIngot;
    
    
};

struct Tools{
    double Axe;
    double Pickaxe;
    string Key;
    
};
struct Level{
    int CharacterLevel;
};


struct CodeRequired{
    //Classes
    string God = "QRVWX";
    string Goddess = "RBTLM";
    string Satan = "FWNJI";
    //Armor
    string GodArmor = "20432";
    string SatanicArmor = "84242";
        //Weapons
    string MeteorSword = "89407";
    string GodStaff = "84023";
    string GodSword = "24321";
    string TwoHandedGodSword = "28400";
    string GodBow = "94780";
    string WarAxeOfTheGods = "59831";
    string SatanicBow = "32132";
    string SatanicStaff = "83512";
    string SatanicSword = "74214";
    string SatanicWarAxe = "39482";
    string TwoHandedSatanicSword = "83094";
    
    
};




//Run Classes through Function