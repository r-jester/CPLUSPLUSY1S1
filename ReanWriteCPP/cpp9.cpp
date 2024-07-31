#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	
	int a;
	int b;
	cout<<"A = ";
	cin>>a;
	cout<<"B = ";
	cin>>b;
	cout<<"--------------------"<<endl;
	cout<<" A "<<"+"<<" B = "<<a+b<<endl;
	cout<<" A "<<"-"<<" B = "<<a-b<<endl;
	cout<<" A "<<"*"<<" B = "<<a*b<<endl;
	cout<<" A "<<"/"<<" B = "<<float(a)/float(b)<<endl;
	cout<<"--------------------"<<endl;
	cout<<"Thank You...!";
	return 0;
}
