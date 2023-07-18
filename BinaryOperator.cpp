//Binary Operator
#include<iostream>
using namespace std;

class Example
{
    private:
        int value;
    public:
        void input_value(int x)
        {
            value = x;
        }
        Example_1 operator +(const Example_1 &obj){
            Example_1 e;
            e.value= value-obj.value;
            return e;
        }
        void display()
        {
            cout<<"Count: "<<value<<endl;
        }
};
int main()
{
    Example_1 e1,e2,e3;
    e1.input_value(4);
    e2.input_value(2);
    e3 = e1+e2;
    e3.display();

    return 0;
}