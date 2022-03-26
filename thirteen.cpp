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
    
    int k,cnt=0;
    cout<<"\nK [ number of pairs of elements in the array whose sum is equal to K ] ";
    cout<<"\nEnter K : ";
    cin>>k;
    
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
         	if(arr[i] + arr[j] == k){
                cnt++;
            }
        }
    }
    cout<<"Total : "<<cnt;
    return 0;
}

