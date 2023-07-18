//Constructors.
#include<iostream>
using namespace std;

class Test{
    private:
        int x;
    public:
        void set(int a)
        {
            x=a;
        }
        get();
};
int test :: get()
{
    return x;
}
int main(){
    test t3;
    t3.set(5);
    cout<<t3.get();

    return 0;
}
