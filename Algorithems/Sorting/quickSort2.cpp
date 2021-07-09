#include<bits/stdc++.h>
using namespace std;
int arranger(int a[],int pivot,int low,int high){
    // int size=high;
    // cout<<"Pivot position:-"<<pivot<<" pivot Element is \t"<<a[pivot]<<"\n";
    while(low<high)
    {
        while(a[low]<pivot){
            ++low;
        }
        while(a[high]>pivot){
            --high;
        }
        // cout<<low<<"\t"<<high<<"\n";
        if(low<high)
        swap(a[low],a[high]);
        // for(int i=0;i<=size;i++){
        //     cout<<a[i]<<"\t";
        // }
        // cout<<endl;
    }
    return high;
}
void quickSort(int a[],int low,int high){
    int pos=arranger(a,5,low,high);
    cout<<pos;
}
int main(){
    int a[] = {10, 9, 2, 5, 6, 7, 3,5,1,1, 11, 8, 10};
    int n=sizeof(a)/sizeof(int);
    quickSort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}