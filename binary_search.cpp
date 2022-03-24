#include<iostream>
using namespace std;

int binary(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;

  int mid = start +(end-start)/2;

  while(start<=end)
  {
    if(arr[mid] == key)
    {
      return mid;
    }
    if(key > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end-start)/2;

  }
  return -1;
}
int main()
{
  int arr1[6] = {2,4,5,8,9,12};
  int index = binary(arr1,6,14);

  cout<<"The index position is : "<<index<<endl;
  return 0;
}
