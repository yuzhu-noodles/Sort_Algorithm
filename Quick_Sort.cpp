#include<iostream>
using namespace std;


//快排
//选择一个基准，将小于基准的放在基准的左边，大于基准的放在基准的右边，形成两个字序列
//对两个子序列进行递归

void Quick_Sort(int arr[],int low,int high){
	int i = low;
	int j = high;
	int temp = arr[low]; //随便定义一个基准
	if(i<j){
		while(i<j){
			while(arr[j]>= temp && i<j)   //从j开始判断是否大于基准，大于j--
				j--;
			arr[i] = arr[j];              //小于放在基准左边
			while(arr[i]<= temp && i<j)   //从i开始判断是否小于基准，小于i++
				i++;
			arr[j] = arr[i];              //大于基准放再基准右边
		}
		arr[i] = temp;                    //最后让ij相等的位置=基准
		Quick_Sort(arr,low,i-1);  //递归
		Quick_Sort(arr,i+1,high);
	}
}

int main(){
	int arr[] = {3,1,4,10,8,6,9,7,2,5};
	int len = sizeof(arr)/sizeof(*arr);
	Quick_Sort(arr,0,len-1);
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
