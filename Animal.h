//
// Created by szyns on 03.12.2023.
//
#include <iostream>
#ifndef CWICZENIA_ANIMAL_H
#define CWICZENIA_ANIMAL_H

using namespace std;
class Animal {
private:
    int limbNr;
    string name;
    bool protectedAnimal;
public:
    Animal();

    Animal(int limbNr, const string &name, bool protectedAnimal);

    int getLimbNr() const;

    void setLimbNr(int limbNr);

    const string &getName() const;

    void setName(const string &name);

    bool isProtectedAnimal() const;

    void setProtectedAnimal(bool protectedAnimal);
    void giveVoice();
    void info();

};


#endif //CWICZENIA_ANIMAL_H
