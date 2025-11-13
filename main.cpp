#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Luokka Car
class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    // Konstruktori
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        yearModel = y;
    }

    // Metodi tulostukseen
    void printData() const {
        cout << "Merkki: " << brand 
             << ", Malli: " << model 
             << ", Vuosi: " << yearModel << endl;
    }
};

int main() {
    // Luo vektori carList
    vector<Car> carList;

    // Lisää kolme Car-oliota listaan
    carList.push_back(Car("Toyota", "Corolla", 2015));
    carList.push_back(Car("Volkswagen", "Golf", 2018));
    carList.push_back(Car("Tesla", "Model 3", 2022));

    // Tulosta listan toisen alkion tiedot
    cout << "Toinen auto listassa:\n";
    carList[1].printData();
    cout << endl;

    // Tulosta kaikkien autojen tiedot
    cout << "Kaikki autot listassa:\n";
    for (const auto& car : carList) {
        car.printData();
    }

    return 0;
}
