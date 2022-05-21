#include <iostream>
using namespace std;

int main(){
	
	int a[3][3];
	int b[3][3];
	int c[3][3];
	
	int n =1;//we declare thee variable here
	int m=11;
    
    for (int i =0;i<3;i++){
    	for(int j=0;j<3;j++){
    		a[i][j]=n; // store the value in variablr
    		n++;
		}
	}
	
	cout<<"The values of array A is :\n";
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<a[i][j]<<" ";
		}
	
	}

for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		b[i][j]=m;
		m++;
	}
}
cout<<"\nThe Value of array B is :\n";
 for(int i=0;i<3;i++){
 	for (int j=0;j<3;j++){
 		cout<<b[i][j]<<" ";
	 }
 }
  
 for (int i=0;i<3;i++){
 	for(int j=0;j<3;j++){
 		c[i][j]= a[i][j] + b[i][j];// here we add two arryas which is a and b
	 }
 }	
 cout<<"\nThe values of array C is :"<<"\n";
 for(int i =0;i<3;i++){
 	for(int j =0;j<3;j++){
 		cout<<c[i][j]<<" ";
	 }
	 cout<<"\n";
 }


}


