#include<bits/stdc++.h>
int ninjaAndLadoos(vector<int> &a, vector<int> &b, int m, int n, int k) {
    // Write your code here.
    // vector<int>temp=a;
    // if(b.size()>a.size()){
    //     a=b;
    //     b=temp;
    // }
    int n1=a.size(),n2=b.size();
	int psize=k;

	int low=0;
	int high=min(k,n1);
	while(low<=high){
		int cut1=low+(high-low)/2;
		int cut2= psize-cut1;
        
        if(cut2>n2) {
            low=cut1+1;
            continue;
        }
        
		int l1= cut1==0?-1:a[cut1-1];
		int l2= cut2==0?-1:b[cut2-1];
		int r1= cut1==n1?INT_MAX:a[cut1];
		int r2= cut2==n2?INT_MAX:b[cut2];

		if(l1<=r2&&l2<=r1){
			return max(l1,l2);
		}
		if(l1>r2){
			high=cut1-1;
		}
		else low=cut1+1;
	}
	// return 0.0;
}

