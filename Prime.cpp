#include<iostream>  //For Standard I/O
using namespace std;

int main()
{
    cout<<endl<<"Enter a number: "; int n; cin>>n; cout<<endl; //User Input

    bool flag = true;   //To track when the remainder became zero
    for(int i=2; i<n; i++)  //Loop to check the divisibility with all numbers before n
    {
        if(n%i==0)  //Condition for not prime
        {   
            cout<<"The number is not prime"<<endl;
            flag = false;   //Changing the flag when the number is found not prime
            break;  //exiting from loop after number is founf not prime
        }
    }

    if(flag) cout<<"The number is prime"<<endl; //Give output if flag is still true

    return 0; //Terminating the program
}