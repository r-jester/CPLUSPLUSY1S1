#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"\tValue 7.9 = "<<static_cast<int>(7.9)<<endl;
	cout<<"\tValue 3.3 = "<<static_cast<int>(3.3)<<endl;
	cout<<"\tValue 25 = "<<static_cast<double>(25)<<endl;
	cout<<"\tValue 5+3 = "<<static_cast<double>(5+3)<<endl;
	cout<<"\tValue (15)/2 = "<<static_cast<double>(15)/2<<endl;
	cout<<"\tValue (15/2) = "<<static_cast<double>(15/2)<<endl;
	cout<<"\tValue 001 = "<<static_cast<char>(001)<<endl;
	cout<<"\tValue 002 = "<<static_cast<char>(002)<<endl;
	cout<<"\tValue 003 = "<<static_cast<char>(003)<<endl;
	cout<<"\tValue 004 = "<<static_cast<char>(004)<<endl;
	cout<<"\tValue 005 = "<<static_cast<char>(005)<<endl;
	cout<<"\tValue 006 = "<<static_cast<char>(006)<<endl;
	cout<<"\tValue 65 = "<<static_cast<char>(65)<<endl;

	return 0;

} 