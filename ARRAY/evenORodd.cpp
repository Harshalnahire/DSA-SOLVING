#include<iostream>
using namespace std;

bool isEven(int num){
    if(num&1){
        return 0;
    }
    return 1;
}

int main(){
    int num;
    cin>>num;

    if(isEven(num)){
        cout<<"It is a Even no";
    }
    else{
        cout<<"It is a odd no";
    }
}