#include<iostream>
using namespace std;

class Addition{
    public:
        void ADD(int x, int y){
            cout<<"Result = "<<x+y<<endl;
        }
        void ADD(){
            string a= "Hello";
            string b= "World";
            string c= a+b;
            cout<<c<<endl;
        }
};

int main(){
    Addition obj;
    obj.ADD(10,30);
    obj.ADD();

    return 0;
}