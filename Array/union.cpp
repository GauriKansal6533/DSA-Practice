#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m){
    int i=0, j=0;
    vector<int> Union;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(Union.empty() || Union.back()!=arr1[i])
            Union.push_back(arr1[i]);
            i++;
        }
        else{
            if(Union.empty() || Union.back()!=arr2[j])
            Union.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        if(Union.empty() || Union.back()!=arr1[i])
        Union.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        if(Union.empty() || Union.back()!=arr2[j])
        Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}
int main(){
    int arr1[]={1,2,4,5};
    int arr2[]={2,3,5,6};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    vector<int> Union = findUnion(arr1, arr2, n, m);
    cout<<"Union of the two arrays is: ";
    for(int i=0; i<Union.size(); i++){
        cout<<Union[i]<<" ";
    }
}