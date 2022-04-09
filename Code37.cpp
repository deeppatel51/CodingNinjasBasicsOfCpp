#include <iostream>
using namespace std;

class Car {
    // Write your constructor and printCarInfo method here.
    int noOfGear;
    string color;
    public:
    Car(int a, string c)
    {
        this->noOfGear=a;
        this->color=c;
    }
    void printCarInfo()
    {
        cout << "noOfGear: " << noOfGear << endl;
        cout << "color: " << color << endl;
    }
};
class RaceCar: public Car {
    // Write your constructor and printRaceCarInfo method here.
int maxSpeed;
    public:
    RaceCar(int a, string c, int b): Car(a,c)
    {
        this->maxSpeed=b;
    }
    void printInfo()
    {
        printCarInfo();
        cout << "maxSpeed: " << maxSpeed << endl;
    }
};


int main() {
    int noOfGear, maxSpeed;
    string color;
    cin >> noOfGear >> color >> maxSpeed;
    RaceCar raceCar(noOfGear, color, maxSpeed);
    raceCar.printInfo();
    return 0;
}
