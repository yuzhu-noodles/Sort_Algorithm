#include<iostream>
using namespace std;

void Selection_Sort(int arr[],int len){
	for(int i=0;i<len-1;i++){
		int min  = i;
		for(int j=i+1;j<len;j++){
			if(arr[j]<arr[min])
				min = j;
		}
		swap(arr[i],arr[min]);
	}
}

int main(){
	int arr[] = {2,5,1,9,7,10,8,3,6,4};
	int len =sizeof(arr)/sizeof(*arr);
	Selection_Sort(arr,len);
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}


