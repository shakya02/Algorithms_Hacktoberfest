#include <iostream>
using namespace std;
int main()
{
    int arr[10], i, num, index;
    cout << "enter 10 number:";
    for (i = 0; i < 10; i++)
        cin >> arr[i];
    cout << "\nenter a number to search:";
    cin >> num;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == num)
        {
            index = i;
            break;
        }
    }
    cout << "\nfound at index no." << index;
    cout << endl;
    return 0;
    // complexity of linear search is n
}