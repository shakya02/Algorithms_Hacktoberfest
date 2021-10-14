#include<iostream>
using namespace std;
int main()
{
    int arr[100], n, elem, found=0;
    cout<<"Enter the size of Array: "<<endl;
    cin>> n;
    cout<<"Please enter the array of elements:"<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter Element to Delete: "<<endl;
    cin>>elem;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==elem)
        {
            for(int j=i; j<(n-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            n--;
        }
    }
    if(found==0)
        cout<<"Element doesn't found in the Array."<<endl;
        
    else
    {
        cout<<"Element Deleted Successfully."<<endl;
        cout<<"The New Array is:"<<endl;
        for( int i=0; i<n; i++)
        {
            cout<<arr[i]<<"  ";
        }
    }

    return 0;
}