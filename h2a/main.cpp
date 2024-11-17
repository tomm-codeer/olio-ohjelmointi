#include <iostream>
#include <memory>
#include <string>

using namespace std; // Käytetään namespace std

class Car {
private:
    string brand;    // Auton merkki
    string model;    // Auton malli
    int yearModel;   // Auton valmistusvuosi

public:
    // Metodit asettamaan arvot jäsenmuuttujiin
    void setBrand(const string& newBrand) {
        brand = newBrand;
    }

    void setModel(const string& newModel) {
        model = newModel;
    }

    void setYearModel(int newYearModel) {
        yearModel = newYearModel;
    }

    // Metodi tulostamaan auton tiedot
    void printData() const {
        cout << "Merkki: " << brand << "\n"
             << "Malli: " << model << "\n"
             << "Valmistusvuosi: " << yearModel << endl;
    }
};

class Rectangle {
private:
    double width;
    double height;

public:
    void setHeight
        (double h){height = h;
    }
    void setWidth
        (double w){width = w;
    }
    double getArea() const { return width * height; }
    double getCircum() const { return 2 * (width + height); }
};

class Student {
private:
    string name;
    int studentNumber;
    float average;

public:
    void setName(string n) { name = n; }
    void setStudentNumber(int num) { studentNumber = num; }
    void setAverage(float avg) { average = avg; }

    string getName() const { return name; }
    int getStudentNumber() const { return studentNumber; }
    float getAverage() const { return average; }
};

int main() {
    // Luo Car-olio pinomuistiin
    Car auto1;

    // Aseta auton tiedot
    auto1.setBrand("Toyota");
    auto1.setModel("Corolla");
    auto1.setYearModel(2021);

    // Tulosta auton tiedot
    auto1.printData();

    Rectangle* srklm = new Rectangle();
    srklm->setWidth(12);
    srklm->setHeight(32);
    cout << "Suorakulmion ala: " << srklm->getArea() << " ja Ymparysmitta: " << srklm->getCircum() << endl;
    delete srklm;

    shared_ptr<Student> student = make_shared<Student>();
    student->setName("Tommi on paras");
    student->setStudentNumber(34567);
    student->setAverage(4.0);
    cout << "Opiskelijan nimi: " << student->getName()
         << ", Opiskelijan numero " << student->getStudentNumber()
         << ", Keskiarvo: " << student->getAverage() << endl;

    return 0;
}

