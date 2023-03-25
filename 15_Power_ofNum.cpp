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

/* Optimal
    fastPower--> i.e. finding the a^b

    Time Complexity: O(b) b is power of a
    Space Complexity: O(1)
*/

long long int fastPower(int a,int b){
    long long int res = 1;
    //Edge case
    if(b==0) return 1;
    if(a==0) return 0;
    if(a==0 && b==0) return -1;

    while(b>0){
        if(b&1)  res = res * a; //Odd 
        a = a*a;
        b = b>>1;
    }
    return res;
}