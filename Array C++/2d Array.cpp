#include <iostream>
using namespace std;

int main(){
	int a [3][3];
	int n=1;
	for(int i=0;i<3;i++){
		for(int j =0;j<3;j++){ //we initialize value here
			a[i][j]=n;
			n++;
		}
	}
	
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){ //and here we print the values
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}


