#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    cout<<endl<<"Enter your number: "; int n; cin>>n; cout<<endl;
    
    int temp=n;
    int cube_sum=0;
    for(temp; temp>0; temp/=10) cube_sum+=pow(temp%10,3);
    
    if(cube_sum==n) cout<<"Yes, the number "<<n<<" is an Armstrong number."<<endl;
    else cout<<"No, the number provided is not an Armstrong number."<<endl;

    return 0;
}