//
// Created by szyns on 03.12.2023.
//

#include "Dog.h"

Dog::Dog(int limbNr, const string &name, bool protectedAnimal, const string &breed, int levelOfGuideSkills,
         int levelOfTrackerSkills) : Animal(limbNr, name, protectedAnimal), breed(breed),
                                     levelOfGuideSkills(levelOfGuideSkills),
                                     levelOfTrackerSkills(levelOfTrackerSkills) {}

Dog::Dog(int limbNr, const string &name, bool protectedAnimal) : Animal(limbNr, name, protectedAnimal) {}

Dog::Dog() {}

void Dog::setSkillLevel(int type, int value) {
    switch(type)
    {
        case 1:
            if(value >=1 && value <=10) {
                levelOfGuideSkills = value;
            }
            else
            {
                cout<<"Wprowadzono niepoprawna wartosc levelOfGuideSkills, wprowadz wartosc z zakresu <1,10>";
            }
        case 2:
            if(value>=1 && value <=10) {
                levelOfTrackerSkills = value;
            }
            else
            {
                cout<<"Wprowadzono niepoprawna wartosc levelOfTrackerSkills, wprowadz wartosc z zakresu <1,10>";
            }
        default:
            cout<<"Wprowadzono nieprawidlowa wartosc typ -> wybierz 1, aby ustawic levelOfGuideSkills lub 2, aby ustawic levelOfTrackerSkills";
    }

}

int Dog::getSkillLevel(int type) {
    switch (type) {
        case 1:
            if (levelOfGuideSkills >= 1 && levelOfGuideSkills <= 10) {
                return levelOfGuideSkills;
            } else {
                return 0;
            }
        case 2:
            if (levelOfTrackerSkills >= 1 && levelOfTrackerSkills <= 10) {
                return levelOfTrackerSkills;
            } else {
                return 0;
            }
        default:
            return 0;
    }
}

void Dog::giveVoice() {
    cout<<"Hau, hau"<<endl;
}

void Dog::info() {
    Animal::info();
    cout<<"Breed: "<<breed<<endl;
    cout<<"Level of guide skills: "<<levelOfGuideSkills<<endl;
    cout<<"Level of tracker skills: "<<levelOfTrackerSkills<<endl;
}
