int search(int* arr, int n, int key) {
    // Write your code here.
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==key) return mid;
        // left half is sorted
        if(arr[l]<=arr[mid]){
            if(key>=arr[l]&&key<=arr[mid]) r=mid-1;
            else l=mid+1;
        }
        else{  //right half is sorted
            if(key>=arr[mid]&&key<=arr[r]) l=mid+1;
            else r=mid-1;
        }
    }
    return -1;

}