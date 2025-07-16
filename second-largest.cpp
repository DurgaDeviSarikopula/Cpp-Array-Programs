#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max1=0,max2=0;
    if(arr[0]<arr[1]){
        max1=arr[1];
        max2=arr[0];
    } else {
        max1=arr[0];
        max2=arr[1];
    }
    for(int i=2;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        } else if(arr[i]>max2){
            max2=arr[i];

        }
        
    }
    cout<<"largest element is : "<<max2;
}
   /* for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        } else if(arr[i]>max2 && arr[i]!=max1){
            max2=arr[i];
        }
    } cout<<max2;
}

/*sort(arr,arr+n);
cout<<arr[n-2];*/

