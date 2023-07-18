//Friend Class Implementation
/*Write a program to accept the student details such as name and 3 different marks by get_data() method and display the name and average marks using display() method . 
define a friend class for calculating average marks using the method markavg() in c++*/

#include<iostream>
#include<string>

using namespace std;

class student;

class avergareCalculate{
    public:
        static float markavg(student s);
};
class student{
    friend class averageCalculate;
    private:
    float marks1,marks2,marks3;
    string name;
    public:
    void get_data(){
        cout<<"Enter the Name of Student: "<<endl;
        getline(cin,name);

        cout<<"Enter marks for 3 Subjects: ";
        cout<<"English: "<<endl;
        cin>>marks1;
        cout<<"Physics: "<<endl;
        cin>>marks2;
        cout<<"Mathematics: "<<endl; 
        cin>>marks3;

    }
    void display()
    {
        cout<<"Name: "<<name;
        cout<<"Average Marks: "<<averageCalculate::markavg(*this)<<endl;

    }   
};
float averageCalculate: markavg(student s){
    return (s.marks1+s.marks2+s.marks3)/3.0;
}

int main()
    {
        student e;
        e.get_data();
        e.display();

        return 0;
    }
    
