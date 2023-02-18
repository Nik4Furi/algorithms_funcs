/*
    Time Complexity: O(k), where n is the value of k times multiplications
    Space Complexity: O(1)

*/

int powerOfNum(int num, int k){
    int ans = 1;
    for (int i = 0; i < k; i++)
    {
        //Covering this edge case , where ans > INT_MIN/num and ans < INT_MAX/num
        if (ans < INT_MIN/num && ans>INT_MAX/num)
            return 0;
        
        ans = ans * num;
    }
    return ans;    
}