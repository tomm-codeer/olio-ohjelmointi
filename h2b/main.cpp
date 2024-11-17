#include <iostream>
#include <string>
#include <vector>

using namespace std; // Käytetään namespace std

class Car {
public:
    string brand;    // Auton merkki
    string model;    // Auton malli
    int yearModel;   // Auton valmistusvuosi

    // Konstruktori
    Car(string b, string m, int y) : brand(b), model(m), yearModel(y) {}

    // Metodi auton tietojen tulostamiseksi
    void printCarData() {
        cout << "Merkki: " << brand << ", Malli: " << model << ", Valmistusvuosi: " << yearModel << endl;
    }
};

int main()
{
    vector<Car> carList;

    Car objectCar0("Maserati", "Testosteroni", 2024);
    Car objectCar1("Toyota", "Takaveto", 1981);
    Car objectCar2("Volvo", "Pappabetalar", 2018);

    carList.push_back(objectCar0);
    carList.push_back(objectCar1);
    carList.push_back(objectCar2);

    // Tulostetaan toisen auton tiedot
    cout << "Toisen auton tiedot:" << endl;
    carList[1].printCarData();

    // Tulostetaan kaikkien autojen tiedot
    cout << "\nKaikkien autojen tiedot:" << endl;
    for (int x = 0; x < carList.size(); x++) {
        carList[x].printCarData();
    }

    return 0;
}
