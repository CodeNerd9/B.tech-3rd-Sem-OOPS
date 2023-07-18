//Using Friend Class

#include<iostream>
using namespace std;

class A
{
    int a,b;
    public:
        void input()
        {
            cout<<"Enter the Number: ";
            cin>>a>>b;
        }
        friend class B; //Friend class
};
class B
{
    int c;
    public:
        
    void add(A obj)
        {
            c=obj.a+obj.b;
            cout<<"Sum: "<<c;
        }
        
};

int main()
{
    A oo;
    B kk;
    oo.input();
    kk.add(oo); //We need to add the object of the class A declared inside the main function.


    return 0;
}