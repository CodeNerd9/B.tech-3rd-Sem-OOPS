//Virtual Function...
#include<iostream>
using namespace std;

class Shape{
    public:
        virtual void draw(){
            cout<<"Drwaing..."<<endl;
        }
        void show()
        {
            cout<<"display shape.."<<endl;
        }
};
class Rectangle: public Shape{
    public:
        void draw()
        {
            cout<<"Drawing Reactangle..."<<endl;

        }
        void show()
        {
            cout<<"Displaying rectangle..."<<endl;
        }
};

int main()
{
    Shape *s;
    Rectangle rec;

    s=&rec;
    s->draw();
    s->show();
}