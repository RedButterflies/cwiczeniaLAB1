//
// Created by szyns on 03.12.2023.
//

#include "Cat.h"

Cat::Cat(int limbNr, const string &name, bool protectedAnimal) : Animal(limbNr, name, protectedAnimal) {}

Cat::Cat() {}

void Cat::initMice() {
    int myszy;
    cout<<"Myszy upolowane w pierwszym roku: "<<endl;
    cin>>myszy;
    mice[0]=myszy;
    cout<<"Myszy upolowane w drugim roku: "<<endl;
    cin>>myszy;
    mice[1]=myszy;
    cout<<"Myszy upolowane w trzecim roku: "<<endl;
    cin>>myszy;
    mice[2]=myszy;
    cout<<"Myszy upolowane w czwartym roku: "<<endl;
    cin>>myszy;
    mice[3]=myszy;
    cout<<"Myszy upolowane w piatym roku: "<<endl;
    cin>>myszy;
    mice[4]=myszy;

}

void Cat::initCat() {
    cout<<"Input the number of limbs: "<<endl;
    int limbs;
    cin>>limbs;
    setLimbNr(limbs);
    cout<<"Input the name of the cat: "<<endl;
    string name;
    cin>>name;
    setName(name);
    cout<<"Is the cat a protected animal (1 -yes, 0-no)";
    bool isprotected;
    cin>>isprotected;
    setProtectedAnimal(isprotected);
    cout<<"Level of mouse hunting (a number between 1 and 10"<<endl;
    int level;
    cin>>level;
   if(level>=1 && level <=10)
   {
       levelOfMouseHunting=level;
   }
   else
   {
       cout<<"The number you entered does not belong in the given range. Enter an appropriate number: ";
       cin>>level;
       while(level<1 || level >10)
       {
           cout<<"The number you entered does not belong in the given range. Enter an appropriate number: ";
           cin>>level;
       }
       levelOfMouseHunting = level;
   }
   cout<<"The mice array: "<<endl;
    int myszy;
    cout<<"Myszy upolowane w pierwszym roku: "<<endl;
    cin>>myszy;
    mice[0]=myszy;
    cout<<"Myszy upolowane w drugim roku: "<<endl;
    cin>>myszy;
    mice[1]=myszy;
    cout<<"Myszy upolowane w trzecim roku: "<<endl;
    cin>>myszy;
    mice[2]=myszy;
    cout<<"Myszy upolowane w czwartym roku: "<<endl;
    cin>>myszy;
    mice[3]=myszy;
    cout<<"Myszy upolowane w piatym roku: "<<endl;
    cin>>myszy;
    mice[4]=myszy;



}

void Cat::setLevelOfMouseHunting(int level) {
    levelOfMouseHunting = level;

}

int Cat::getLevelOfMouseHunting() const {
    if(levelOfMouseHunting>=1 && levelOfMouseHunting<=10)
    {
        return levelOfMouseHunting;
    }
    else
    {
        return 0;
    }
}

int Cat::getMice(int index) {
    if(index>=1&&index<=5) {
        return mice[index-1];
    }
    else
    {
        cout<<"Wprowadzono wartosc spoza zakresu. Index jest liczba calkowita z przedzialu <1,5>";
        return 0;
    }
}

void Cat::giveVoice() {
    cout<<"Miau,miau"<<endl;
}

void Cat::info() {
    Animal::info();
    cout<<"Level of Mouse Hunting"<<levelOfMouseHunting<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<"Myszy upolowane w "<<i+1<<". roku:"<<mice[i]<<endl;
    }

}
