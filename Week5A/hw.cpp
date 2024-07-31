#include<iostream>
#include<iomanip>//iomanip is use for "setw()"
using namespace std;
int main(){
    string Brand,Model,Made_in;
    int Year,Capacity;
    float Price;
    char Grade;
    Grade = 'A';
    Brand = "Apple";
    Model = "iPhone 12 Pro Max";
    Made_in = "America";
    Year = 2020;
    Capacity = 128;
    Price = 2000;
    cout<<"\t\t\t===================>>Output 1<<===================\n\n";
    cout<<"\t\tBrand = "<<Brand<<endl;
    cout<<"\t\tModel = "<<Model<<endl;
    cout<<"\t\tYear = "<<Year<<endl;
    cout<<"\t\tCapacity = "<<Capacity<<endl;
    cout<<"\t\tPrice$ = "<<Price<<endl;
    cout<<"\t\tMade In = "<<Made_in<<endl;
    cout<<"\t\tGrade = "<<Grade<<endl<<endl;
    cout<<"\t\t\t===================>>Output 2<<===================\n\n";
    cout<<"\tBrand\tModel\t\t\tYear\tCapacity\tPrice$\t\tMade_in\t\tGrade\n";
    cout<<"\t"<<Brand<<"\t"<<Model<<"\t"<<Year<<"\t"<<Capacity<<"\t\t"<<Price<<"\t\t"<<Made_in<<"\t\t"<<Grade<<endl;
    cout<<"__________________________________________________________________________________________________\n\n";




    cout<<setw(10)<<"||  Brand"<<setw(12)<<"Model"<<setw(21)<<"Year"<<setw(13)<<"Capacity"<<setw(12)<<"Price$"<<setw(13)<<"Made_in"<<setw(15)<<"Grade  ||\n";
    cout<<"__________________________________________________________________________________________________\n";
    cout<<setw(10)<<Brand<<setw(24)<<Model<<setw(9)<<Year<<setw(8)<<Capacity<<setw(15)<<Price<<setw(15)<<Made_in<<setw(6)<<Grade<<endl<<endl;
    return 0;
}
