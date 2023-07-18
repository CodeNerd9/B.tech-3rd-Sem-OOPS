//Function-Overrind

#include<iostream>
using namespace std;

class class_A
{
    public:
        void display()
        {
            cout<<"Display function at Base Class"<<endl;
            cout<<"\n";
        }

};

class class_B : public class_A
{   
    public:
        void display()
        {
            cout<<"Display function at the derived class";
            cout<<"\n\n";
        }

};

int main()
{
    class_A a;
    class_B b;

    a.display();
    b.display();
}