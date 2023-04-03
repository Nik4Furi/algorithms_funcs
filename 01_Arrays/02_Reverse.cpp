/* Reversing the array in iterative way
    Time Complexity: O(n/2)
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

/* Reversing the array in iterative way
    Time Complexity: O(n/2)
    Space Complexity: O(1) 
*/
void reverse(int& arr[],int n){
    int s=0,e=arr.size()-1;

    while(s<=e)
        swap(arr[s++],arr[e--]);
}

/* Reversing the array in Recursive way
    Time Complexity: O(n/2)
    Space Complexity: O(n) 
*/
void reverse_rec(int& arr[],int n,int start,int end){
    if(start>end) return; //Base case

    swap(arr[start++],arr[end--]);
    reverse_rec(arr,n,start,end);
}