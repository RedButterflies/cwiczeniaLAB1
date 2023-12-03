//
// Created by szyns on 03.12.2023.
//

#ifndef CWICZENIA_STUDENT_H
#define CWICZENIA_STUDENT_H


#include <ostream>
#include "Person.h"

class Student : public Person {
private:
    string index;
public:
    Student(const string &name1, const string &surname1, int age1, const string &index);

    explicit Student(const string &index);

    void setIndex(string newIndex);

    const string &getIndex() const;

    void showInfoStudent();

    friend ostream &operator<<(ostream &os, const Student &student);

    Student();

};


#endif //CWICZENIA_STUDENT_H
