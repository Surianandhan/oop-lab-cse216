#include <iostream>
using namespace std;

class CarPart {
public:
    int carId, chargePerHour;
    float parkedHours;
    
    void setData(int id, int charge, float hours) {
        carId = id;
        chargePerHour = charge;
        parkedHours = hours;
    }
    
    void showData() {
        cout << "Car ID: " << carId << endl;
        cout << "Charges per Hour: " << chargePerHour << endl;
        cout << "Parked Hours: " << parkedHours << endl;
        cout << "Total Charges: " << chargePerHour * parkedHours << endl;
    }
};

int main() {
    CarPart car;
    int id, charge;
    float hours;
    
    cout << "Enter Car ID: ";
    cin >> id;
    cout << "Enter Charge per Hour: ";
    cin >> charge;
    cout << "Enter Parked Hours: ";
    cin >> hours;
    
    car.setData(id, charge, hours);
    car.showData();
    
    return 0;
}