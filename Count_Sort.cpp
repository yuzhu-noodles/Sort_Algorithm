#include<iostream>
using namespace std;

//计数排序
void Count_Sort(int arr[],int len){
    int max = arr[0];
	for(int i=0;i<len;i++){
		if(arr[i]>max)
			max=arr[i];
	}
    int *count = new int[max+1];
	for(int i=0;i<len;i++){
		count[arr[i]]++;
	}
	for(int i=0,j=0;i<(max+1);i++){
		while(count[i]-- > 0)
			arr[j++] = i;
	}
}
int main(){
	int arr[] = {3,1,4,10,8,6,9,7,2,5};
	int len = sizeof(arr)/sizeof(*arr);
	Count_Sort(arr,len);
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

