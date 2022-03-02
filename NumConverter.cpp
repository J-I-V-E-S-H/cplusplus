#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int getDigits(int n)
{
    int count=1;
    for(n; n/10>0; n/=10) count++;
    return count;
}

int bin_to_dec(int n)
{
    int ans = 0;
    int x = n;
    for(int i=0; i<getDigits(n); i++)
    {
        ans+= x%10*pow(2,i);
        x/=10;
    }
    return ans;
}

int oct_to_dec(int n)
{
    int ans = 0;
    int x = n;
    for(int i=0; i<getDigits(n); i++)
    {
        ans+= x%10*pow(8,i);
        x/=10;
    }
    return ans;
}

int hex_to_dec(string n)
{
    int ans = 0;
    for(int i=0; i<n.length(); i++)
    {
        switch(n[n.length()-i-1])
        {
            case '0': { ans+= 0*pow(16,i); break; }
            case '1': { ans+= 1*pow(16,i); break; }
            case '2': { ans+= 2*pow(16,i); break; }
            case '3': { ans+= 3*pow(16,i); break; }
            case '4': { ans+= 4*pow(16,i); break; }
            case '5': { ans+= 5*pow(16,i); break; }
            case '6': { ans+= 6*pow(16,i); break; }
            case '7': { ans+= 7*pow(16,i); break; }
            case '8': { ans+= 8*pow(16,i); break; }
            case '9': { ans+= 9*pow(16,i); break; }
            case 'A': case 'a': { ans+= 10*pow(16,i); break; }
            case 'B': case 'b': { ans+= 11*pow(16,i); break; }
            case 'C': case 'c': { ans+= 12*pow(16,i); break; }
            case 'D': case 'd': { ans+= 13*pow(16,i); break; }
            case 'E': case 'e': { ans+= 14*pow(16,i); break; }
            case 'F': case 'f': { ans+= 15*pow(16,i); break; }
            default: break;
        }
    }
    return ans;
}

int main()
{
    cout<<endl<<"\tWelcome to the menu driven number converter."<<endl;
    cout<<endl<<"1.) Binary to Decimal converter."
        <<endl<<"2.) Octal to Decimal converter."
        <<endl<<"3.) HexaDecimal to Decimal converter."
        <<endl<<"Please select an option: "; int n; cin>>n; cout<<endl;

        switch(n)
        {
            case 1:
            {
                cout<<"Please enter the binary number you want to convert: "; int num; cin>>num;
                cout<<endl<<"The binary number: "<<num<<" is: "<<bin_to_dec(num)<<" in decimal system.";
                break;
            }

            case 2:
            {
                cout<<"Please enter the octal number you want to convert: "; int num; cin>>num;
                cout<<endl<<"The octal number: "<<num<<" is: "<<oct_to_dec(num)<<" in decimal system.";
                break;
            }
            
            case 3:
            {
                cout<<"Please enter the HexaDecimal number you want to convert: "; string num; cin>>num;
                cout<<endl<<"The HexaDecimal number: "<<num<<" is: "<<hex_to_dec(num)<<" in decimal system.";
                break;
            }

            default: break;


        }
    return 0;
}