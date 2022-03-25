// Write a program to sort the given array
#include <bits/stdc++.h>
using namespace std;
void printArray(int array[],int n){
    for(int i=1;i<=n;i++){
        cout<<array[i]<<" ";
    }
}
void merge(int arr[],int start,int middle,int end){
    int temp[end-start+1];          //temp array of array size -1 bcoz it starts from 0.
    int i=start,j=middle+1,k=0;     //i j k are iterators 
    while(i<=middle && j<=end){     //traverse both subarrays 
         if(arr[i]<arr[j]){
             temp[k] = arr[i];      //add smaller value from both arrays to temp array.(here i is smaller)
             k++;
             i++;                   //increase pointer of i bcoz that value is being put in temp
         } else{
             temp[k] = arr[j];      //add smaller value from both arrays to temp array.(here j is smaller)
             k++;
             j++;                   //increase pointer of j bcoz that value is being put in temp
         }
    }
    // add remaining elements to temp array from left subarray (i.e. i) 
	while(i <= middle) {
		temp[k] = arr[i];           //k pointer is automatic at place bcoz above elements are already placed at their positions.
		k += 1; i += 1;
	}

	// add remaining elements to temp array from right subarray (i.e. j) 
	while(j <= end) {
		temp[k] = arr[j];
		k += 1; j += 1;
	}
    // copy temparray to original array
	for(i = start; i <= end; i ++) {
		arr[i] = temp[i - start];
	}

}

void mergesort(int arr[],int start,int end){
    if(start!=end){
        int middle = (start+end)/2;
        mergesort(arr,start,middle);
        mergesort(arr,middle+1,end);
        merge(arr,start,middle,end);
    }
}

int main(){
    int n;
    cin>>n;
    int array[n];
    // int n = sizeof(array)/sizeof(int);
    for(int i=1;i<=n;i++){
        cin>>array[i];
    }
    cout<<"Before sorting : "<<endl;
    printArray(array,n);
    cout<<"\nAfter sorting : "<<endl;
    mergesort(array,1,n);
    printArray(array,n);
 
    
}
