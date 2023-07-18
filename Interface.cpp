//Interface
#include<iostream>
using namespace std;

class Shape //Interface Class
{
    public:
        virtual void getDimension() = 0;
        virtual float calculatedArea() = 0;
};

class Square : public Shape //Derived class
{
    private:
        float dimension;
    public:
        void getDimension()
        {
            cin>>dimension;
        }
        float calculatedArea()
        {
            return dimension*dimension;
        }
};

class Circle : public Shape //Derived class
{
    private:
        float dimension;
    private:
        void getDimension()
        {
            cin>>dimension;
        }
        float calculatedArea()
        {
            return 3.14*dimension*dimension;
        }
};

int main()
{
    Shape *s;
    Square square;
    Circle circle;

    s=&square;
    cout<<"Enter the length of the square: ";
    s->getDimension();
    cout<<"Area of the circle: "<<s->calculatedArea()<<endl;

    return 0;
}

