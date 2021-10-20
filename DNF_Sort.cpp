#include<bits/stdc++.h> 
#include<string.h>
#include<math.h> 

using namespace std;  

void DNF_SORT(int arr[], int arr_size)  
{  
    int low = 0;  
    int high = arr_size - 1;  
    int mid = 0;  
      
   
    while (mid <= high)  
    {  
        switch (arr[mid])  
        {  
         
        case 0:  
            swap(arr[low++], arr[mid++]);  
            break;  
              
            
        case 1:  
            mid++;  
            break;  
              
         
        case 2:  
            swap(arr[mid], arr[high--]);  
            break;  
        }  
    }  
}  
  
  
  
 
void printArray(int arr[], int arr_size)  
{  
  
    for (int i = 0; i < arr_size; i++)  
        cout << arr[i] << " ";  
  
}  
  
 
int main()  
{  
    int arr[] = {0,0,1,2,0,1,2};  
    int n = sizeof(arr)/sizeof(arr[0]);  

    cout << "Array before running the algorithm: ";  
      
    printArray(arr, n);   
    
    DNF_SORT(arr, n);  
  
    cout << "\nArray after DNFS algorithm: ";  
      
    printArray(arr, n);  
  
    return 0;  
}  
