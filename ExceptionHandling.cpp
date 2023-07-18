//Exception Handling: It is a process to handle runtime errors. 
// We perform exception handling. So, the normal flow of program can be maintained. 
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter two nos: ";
    cin>>a>>b;

    try
    {
        if(b==0)
        throw b;
        else
        {
            c=a/b;
            cout<<"Result "<<c;
        }
    }
    catch(int x)
    {
        cout<<"Can't divide by "<<x;
    }
    
    return 0;
}