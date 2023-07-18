//Abstract Class
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
       //pure virtual function

       virtual float calculatedArea() = 0;
};

//Derived class Square

class Square: public Shape
{
    public:
       float calculatedArea()
       {
           return dimension*dimension;
       }
};

//Derived class Square
class Square: public Shape
{
    public:

}