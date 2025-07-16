#include<iostream>
using namespace std;
int main(){
    int n;
    bool isequal=true;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    } cout<<"First array : ";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"Second array : ";
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            isequal=false;
        }
    } 
    cout<<endl;
    if(isequal){
        cout<<"Equal";
    } else {
        cout<<"Not Equal";
    }
}
