#include<bits/stdc++.h>
using namespace std;
bool fun(int i, int *arr, vector<int> &ans, int s , int sum, int n){
    if(i == n){
        if(s == sum){
            for(auto x : ans){
                cout<<x<<" ";
            }
            cout<<endl;
            return 1; 
        }
        return 0;
    }
    ans.push_back(arr[i]);
    //s += arr[i];
    if(fun(i+1, arr, ans, s+arr[i], sum, n )== true)
    return true;;
    ans.pop_back();
    //s -= arr[i];
    if(fun(i+1, arr, ans, s, sum, n )== true)
    return true;

    return false;
}
int main(){
    int arr[] = {1, 2, 1};
    vector<int> ans;
    int s = 0;
    fun(0 ,arr, ans, s, 2, 3);
}