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
    int target;
    cout<<"Enter target : ";
    cin>>target;
    cout<<"Target found at : ";
    for(int i=0;i<n;i++){
        if(target==arr1[i]){
            cout<<i;
            return 0;
        }
    } cout<<-1;
}
