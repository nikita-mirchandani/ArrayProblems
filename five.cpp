#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\nEnter length of array : ";    
    cin>>n;
    
    int arr[n];
    cout<<"\nEnter element of array : ";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    
    //bubble sort
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n-i;j++){
            if(arr[i] > arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }   
        }
    }
    
    int k;
    cout<<"\n(smallest element from the given array (K<length of array))";
    cout<<"\nEnter K : ";
    cin>>k;
    
    cout<<"\no/p ("<<k<<"th smallest number ) : "<<arr[k];
}

