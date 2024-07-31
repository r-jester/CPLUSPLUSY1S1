#include<iostream>
using namespace std;
int main()
{
    int A=10;
    int B=20;
    cout<<"\tValue 20   +   20  = "<<20+20<<endl;
    cout<<"\tValue 50   -   10  = "<<50-10<<endl;
    cout<<"\tValue 80   *   2   = "<<80*2<<endl;
    cout<<"\tValue 500  /   2   = "<<500/2<<endl;
    cout<<"\tValue 50   %   3   = "<<50%3<<endl;
    cout<<"\tValue 50   *   2   -   20  +   60  /   2   = "<<50*2-20+60/2<<endl;
    cout<<"\tValue (50  *   2   +   20) *   (100    -   30  /   2)  = "<<(50*2+20)*(100-30/2)<<endl;
    //A++;
    A+=5;
    cout<<"\tValue A++ = "<<A<<endl;
    //B--;
    B-=5;
    cout<<"\tValue B-- = "<<B<<endl;
    return 0;
}
