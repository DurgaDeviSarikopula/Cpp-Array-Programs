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
    int tar;
    cout<<"Enter target : ";
    cin>>tar;
    for(int i=0;i<n;i++){
        if(tar==arr[i]){
            cout<<"True";
            return 0;
        }
    } 
    cout<<"False";
}