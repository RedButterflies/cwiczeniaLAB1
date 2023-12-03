//
// Created by szyns on 03.12.2023.
//

#ifndef CWICZENIA_PERSON_H
#define CWICZENIA_PERSON_H


#include <iostream>
using namespace std;
class Person
{
private:
string name;
string surname;
 int age;
 public:
 Person(string name1, string surname1, int age1);
 Person();
 void setAge(int age1);
 string getSurname();
 bool is_18();
 void showInfoPerson();
 void init(string name1, string surname1, int age1);

    const string &getName() const;

    int getAge() const;

};

#endif //CWICZENIA_PERSON_H
