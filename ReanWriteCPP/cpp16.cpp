#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    cout<<" Please Solve the Exercise "<<endl;
    cout<<" ax^2 + bx + c "<<endl;
    float a,b,c,delta,x1,x2,real_part,imagin_part;
cout<<"a: ";
cin>>a;
cout<<"b: ";
cin>>b;
cout<<"c: ";
cin>>c;
cout<<a<<"X^2 + "<<b<<"X + "<<c<<endl;

    delta= b*b - 4*a*c;
    cout<<"Delta: "<<delta<<endl;
    if(delta>0){
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        cout<<" There are two roots "<<endl;
        cout<<" X1: "<<x1<<" X2: "<<x2<<endl;
    }
    if(delta==0){
        x1=x2=-b/(2*a);
        cout<<" There is only one root "<<endl;
       cout<<" X1: "<<x1<<" X2: "<<x2<<endl;
    }
    if(delta<0){
        real_part=-b/(2*a);
        imagin_part=sqrt(abs(delta))/(2*a);
        cout<<" There are two roots "<<endl;
        cout<<" X1: "<<real_part<<" + i"<<imagin_part<<endl;
        cout<<" X2: "<<real_part<<" - i"<<imagin_part<<endl;
    }

    return 0;
}
