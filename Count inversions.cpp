class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long arr[], long long l, long long mid, long long r) {
    long long inv = 0;
    long long n1 = mid - l + 1;
    long long n2 = r - mid;
    long long a[n1];
    long long b[n2];
    
    for(long long i = 0; i < n1; i++) {
        a[i] = arr[l + i];
    }
    for(long long i = 0; i < n2; i++) {
        b[i] = arr[mid + i + 1];
    }
    
    long long i = 0, j = 0, k = l;
    while(i < n1 && j < n2) {
        if(a[i] <= b[j]) {
            arr[k] = a[i];
            k++, i++;
        } else {
            arr[k] = b[j];
            inv += n1 - i;
            k++, j++;
        }
    }
    while(i < n1) {
        arr[k] = a[i];
        k++, i++;
    }
    while(j < n2) {
        arr[k] = b[j];
        k++, j++;
    }
    
    return inv;
}

long long mergeSort(long long arr[], long long l, long long r) {
    long long inv = 0;
    if(l < r) {
        long long mid = l + (r - l) / 2;
        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid + 1, r);
        inv += merge(arr, l, mid, r);
    }
    return inv;  // Return the total count of inversions
}

long long inversionCount(long long arr[], long long N) {
    return mergeSort(arr, 0, N - 1);
}

};
