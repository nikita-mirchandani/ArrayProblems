// //Subarray with given Sum
// Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.
// In case of multiple subarrays, return the subarray which comes first on moving from left to right.
#include <bits/stdc++.h>
using namespace std;
void printsubarray(int array[],int i,int j){
    cout<<i+1<<".."<<j+1<<"-->{ ";
    for (int k = i; k <= j; k++) {
        cout<<array[k]<<" ";
    }
    cout<<"}"<<endl;
}
void findSubarrays(int array[],int n,int sum){
 int sum_till_now,flag=0;
    for(int i=0;i<n;i++){
        sum_till_now=0;
       for(int j=i;j<n;j++){
            sum_till_now+=array[j];
            if(sum_till_now == sum){
                printsubarray(array,i,j);
                flag=1;
            }  
            if(flag==1){
                break;
            }          
        }
    } 
    if(flag==0){
        cout<<"-1";
    }  
}
int main(){
    int n,contiSum;
    cin>>n; //5
    int array[n];
    // int n = sizeof(array)/sizeof(int);
    for(int i=0;i<n;i++){
        cin>>array[i]; //1 2 3 7 5
    }
    cout<<"\nenter Sum:"<<endl;
    cin>>contiSum; //12 
    findSubarrays(array,n,contiSum);
   
}
  