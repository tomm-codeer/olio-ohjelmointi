#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <string>
#include "Chef.h"

using namespace std;

class ItalianChef : public Chef {
public:
    ItalianChef(const string &name);
    ~ItalianChef();

    void makePasta();
    void makeSoup();
    void nameBourdain();
    string getName() const;
};

#endif // ITALIANCHEF_H
