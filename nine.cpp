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
    
    int newArr[n];int j=1;
    //for positive number
    for(int i=1;i<=n;i++){
        if(arr[i] >= 0){
            newArr[j] = arr[i];
            j++;
        }
    }
    //for negative number
    for(int i=1;i<=n;i++){
        if(arr[i] <= 0){
            newArr[j] = arr[i];
            j++;
        }
    }
    
    cout<<"\nOutput : ";
    for(int i=1;i<=n;i++){
        cout<<newArr[i]<<" ";
    }
    
    return 0;
}

