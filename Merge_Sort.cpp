#include<iostream>
using namespace std;
#include<vector>

//归并排序
void Merge_Sort(vector<int>& arr,int start,int end){
	if(start >= end)
		return;
	int mid = (start + end) >> 1;
	Merge_Sort(arr,start,mid);
	Merge_Sort(arr,mid+1,end);
	int start1 = start,end1 = mid,start2 = mid+1,end2 = end;
	vector<int>temp;
	while(start1<=end1 && start2<=end2){
		if(arr[start1]<arr[start2])
			temp.push_back(arr[start1++]);
		else
			temp.push_back(arr[start2++]);
	}
	while(start1<=end1)
		temp.push_back(arr[start1++]);
	while(start2<=end2)
		temp.push_back(arr[start2++]);
	for(int i=0;i<temp.size();i++){
		arr[start+i] = temp[i];
	}

}

int main(){
	int a[] = {3,1,4,10,8,6,9,7,2,5};
	int len = sizeof(a)/sizeof(*a);
	vector<int>arr(a,a+len);
	Merge_Sort(arr,0,len-1);
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

