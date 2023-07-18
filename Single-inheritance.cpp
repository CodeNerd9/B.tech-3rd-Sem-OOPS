//Single Inhertance
#include<iostream>
using namespace std;

class Vehicale{
    public:
        Vehicale(){
            cout<<"This is a Vehicle";
        }
};

class car: public Vehicale{
      
};

int main(){
    car obj;

    return 0;
}