//The elements are stored at contiguous memory locations 


#include <iostream>
using namespace std;

int main(){
	int arr[5], i;
	cout<<"size of integer is :"<<sizeof(int)<<endl;
	for (int i=0;i<5;i++){
			cout<<"Address arr["<<i<<"] is"<<&arr[i];
	
	}

}
