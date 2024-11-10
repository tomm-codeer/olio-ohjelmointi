#include <iostream>
#include <iomanip>
using namespace std;

void calcSum(int a, int b) {
    cout << "Summa: " << a + b << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: Jakaja ei voi olla nolla." << endl;
    } else {
        cout << "Osamäärä: " << fixed << setprecision(2) << (float)a / b << endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: Jakaja ei voi olla nolla." << endl;
        return 0;
    } else {
        return (float)a / b;
    }
}

int main() {
    int a, b;
    cout << "Anna kaksi kokonaislukua:" << endl;
    cin >> a >> b;

    cout << "Syötit luvut: " << a << " ja " << b << endl;

    calcSum(a, b);
    calcDiv(a, b);

    int sum = retSum(a, b);
    float div = retDiv(a, b);

    cout << "Palautettu summa: " << sum << endl;
    cout << "Palautettu osamäärä: " << fixed << setprecision(2) << div << endl;

    return 0;
}
