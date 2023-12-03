#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <set>
#include "Student.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;
//void show(vector<int> vector1);
int howManyProtectedAnimals(Animal a1[],int size)
{
    int howManyProteced=0;
    for (int i=0;i<size;i++)
    {
        if(a1[i].isProtectedAnimal())
        {
            howManyProteced++;
        }
        else
        {

        }
    }
    cout<<"W tablicy jest "<<howManyProteced<<" chronionych zwierzat"<<endl;
    return howManyProteced;
}
void howManyTrackerDogs(Dog d1[], int size)
{
    cout<<"Psy, ktorych poziom tropiciela jest wiekszy niz przewodnika: "<<endl;
    for (int i=0;i<size;i++)
    {
        if(d1[i].getSkillLevel(2)>d1[i].getSkillLevel(1))
        {
            d1[i].info();
        }
    }
}
void howManyCats(Cat c1[], int size)
{
    int howMany = 0;
    for (int i=0;i<size;i++)
    {
        for(int j=1;j<6;j++)
        {
            howMany+=c1[i].getMice(j);
        }
        cout<<"\nKot "<<i<<" upolowal w ciagu 5 lat "<<howMany<<" myszy";
        howMany=0;
    }
}


int main() {

    Animal a1[6] = {Animal(6,"spider",1),Animal(5,"weird dog",1),Animal(4,"kitty cat",0),Animal(4,"goat",0),Animal(4,"cow",0),Animal(2,"chicken",1)};
    Dog d1[3] = {Dog(4,"Skalmar",0,"street dog",6,7),Dog(4,"Jozef",0,"pudel",9,8),Dog(4,"Zofia",1,"German sheppard",7,6)};
    Cat c1[3];
    for(int i=0;i<3;i++)
    {
        c1[i].initCat();
    }
    howManyProtectedAnimals(a1,6);
    howManyTrackerDogs(d1,3);
    howManyCats(c1,3);




//    Student s1 [3] = {Student("John","Wick",22,"A"),Student("Jeremy","Smith",23,"B"),Student("George","Orwell",45,"C")};
//    Student* s2;
//    Student* s3[4];
//    Student** s4;
//
//    s2 = new Student[4];
//    for (int i =0;i<4;i++)
//    {
//        s2[i].init("Aleksandra","Kwiecinska",18);
//        s2[i].setIndex("111");
//    }
//    for (int i=0;i<4;i++)
//    {
//        s3[i] = new Student("Statyczna","Dynamicznych",24,"s3");
//    }
//    s4 = new Student*[3];
//    for(int i = 0; i<3;i++)
//    {
//        s4[i]=new Student("Dyanmo","Dynamic",24,"123");
//
//    }
//
//
//    cout<<"Tablica s1: "<<endl;
//    for(int i=0;i<3;i++)
//    {
//        s1[i].showInfoStudent();
//    }
//    cout<<"Tablica s2: "<<endl;
//    for(int i=0;i<3;i++)
//    {
//        s2[i].showInfoStudent();
//    }
//    cout<<"Tablica s3: "<<endl;
//    for(int i=0;i<3;i++)
//    {
//        s3[i]->showInfoStudent();
//    }
//    cout<<"Tablica s4: "<<endl;
//    for(int i=0;i<3;i++)
//    {
//        s4[i]->showInfoStudent();
//    }
//
//
//    delete[] s2;
//    for (int i=0;i<3;i++)
//    {
//        cout<<"Usunieto element "<<s3[i]<<endl;
//        delete s3[i];
//    }
//    for(int i=0;i<3;i++)
//    {
//        cout<<"Usunieto element "<<s4[i]<<endl;
//        delete s4[i];
//    }
//    delete[] s4;


//    vector<int>num={3,6,3,8,9,1,3};
//    vector<int>numB = {1,2,3,4,5,6,7,8,9,10};
//    vector<int>res=vector(17,0);
//    show(num);
//    cout<<"\nVector po sortowaniu\n"<<endl;
//
//    reverse(num.begin(),num.begin()+4);
//    show(num);
//
//    cout<<"\nNajwiekszy element w wektorze: \n"<<endl;
//    cout<<*max_element(num.begin(),num.end());
//
//    merge(num.begin(),num.end(),numB.begin(),numB.end(),res.begin());
//    cout<<"\nPolaczony wektor\n"<<endl;
//    show(res);
//    cout<<endl;
//    set<int>set1;
//    set1.insert(1);
//    set1.insert(1);
//    set1.insert(1);
//    set1.insert(2);
//    set1.insert(3);
//    cout<<set1.count(1)<<endl;
//
   return 0;
}
//
//void show(vector<int> vector1) {
//    vector<int>::iterator it;
//    for(it = vector1.begin();it < vector1.end();it++)
//    {
//        cout<<*it<<", ";
//    }
//
//}

