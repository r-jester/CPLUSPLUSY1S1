#include<iostream>
using namespace std;
int main(){
    int id;
    string name;
    int age;
    string dob;
    char gender;
    string position;
    float salary;
    string contact;
    id = 1001;
    name = "Jester";
    age = 91;
    dob = "01/01/1001";
    gender = 'M';
    position = "Student";
    salary = 2.500;
    contact = "Jester_No_Mercy";
    
    cout<<"\t==============>>Employee detail<<==============\n";
    cout<<"\tEmp-ID = "<<id<<endl;
    cout<<"\tEmp-Name = "<<name<<endl;
    cout<<"\tEmp-Age = "<<age<<endl;
    cout<<"\tEmp-Dob = "<<dob<<endl;
    cout<<"\tEmp-Gender = "<<gender<<endl;
    cout<<"\tEmp-Position = "<<position<<endl;
    cout<<"\tEmp-Salary = "<<salary<<endl;
    cout<<"\tEmp-Contact = "<<contact<<endl;
    
    return 0;
}