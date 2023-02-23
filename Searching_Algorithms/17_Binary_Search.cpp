/*
 To search in sorted arrays we use best optimal approach is Binary Search

 Time Complexity: O(log n)
 Space Complexity: O(1)
*/

int BinarySearch(int arr[],int n , int target){
    int s=0,e=n-1,m;

    while (s<=e)
    {
        m = s + (e-s)/2;

        if(arr[m] == target)
            return m;
        else if(arr[m] > target)
            e = m-1;
        else s = m+1;
    }
    return -1;
    
}
