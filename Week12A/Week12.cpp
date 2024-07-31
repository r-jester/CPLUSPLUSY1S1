//Creating a list of Drinks
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    system("cls");
    //cout<<"\tHello Week12!";
    string fpf="Fresh Passion Fruit",
           sbc="Strawberry Cream",
           mcc="Mango Cream Cheese",
           egoods,goods;
    int num,qty,qtyf,qtys,qtym,qtyg,sugar;
    float cost,costf,costs,costm,costg,
               fpfs=2.50,
               fpfm=3.25,
               fpfl=4.00,
               sbcs=1.50,
               sbcm=1.75,
               sbcl=2.25,
               mccs=1.50,
               mccm=1.75,
               mccl=2.25;
    char size;
    start:
    cout<<"\t================>>WELCOME TO OUR DRINKS_STORE<<================\n";
    cout<<"\t1. Fresh Passion Fruit\n\t2. Strawberry Cream\n\t3. Mango Cream Cheese\n";
    cout<<"\tChoose drink(1-3) : ";cin>>num;
    if(num==1){
        goto fpf;
    }
    else if(num==2){
        goto sbc;
    }
    else if(num==3){
        goto mcc;
    }
    else {
        cout<<"\tPlease Enter the Correct Number...!";
        system("cls");
        goto start;
    }
    fpf:
    cout<<"\tSize S (Small)  = 2.50$"<<endl;
    cout<<"\tSize M (Medium) = 3.25$"<<endl;
    cout<<"\tSize L (Large)  = 4.00$"<<endl;
    cout<<"\tSelect Size(S,M,L) : ";cin>>size;
    if(size=='S'){
        costf=qtyf*fpfs;
    }
    else if(size=='M'){
        costf=qtyf*fpfm;
    }
    else if(size=='L'){
        costf=qtyf*fpfl;
    }
    else {
        cout<<"\tPlease Input the Correct Letter!\n";
        system("cls");
        goto end;
    }
    cout<<"\tPut Quantity  : ";cin>>qtyf;
    cout<<"\tTotal Payment : "<<costf<<" $"<<endl;
    goto Finished;
    sbc:
    cout<<"\tSize S (Small)  = 1.50$"<<endl;
    cout<<"\tSize M (Medium) = 1.75$"<<endl;
    cout<<"\tSize L (Large)  = 2.25$"<<endl;
    cout<<"\tSelect Size(S,M,L) : ";cin>>size;
    if(size=='S'){
        costs=qtys*sbcs;
    }
    else if(size=='M'){
        costs=qtys*sbcm;
    }
    else if(size=='L'){
        costs=qtys*sbcl;
    }
    else {
        cout<<"\tPlease Input the Correct Letter!\n";
        system("cls");
        goto end;
    }
    cout<<"\tPut Quantity  : ";cin>>qtys;
    cout<<"\tTotal Payment : "<<costs<<" $"<<endl;
    goto Finished;
    mcc:
    cout<<"\tSize S (Small)  = 1.50$"<<endl;
    cout<<"\tSize M (Medium) = 1.75$"<<endl;
    cout<<"\tSize L (Large)  = 2.25$"<<endl;
    cout<<"\tSelect Size(S,M,L) : ";cin>>size;
    if(size=='S'){
        costm=qtym*mccs;
    }
    else if(size=='M'){
        costm=qtym*mccm;
    }
    else if(size=='L'){
        costm=qtym*mccl;
    }
    else {
        cout<<"\tPlease Input the Correct Letter!\n";
        system("cls");
        goto end;
    }
    cout<<"\tPut Quantity  : ";cin>>qtym;
    cout<<"\tTotal Payment : "<<costm<<" $"<<endl;
    goto Finished;
    Finished:
    if(num==1){
        egoods=fpf;
    }
    else if(num==2){
        egoods=sbc;
    }
    else if(num==3){
        egoods=mcc;
    }
    else {
        cout<<"\tPlease Input the Correct Letter!";
    }
    system("cls");
    cout<<"\t==================>>ENJOY YOUR DRINKS..!<<==================\n";   
    cout<<"\tYour Drink : "<<egoods<<endl;
    if(num==1){
        costg=costf;
    } 
    else if(num==2){
        costg=costs;
    } 
    else if(num==3){
        costg=costm;
    } 
    else {
        cout<<"\tWrong Input!";
    }
    cout<<"\tTotal Payment : "<<costg<<" $"<<endl;
    if(num==1){
        qtyg=qtyf;
    } 
    else if(num==2){
        qtyg=qtys;
    } 
    else if(num==3){
        qtyg=qtym;
    }
    else {
        cout<<"\tWrong Input!";
    } 
    cout<<"\tTotal Quantity : "<<qtyg<<" Can/Cans"<<endl;
    cout<<"\t================>>THANK YOU FOR SUPPORT US<<================\n";
    end:
    cout<<"\tYour Option is wrong...!"<<endl;
    cout<<"\tPlease Check...!"<<endl;
    cout<<"\tTry Again...!"<<endl;
    system("cls");
    goto start;
    return 0;
}