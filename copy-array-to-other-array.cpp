#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter array Elements : ";
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    cout<<"Array elements : ";
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}
