//
// Created by szyns on 03.12.2023.
//

#include "Student.h"

Student::Student(const string &name1, const string &surname1, int age1, const string &index) : Person(name1, surname1,
                                                                                                      age1),
                                                                                               index(index) {
    cout<<"Konstruktor klasy Student"<<endl;

}

void Student::setIndex(string newIndex) {
    this->index = newIndex;

}

const string &Student::getIndex() const {
    return index;
}

void Student::showInfoStudent() {
    cout<<"Imie: "<<getName()<<endl;
    cout<<"Nazwisko: "<<getSurname()<<endl;
    cout<<"Wiek: "<<getAge()<<endl;

}

Student::Student(const string &index) : index(index) {}

Student::Student() {}



