#include <iostream>

using namespace std;

class TollBooth {
private:
    unsigned int totalCars;
    double totalCash;

public:
    TollBooth() : totalCars(0), totalCash(0.0) {}

    void payingCar() {
        totalCars++;
        totalCash += 0.50;
    }

    void nopayCar() {
        totalCars++;
    }

    void display() {
        cout << "Total Cars: " << totalCars << "\n";
        cout << "Total Cash: $" << totalCash << "\n";
    }
};

int main() {
    TollBooth motorway; 

    int op;
    do {
        cout<<endl;
		cout << "Options" << endl;
        cout << "1. Paying Car" << endl;
        cout << "2. Non-Paying Car" << endl;
        cout << "3. Exit" << endl;
        cout << "\nEnter Option: ";
        cin >> op;
        

        switch (op) {
            case 1:
                motorway.payingCar();
                break;

            case 2:
                motorway.nopayCar();
                break;

            case 3:
                break;

            default:
                cout << "Wrong Option" << endl;
        }

    } while (op != 3);

    motorway.display();

    return 0;
}

