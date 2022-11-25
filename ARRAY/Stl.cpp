#include<iostream>
#include<stack>
#include<vector>
#include<list>
using namespace std;

int main(){

    list<int>l;

    list<int>b(5,100);
    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(2);
    l.push_front(1);
     cout<<"The size of the list is..>>"<<l.size()<<endl;
   for(int i:l){
    cout<<i<<" ";
   }
}