#include<bits/stdc++.h>
using namespace std;

// O(N^2) Time Complexity
/* bool subarrayWithSumZero(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int sum=arr[i];
        if(sum==0){
            return true;
        }
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            if(sum==0){
                return true;
            }
        }
    }
    return false;
} */

bool subarrayWithSumZero(vector<int>& arr){
    unordered_set<int> sumSet;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==0 || sumSet.find(sum)!=sumSet.end()){
            return true;
        }else{
            sumSet.insert(sum);
        }
    }
    return false;
}

int main(){
    // vector<int> arr={3,-2,1,1,4};
    vector<int> arr={3,2,1,1,4};
    if(subarrayWithSumZero(arr)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}