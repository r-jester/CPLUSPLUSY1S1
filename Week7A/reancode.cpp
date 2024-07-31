#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    system("cls");
	char heart = 003;
	int code;
	string name;
	float price,discount,totalPrice,total,dis;
	int qty;
	string madein;
	cout<<"\t"<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<"  Product Detail  "<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<endl;
	cout<<"\tInput Product Code : ";cin>>code;
	cout<<"\tInput Product Name : ";cin>>name;
	cout<<"\tInput Price 	   : ";cin>>price;
	cout<<"\tInput Quantity 	   : ";cin>>qty;
	system("cls");
	cout<<"\t"<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<"  Product Detail  "<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<heart<<endl;
	total = price * qty;
	dis = 0.3;
	discount = total * dis;
	totalPrice = total - discount;
	cout<<"\tProduct Code		: "<<code<<endl;
	cout<<"\tProduct Name		: "<<name<<endl;
	cout<<"\tProduct Price		: "<<price<<endl;
	cout<<"\tProduct Quantity	: "<<qty<<endl;
	cout<<"\tTotal			: "<<total<<endl;
	cout<<"\tProduct Total Price	: "<<totalPrice<<endl;

	
	
	
	
	
	return 0;
}