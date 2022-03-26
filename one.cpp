#include <iostream>
using namespace std;

int PeakFun(int arr[], int id,int max){
    int cnt=1;
    for(int i=1;i<id;i++){
        if(arr[i]<max){
             cnt++;  
        }
    }
    if(cnt == id){
        return 1;
    }else{
        return 0;
    }
}

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
    
    int max = arr[1];
    for(int i=2;i<=n;i++){
        if(max < arr[i]){
            max = arr[i];    //getting max from Array
        }
    }
    
    int id;
    for(int i=1;i<=n;i++){
        if(max == arr[i]){
            id = i;
        }
    }
    
    // cout<<"\nMax"<<max;
    // cout<<"\nMax id"<<id;
    
    cout<<"\nPeak element returns Index (Here Indexing is starting from 1).";
    if(PeakFun(arr,id,max)){
        cout<<"\nPeak Element is : "<<id;
    }else{
        cout<<"\nPeak Element does not exist";
    }
   
    return 0;
}

