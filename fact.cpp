#include<iostream>
using namespace std;

int fact(int n)
{
    int ans=1;
    for(int i=1; i<=n; i++) ans*=i;
    return ans; 
}

int main()
{
    cout<<endl<<"Enter you number: "; int num; cin>>num; cout<<endl;
    
    if(num==0) cout<<"Factorial of "<<num<<" is: 1"<<endl;
    else if(num>0) cout<<"Factorial of "<<num<<" is: "<<fact(num)<<endl;
    else cout<<"Factorial not found..."<<endl;
    
    return 0;
}