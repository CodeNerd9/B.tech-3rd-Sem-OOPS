#include<iostream>
using namespace std;

class Vehicale{
    public:
        Vehicale(){
            cout<<"This is a Vehicale"<<endl;
        }
};

class FourWheeler{
    public:
        FourWheeler(){
            cout<<"This is a Four Wheeler Vehicale"<<endl;
        }
};

class car: public Vehicale, public FourWheeler{

};

int main(){
    car obj;

    return 0;
}