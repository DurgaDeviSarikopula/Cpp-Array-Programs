#include<iostream>
#include<cmath>
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
    int tmp=0;
    for(int i=0;i<n;i++){
        bool isprime=true;
        if(arr[i]<1)
        continue;
        for(int j=2;j<=sqrt(arr[i]);j++){
        if(arr[i]%j==0)
        isprime=false;
        break;
        }
        if(isprime){
            tmp++;
        }
    }cout<<"Primes : "<<tmp;
}