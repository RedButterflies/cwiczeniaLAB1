//
// Created by szyns on 03.12.2023.
//

#ifndef CWICZENIA_DOG_H
#define CWICZENIA_DOG_H


#include "Animal.h"

class Dog: public Animal{
private:
    string breed;
    int levelOfGuideSkills;
    int levelOfTrackerSkills;
public:
    Dog(int limbNr, const string &name, bool protectedAnimal, const string &breed, int levelOfGuideSkills,
        int levelOfTrackerSkills);

    Dog(int limbNr, const string &name, bool protectedAnimal);

    Dog();
    void setSkillLevel(int type, int value);
    int getSkillLevel(int type);
    void giveVoice();
    void info();

};


#endif //CWICZENIA_DOG_H
