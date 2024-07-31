#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    char heart = 003;
    const float khr = 8160;
    const float usd = 2;
    const float bath = 150;
    const float eku = khr * 0.00025;
    const float ekb = khr * 0.0088;
    const float eub = usd * 35.93;
    const float ebu = bath * 0.028;
    cout<<"\t"<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<" Exchange Rate Money "<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<endl;
    cout<<"\t\t"<<" My Money in Khmer = "<< khr <<endl;
    cout<<"\t\t"<<" My Money in USD   = "<< usd <<endl;
    cout<<"\t\t"<<" My Money in Bath  = "<< bath <<endl;
    cout<<"\t"<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<endl;
    cout<<"\t\t"<<" Exchange Money From KHR to USD  = "<< eku << endl;
    cout<<"\t\t"<<" Exchange Money From KHR to BATH = "<< ekb << endl;
    cout<<"\t\t"<<" Exchange Money From USD to BATH = "<< eub << endl;
    cout<<"\t\t"<<" Exchange Money From BATH to USD = "<< ebu << endl;
    return 0;
}