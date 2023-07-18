//Unary-Operator overloading
#include<iostream>
using namespace std;
class test
{
  private:
  int value;

  public:
  test()
  {
    value=5;

  } 
  void operator++() //overload ++
  {
    value=value-1;
  } 
  void display()
  {
    cout<<"Count: "<<value<<endl;
  }
};


int main()
{
    test e;
    //Call the void operator function
    ++e;
    e.display();
    return 0;
}