#include <bits/stdc++.h>
using namespace std;
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void insertionInSortedArray(int a[], int size)
{
    //code
    while (a[size - 1] > a[size] && size > 0)
    {
        //Swaping using pointer
        Swap(&a[size - 1], &a[size]);
        --size;
    }
}
void sort(int a[], int size)
{
    //--------------Insertion Sorting Code----------------
    for (int i = 0; i < size; i++)
    {
        //insertion in sorted array
        insertionInSortedArray(a, i);
    }
}
int main()
{   int n;
cout<<"Enter Array Size like 5:-"<<endl;
    cin>>n;
    cout<<"Enter Array Element like this 5 0 1 9 3:-";
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, n);
    cout<<"Sorted element are :-";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    int exit;
        cin>>exit;
    return 0;
}