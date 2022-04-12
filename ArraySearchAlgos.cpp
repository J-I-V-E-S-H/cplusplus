#include<iostream>
#include<climits>
using namespace std;

void lin_search()
{
    cout<<"\nPlease enter the size of the array: "; int n; cin>>n;
    cout<<"\nPlease enter the array: "; int arr[n]; for(int i=0; i<n; i++) cin>>arr[i];
    cout<<"\nEnter the element you want to search: "; int a; cin>>a;
    for(int i=0; i<=n; i++)
    {
        if(i==n)
        {
            cout<<"\nElement not found";
            break;
        }
        if(arr[i]==a)
        {
            cout<<"\nElement found at index: "<<i;
            break;
        }
        
    }
}

void bin_search()
{
    cout<<"\nPlease enter the size of the array: "; int n; cin>>n;
    cout<<"\nPlease enter the array: "; int arr[n]; for(int i=0; i<n; i++) cin>>arr[i];
    int temp = 0;
    
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    cout<<"\nArray after sort: "; for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    
    cout<<"\nEnter the element you want to search: "; int b; cin>>b;
    
    int m = n/2;
    int l = 0;
    int u = n;
    for(int i=0; i<=n; i++)
    {
        if(arr[m]>b)
        {
            u = m;
            m = (l+u)/2;
        }
        else if(arr[m]<b)
        {
            l = m;
            m = (l+u)/2;
        }
        else if(arr[m]==b)
        {
            cout<<"\nEelment found at index: "<<m;
            break;
        }
        if(i==n) cout<<"\nElement not found";
    }
}

int main()
{
    cout<<"\n\tWelcome to the Program";
    

    cout<<"\nPlease select the algorithm:"
        <<"\n1.) Linear Search"
        <<"\n2.) Binary Search"
        <<"\nKindly enter your input: "; int x; cin>>x;

    switch(x)
    {
        case 1: lin_search(); break;
        case 2: bin_search(); break;
            
    }

    cout<<endl;
    return 0;
}