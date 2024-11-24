#ifndef CHEF_H
#define CHEF_H

#include <string>

using namespace std;

class Chef {
public:
    Chef(const string& name);
    ~Chef();

    void makeSalad();
    void makeSoup();

protected:
    string name;
};

#endif // CHEF_H
