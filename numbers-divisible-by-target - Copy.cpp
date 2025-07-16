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
    int target,count=0;
    cout<<"Enter target : ";
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]%target==0){
            count+=1;
        }
    } cout<<count;
}