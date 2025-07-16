#include<iostream>
using namespace std;
    void movezeros(int n,int arr[]){
        for(int i=0;i<n;i++){
        if(arr[i]!=0){
            cout<<arr[i]<<" ";
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     movezeros(n,arr);
    
}