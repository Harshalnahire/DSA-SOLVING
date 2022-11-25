//Find max and min no

#include<iostream>
using namespace std;

// int getMin(int num[],int n){
//     int min=INT16_MAX;
//     for(int i=0;i<n;i++){
//         if(num[i]>min){
//             min=num[i];

//         }
//     }
//     return min;
// }

int getMax(int num[],int size){
    int maxi=INT16_MIN;

    for(int i=0;i<size;i++){
        // if (num[i]>max){
        //     max=num[i];
        // insted of if loop we can use  
        maxi= max(maxi, num[i]);

    }
    return maxi;
}
int main(){
    int size;
    cin>>size;

    int num[100];

    //taking input in arry

    for(int i=0;i<size;i++){
        cin>>num[i];

    }

    // cout<<"Minimum Value is"<<getMax(num, size);
    cout<<"Maximum Value is"<<getMax(num, size);

}