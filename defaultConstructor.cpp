//defaultConstructor
#include<iostream>
using namespace std;

class cube{
    public:
        int side;
};
int main(){

    cube c;
    cout<<c.side;
    return 0;
}

//If we do not define a constructor explicitly, the compiler will provide a default constructor implicitly.