#include <iostream>
using namespace std;

class Bike {
public:
    int tyresize;
    int engine;

    Bike(int tyresize, int engine) {
        this->tyresize = tyresize;
        this->engine = engine;

        cout << "This is the parameterized constructor\n";
    }
};

int main() {

    Bike royalenfield(18, 350);
    Bike TVS(17, 125);

    return 0;
}