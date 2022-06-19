//Merge two sorted arrays
#include<bits/stdc++.h>
using namespace std;
void merge_2_sorted_arrays(vector<int>& a,vector<int>& b,int l1,int l2,vector<int>& final_array){
    int i=0,j=0,k=0;
    while(i<l1 && j<l2){
        if(a[i]<b[j]){
            final_array[k++]==a[i++];
        }
        else{
            final_array[k++]=b[j++];
        }
    }
    while(i<l1){
        final_array[k++]=a[i++];
    }
    while(j<l2){
        final_array[k++]=b[j++];
    }
    cout<<"\nThe Final array is : ";
    for(int i=0;i<l1+l2;i++){
        cout<<final_array[i]<<" ";
    }

}
int main(){
    vector<int> a,b,final_array;
    int l1,l2;
    cout<<"Enter the length of the 1st array: ";
    cin>>l1;
    cout<<"Enter the length of the 2nd array: ";
    cin>>l2;
    cout<<"Enter the elements of the 1st array: ";
    for(int i=0;i<l1;i++){
        int p;
        cin>>p;
        a.push_back(p);
    }
    cout<<"Enter the elements of the 2nd array: ";
    for(int i=0;i<l2;i++){
        int p;
        cin>>p;
        b.push_back(p);
    }
    cout<<"The first array is :";
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<"\nThe second array is :";
    for(auto i:b){
        cout<<i<<" ";
    }
    //sort them if not sorted
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    merge_2_sorted_arrays(a,b,l1,l2,final_array);
    return 0;
}