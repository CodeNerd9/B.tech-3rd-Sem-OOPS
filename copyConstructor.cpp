//CopyConstructors
#include<iostream>
using namespace std;

class Example{
     public:
        int a;
        Example(int x)//parameterized constructor
        {
            a=x;
        }
        Example(Example &ob)
         {
            a=ob.a;
        }
};
int main(){

    Example e1(36);
    Example e2(e1);

    cout<<e2.a;

    return 0;
}