#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void print(int ind, int *arr, vector<int> & ans,int n){
    if(ind == n){
        printvec(ans);
        return;
    }
    ans.push_back(arr[ind]);
    print(ind+1, arr,ans,3);
    ans.pop_back();
     print(ind+1, arr,ans,3);

}
int main(){
    int arr[] = {3,1,2};
    vector<int> ans;
    print(0, arr,ans,3);
}