#include<bits/stdc++.h>
using namespace std;
void HCF(vector<int> &seq){
    int temp=1;
    sort(seq.begin(),seq.end());
    for(int i=1;i<=(*(seq.end()-1));i++){
        int sumRem=0;
        for(auto x:seq){
            sumRem+=x%i;
        }
        if(sumRem==0){
            temp=i;
        }
    } 
    //Framing output
    cout<<"seq:{";
    for(int i=0;i<seq.size();i++){
        cout<<seq[i];
        if(i<seq.size()-1){
            cout<<",";
        }
    }
    cout<<"}:-";
    cout<<"{"<<temp<<"}\n";
    //Just cout<<temp;
}

void seq(vector<int> arr,vector<int> temp,int low,int high){
    if(low>high){
        return;
    }
    for(int i=low;i<=high;i++){
        temp.push_back(arr[i]);
        //output :-{5},{5,6},{5,6,7},{5,7},{6},{6,7},{7}
        HCF(temp);
        seq(arr,temp,i+1,high);
        temp.pop_back();
    }
}
int main(){
    vector<int> arr={5,6,10};
    seq(arr,{},0,arr.size()-1);
    return 0;
}