#include <bits/stdc++.h> 

void solve(string &s,int ind, int n,vector<string>&ans){
        if(ind==n){
            ans.push_back(s);
            return;
        }

        for(int i=ind;i<n;i++){
            swap(s[i],s[ind]);
            solve(s,ind+1,n,ans);
            swap(s[i],s[ind]);
        }
}


vector<string> findPermutations(string &s) {
    // Write your code here.
    int n=s.length();
    vector<string>ans;
    solve(s,0,n,ans);
    return ans;
}