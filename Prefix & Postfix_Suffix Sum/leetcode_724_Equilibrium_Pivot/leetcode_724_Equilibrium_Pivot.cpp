#include<bits/stdc++.h>
using namespace std;

/* int findEquilibriumIndex(vector<int>& arr){ // TC -> O(n^2)
    for(int i=0;i<arr.size();i++){
        int leftSum=0,rightSum=0;
        for(int j=0;j<i;j++){
            leftSum+=arr[j];
        }
        for(int j=i+1;j<arr.size();j++){
            rightSum+=arr[j];
        }
        if(leftSum==rightSum){
            return i;
        }
    }
    return -1;
} */

/* int findEquilibriumIndex(vector<int>& arr){ // TC : O(N) & SC : O(N)
    int n=arr.size();

    vector<int> pref(n,0);
    vector<int> suff(n,0);

    pref[0]=arr[0];
    suff[n-1]=arr[n-1];

    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+arr[i];
    }
    for(int i=n-2;i>=0;i--){
        suff[i]=suff[i+1]+arr[i];
    }

    for(int i=0;i<n;i++){
        if(pref[i]==suff[i]) return i;
    }
    return -1;
} */

int findEquilibriumIndex(vector<int> arr) { // TC : O(N) & SC : O(1)
    int n=arr.size(),total=0;
    for(int i=0;i<n;i++){
        total+=arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum==total-sum-arr[i]){
            return (i);
        }else{
            sum+=arr[i];
        }
    }
    return -1;
}

int main(){
    vector<int> arr={1,7,3,6,5,6};
    // vector<int> arr={1,1,1,1};
    cout<<"The pivot index is : "<<findEquilibriumIndex(arr)<<endl;
    return 0;
}
