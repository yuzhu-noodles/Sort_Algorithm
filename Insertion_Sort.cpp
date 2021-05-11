#include<iostream>
using namespace std;

void Insertion_Sort(int arr[],int len){
	for(int i=1;i<len;i++){
		int preindex = i-1;
		int cur = arr[i];  //记录当前要插入的数字
		while(arr[preindex]>cur && preindex >=0){ //将大于cur的数字统一往后挪动一位
			arr[preindex+1] = arr[preindex];
			preindex--;
		}
        arr[preindex+1] = cur; //将cur插入
	}
}

int main(){
	int arr[] = {3,1,4,10,8,6,9,7,2,5};
	int len = sizeof(arr)/sizeof(*arr);
	Insertion_Sort(arr,len);
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

