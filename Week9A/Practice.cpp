#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
int main(){
    system("cls");
    cout<<fixed<<showpoint<<setprecision(2);
    start:
    //1.login
    string username, password;
    int age,id;
    string name;
    char gender;
    string grade;
    float score1,score2,score3,score4,score5;
    double total_score,average;
    cout<<"\t====================>>LOGIN<<====================\n";
    cout<<"\tEnter Username: ";
    cin>>username;
    cout<<"\tEnter Password: ";
    cin>>password;
    if( username == "Jester" && password == "1629"){
        cout<<"\tWelcome to the system....\n";
        system("cls");
    }else{
        cout<<"\tPlease try again.....\n";
        system("cls");
        goto start;
    }
    cout<<"\t=========================>>STUDENT MANAGEMENT SYSTEM<<=========================\n";

    cout<<"\tEnter Student ID: ";
    cin>>id;
    cout<<"\tEnter Student NAME: ";
    cin.ignore();getline(cin,name);
    cout<<"\tEnter Student AGE: ";
    cin>>age;
    cout<<"\tEnter Student GENDER: ";
    cin>>gender;
    cout<<"\tEnter Student SCORE1: ";
    cin>>score1;
    cout<<"\tEnter Student SCORE2: ";
    cin>>score2;
    cout<<"\tEnter Student SCORE3: ";
    cin>>score3;
    cout<<"\tEnter Student SCORE4: ";
    cin>>score4;
    cout<<"\tEnter Student SCORE5: ";
    cin>>score5;
    system("cls");
    total_score=score1+score2+score3+score4+score5;
    average=total_score/5;


    if(average >= 95 && average <=100){
        grade = "A+";
    }
    else if(average >= 90 && average <95){
        grade = "A";
    }
    else if(average >= 80 && average <90){
        grade = "B";
    }
    else if(average >= 70 && average <80){
        grade = "C";
    }
    else if(average >= 60 && average <70){
        grade = "D";
    }
    else if(average >= 50 && average <60){
        grade = "E";
    }
    else if(average < 50 && average >= 0){
        grade = "F";
    }
    else{
        grade = "Wrong Input";
    }

    cout<<"\t=========================>>STUDENT MANAGEMENT SYSTEM RESULT<<=========================\n";
    cout<<"\tStudent ID: "<<id<<endl;
    cout<<"\tStudent NAME: "<<name<<endl;
    cout<<"\tStudent AGE: "<<age<<endl;
    cout<<"\tStudent GENDER: "<<gender<<endl;
    cout<<"\tStudent SCORE1: "<<score1<<endl;
    cout<<"\tStudent SCORE2: "<<score2<<endl;
    cout<<"\tStudent SCORE3: "<<score3<<endl;
    cout<<"\tStudent SCORE4: "<<score4<<endl;
    cout<<"\tStudent SCORE5: "<<score5<<endl;
    cout<<"\tStudent TOTAL_SCORE: "<<total_score<<endl;
    cout<<"\tStudent AVERAGE: "<<average<<endl;
    cout<<"\tStudent GRADE: "<<grade<<endl;




    return 0;
}