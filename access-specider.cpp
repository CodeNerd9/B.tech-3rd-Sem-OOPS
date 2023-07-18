#include<iostream>
using namespace std;

class test
{

    public: //public acess specifier.
        int x;
    private: //private acess specifier.
        int y;
};

int main()
{
    test obj;
    obj.x=55; //Accessible
    obj.y=100; //In-accessible




    return 0;
}