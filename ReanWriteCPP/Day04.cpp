#include<iostream>
#include<conio.h>
//"return" mean take value to "function call"
//using namespace std;
//	int addition( int a, int b){
//	int r;
//	r= a + b;
//	return r;
//	}
//int main(){
//	int x;
//	x= addition(11,22);
//	cout<<"The Result is = "<<x<<endl;
//}
//	void sum( int a , int b);           //Function Declaration
//	int main(){
//		int x,y;
//		cout<<" Enter X = ";cin>>x;
//		cout<<" Enter Y = ";cin>>y;
//		sum(x,y);             //Function Call
//	}
//	void sum( int a , int b){
//		int s;
//		s = a + b;
//		cout<<" Sum = "<<s<<endl;
//	}


//	int minimum ( int a , int b);
//	int main () {
//		int val1 ,val2 ,min;
//		cout<<"Enter val1 = "; cin>>val1;
//		cout<<"Enter val2 = "; cin>>val2;
//		min = minimum (val1 , val2);
//		cout<<"Minimum of "<<val1<<" And "<<val2<<" Is "<<min<<endl;
//	}
//	int minimum ( int a , int b){
//	if ( a < b)
//	return a;
//	else
//	return b;	
//	}
	
//	void myFunction ();
//	int main(){
//		
//		for( int i= 0;i < 5;i++)
//		myFunction();
//		
//	}
//	void myFunction (){
//		static int var = 10;
//		cout<<var<<'\t';
//		var += 2;
//	}

	void square (int n){
		float value;
		value = n*n;
		cout<<"n"<<n<<"Square = "<<value<<endl;
	}
	void main(){
		int max;
		cout<<"Enter a value for n\n";
		cin>>max;
		for(int i=0 ; i<max; i++ )
		square(i);
	}
		
	
	
	
	
