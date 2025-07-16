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
    int pos=0,neg=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            pos+=1;
        } else {
            neg+=1;
        }
    }
    cout<<"Even count = "<<pos<<endl;
    cout<<"odd count = "<<neg<<endl;
}
