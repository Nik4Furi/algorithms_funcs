/* To finding the factorial of a num, we have 3 Approaches
    5! = 5 x 4 x 3 x 2 x 1 => 120

    1. Iterative Way
    2. Recursivly
    3. Dynamic Programing
*/

/*1. Iterative Way
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
int fact(int n){
    long long int ans = 1;

    for(int i =n;i>0;i--){
        ans = ans * i;
    }
    return ans;
}

/*2. Recursivly
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
int fact_rec(int n){
    //base case
    if(n == 0 || n==1) return 1;

    //Recursion call
    return n*fact(n-1);
}

/*2. Dynamic Programing
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
int fact_dp(int n){
    int dp[n+1];
    dp[0] = dp[1] = 1;

    for(int i=2;i<=n;i++)
        dp[i] = dp[i-1]*dp[i-2];

    return dp[n];
}