#include<iostream>
using namespace std;
#include<vector>

void heapify(vector<int> &nums,int n,int i){
  int l = i * 2 + 1, r = i * 2 + 2;
  int max = i;
  if(l < n && nums[l] > nums[max])
    max = l;
  if(r < n && nums[r] > nums[max])
    max = r;
  if(max != i){
    swap(nums[max], nums[i]);
    heapify(nums,n,max);
  }
}

void build_heapify(vector<int> &nums,int n){
  int temp = (n - 2) / 2;
  for(int i = temp; i >= 0; i--)
    heapify(nums,n,i);
  for(int i = 0; i < nums.size(); i++)
    cout << nums[i] << " ";
  cout << endl;
}

void heapify_sort(vector<int> &nums, int n){
  build_heapify(nums,n);
  for(int i = 0; i < n; i++){
    swap(nums.front(),nums[n - i -1]);
    heapify(nums, n - i - 1, 0);
  }
}

int main(){
  int arr[8] = {5,2,10,6,3,7,9,1};
  vector<int> nums(arr,arr+8);
  heapify_sort(nums, 8); 
  for(int i = 0; i <nums.size(); i++){
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}
