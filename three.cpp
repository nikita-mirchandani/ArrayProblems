#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\nEnter length of word : ";    
    cin>>n;
    
    char arr[n];
    cout<<"\nEnter word : ";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    
    char reverse_arr[n];int j=1;
    for(int i=n;i>=1;i--){
        reverse_arr[i] = arr[j];
        j++;
    }
    
    cout<<"\nReversed String Array : ";
    for(int i=1;i<=n;i++){
        cout<<reverse_arr[i];
    }
}

