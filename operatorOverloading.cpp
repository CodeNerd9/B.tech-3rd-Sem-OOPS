//Unary Operator Overloading
#include<iostream>
using namespace std;

class Example
{
    private:
        int value;
    public:
        Example()
        {
            value=5;
        }
        void operator++()
        {
            value= value-1;
        }
        void display()
        {
            cout<<"COunt: "<<value<<endl;
        }
};

int main()
{
    Example e;
    ++e;
    e.display();
    return 0;
}
