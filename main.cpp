#include <iostream>
#include "./lib/motorcycle.h"


using namespace std;
using namespace Vehicles;

int main(){

    cout << "Welcome to motorcycle composition example " << endl;

    Motorcycle motorcycle;
    Motorcycle motorcycleCooler(13,960);
    

    return 0;

}