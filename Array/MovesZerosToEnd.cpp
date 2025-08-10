#include <iostream>
using namespace std;

void pushZeroesEnd(int *input, int n)
{

    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (input[i] == 0)
        {
            j = i;
            break;
        }
    }

    for (int i = j + 1; i < n; i++)
    {
        if (input[i] != 0)
        {
            swap(input[i], input[j]);
            {
                j++;
            }
        }
    }
}

int main()
{
    int arr[] = {2, 0, 0, 1, 3, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    pushZeroesEnd(arr, n);

    cout << "Array after pushing zeroes to end: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}