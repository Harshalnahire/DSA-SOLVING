#include <iostream>
#include <string>
using namespace std;

int main(){
	string name ="Harshal";
	string *ptr=&name;
	
	cout<<"Values in variable : "<<name;
	cout<<"\n";
	cout<<"Address of variable :"<<&name;
	
}
