//
// Created by szyns on 03.12.2023.
//

#include "Animal.h"

Animal::Animal() {}

Animal::Animal(int limbNr, const string &name, bool protectedAnimal=true) : limbNr(limbNr), name(name),
                                                                       protectedAnimal(protectedAnimal) {}

int Animal::getLimbNr() const {
    return limbNr;
}

void Animal::setLimbNr(int limbNr) {
    Animal::limbNr = limbNr;
}

const string &Animal::getName() const {
    return name;
}

void Animal::setName(const string &name) {
    Animal::name = name;
}

bool Animal::isProtectedAnimal() const {
    return protectedAnimal;
}

void Animal::setProtectedAnimal(bool protectedAnimal) {
    Animal::protectedAnimal = protectedAnimal;
}

void Animal::giveVoice() {
    cout<<"Chrum, miau,hau,piiiii"<<endl;

}

void Animal::info() {
    cout<<"Name: "<<name<<endl;
    cout<<"Number of limbs: "<<limbNr<<endl;
    if(protectedAnimal)
    {
        cout<<"The animal is protected"<<endl;
    }
    else
    {
        cout<<"The animal is not protected"<<endl;
    }

}
