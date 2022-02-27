#include<iostream>
using namespace std;

int main()
{
    cout<<endl<<"Enter your number: "; int n; cin>>n; cout<<endl;
    
    int count=0;
    for(int i=1; n/i!=0; i*=10) count++;

    int rev=0;
    for(n; n>0; n/=10) rev = rev*10 + n%10;
    cout<<"The reversed number is: "<<rev<<endl;

    return 0;
}