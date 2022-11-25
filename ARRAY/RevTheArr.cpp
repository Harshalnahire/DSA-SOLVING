#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int st=0;
    int ed=n-1;
    while(st<=ed){
        swap(arr[st],arr[ed]);
        st++;
        ed--;
    }
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={4,5,6,3,1};
    int brr[4]={1,5,4,3};

    reverse(arr,5);
    reverse(brr,4);

    printArr(arr,5);
    printArr(brr,4);

}