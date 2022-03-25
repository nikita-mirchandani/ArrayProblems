//  Find the occurrence of an integer in the array
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,no_of_occ,searchno;
    cin>>n;
    int temparray[n];
    int array[n];
    // int n = sizeof(array)/sizeof(int);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"\nenter Number:"<<endl;
    cin>>searchno;
    no_of_occ=0;
    for(int i=0;i<n;i++){ //55 44 55 99 77
        if(array[i] == searchno){
             ++no_of_occ;
        }
    }
    cout<<"\nNo of occurence of "<<searchno<<" is "<<no_of_occ<<endl;
}
  