/* Virtual Function: A virtual function is a member function which is declared within 
a base class and is re-defined (overridden) by a derived class
*/
#include<iostream>
using namespace std;

class Shape
{
    public:
        virtual void draw()
        {
            cout<<"drawing..."<<endl;
        }

        void show()
        {
            cout<<"displaying shape..."<<endl;
        }
};

class Rectangle: public Shape
{
    public:
        void draw()
        {
            cout<<"drawing rectangle..."<<endl;

        }
        void show()
        {
            cout<<"display reactangle..."<<endl;
        }
};

int main()
{
    Shape *s;
    Rectangle rec;
    s=&rec;
    s->draw();
    s->show();

    return 0;
}