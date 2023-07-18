//C++ program to calculated the area of a square and a circle.
#include<iostream>
using namespace std;

class Shape
{
    protected:
        float dimension;
    public:
        void getDimension()
        {
            cin>>dimension;
        }
        //pure virtual Function
        virtual float calculatedArea() = 0;
};

//Derived class Square
class Square : public Shape
{
    public:
        float calculatedArea()
        {
            return dimension*dimension;
        }
};

//Derived class Circle
class Circle: public Shape
{
    public:
        float calculatedArea()
        {
            return 3.14*dimension*dimension;
        }
};

int main()
{
    Square square;
    Circle circle;

    cout<<"Enter the Length of the square: ";
    square.getDimension();
    cout<<"Area  of square: "<<square.calculatedArea()<<endl;
    cout<<"\nEnter radius of the circle: ";
    circle.getDimension();
    cout<<"Area of circle: "<<circle.calculatedArea()<<endl;
    return 0;

}