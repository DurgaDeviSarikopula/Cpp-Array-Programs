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
    int i=0,j=n-1;
    int target;
    cout<<"Enter target : ";
    cin>>target;
    while(i<=j){
        int sum=arr[i]+arr[j];
        if(target==sum){
            cout<<"Yes";
            return 0;
        } else if(target<sum){
            j--;
        } else {
            i++;
        }
    }
}