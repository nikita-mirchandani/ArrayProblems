//2. Find the minimum and maximum element in an array
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,max=INT_MIN,min=INT_MAX;
    cin>>n;
    int array[n];
    // int n = sizeof(array)/sizeof(int);
    for(int i=1;i<=n;i++){
        cin>>array[i];
    }
     for(int i=1;i<=n;i++){ //max = -1
       if(array[i]>=max){
           max = array[i];
       }
       if(array[i]<=min){
           min = array[i];
       }
    }

    cout<<"Maximum element in array is "<<max<<endl;
    cout<<"Minimum element in array is "<<min<<endl;

}
