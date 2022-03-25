//Find the union and intersection of the two sorted arrays
//union - use STL set
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n1,n2;
	cin>>n1>>n2;
	int arr1[n1],arr2[n2];
	set<int> final;        //store union(ignore duplicates)
	vector<int> v(n1+n2);  //store intersection
	vector<int>::iterator it1,it2;
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
		final.insert(arr1[i]);		
	}
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
		final.insert(arr2[i]);		
	}
	sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);
//	union
	for(set<int>::iterator i = final.begin();i!=final.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
	it1 = set_intersection(arr1,arr1+n1,arr2,arr2+n2,v.begin()); //v.begin start from it,
//	intersection
	for(it2 = v.begin();it2!=it1;it2++){
		cout<<*it2<<" ";
	}
	cout<<endl;

}
