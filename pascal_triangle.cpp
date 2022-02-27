#include<iostream>
using namespace std;

int fact(int n) //Function to calculate factorial of a number
{

    int ans=1;
    if(n>0) for(int i=1; i<=n; i++) ans*=i;
    return ans; 
}

int ncr(int n, int r) { return fact(n)/(fact(n-r)*fact(r)); }   //Function to calculate nCr of two numbers

int main()
{
    cout<<"Enter the size of the pattern: "; int n; cin>>n; cout<<endl; //User input

    for(int i=0; i<=n; i++) //Pattern loop
    {
        for(int j=n; j>i; j--) cout<<"  ";  
        for(int j=0; j<=i; j++) cout<<"  "<<ncr(i,j)<<"  "; //Two spaces b/w each number to get a clean triangle
        cout<<endl;
    }
    
    return 0;
}
