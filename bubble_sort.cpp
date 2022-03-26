#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size)
{
  //loop to access each array elements
  for(int i=0;i<size-1;i++)
  {
    //loop to compare array elements
    for(int j=0;j<size-i;j++)
    {
      //comparing 2 adjacent elements
      if(arr[j] > arr[j+1])
      {
        swap(arr[j],arr[j+1]);
      }
    }
  }
}

//Print array
void print_array(int arr[],int size)
{
  for(int j=0;j<size;j++)
  {
    cout << " " << arr[j];
  }
  cout << "\n";
}


int main()
{
  int data[] = {10,1,7,6,14,9};

  //calculating arrays length
  int size = sizeof(data) / sizeof(data[0]);

  bubble_sort(data,size);

  cout << "Sorted Array is ascending order : \n";
  print_array(data,size);
}






























// #include<vector>
// using namespace std;
//
// void bubble_sort(vector<int> &arr, int n)
// {
//   //for round 1 to n-1
//   for(int i=0;i< n-1;i++)
//   {
//     bool swapped = false;
//     for(int j=0;j < n-i;j++)
//     {
//       if(arr[j] > arr[j+1])
//       {
//         swap(arr[j],arr[j+1]);
//         swapped = true;
//       }
//     }
//     if(swapped == false)
//     {
//       //already sorted , no swappings done
//       break;
//     }
//   }
//
// }
