/*
    Time Complexity: O(n/2) or O(logn)
    Space Complexity: O(1) 

*/

void Rev_Array(vector<int> &arr){
    
    int n = arr.size();
    for (int i = 0; i < n/2; i++) {

        int temp;
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;        
    }    
}