#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//桶排序
//设置一个定量的数组当作空桶；
//遍历输入数据，并且把数据一个一个放到对应的桶里去；
//对每个不是空的桶进行排序；  可采用递归或其他方式
//从不是空的桶里把排好序的数据拼接起来。

void Bucket_Sort(int arr[],int len,int min,int max, int bucket_size) {  //min数组中最小值，max数组中最大值，bucket_size桶数量
	vector<vector<int>> bucket;  
	bucket.resize((max - min + 1) / bucket_size+1);
	cout << len << endl;
	for (int i = 0; i < len; i++) {
		bucket[(arr[i] - min) / bucket_size].push_back(arr[i]);  //将数组元素分配到合适区间的桶中
	}
	int k = 0;
	for (int i = 0; i < bucket.size(); i++) {
		sort(bucket[i].begin(), bucket[i].end());  //桶内排序
		for (int j = 0; j < bucket[i].size(); j++) {  
			arr[k++] = bucket[i][j];                //拼接
		}
	}
}

int main() {
	int arr[] = { 3,1,4,10,8,6,9,7,2,5 };
	int len = sizeof(arr) / sizeof(*arr);
	Bucket_Sort(arr, len,1, 10, 4);
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
