#include<iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void swapAlternate(int arr[],int size)
{
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);

        }
    }
}
int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[3]={1,2,3};

swapAlternate(even,6);
printArr(even,6);
 
cout<<endl;

swapAlternate(odd,3);
printArr(odd,3);
return 0;

}