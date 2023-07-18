#include<iostream>
using namespace std;

class A 
{
public:

    void ADD(int x, int y)
    {
        cout<<"The Addition of Two Numbers: "<<x+y<<endl;
    }
    void ADD() //FunctionOverloading
    {
        string a = "HELLO";
        string b = "WORLD!";
        string c = a+b;
        cout<<c<<endl;      
    }
};

int main()
{
    A obj;
    obj.ADD(10,50);
    obj.ADD();

    return 0;

}