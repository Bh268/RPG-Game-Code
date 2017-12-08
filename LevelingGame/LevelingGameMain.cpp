#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include "LevelingGameClasses.cpp"



    int main(){
    
    int intline;
    
    string line = "";
    
    ifstream fin;
    
    ofstream fout;
        
    Levels Levels;
    

    Items Items;
    Tools Tools;
    Class_ Class_;
    Armor Armor;
    Weapons Weapons;
    Skills Skills;
    CodeRequired CodeRequired;
    Level Level;
    
    srand(time(0));
    
    string userName;
    string ArmorName = "";
    string ClassName;
    string GameStart;
    string Class;
    string WeaponName = "";
    
    char esc = 'n';
    char armorEnable;
    char ClassConfirm;
    char weaponEnable;
    
    int Weapon;
    int Weapon2;
    int Helmet;
    int Class1;
    
    int Attack = 10;
    string SpellName[9];
    SpellName[0] = "Fire";
    SpellName[1] = "Water";
    SpellName[2] = "Lightning";
    SpellName[3] = "Earth";
    SpellName[4] = "Air";
    SpellName[5] = "Dark";
    SpellName[6] = "Light";
    SpellName[7] = "Death";
    SpellName[8] = "Life";
    
    
    
    int SpellLevel[9];
    SpellLevel[0] = 0;
    SpellLevel[1] = 0;
    SpellLevel[2] = 0;
    SpellLevel[3] = 0;
    SpellLevel[4] = 0;
    SpellLevel[5] = 0;
    SpellLevel[6] = 0;
    SpellLevel[7] = 0;
    SpellLevel[8] = 0;
    
    int SpellDamage[9];
    SpellDamage[0] = rand()% ((SpellLevel[0] + 10) / 2) + 1;
    SpellDamage[1] = rand()% ((SpellLevel[1] + 10) / 2) + 1;
    SpellDamage[2] = rand()% ((SpellLevel[2] + 10) / 2) + 1;
    SpellDamage[3] = rand()% ((SpellLevel[3] + 10) / 2) + 1;
    SpellDamage[4] = rand()% ((SpellLevel[4] + 10) / 2) + 1;
    SpellDamage[5] = rand()% ((SpellLevel[5] + 10) / 2) + 1;
    SpellDamage[6] = rand()% ((SpellLevel[6] + 10) / 2) + 1;
    SpellDamage[7] = rand()% ((SpellLevel[7] + 10) / 2) + 1;
    SpellDamage[8] = rand()% ((SpellLevel[8] + 10) / 2) + 1;
    
    string SpellActive[9];
    SpellActive[0] = "FALSE";
    SpellActive[1] = "FALSE";
    SpellActive[2] = "FALSE";
    SpellActive[3] = "FALSE";
    SpellActive[4] = "FALSE";
    SpellActive[5] = "FALSE";
    SpellActive[6] = "FALSE";
    SpellActive[7] = "FALSE";
    SpellActive[8] = "FALSE";
    
    int SpellUsage[9];
    SpellUsage[0] = 0;
    SpellUsage[1] = 0;
    SpellUsage[2] = 0;
    SpellUsage[3] = 0;
    SpellUsage[4] = 0;
    SpellUsage[5] = 0;
    SpellUsage[6] = 0;
    SpellUsage[7] = 0;
    SpellUsage[8] = 0;
    
    int SpellPoints[9];
    SpellPoints[0] = 0;
    SpellPoints[1] = 0;
    SpellPoints[2] = 0;
    SpellPoints[3] = 0;
    SpellPoints[4] = 0;
    SpellPoints[5] = 0;
    SpellPoints[6] = 0;
    SpellPoints[7] = 0;
    SpellPoints[8] = 0;
    
    char YesOrNo;
    
    string Password;
    
    string PasswordEnter;
    
    
    
    while (esc == 'n' || esc == 'N'){
        
        EnterUsername:
        
        
        cout << "Enter Username or acquired code:" << endl;
        cin >> userName;
        
        
        
        if (userName == CodeRequired.GodArmor){
            cout << "Are you sure you want to enable God Armor(y/n)?" << endl;
            cin >> armorEnable;
            if (armorEnable == 'y' || armorEnable == 'Y'){
            cout << "~God Armor Enabled~" << endl;
            Attribute.Health = 9999999;
            ArmorName = "God Armor";
            }
            
            if (armorEnable == 'n' || armorEnable == 'N'){
                cout << "Code Canceled" << endl;
                goto EnterUsername;
            }
            
            
            goto EnterUsername;
        
        
        }
        
        
        if(userName == CodeRequired.SatanicArmor){
            cout << "Are you sure you want to enable Satanic Armor(y/n)?" << endl;
            cin >> armorEnable;
            if (armorEnable == 'y' || armorEnable == 'Y'){
            cout << "~Satanic Armor Enabled~" << endl;
            Attribute.Health = 9999999;
            CodeRequired.SatanicArmor = "Satanic Armor";
            ArmorName = CodeRequired.SatanicArmor;
            }
            if (armorEnable == 'n' || armorEnable == 'N'){
                cout << "Code Canceled" << endl;
                goto EnterUsername;
            }
            
            
            goto EnterUsername;
        
        
        }
        
        
        if (userName == CodeRequired.MeteorSword){
            cout << "Are you sure you want to enable Meteor Sword(y/n)" << endl;
            cin >>  weaponEnable;
            if (weaponEnable == 'y' || weaponEnable == 'Y'){
                cout << "~Meteor Sword Enabled~" << endl;
                Attribute.Damage = 9999999;
                CodeRequired.MeteorSword = "Meteor Sword";
                WeaponName = CodeRequired.MeteorSword;
            }
            if (weaponEnable == 'n' || weaponEnable == 'N'){
                cout << "Code Canceled" << endl;
                goto EnterUsername;
            }
            
            
            goto EnterUsername;
        }
        
        if (userName == CodeRequired.GodSword){
            cout << "Are you sure you want to equip the God Sword(y/n)?" << endl;
            cin >> weaponEnable;
             if (weaponEnable == 'y' || weaponEnable == 'Y'){
                cout << "~God Sword Enabled~" << endl;
                Attribute.Damage = 9999999;
                CodeRequired.GodSword = "God Sword";
                WeaponName = CodeRequired.GodSword;
            }
            if (weaponEnable == 'n' || weaponEnable == 'N'){
                cout << "Code Canceled" << endl;
                goto EnterUsername;
            }
        
        goto EnterUsername;
        }
        
        
        if (userName == CodeRequired.GodStaff){
            cout << "Are you sure you want to equip the God Staff?(y/n)?" << endl;
            cin >> weaponEnable;
            if (weaponEnable == 'y' || weaponEnable == 'Y'){
                cout << "~God Staff Enabled~" << endl;
                Attribute.MP = 9999999;
                CodeRequired.GodStaff = "God Staff";
                WeaponName = CodeRequired.GodStaff;
            }
            if (weaponEnable == 'n' || weaponEnable == 'N'){
                cout << "Code Canceled" << endl;
                goto EnterUsername;
            }
            
            goto EnterUsername;
        }
        
        
        if (userName == CodeRequired.TwoHandedGodSword){
            cout << "Are you sure you want to equip the Two-Handed God Sword(y/n)?" << endl;
            cin >> weaponEnable;
            if (weaponEnable == 'y' || weaponEnable == 'Y'){
                cout << "~Two-Handed God Sword Enabled~" << endl;
                Attribute.Critical = 9999999;
                Attribute.Damage = 9999999;
                CodeRequired.TwoHandedGodSword = "Two-Handed God Sword";
                WeaponName = CodeRequired.TwoHandedGodSword;
            }
            if (weaponEnable == 'n' || weaponEnable == 'N'){
                cout << "Code Canceled" << endl;
                goto EnterUsername;
            }
            
            goto EnterUsername;
        }
        
        if (userName == CodeRequired.GodBow){
            cout << "Are you sure you want to equip the God Bow(y/n)?" << endl;
            cin >> weaponEnable;
            if (weaponEnable == 'y' || weaponEnable == 'Y'){
                cout << "~God Bow Enabled~" << endl;
                Attribute.Critical = 9999999;
                CodeRequired.GodBow = "God Bow";
                WeaponName = CodeRequired.GodBow;
            }
            if (weaponEnable == 'n' || weaponEnable == 'N'){
                cout << "Code Canceled" << endl;
                goto EnterUsername;
            }
            
            goto EnterUsername;
        }
        
        if (userName == CodeRequired.WarAxeOfTheGods){
            cout << "Are you sure you want to equip The war Axe of the Gods(y/n)?" << endl;
            cin >> weaponEnable;
            if (weaponEnable == 'y' || weaponEnable == 'Y'){
                cout << "~War Axe of the Gods Enabled~" << endl;
                Attribute.Critical = 9999999;
                Attribute.Damage = 9999999;
                CodeRequired.WarAxeOfTheGods = "War Axe of the Gods";
                WeaponName = CodeRequired.WarAxeOfTheGods;
            }
            if (weaponEnable == 'n' || weaponEnable == 'N'){
                cout << "Code Canceled" << endl;
                goto EnterUsername;
            }
            
            goto EnterUsername;
        }
        
        if (userName == CodeRequired.SatanicBow){
            cout << "Are you sure you want to equip the Satanic Bow(y/n)?" << endl;
            cin >> weaponEnable;
            if (weaponEnable == 'y' || weaponEnable == 'Y'){
                cout << "~Satanic Bow Enabled~" << endl;
                Attribute.Critical = 9999999;
                Attribute.Damage = 9999999;
                CodeRequired.SatanicBow = "Satanic Bow";
                WeaponName = CodeRequired.SatanicBow;
            }
            if (weaponEnable == 'n' || weaponEnable == 'N'){
                cout << "Code Canceled" << endl;
                goto EnterUsername;
            }
            
            goto EnterUsername;
        }
        
        if (userName == CodeRequired.SatanicStaff){
            cout << "Are you sure you want to equip the Satanic Staff(y/n)?" << endl;
            cin >> weaponEnable;
            if (weaponEnable == 'y' || weaponEnable == 'Y'){
                cout << "~Satanic Staff Enabled~" << endl;
                Attribute.MP = 9999999;
                CodeRequired.SatanicStaff = "Satanic Staff";
                WeaponName = CodeRequired.SatanicStaff;
            }
            if (weaponEnable == 'n' || weaponEnable == 'N'){
                cout << "Code Canceled" << endl;
                goto EnterUsername;
            }
            
            goto EnterUsername;
        }
        
        if (userName == CodeRequired.SatanicSword){
            cout << "Are you sure you want to equip the Satanic Sword(y/n)?" << endl;
            cin >> weaponEnable;
            if (weaponEnable == 'y' || weaponEnable == 'Y'){
                cout << "~Satanic Sword Enabled~" << endl;
                Attribute.Damage = 9999999;
                CodeRequired.SatanicSword = "Satanic Sword";
                WeaponName = CodeRequired.SatanicSword;
            }
            if (weaponEnable == 'n' || weaponEnable == 'N'){
                cout << "Code Canceled" << endl;
                goto EnterUsername;
            }
            
            goto EnterUsername;
        }
        
        if (userName == CodeRequired.SatanicWarAxe){
            cout << "Are you sure you want to equip the Satanic War Axe(y/n)?" << endl;
            cin >> weaponEnable;
            if (weaponEnable == 'y' || weaponEnable == 'Y'){
                cout << "~Satanic War Axe Enabled~" << endl;
                Attribute.Critical = 9999999;
                Attribute.Damage = 9999999;
                CodeRequired.SatanicWarAxe = "Satanic War Axe";
                WeaponName = CodeRequired.SatanicWarAxe;
            }
            if (weaponEnable == 'n' || weaponEnable == 'N'){
                cout << "Code Canceled" << endl;
                goto EnterUsername;
            }
            
            goto EnterUsername;
        }
        
        if (userName == CodeRequired.TwoHandedSatanicSword){
            cout << "Are you sure you want to equip the Two-Handed Satanic Sword(y/n)?" << endl;
            cin >> weaponEnable;
            if (weaponEnable == 'y' || weaponEnable == 'Y'){
                cout << "~Two-Handed Satanic Sword Enabled~" << endl;
                Attribute.Critical = 9999999;
                Attribute.Damage = 9999999;
                CodeRequired.TwoHandedSatanicSword = "Two-Handed Satanic Sword";
                WeaponName = CodeRequired.TwoHandedSatanicSword;
            }
            if (weaponEnable == 'n' || weaponEnable == 'N'){
                cout << "Code Canceled" << endl;
                goto EnterUsername;
            }
            
            goto EnterUsername;
        }
        
        
        if (userName == userName){
            
            if(ifstream (userName + ".txt")){
                cout << "Would you like to load Save Game Data of Username " << userName << "?(y/n)" << endl;
                cin >> YesOrNo;
                
                if (YesOrNo == 'Y' || YesOrNo == 'y'){
                    fin.open (userName + ".txt");
                    cout << "Please Enter Password: ";
                    cin >> PasswordEnter;
                    
                    getline(fin, line);
                    
                    if (PasswordEnter == line){
                    
                    for (int lineno = 0; fin >> intline && lineno < 3; lineno++){
                    if (lineno == 2){
                    cout << "Your Character Level is: " << line << endl;
                    int line1 = intline;
                    }
                    }
                    
                    for (int lineno = 0; fin >> intline && lineno < 4; lineno++){
                    if (lineno == 3){
                    int line2 = intline;
                    }
                    }
                    
                    for (int lineno = 0; fin >> intline && lineno < 3; lineno++){
                    if (lineno == 4){
                        
                    }
                    }
                    
                    Levels Levels(line1, line2, SkillPoints, PointsToNextLevel);
                    fin.close();
                    fout.open (userName + ".txt", ios::ate);
                    }
                    if (PasswordEnter != line){
                        cout << "Wrong Password, Try Again; If this is not your Username, enter \'X\'" << endl;
                        cin >> PasswordEnter;
                        
                        if (PasswordEnter == "x" || PasswordEnter == "x"){
                            goto EnterUsername;
                        }
                    }
                }
                
                if (YesOrNo == 'N' || YesOrNo =='n'){
                    cout << "Overwritting Data..." << endl;
                 
                }
            }
            ofstream file(userName + ".txt");
            
            if (!file){
                cout << "Could not Create Save Game Data." << endl;
            }
            cout << "Enter a new Password" << endl;
            cin >> Password;
            
            ClassChoose:
            ClassName = "";
            Class1 = 0;
            cout << "Enter Class or Class Code Aqcuired, Classes include Archer, Mage, Ninja, Warrior, or Witch:" << endl;
            cin >> Class;
            
            
            
            
            if (Class == CodeRequired.God){
                cout << "You have entered code for God" << endl;
                CodeRequired.God = "God";
                ClassName = CodeRequired.God;
                Class1 = 1;
                Attribute.MP = 9999999;
                Attribute.Critical = 9999999;
                Attribute.Defence = 9999999;
                Attribute.Health = 9999999;
                Attribute.Damage = 9999999;
                Attribute.Stealth = 9999999;
                SpellActive[0] = "TRUE";
                SpellActive[1] = "TRUE";
                SpellActive[3] = "TRUE";
                SpellActive[4] = "TRUE";
                SpellActive[5] = "TRUE";
                SpellActive[6] = "TRUE";
                SpellActive[7] = "TRUE";
                SpellActive[8] = "TRUE";
                SpellActive[9] = "TRUE";
                SpellLevel[0] = 100;
                SpellLevel[1] = 100;
                SpellLevel[3] = 100;
                SpellLevel[4] = 100;
                SpellLevel[5] = 100;
                SpellLevel[6] = 100;
                SpellLevel[7] = 100;
                SpellLevel[8] = 100;
                SpellLevel[9] = 100;
                goto ConfirmClass;
            }
            
            if (Class == CodeRequired.Goddess){
                cout << "You have entered Code for Goddess" << endl;
                CodeRequired.Goddess = "Goddess";
                ClassName = CodeRequired.Goddess;
                Class1 = 1;
                Attribute.MP = 9999999;
                Attribute.Critical = 9999999;
                Attribute.Defence = 9999999;
                Attribute.Health = 9999999;
                Attribute.Damage = 9999999;
                Attribute.Stealth = 9999999;
                SpellActive[0] = "TRUE";
                SpellActive[1] = "TRUE";
                SpellActive[3] = "TRUE";
                SpellActive[4] = "TRUE";
                SpellActive[5] = "TRUE";
                SpellActive[6] = "TRUE";
                SpellActive[7] = "TRUE";
                SpellActive[8] = "TRUE";
                SpellActive[9] = "TRUE";
                SpellLevel[0] = 100;
                SpellLevel[1] = 100;
                SpellLevel[3] = 100;
                SpellLevel[4] = 100;
                SpellLevel[5] = 100;
                SpellLevel[6] = 100;
                SpellLevel[7] = 100;
                SpellLevel[8] = 100;
                SpellLevel[9] = 100;
                goto ConfirmClass;
            }
            
            if (Class == CodeRequired.Satan){
                cout << "Satan Mode Enabled" << endl;
                CodeRequired.Satan = "Satan";
                ClassName = CodeRequired.Satan;
                Class1 = 1;
                Attribute.MP = 9999999;
                Attribute.Critical = 9999999;
                Attribute.Defence = 9999999;
                Attribute.Health = 9999999;
                Attribute.Damage = 9999999;
                Attribute.Stealth = 9999999;
                SpellActive[0] = "TRUE";
                SpellActive[1] = "TRUE";
                SpellActive[3] = "TRUE";
                SpellActive[4] = "TRUE";
                SpellActive[5] = "TRUE";
                SpellActive[6] = "TRUE";
                SpellActive[7] = "TRUE";
                SpellActive[8] = "TRUE";
                SpellActive[9] = "TRUE";
                SpellLevel[0] = 100;
                SpellLevel[1] = 100;
                SpellLevel[3] = 100;
                SpellLevel[4] = 100;
                SpellLevel[5] = 100;
                SpellLevel[6] = 100;
                SpellLevel[7] = 100;
                SpellLevel[8] = 100;
                SpellLevel[9] = 100;
                goto ConfirmClass;
            }
            
            if(Class == "Archer" || Class == "archer"){
                cout << "You Have Chosen the Archer Class" << endl;
                ClassName = Class_.Archer;
                Class1 = 1;
                
                    WeaponName = "Weak Bow";
                    
                    Attribute.Critical = Attribute.Critical + 10;
                    Attribute.Damage = Attribute.Damage + 10;
                    Attribute.Health = Attribute.Health + 10;
                    Attribute.MP = Attribute.MP + 5;
                    Attribute.Defence = Attribute.Defence + 5;
                    Attribute.Stealth = Attribute.Stealth + 10;
                
                goto ConfirmClass;
            }
            
            if (Class == "Mage" || Class == "mage"){
                cout << "You Have Chosen the Mage Class" << endl;
                SpellActive[0] = "TRUE";
                ClassName = Class_.Mage;
                Class1 = 1;
                if (Attribute.MP == 0){
                Attribute.MP = Attribute.MP + 50;}
                if (Attribute.Health == 0){
                Attribute.Health = Attribute.Health + 10;}
                if (Attribute.Defence == 0){
                Attribute.Defence = Attribute.Defence + 5;}
                if (Attribute.Critical == 0){
                Attribute.Critical = Attribute.Critical + 10;}
                if (Attribute.Damage == 0){
                Attribute.Damage = Attribute.Damage + 5;}
                if (Attribute.Stealth == 0){
                Attribute.Stealth = Attribute.Stealth + 5;}
                
                goto ConfirmClass;
            }
            
            if (Class == "Ninja" || Class == "ninja"){
                cout << "You Have Chosen the Ninja Class" << endl;
                ClassName = Class_.Ninja;
                Class1 = 1;
                if (WeaponName == "" && ArmorName == ""){
                    Attribute.Stealth = 20;
                    Attribute.Damage = 10;
                    Attribute.Health = 5;
                    Attribute.Critical = 10;
                    Attribute.Defence = 5;
                    Attribute.MP = 5;
                }
                goto ConfirmClass;
            }
            
            if (Class == "Witch" || Class == "witch"){
                cout << "You Have Chosen the Witch Class" << endl;
                ClassName = Class_.Witch;
                Class1 = 1;
                if (WeaponName == "" && ArmorName == ""){
                Attribute.MP = 50;
                Attribute.Health = 10;
                Attribute.Defence = 5;
                Attribute.Critical = 10;
                Attribute.Damage = 5;
                Attribute.Stealth = 5;
                }
                goto ConfirmClass;
            }
            
            if (Class == "Warrior" || Class == "warrior"){
                cout << "You Have Chosen the Warrior Class" << endl;
                ClassName = Class_.Warrior;
                Class1 = 1;
                if (WeaponName == "" && ArmorName == ""){
                
                Attribute.Damage = 20;
                Attribute.MP = 5;
                Attribute.Defence = 10;
                Attribute.Critical = 5;
                Attribute.Stealth = 5;
                Attribute.Health = 10;
                }
                goto ConfirmClass;
            }
            
            
            else{
                cout << "You Have Entered " << Class << ", Please Choose Valid Class" << endl;
                goto ClassChoose;
            }
            
            
            ConfirmClass:
            if (Class1 == 1){
                cout << "Confirm Class, you have chosen the class " << ClassName << ", do you accept? (y/n)" << endl;
                cin >> ClassConfirm;
                
                if (ClassConfirm == 'y' || ClassConfirm == 'Y'){
                    cout << "Class Confirmed" << endl;
                    GameStart = "TRUE";
                    goto gameStart;
                }
                
                if (ClassConfirm == 'n' || ClassConfirm == 'N'){
                    cout << "Choose New Class" << endl;
                    goto ClassChoose;
                }
                
                
                else {
                    cout << "Invalid Character Has Been Entered, Please Enter Valid Character:" << endl;
                    goto ConfirmClass;
                }
                
                
            }
        }
        
        gameStart:
        Level.CharacterLevel = 1;
        
        string Mob[4][5];
        Mob[0][0] = "Rabbit";
        Mob[0][1] = "Cow";
        Mob[0][2] = "Sheep";
        Mob[0][3] = "Goat";
        
        Mob[1][0] = "EarthElemental";
        Mob[1][1] = "FireElemental";
        Mob[1][2] = "WaterElemental";
        Mob[1][3] = "LightningElemental";
        Mob[1][4] = "AirElemental";
        
        Mob[2][0] = "LightElemental";
        Mob[2][1] = "DarkElemental";
        Mob[2][2] = "";
        Mob[2][3] = "";
        
        Mob[3][0] = "Satan";
        Mob[3][1] = "God";
        Mob[3][2] = "Dragon";
        Mob[3][3] = "Lurker";
        
        
        int MobDamage[4][5];
        MobDamage[0][0] = 0;
        MobDamage[0][1] = 0;
        MobDamage[0][2] = 0;
        MobDamage[0][3] = 0;
        
        MobDamage[1][0] = rand()% 10 + 1;
        MobDamage[1][1] = rand()% 10 + 1;
        MobDamage[1][2] = rand()% 10 + 1;
        MobDamage[1][3] = rand()% 10 + 1;
        
        MobDamage[2][0] = rand()% 20 + 10;
        MobDamage[2][1] = rand()% 20 + 10;
        MobDamage[2][2] = rand()% 20 + 10;
        MobDamage[2][3] = rand()% 20 + 10;
        
        MobDamage[3][0] = rand()% 20 + 10;
        MobDamage[3][1] = rand()% 20 + 10;
        MobDamage[3][2] = rand()% 20 + 10;
        MobDamage[3][3] = rand()% 20 + 10;
        
        
        int MobHealth[4][5];
        MobHealth[0][0] = rand()% 10 + 1;
        MobHealth[0][1] = rand()% 10 + 1;
        MobHealth[0][2] = rand()% 10 + 1;
        MobHealth[0][3] = rand()% 10 + 1;
        
        MobHealth[1][0] = rand()% 20 + 10;
        MobHealth[1][1] = rand()% 20 + 10;
        MobHealth[1][2] = rand()% 20 + 10;
        MobHealth[1][3] = rand()% 20 + 10;
        
        MobHealth[2][0] = rand()% 20 + 10;
        MobHealth[2][1] = rand()% 20 + 10;
        MobHealth[2][2] = rand()% 20 + 10;
        MobHealth[2][3] = rand()% 20 + 10;
        
        MobHealth[3][0] = rand()% 20 + 10;
        MobHealth[3][1] = rand()% 20 + 10;
        MobHealth[3][2] = rand()% 20 + 10;
        MobHealth[3][3] = rand()% 20 + 10;
        
        int LevelCap = 100;
        
        int NextLevel = 100;
        
        int SkillPoints = 0;
        
        char UseSkillPoints = 'y';
        
        int SNextLevel = 10;
        
        
        
        int C;
        int L = 10;
        int i = 0;
        char Move = 'x';
        int Defense = 10;
        int Escape = rand()% (100 - Attribute.Stealth) + 1;
        double PointsToNextLevel;
        int AttackDamage = ((Level.CharacterLevel + Attribute.Damage) / 2) * 4;
        int CharacterAttack = rand()% AttackDamage + 1;
        char Continue = 'y';
        char ContinueToNextLevel = 'y';
        
        
        if (GameStart == "TRUE"){
            cout << "Welcome to Dungeons." << endl;
            cout << "Your Chosen Class is: " << ClassName << endl;
            cout << "Your Current Stealth is: " << Attribute.Stealth << endl;
            cout << "Your Current Health is: " << Attribute.Health << endl;
            cout << "Your Current Damage is: " << Attribute.Damage << endl;
            cout << "Your Current Defence is: " << Attribute.Defence << endl;
            cout << "Your Current MP is: " << Attribute.MP << endl;
            cout << "Your Current Crit. is: " << Attribute.Critical << endl;
            
            i = rand()% 4;
            cout << "This is Level 1, the first mob you will encounter is Passive and will not attack, after you reach level two," << endl;
            cout << "I will judge if you should go against an aggressive opponent, or another passive mob." << endl;
            cout << "You have encountered a " << Mob[0][i] << " what will you do?(a = Attack, d = Defend, r = Run, M = Use Magic)" << endl;
            cin >> Move;
            
            while (Move == 'r' || Move == 'R'){
                Escape = rand()% (100 - Attribute.Stealth) + 1;
                
                if (Escape == 1){
                    cout << "You have successfully escaped from the " << Mob[0][i] << "." << endl;
                    
                }
                else{
                    cout << "You have failed to escape the " << Mob[0][i] << "." << endl;
                    cout << "The " << Mob[0][i] << " attacked you for " << MobDamage[0][i] << " Damage" << endl;
                    Attribute.Health = Attribute.Health - MobDamage[0][i];
                    
                    if (Attribute.Health > 0){
                        cout << "The Cow has " << MobHealth[0][i] << " Health left." << endl;
                        cout << "Your current Health is: " << Attribute.Health << ". What Would you like to do?(a = Attack, d = Defend, r = Run)" << endl;
                        cin >> Move;
                    }
                    
                    if (Attribute.Health <= 0){
                        cout << "You have died..." << endl;
                        cout << "~GAME OVER~" << endl;
                    }
                }
            }
            while (Move == 'd' || Move == 'D'){
                
            }
            while(Move == 'M' || Move == 'm'){
                cout << "You are able to use the following Spells: " << endl;
                
                for(int c = 0; c < 9;c++){
                    if (SpellActive[c] == "TRUE"){
                        cout << SpellName[c] << " (Press " << c << " To Use This Spell)" << endl;
                    }
                }
                int s = -1;
                cin >> s;
                cout << endl;
                if (SpellActive[s] == "TRUE"){
                    
                AttackDamage = ((Level.CharacterLevel + SpellDamage[s]) / 2) * 4;
                CharacterAttack = rand()% AttackDamage + 1;
                
                cout << "The " << Mob[0][i] << " took " << CharacterAttack << " Damage." << endl;
                MobHealth[0][i] = MobHealth[0][i] - CharacterAttack;
                
                SpellPoints[s] = SpellPoints[s] + 2;
                
                for (C = 0; C < Level.CharacterLevel;C++){
                        L = L + C;
                    }
                    
                    PointsToNextLevel = ((CharacterAttack * L) / 10) + PointsToNextLevel;
                    
                    SpellUsage[s] = SpellUsage[s] + 1;
                    if (SpellPoints[s] > 10){
                        SpellLevel[s] = SpellLevel[s] + 1;
                        SpellPoints[s] = SpellPoints[s] - 10;
                    }
                    Levels.Leveling(PointsToNextLevel);
                    Level.CharacterLevel = Levels.Character();
                    SkillPoints = Levels.SkillPointOutPut();
                    
                    if (MobHealth[0][i] > 0){
                    cout << "The " << Mob[0][i] << " attacked you for " << MobDamage[0][i] << " Damage" << endl;
                    Attribute.Health = Attribute.Health - MobDamage[0][i];
                    
                
                    if (Attribute.Health > 0){
                        cout << "Your current Health is: " << Attribute.Health << ". What Would you like to do?(a = Attack, d = Defend, r = Run, m = Use Magic)" << endl;
                        cout << "The " << Mob[0][i] << " has " << MobHealth[0][i] << " Health left." << endl;
                        cin >> Move;
                    }
                    
                    if (Attribute.Health <= 0){
                        cout << "You have died..." << endl;
                        cout << "~GAME OVER~" << endl;
                    }
                }
                
                    if (MobHealth[0][i] <= 0){
                        Move = 'x';
                        cout << "You have successfully Killed the " << Mob[0][i] << "." << endl;
                        cout << "Would you Like to Continue?(y/n)" << endl;
                        cin >> Continue;
                        MobHealth[0][i] = rand()% 10 + 1;
                }
                
                
                
                }
                if (SpellActive[s] == "FALSE"){
                    cout << "You Have Not Unlocked This Spell Yet, Please Choose A Spell You Have Unlocked Or Type -1 to Exit: " << endl;
                    cin >> s;
                }
                if (s == -1){
                    cout << "You have encountered a " << Mob[0][i] << " what will you do?(a = Attack, d = Defend, r = Run, M = Use Magic)" << endl;
                    cin >> Move;
                }
                
            }
            while (Move == 'a' || Move == 'A'){
                
                
                AttackDamage = ((Level.CharacterLevel + Attribute.Damage) / 2) * 4;
                
                CharacterAttack = rand()% AttackDamage + 1;
                
                cout << "You attacked the " << Mob[0][i] << " and it took " << CharacterAttack << " Damage." << endl;
                
                MobHealth[0][i] = MobHealth[0][i] - CharacterAttack;
                
                
                
                
                
                    for (C = 0; C < Level.CharacterLevel;C++){
                        L = L + C;
                    }
                    
                    PointsToNextLevel = ((CharacterAttack * L) / 10) + PointsToNextLevel;
                    Levels.Leveling(PointsToNextLevel);
                    Level.CharacterLevel = Levels.Character();
                    SkillPoints = Levels.SkillPointOutPut();
                
                if (MobHealth[0][i] > 0){
                    cout << "The " << Mob[0][i] << " attacked you for " << MobDamage[0][i] << " Damage" << endl;
                    Attribute.Health = Attribute.Health - MobDamage[0][i];
                    
                
                    if (Attribute.Health > 0){
                        cout << "Your current Health is: " << Attribute.Health << ". What Would you like to do?(a = Attack, d = Defend, r = Run)" << endl;
                        cout << "The " << Mob[0][i] << " has " << MobHealth[0][i] << " Health left." << endl;
                        cin >> Move;
                    }
                    
                    if (Attribute.Health <= 0){
                        cout << "You have died..." << endl;
                        cout << "~GAME OVER~" << endl;
                    }
                }
                
                if (MobHealth[0][i] <= 0){
                    Move = 'x';
                    cout << "You have successfully Killed the " << Mob[0][i] << "." << endl;
                    cout << "Would you Like to Continue?(y/n)" << endl;
                    cin >> Continue;
                }
                
                    
                    
                }
            
            MobHealth[0][i] = rand()% 10 + 1;
            
            if (Continue == 'y' || Continue == 'Y'){
                
                Levels.Leveling(PointsToNextLevel);
                Level.CharacterLevel = Levels.Character();
                SkillPoints = Levels.SkillPointOutPut();
                
                cout << "You Currently Have " << PointsToNextLevel * 10 << " Points, you need " << NextLevel - (PointsToNextLevel * 10) << " points to level up. Continue to Next Level?" << endl;
                cin >> ContinueToNextLevel;
            }
        }
            if (ContinueToNextLevel == 'Y' || ContinueToNextLevel == 'y'){
                cout << "You have Made it to Level 2" << endl;
                
                while (Level.CharacterLevel >= 3 && Level.CharacterLevel <= 9){
                    i = rand()% 4;
                    int j = 1;
                    
                    cout << "You have encountered a " << Mob[j][i] << ", what will you do?(a = Attack, d = Defend, r = Run, M = Use Magic)" << endl;
                    cin >> Move;
                    
                    while (Move == 'r' || Move == 'R'){
                Escape = rand()% (100 - Attribute.Stealth) + 1;
                
                if (Escape == 1){
                    cout << "You have successfully escaped from the " << Mob[j][i] << "." << endl;
                    
                }
                else{
                    cout << "You have failed to escape the " << Mob[j][i] << "." << endl;
                    cout << "The " << Mob[j][i] << " attacked you for " << MobDamage[j][i] << " Damage" << endl;
                    Attribute.Health = Attribute.Health - MobDamage[j][i];
                    
                    if (Attribute.Health > 0){
                        cout << "The " << Mob[j][i] << " has " << MobHealth[j][i] << " Health left." << endl;
                        cout << "Your current Health is: " << Attribute.Health << ". What Would you like to do?(a = Attack, d = Defend, r = Run)" << endl;
                        cin >> Move;
                    }
                    
                    if (Attribute.Health <= 0){
                        cout << "You have died..." << endl;
                        cout << "~GAME OVER~" << endl;
                    }
                }
            }
            while (Move == 'd' || Move == 'D'){
                cout << "The " << Mob[j][i] << " attacks you for " << MobDamage[j][i] << " Damage" << endl;
                cout << "Since you have defended yourself, you only take a total of " << floor((MobDamage[j][i] / Attribute.Defence) + 0.5) << " Damage." << endl;
                Attribute.Health = Attribute.Health - (floor((MobDamage[j][i] / Attribute.Defence) + 0.5));
            }
            while(Move == 'M' || Move == 'm'){
                cout << "You are able to use the following Spells: " << endl;
                
                for(int c = 0; c < 9;c++){
                    if (SpellActive[c] == "TRUE"){
                        cout << SpellName[c] << " (Press " << c << " To Use This Spell)" << endl;
                    }
                }
                int s = -1;
                cin >> s;
                cout << endl;
                if (SpellActive[s] == "TRUE"){
                    
                AttackDamage = ((Level.CharacterLevel + SpellDamage[s]) / 2) * 4;
                CharacterAttack = rand()% AttackDamage + 1;
                
                cout << "The " << Mob[j][i] << " took " << CharacterAttack << " Damage." << endl;
                MobHealth[j][i] = MobHealth[j][i] - CharacterAttack;
                
                SpellPoints[s] = SpellPoints[s] + 2;
                
                for (C = 0; C < Level.CharacterLevel;C++){
                        L = L + C;
                    }
                    
                    PointsToNextLevel = ((CharacterAttack * L) / 10) + PointsToNextLevel;
                    
                    SpellUsage[s] = SpellUsage[s] + 1;
                    if (SpellPoints[s] > SNextLevel){
                        SpellLevel[s] = SpellLevel[s] + 1;
                        SpellPoints[s] = SpellPoints[s] - 10;
                        SNextLevel = SNextLevel + 10;
                    }
                    Levels.Leveling(PointsToNextLevel);
                    Level.CharacterLevel = Levels.Character();
                    SkillPoints = Levels.SkillPointOutPut();
                    
                    
                    if (MobHealth[j][i] <= 0){
                        Move = 'x';
                        cout << "You have successfully Killed the " << Mob[j][i] << "." << endl;
                        cout << "Would you Like to Continue?(y/n)" << endl;
                        cin >> Continue;
                }
                if (MobHealth[j][i] > 0){
                    cout << "The " << Mob[j][i] << " attacked you for " << MobDamage[j][i] << " Damage" << endl;
                    Attribute.Health = Attribute.Health - MobDamage[j][i];
                    
                
                    if (Attribute.Health > 0){
                        cout << "Your current Health is: " << Attribute.Health << ". What Would you like to do?(a = Attack, d = Defend, r = Run, m = Use Magic)" << endl;
                        cout << "The " << Mob[0][i] << " has " << MobHealth[j][i] << " Health left." << endl;
                        cin >> Move;
                    }
                    
                    if (Attribute.Health <= 0){
                        cout << "You have died..." << endl;
                        cout << "~GAME OVER~" << endl;
                    }
                }
                
                
                }
                if (SpellActive[s] == "FALSE"){
                    cout << "You Have Not Unlocked This Spell Yet, Please Choose A Spell You Have Unlocked Or Type -1 to Exit: " << endl;
                    cin >> s;
                }
                if (s == -1){
                    cout << "You have encountered a " << Mob[j][i] << " what will you do?(a = Attack, d = Defend, r = Run, M = Use Magic)" << endl;
                    cin >> Move;
                }
                
            }
            while (Move == 'a' || Move == 'A'){
                CharacterAttack = rand()% AttackDamage + 1;
                
                cout << "You attacked the " << Mob[j][i] << " and it took " << CharacterAttack << " Damage." << endl;
                MobHealth[j][i] = MobHealth[j][i] - CharacterAttack;
                    for (C = 0; C < Level.CharacterLevel;C++){
                        L = L + C;
                    }
                    PointsToNextLevel = ((CharacterAttack * L) / 10) + PointsToNextLevel;
                    Levels.Leveling(PointsToNextLevel);
                    Level.CharacterLevel = Levels.Character();
                    SkillPoints = Levels.SkillPointOutPut();
                    
                if (MobHealth[j][i] <= 0){
                    Move = 'x';
                    cout << "You have successfully Killed the " << Mob[j][i] << "." << endl;
                    cout << "Would you Like to Continue?(y/n)" << endl;
                    cin >> Continue;
                }
                if (MobHealth[j][i] > 0){
                    cout << "The " << Mob[j][i] << " attacked you for " << MobDamage[j][i] << " Damage" << endl;
                    Attribute.Health = Attribute.Health - MobDamage[j][i];
                    
                
                    if (Attribute.Health > 0){
                        cout << "Your current Health is: " << Attribute.Health << ". What Would you like to do?(a = Attack, d = Defend, r = Run)" << endl;
                        cout << "The " << Mob[j][i] << " has " << MobHealth[j][i] << " Health left." << endl;
                        cin >> Move;
                    }
                    
                    if (Attribute.Health <= 0){
                        cout << "You have died..." << endl;
                        cout << "~GAME OVER~" << endl;
                    }
                }
                    
                    
                }
                }
                
                
                while (Level.CharacterLevel < 3){
                    cout << "You need " << (3 - Level.CharacterLevel) << " more levels to go against a stronger opponent." << endl;
                    i = rand()% 4;
                    cout << "You have encountered a " << Mob[0][i] << ", what will you do?(a = Attack, d = Defend, r = Run, M = Use Magic)" << endl;
                    cin >> Move;
                    
                    while (Move == 'r' || Move == 'R'){
                Escape = rand()% (100 - Attribute.Stealth) + 1;
                
                if (Escape == 1){
                    cout << "You have successfully escaped from the " << Mob[0][i] << "." << endl;
                    
                }
                else{
                    cout << "You have failed to escape the " << Mob[0][i] << "." << endl;
                    cout << "The " << Mob[0][i] << " attacked you for " << MobDamage[0][i] << " Damage" << endl;
                    Attribute.Health = Attribute.Health - MobDamage[0][i];
                    
                    if (Attribute.Health > 0){
                        cout << "The Cow has " << MobHealth[0][i] << " Health left." << endl;
                        cout << "Your current Health is: " << Attribute.Health << ". What Would you like to do?(a = Attack, d = Defend, r = Run)" << endl;
                        cin >> Move;
                    }
                    
                    if (Attribute.Health <= 0){
                        cout << "You have died..." << endl;
                        cout << "~GAME OVER~" << endl;
                    }
                }
            }
            while (Move == 'd' || Move == 'D'){
                cout << "The " << Mob[0][i] << " attacks you for " << MobDamage[0][i] << " Damage" << endl;
                cout << "Since you have defended yourself, you only take a total of " << ceil(MobDamage[0][i] / Attribute.Defence) << " Damage." << endl;
            }
            while(Move == 'M' || Move == 'm'){
                cout << "You are able to use the following Spells: " << endl;
                
                for(int c = 0; c < 9;c++){
                    if (SpellActive[c] == "TRUE"){
                        cout << SpellName[c] << " (Press " << c << " To Use This Spell)" << endl;
                    }
                }
                int s = -1;
                cin >> s;
                cout << endl;
                if (SpellActive[s] == "TRUE"){
                    
                AttackDamage = ((Level.CharacterLevel + SpellDamage[s]) / 2) * 4;
                CharacterAttack = rand()% AttackDamage + 1;
                
                cout << "The " << Mob[0][i] << " took " << CharacterAttack << " Damage." << endl;
                MobHealth[0][i] = MobHealth[0][i] - CharacterAttack;
                
                SpellPoints[s] = SpellPoints[s] + 2;
                
                for (C = 0; C < Level.CharacterLevel;C++){
                        L = L + C;
                    }
                    
                    PointsToNextLevel = ((CharacterAttack * L) / 10) + PointsToNextLevel;
                    
                    SpellUsage[s] = SpellUsage[s] + 1;
                    if (SpellPoints[s] > SNextLevel){
                        SpellLevel[s] = SpellLevel[s] + 1;
                        SpellPoints[s] = SpellPoints[s] - 10;
                        SNextLevel = SNextLevel + 10;
                    }
                    Levels.Leveling(PointsToNextLevel);
                    Level.CharacterLevel = Levels.Character();
                    SkillPoints = Levels.SkillPointOutPut();
                    
                    if (MobHealth[0][i] <= 0){
                        Move = 'x';
                        cout << "You have successfully Killed the " << Mob[0][i] << "." << endl;
                        cout << "Would you Like to Continue?(y/n)" << endl;
                        cin >> Continue;
                }
                if (MobHealth[0][i] > 0){
                    cout << "The " << Mob[0][i] << " attacked you for " << MobDamage[0][i] << " Damage" << endl;
                    Attribute.Health = Attribute.Health - MobDamage[0][i];
                    
                
                    if (Attribute.Health > 0){
                        cout << "Your current Health is: " << Attribute.Health << ". What Would you like to do?(a = Attack, d = Defend, r = Run, m = Use Magic)" << endl;
                        cout << "The " << Mob[0][i] << " has " << MobHealth[0][i] << " Health left." << endl;
                        cin >> Move;
                    }
                    
                    if (Attribute.Health <= 0){
                        cout << "You have died..." << endl;
                        cout << "~GAME OVER~" << endl;
                    }
                }
                
                
                }
                if (SpellActive[s] == "FALSE"){
                    cout << "You Have Not Unlocked This Spell Yet, Please Choose A Spell You Have Unlocked Or Type -1 to Exit: " << endl;
                    cin >> s;
                }
                if (s == -1){
                    cout << "You have encountered a " << Mob[0][i] << " what will you do?(a = Attack, d = Defend, r = Run, M = Use Magic)" << endl;
                    cin >> Move;
                }
                
            }
            while (Move == 'a' || Move == 'A'){
                CharacterAttack = rand()% AttackDamage + 1;
                
                cout << "You attacked the " << Mob[0][i] << " and it took " << CharacterAttack << " Damage." << endl;
                MobHealth[0][i] = MobHealth[0][i] - CharacterAttack;
                    for (C = 0; C < Level.CharacterLevel;C++){
                        L = L + C;
                    }
                    PointsToNextLevel = ((CharacterAttack * L) / 10) + PointsToNextLevel;
                    
                    Levels.Leveling(PointsToNextLevel);
                    Level.CharacterLevel = Levels.Character();
                    SkillPoints = Levels.SkillPointOutPut();
                    
                if (MobHealth[0][i] <= 0){
                    Move = 'x';
                    cout << "You have successfully Killed the " << Mob[0][i] << "." << endl;
                    cout << "Would you Like to Continue?(y/n)" << endl;
                    cin >> Continue;
                }
                if (MobHealth[0][i] > 0){
                    cout << "The " << Mob[0][i] << " attacked you for " << MobDamage[0][i] << " Damage" << endl;
                    Attribute.Health = Attribute.Health - MobDamage[0][i];
                    
                
                    if (Attribute.Health > 0){
                        cout << "Your current Health is: " << Attribute.Health << ". What Would you like to do?(a = Attack, d = Defend, r = Run)" << endl;
                        cout << "The " << Mob[0][i] << " has " << MobHealth[0][i] << " Health left." << endl;
                        cin >> Move;
                    }
                    
                    if (Attribute.Health <= 0){
                        cout << "You have died..." << endl;
                        cout << "~GAME OVER~" << endl;
                    }
                }
                    
                    
                }
                }
            }
            
            cout << "Would you like to exit the game?(y/n)" << endl;
            cin >> esc;
        }
        
        
        if (esc == 'y' || esc == 'Y'){
            cout << "Saving Game Data, Do Not Force Close Program..." << endl;
            
            fout << Password << endl;
            
            fout << Level.CharacterLevel << endl;
            
            fout << NextLevel_ << endl;
            
            fout << ClassName << endl;
            
            fout << Attribute.Damage << endl;
            fout << Attribute.Health << endl;
            fout << Attribute.Defence << endl;
            fout << Attribute.Critical << endl;
            fout << Attribute.MP << endl;
            fout << Attribute.Stealth << endl;
            
            
            
            fout.close();
        fin.open(userName + ".txt");
        fout.open("PreviousSaveGameData.txt");
        cout << "Exiting Game" << endl;
        
        while (!fin.eof()){
            getline(fin, line);
            fout << line << endl;
        }
        
        fin.close();
        fout.close();
            
    return 0;
    }
}