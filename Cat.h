//
// Created by szyns on 03.12.2023.
//

#ifndef CWICZENIA_CAT_H
#define CWICZENIA_CAT_H


#include "Animal.h"

class Cat : public Animal {
private:
    int levelOfMouseHunting;
    int mice[5];
public:
    Cat(int limbNr, const string &name, bool protectedAnimal);
    Cat();
    void initMice();
    void initCat();
    void setLevelOfMouseHunting(int level);
    int getLevelOfMouseHunting() const;
    int getMice(int index);
    void giveVoice();
    void info();






};


#endif //CWICZENIA_CAT_H
