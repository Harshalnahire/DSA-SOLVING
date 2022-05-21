// Swap Alternate Two nos

#include <iostream>
using namespace std;

void printArray(int arr[],int n){
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}


void swapAlternate(int arr[],int size){
	for (int i=0;i<size;i+=2){
		if (i+1< size){
			swap(arr[i],arr[i+1]);
		}
	}
	
}

int main(){
	
	int a[6]={1,5,7,9,6,2};
	int b[5]={5,6,7,3,4};
	
	
	swapAlternate(a,6);
	printArray(a,6);
	cout<<endl;
	
	swapAlternate(b,3);
	printArray(b,3);
	
}


// Swap Alternate Two nos

//#include <iostream>
//using namespace std;
//
//void  printArray(int arr[],int n){
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<" ";
//	
//	}cout<<endl;
//	
//	
//	
//} 
//
//void swapAlternate(int arr[], int size) {
//	for (int i=0;i<size;i+=2){
//		if(i+1 < size){
//			swap(arr[i], arr[i+1]);
//		}
//	}
//}
//
//int main(){
//	int even[8] ={5,2,8,6,7,3,1,4};
//	int odd[5]={11,39,9,76,43};
//	
//	
//	swapAlternate(even,8);
//	printArray(even,8);
//	
//	return 0;
//}
