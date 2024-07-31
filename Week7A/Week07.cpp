#include<iostream>
#include<iomanip>//use for average
using namespace std;
int main(){
	cout<<fixed<<showpoint<<setprecision(2);
	float x,y,z,a,b,c,d,e,f,g,h,j;
	int k,l,m;
	float average;
	cout<<"\tInput the value of x : ";
	cin>>x;
	cout<<"\tInput the value of y : ";
	cin>>y;
	cout<<"\tInput the value of a : ";
	cin>>a;
	cout<<"\tInput the value of b : ";
	cin>>b;
	cout<<"\tInput the value of d : ";
	cin>>d;		
	cout<<"\tInput the value of e : ";
	cin>>e;	
	cout<<"\tInput the value of g : ";
	cin>>g;	
	cout<<"\tInput the value of h : ";
	cin>>h;
	cout<<"\tInput the value of k : ";
	cin>>k;
	cout<<"\tInput the value of l : ";
	cin>>l;
	z=x+y;
	c=a-b;
	f=d*e;
	j=g/h;
	m=k%l;
	average = z/2;
	cout<<"__________________________________________________________"<<endl;
	cout<<"\tThe value of x is : "<<x<<endl;
	cout<<"\tThe value of y is : "<<y<<endl;
	cout<<"\tThe value of z is : "<<z<<endl;
	cout<<"\tThe value x + y   : "<<x+y<<endl;
	cout<<"\tThe value of average is : "<<average<<endl;
	cout<<"\tThe value of c is : "<<c<<endl;
	cout<<"\tThe value of f is : "<<f<<endl;
	cout<<"\tThe value of j is : "<<j<<endl;
	cout<<"\tThe value of m is : "<<m<<endl;
	return 0;
}
