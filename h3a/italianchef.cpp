#include "italianchef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(const string& name) : Chef(name) {
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "Italian Chef " << name << " destruktori" << endl;
}

void ItalianChef::makePasta() {
    cout << "Italian Chef " << name << " makes pasta" << endl;
}

void ItalianChef::nameBourdain() {
    cout << "name of the Italian Chef is " << name << endl;
}

void ItalianChef::makeSoup() {
    cout << "Chef " << name << " makes soup" << endl;
}

string ItalianChef::getName() const {
    return name;
}


