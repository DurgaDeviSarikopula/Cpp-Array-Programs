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
        if(target==arr[i]){
            count+=1;
        }
    } if(count>n/2){
        cout<<"Yes";
    } else {
        cout<<"No";
    }
}
