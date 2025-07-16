#include<iostream>
using namespace std;
void findproduct(int n, int arr[]){
    int prod=1;
    for(int i=0;i<n;i++){
        prod*=arr[i];
    } cout<<"Product of Elements : "<<prod;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter array Elements : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } findproduct(n,arr);
}