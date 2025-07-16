#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter array Elements : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"After Positioning : ";
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<arr[0];
}