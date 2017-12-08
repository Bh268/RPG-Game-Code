#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>
#include <fstream>
#include "LevelingGameStructs.h"




class Levels{
    public:
    void Leveling(int PointsToNextLevel);
    
    Levels();
    
    Levels(int CharacterLevel, int NextLevel,int SkillPoints,int PointsToNextLevel);
    
    int Character();
    int SkillPointOutPut();
    
    private:
    int CharacterLevel_;
    int NextLevel_;
    int LevelCap_;
    int SkillPoints_;
    int PointsToNextLevel_;
    
    
    
};