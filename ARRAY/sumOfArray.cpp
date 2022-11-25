#include<iostream>
using namespace std;

int sumArry(int arr[],int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+arr[i];

    }
    return sum;
}

int main(){
    int a[100];//Taking the size of the arry   
    int n;
    cin>>n;

    //Taking arry input from the user

    for(int i=0; i<n;i++){
        cin>>a[i];
    }
     cout<<"Sum of the Array is :"<<sumArry(a,n);

}