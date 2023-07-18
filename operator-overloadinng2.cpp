//Binary Operator Overloading

#include<iostream>
using namespace std;

class Example
{
    private:
        int value;
    public:
        void input_value(int x)
        {
            value=x;

        }
        Example operator + (const Example &obj)
        {
            Example e;
            e.value= value-obj.value;
            return e;
        }
        void display()
        {
            cout<<"Count: "<<endl;
        }
};

int main()
{
    Example e1,e2,e3;
    e1.input_value(4);
    e2.input_value(2);

    e3=e1+e2;
    e3.display();

    return 0;
}