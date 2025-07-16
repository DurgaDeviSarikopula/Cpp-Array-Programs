#include<iostream>
using namespace std;
void unique(int n,int arr[]){
    for(int i=0;i<n;i++){
        bool isunique=true;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                isunique=false;
                break;
                
            }
        } if(isunique){
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
    } unique(n,arr);
}
