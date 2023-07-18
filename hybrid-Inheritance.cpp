//Hybrid Inheritance
#include<iostream>
using namespace std;

class Vehicale {
    public:
        Vehicale(){
            cout<<"This is a Vehicale"<<endl;
        }
};

class Fare{
    public:
        Fare(){
            cout<<"Fare of Vehicale"<<endl;
        }
};

class Car: public Vehicale{

};
class Bus: public Vehicale{

};

int main(){
    Bus obj;
    Car obj2;

    return 0;
}