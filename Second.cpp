#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1 = {1,3,5,7};
    int arr2 = {2,4,6};
    int n1 = 4;
    int n2 = 3;
    int i = 0;
    int j = 0;
    vector<int> result;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            result.push_back(arr1[i]);
            i++;
        }
        else{
            result.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n1){
        result.push_back(arr1[i]);
        i = i + 1;
    }
    while(j<n2){
        result.push_back(arr2[j]);
        j = j + 1;
    }
    for(int k=0;k<result.size();k++){
        cout<<result[k];
    }
    return 0;
}