#include "chef.h"
#include "italianchef.h"

using namespace std;

int main() {
    Chef gordonRamsay("Gordon Ramsay");
    gordonRamsay.makeSalad();
    gordonRamsay.makeSoup();

    ItalianChef anthonyBourdain("Anthony Bourdain");
    anthonyBourdain.makeSalad();
    anthonyBourdain.makeSoup();
    anthonyBourdain.makePasta();
    anthonyBourdain.nameBourdain();

    return 0;
}
