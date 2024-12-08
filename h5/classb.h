#ifndef CLASSB_H
#define CLASSB_H
#include <string>
using namespace std;

class ClassB {
private:
    string info;  // Private-muuttuja info

public:
    // Getter-metodi info muuttujalle
    string getInfo();

    // Setter-metodi info muuttujalle
    void setInfo(string newInfo);
};

#endif

