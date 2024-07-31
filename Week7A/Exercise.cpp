#include<iostream>
#include<iomanip>//this header file is use for "average"
using namespace std;
int main(){
	system("cls");
	int id;
	string name;
	char gender;
	int age;
	float average,score1,score2,score3,score4,score5;
	double total_score;
	cout<<"\t=============>>Input Student<<============="<<endl;
	cout<<"\tInput Student ID : ";
	cin>>id;
	cout<<"\tInput Student Name : ";
	cin>>name;
	cout<<"\tInput Student Gender : ";
	cin>>gender;
	cout<<"\tInput Student Age : ";
	cin>>age;
	cout<<"\tInput Student Score1 : ";
	cin>>score1;
	cout<<"\tInput Student Score2 : ";
	cin>>score2;
	cout<<"\tInput Student Score3 : ";
	cin>>score3;
	cout<<"\tInput Student Score4 : ";
	cin>>score4;
	cout<<"\tInput Student Score5 : ";
	cin>>score5;
	total_score = score1+score2+score3+score4+score5;
	average = total_score/5;
	cout<<"\tStudent ID : "<<id<<endl;
	cout<<"\tStudent Name : "<<name<<endl;
	cout<<"\tStudent Gender : "<<gender<<endl;
	cout<<"\tStudent Age : "<<age<<endl;
	cout<<"\tStudent Score1 : "<<score1<<endl;
	cout<<"\tStudent Score2 : "<<score2<<endl;
	cout<<"\tStudent Score3 : "<<score3<<endl;
	cout<<"\tStudent Score4 : "<<score4<<endl;
	cout<<"\tStudent Score5 : "<<score5<<endl;
	cout<<"\tStudent Total Score : "<<total_score<<endl;
	cout<<"\tStudent Average : "<<average<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
