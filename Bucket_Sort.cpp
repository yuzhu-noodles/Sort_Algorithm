#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//Ͱ����
//����һ�����������鵱����Ͱ��
//�����������ݣ����Ұ�����һ��һ���ŵ���Ӧ��Ͱ��ȥ��
//��ÿ�����ǿյ�Ͱ��������  �ɲ��õݹ��������ʽ
//�Ӳ��ǿյ�Ͱ����ź��������ƴ��������

void Bucket_Sort(int arr[],int len,int min,int max, int bucket_size) {  //min��������Сֵ��max���������ֵ��bucket_sizeͰ����
	vector<vector<int>> bucket;  
	bucket.resize((max - min + 1) / bucket_size+1);
	cout << len << endl;
	for (int i = 0; i < len; i++) {
		bucket[(arr[i] - min) / bucket_size].push_back(arr[i]);  //������Ԫ�ط��䵽���������Ͱ��
	}
	int k = 0;
	for (int i = 0; i < bucket.size(); i++) {
		sort(bucket[i].begin(), bucket[i].end());  //Ͱ������
		for (int j = 0; j < bucket[i].size(); j++) {  
			arr[k++] = bucket[i][j];                //ƴ��
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
