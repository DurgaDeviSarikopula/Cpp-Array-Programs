#include<iostream>
using namespace std;
void poscount(int arr[],int n){
    cout<<"Positive : ";
   for(int i=0;i<n;i++){
       if(arr[i]>0)
         cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void negcount(int arr[],int n){
    cout<<"Negative : ";
   for(int i=0;i<n;i++){
       if(arr[i]<0)
         cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void zerocount(int arr[],int n){
    cout<<"Zeros : ";
   for(int i=0;i<n;i++){
       if(arr[i]==0)
         cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    poscount(arr, n);
    negcount(arr, n);
    zerocount(arr, n);
    
} 
// --------------------------------- METHOD-1 ------------
/*int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Positive: ";
    for(int i = 0; i < n; i++){
        if(arr[i] > 0)
            cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Negative: ";
    for(int i = 0; i < n; i++){
        if(arr[i] < 0)
            cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Zeros: ";
    for(int i = 0; i < n; i++){
        if(arr[i] == 0)
            cout << arr[i] << " ";
    }*/
    cout << endl;

    return 0;
}
