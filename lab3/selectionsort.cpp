#include <iostream>
#include <conio.h>
void selectionSort(int a[], int n)
{
    for (int size = n; size > 1; size--)
    {
        int j = 0, temp;
        for (int k = 1; k < size; k++)
        {
            if (a[j] < a[k])
                j = k;
        }
        temp = a[j];
        a[j] = a[size - 1];
        a[size - 1] = temp;
    }
}
void main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
