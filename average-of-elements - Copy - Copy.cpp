#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    float avg=sum/n;
    cout<<"Avergae is : ";
    cout<<fixed<<setprecision(2)<<avg;
}