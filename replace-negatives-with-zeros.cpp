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
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr[i]=0;
        }
            cout<<arr[i]<<" ";
        /*else {
            cout<<arr[i]<<" ";
        }*/
    }
}
//----------------------   WITH FUNCTIONS   ---------
/*void arraysreplace(int arr[],int n){
   for(int i=0;i<n;i++){
       if(arr[i]<0){
        arr[i]=0;
         }cout<<arr[i]<<" ";
    }
}

/*int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arraysreplace(arr, n);
    
}*/