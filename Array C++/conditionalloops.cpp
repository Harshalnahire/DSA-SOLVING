#include <iostream>
using namespace std;

int main(){
    //int a,b;
    //cin>>a>>b;
    //cout<<"The value of  a and b is : "<< a <<" "<< b <<endl;
    //  int n;
    //  cin>>n;

    //  int i = 3;
    // while(i<n){
    //     cout<<i<<endl;
    //     i=i+1;
    // int n;
    // cin>>n;

    // int i=1;
    // int sum =0;
    //  while (i<=n)
    //  {
    //      sum=sum+i;
    //      i=i+1;

    //  }
    //  cout<< " The value of Sum is :"<<sum<<endl;

    // int n;
    // cin>>n;

    // int i =2;
    // int sum=0;

    // while (i<=n)
    // {
    //     sum=sum+i;
    //     i=i+2;
    // }
    // cout<<"The Sum OF Even nos is :"<<sum<<endl;


    //Prime or not
    int n;
    cin>>n;
    

    int i =2;
    while(i<n){
        if (n%i==0)
        {
            cout<<"Not Prime"<<i<<endl;
        }
        else
        {
            cout<<"Prime"<<i<<endl;
        }
        i=i+1;
        
    }
    return 0;
    

}