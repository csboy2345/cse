#include<bits/stdc++.h>
using namespace std;

vector<int> intersect(int arr1[], int n, int arr2[], int m){
    vector<int> v;
    unordered_map<int, bool> mp;
    for(int i=0;i<m;i++){
        mp[arr2[i]]=true;
    }

    for(int i=0;i<n;i++){
        if(mp[arr1[i]]==true){
            v.push_back(arr1[i]);
        }
    }
    return v;

}

int main(){

    int arr1[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[]= {3, 4, 5, 6, 7};
    int m = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> v=intersect(arr1, n, arr2, m);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    return 0;
}