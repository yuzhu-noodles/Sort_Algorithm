#include<iostream>
using namespace std;

void Bubble_Sort(int a[],int len){
	for(int i=0;i<len-1;i++){
		for(int j=0;j<len-i-1;j++){
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	}
}
int main(){
	int arr[] = {3,1,5,2,9,6,4,8,7,10};
	int len = sizeof(arr)/sizeof(arr[0]);
	Bubble_Sort(arr,len);
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" "<<endl;
	}
//	int len = sizeof(arr)/sizeof(arr[0]);
//	cout<<len<<endl;
	return 0;
}

