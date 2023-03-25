/*Finding a 'k' element's First occurance help of Binary search
    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

int First_Occurance(vector<int> arr,int n,int k){

    int s=0,e=n-1,m;
    int ans = -1;

    while(s<=e){
        m = s + (e-s)/2;

        if(arr[m] ==k){
            ans = m;
            e = m-1;
        }
        else if(arr[m] > k)
            e = m-1;
        else s = m+1;

    }
    return ans;
}

/*Finding a 'k' element last occurance help of Binary search
    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

int Last_Occurance(vector<int> arr,int n,int k){

    int s=0,e=n-1,m;
    int ans = -1;

    while(s<=e){
        m = s + (e-s)/2;

        if(arr[m] ==k){
            ans = m;
            s = m+1;
        }
        else if(arr[m] > k)
            e = m-1;
        else s = m+1;

    }
    return ans;
}