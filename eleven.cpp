#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\nEnter length of array : ";
    cin>>n;
    
    int arr[n];
    cout<<"\nEnter Array Element : ";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    
    int last = arr[n];    
    for(int i=n;i>=1;i--){
        arr[i] = arr[i-1];
    }
    arr[1] = last;
    
    cout<<"\nOutput (Rotation in cyclic manner): ";
    for(int i=1;i<=n;i++){
        cout<<" "<<arr[i];
    }
    
    return 0;
}

