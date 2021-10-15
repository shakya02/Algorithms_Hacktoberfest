#include <iostream>
using namespace std;
void merge(int *a, int low, int high, int mid)
{
    int i, j, k, temp[high - low + 1];
    i = low;
    k = 0;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        temp[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i <= high; i++)
    {
        a[i] = temp[i - low];
    }
}
void mergesort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (high + low) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, high, mid);
    }
}
int main()
    {
    int n, i;
    cout << "\nenter the number of element:";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter element" << i + 1 << ":";
        cin >> arr[i];
    }
    mergesort(arr, 0, n - 1);
    cout << "\nsorted data";
    for (i = 0; i < n; i++)
        cout << "->" << arr[i];
    return 0;
    // complexity of mergesort is O(n*Logn)
    }
