#include <bits/stdc++.h>
using namespace std;
int Swap(int *a, int *b, int i, int j, int index)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    if (i == index)
        return j;
    if (j == index)
    {
        return i;
    }
    return index;
}
int arranger(int a[], int Index,int Low, int high)
{
    int i = Low, j = high;
    //conquror
    while (i < j)
    {
        //Note Increament of I and J always in while it will then does not miss some elements;
        //finding first greater element from forward
        while (a[i] < a[Index])
        {
            i++;
        }
        //First smaller element from backward;
        while (a[j] > a[Index])
        {
            j--;
        }
        //While some swap Pivot element Index will so for keeping track of that it return Index of Pivot element;
        Index = Swap(&a[i], &a[j], i, j, Index);
        //Output of every iteration
    }
        Index = Swap(&a[i], &a[j], i, j, Index);
        cout << i << "\t" << j << "\t" << Index << "\n"; //Value of I,J & Index

        for (int k = 0; k < high; k++)
        {
            cout << a[k] << "\t";
        }
        cout << endl;
    return Index;
}
void quickSort(int a[], int low, int high)
{   
    //divide
    if(low<high){
    int pivot=high;
    int pos=arranger(a,pivot,low,high);
    quickSort(a,low,pos-1);
    quickSort(a,pos+1,high);
    }
}
int main()
{
    int a[] = {10, 9, 2, 5, 6, 7, 5,1, 11, 8, 1, 10};
    int n = sizeof(a) / sizeof(int);
    quickSort(a,0,n-1);   
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}