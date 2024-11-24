#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main() {
    {
    Chef gordonRamsay("Gordon Ramsay");
    gordonRamsay.makeSalad();
    gordonRamsay.makeSoup();
    //gordonRamsay.~Chef();
    }

    ItalianChef anthonyBourdain("Anthony Bourdain");
    anthonyBourdain.makeSalad();
    anthonyBourdain.makeSoup();
    anthonyBourdain.makePasta();
    // anthonyBourdain.nameBourdain();
    cout << "name of the Italian Chef is " << anthonyBourdain.getName() << endl;

    return 0;
}
