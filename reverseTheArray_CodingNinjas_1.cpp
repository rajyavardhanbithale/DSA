#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	size_t n = arr.size();
    int i = 0;
    //spliting first half (a)
    vector<int> a;
    while(i<=m){
        a.push_back(arr[i]);
        i++;
    }
    
    //spliting second half (b)
    vector<int> b;
    i = m+1;
    while(i<n){
        b.push_back(arr[i]);
        i++;
    }
    
    //reverse second half
    reverse(b.begin(),b.end());
    
    //concat a and b (a+b)
    arr.clear();
    arr = a;
    arr.insert(arr.end(),b.begin(),b.end());
     
    

}
