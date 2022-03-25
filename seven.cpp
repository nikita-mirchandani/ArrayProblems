#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\nEnter length of array : ";    
    cin>>n;
    
    int arr[n];
    cout<<"\nEnter element of array (0|1|2): ";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    
    int countZ=0,countO=0,countT=0;

    for(int i=1;i<=n;i++){
        if(arr[i] == 0){
            countZ++;   
        }
        if(arr[i] == 1){
            countO++;
        }
        if(arr[i] == 2){
            countT++;
        }
    }
    
    for(int i=1;i<=countZ;i++){
        arr[i] = 0;
    }
    for(int i=countZ+1;i<=countZ+countO+1;i++){
        arr[i] = 1;   
    }
    for(int i=countO+countZ+1;i<=n;i++){
        arr[i] = 2;
    }
        
    cout<<"\nOutput: ";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}

