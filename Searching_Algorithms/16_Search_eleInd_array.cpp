/* Approach-1, Linear search , iteration all eles and compare with target
    Time Complexity: O(N)
    Space Complexity: O(1)
*/

int isSearch_ind(int arr[],int n,int target){
    int ind=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            ind = i;
    }
    return ind;    
}