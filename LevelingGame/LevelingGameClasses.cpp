#include "LevelingGameClasses.h"

Attribute Attribute;

Levels::Levels(){
    SkillPoints_ = 0;
    CharacterLevel_ = 1;
    NextLevel_ = 100;
    LevelCap_ = 100;
    return;
}



Levels::Levels(int CharacterLevel, int NextLevel,int SkillPoints,int PointsToNextLevel){
    CharacterLevel_ = CharacterLevel;
    NextLevel_ = NextLevel;
    SkillPoints_ = SkillPoints;
    PointsToNextLevel_ = PointsToNextLevel;
    return;
}

void Levels::Leveling(int PointsToNextLevel){
    char SkillPointUsage = 'x';
    char UseSkillPoints = 'x';
    char UnlockSpell = 'x';
    
    PointsToNextLevel_ = PointsToNextLevel;
    
    while ((PointsToNextLevel_ * 10) > NextLevel_ && CharacterLevel_ < LevelCap_){
        
        
                    CharacterLevel_ = CharacterLevel_ + 1;
                    
                    PointsToNextLevel_ = ((PointsToNextLevel_ * 10) - 100) / 10;
                    
                    NextLevel_ = NextLevel_ + 10;
                    
                    SkillPoints_ = SkillPoints_ + 1;
                    
                    cout << "You Have Leveled Up From " << (CharacterLevel_ - 1) << " To " << CharacterLevel_ << "!" << endl;
                    
                    if (SkillPoints_ >= 5 || UnlockSpell == 'n' || UnlockSpell == 'N')
                    cout << "You have " << SkillPoints_ << " Skill Points, would you like to any?(y/n)" << endl;
                    cin >> UseSkillPoints;
                    
                    while (UseSkillPoints == 'y' || UseSkillPoints == 'Y'){
                        cout << "What do you want to upgrade? (M = Magic, C = Crit., D = Defense, A = Attack, S = Stealth, H = Health)" << endl;
                        cin >>SkillPointUsage;
                        if (SkillPointUsage == 'm' || SkillPointUsage == 'M'){
                            Attribute.MP = Attribute.MP + 5;
                            cout << "You have upgraded your Magic from " << Attribute.MP - 5 << " to " << Attribute.MP << endl;
                            SkillPoints_ = SkillPoints_ - 1;
                            if (SkillPoints_ >= 1){
                                cout << "You have " << SkillPoints_ << " more points left, do you want to use any?" << endl;
                                cin >> UseSkillPoints;
                            }
                            if (SkillPoints_ == 0){
                                
                            }
                        }
                        if (SkillPointUsage == 'c' || SkillPointUsage == 'C'){
                         Attribute.Critical = Attribute.Critical + 5;
                         cout << "You have upgraded your Crit. from " << Attribute.Critical - 5 << " to " << Attribute.Critical << endl;
                         SkillPoints_ = SkillPoints_ - 1;
                         if (SkillPoints_ >= 1){
                                cout << "You have " << SkillPoints_ << " more points left, do you want to use any?" << endl;
                                cin >> UseSkillPoints;
                            }
                            if (SkillPoints_ == 0){
                                
                            }
                        }
                        if (SkillPointUsage == 'D' || SkillPointUsage == 'd'){
                            Attribute.Defence = Attribute.Defence + 5;
                            cout << "You have upgraded your Defence from " << Attribute.Defence - 5 << " to " << Attribute.Defence << endl;
                            SkillPoints_ = SkillPoints_ - 1;
                            if (SkillPoints_ >= 1){
                                cout << "You have " << SkillPoints_ << " more points left, do you want to use any?" << endl;
                                cin >> UseSkillPoints;
                            }
                            if (SkillPoints_ == 0){
                                
                            }
                        }
                        if (SkillPointUsage == 'A' || SkillPointUsage == 'a'){
                            Attribute.Damage = Attribute.Damage + 5;
                            cout << "You have upgraded your Attack from " << Attribute.Damage - 5 << " to " << Attribute.Damage << "." << endl;
                            SkillPoints_ = SkillPoints_ - 1;
                            if (SkillPoints_ >= 1){
                                cout << "You have " << SkillPoints_ << " more points left, do you want to use any?" << endl;
                                cin >> UseSkillPoints;
                            }
                            if (SkillPoints_ == 0){
                                
                            }
                        }
                        if (SkillPointUsage == 'S' || SkillPointUsage == 's'){
                            Attribute.Stealth = Attribute.Stealth + 5;
                            cout << "You have upgraded your Stealth from " << Attribute.Stealth - 5 << "to " << Attribute.Health << "." << endl;
                            SkillPoints_ = SkillPoints_ - 1;
                            if (SkillPoints_ >= 1){
                                cout << "You have " << SkillPoints_ << " more points left, do you want to use any?" << endl;
                                cin >> UseSkillPoints;
                            }
                            if (SkillPoints_ == 0){
                                
                            }
                        }
                        if (SkillPointUsage == 'H' || SkillPointUsage == 'h'){
                            Attribute.Health = Attribute.Health + 5;
                            cout << "You Have Upgraded Your Health To: " << Attribute.Health << "." << endl;
                            SkillPoints_ = SkillPoints_ - 1;
                            if (SkillPoints_ >= 1){
                                cout << "You have " << SkillPoints_ << " more points left, do you want to use any?" << endl;
                                cin >> UseSkillPoints;
                            }
                            if (SkillPoints_ == 0){
                                
                            }
                        }
                    }
                    }
                    if (SkillPoints_ >= 5){
                        cout << "You Currently Have " << SkillPoints_ << " Skill Points, You Can Use 5 To Unlock A Magical Spell" << endl;
                        cout << "Would you like to unlock a spell?(y/n)" << endl;
                        cin >> UnlockSpell;
                        
                        if (UnlockSpell == 'y' || UnlockSpell == 'Y'){
                            cout << "These Are the Current Spells You Can Unlock: " << endl;
                            
                        }
                        else if (UnlockSpell == 'n' || UnlockSpell == 'N'){
                            
                        }
                        else{
                            cout << "Please Enter A Valid Character: " << endl;
                            cin >> UnlockSpell;
                        }
                    }
                    return;
}

int Levels::Character(){
    return CharacterLevel_;
}

int Levels::SkillPointOutPut(){
    return SkillPoints_;
}
