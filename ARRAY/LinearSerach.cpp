#include<iostream>
using namespace std;

// bool linearSerach(int arr[], int size, int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return 1;

//         }
//     }
//     return 0;
// }

// int main(){
//     int arr[100]={1,5,8,7,3};

//     int key;
//     cin>>key;

//     bool found=linearSerach(arr,100,key);

//     if(found){
//         cout<<"The element is present"<<endl;
//     }
//     else{
//         cout<<"The element is not present"<<endl; 
//     }

// }

bool linearsearch(int arr[], int size, int input){
        for (int i=0;i<size;i++){
            if( arr[i]==input){
                return 1;
            }
        }
            return 0;
    }

int main(){ 


    int arr[100]={100 ,25, 45,63,25,74,1,2,3,4,5,6,7,8,9};
    int input;
    cin>>input;

    bool find=linearsearch(arr,100,input);
    if(find){
        cout<<"The element is present";
    }   else{
        cout<<"The element is not present";
    }



}