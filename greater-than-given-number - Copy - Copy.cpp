#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target number : ";
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]>target){
            cout<<arr[i]<<" ";
        }
    }

}