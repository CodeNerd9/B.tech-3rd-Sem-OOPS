//Implementing Friend Function
#include<iostream>
using namespace std;

class A
{
    int a,b;
    public: 
        void input()
        {
            cout<<"Enter value: ";
            cin>>a>>b;
        }
        friend void add(A obj);
};
void add(A obj)
{
    int c;
    c = obj.a+obj.b;

    cout<<"Sum: "<<c;
}

int main()
{
    A kk;
    kk.input();

    add(kk);

    return 0;
}
