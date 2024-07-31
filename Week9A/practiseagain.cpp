#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
int main (){
    cout<<fixed<<showpoint<<setprecision(2);
    system("cls");
    start:
    string username,password;
    int id,age;
    string name,grade;
    char gender;
    float score1,score2,score3,score4,score5;
    double totalScore,average;

    cout<<"\t=========================>>LOGIN<<=========================\n";
    cout<<"\tEnter Your Username: ";cin>>username;
    cout<<"\tEnter Your Password: ";cin>>password;
    if(username == "Jester" && password == "3629"){
        cout<<"\tWelcome to the System...!\n";
        system("cls");
    }else{
        cout<<"\tPlease try Again...!\n";
        system("cls");
        goto start;  
    }
    reset:
    cout<<"\t=========================>>STUDENT MANAGEMENT SYSTEM<<=========================\n";
    cout<<"\tEnter Student ID: ";cin>>id;
    cout<<"\tEnter Student NAME: ";cin.ignore();getline(cin,name);
    cout<<"\tEnter Student AGE: ";cin>>age;
    cout<<"\tEnter Student GENDER: ";cin>>gender;
    cout<<"\tEnter Student Score1: ";cin>>score1;
    cout<<"\tEnter Student Score2: ";cin>>score2;
    cout<<"\tEnter Student Score3: ";cin>>score3;
    cout<<"\tEnter Student Score4: ";cin>>score4;
    cout<<"\tEnter Student Score5: ";cin>>score5;
    system("cls");
    totalScore=score1+score2+score3+score4+score5;
    average=totalScore/5;
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
    else if(average <= 50 && average >=0){
        grade = "F";
    }
    else{
        grade = "Wrong Value...!";
        goto reset;
    }
    system("cls");
    cout<<"\t=========================>>STUDENT MANAGEMENT SYSTEM RESULT<<=========================\n";
    cout<<"\tStudent ID: "<<id<<endl;
    cout<<"\tStudent NAME: "<<name<<endl;
    cout<<"\tStudent AGE: "<<age<<endl;
    cout<<"\tStudent GENDER: "<<gender<<endl;
    cout<<"\tStudent Score1: "<<score1<<endl;
    cout<<"\tStudent Score2: "<<score2<<endl;
    cout<<"\tStudent Score3: "<<score3<<endl;
    cout<<"\tStudent Score4: "<<score4<<endl;
    cout<<"\tStudent Score5: "<<score5<<endl;
    cout<<"\tStudent TOTAL_SCORE: "<<totalScore<<endl;
    cout<<"\tStudent AVERAGE: "<<average<<endl;
    cout<<"\tStudent GRADE: "<<grade<<endl;
    



    
     





    return 0;

}