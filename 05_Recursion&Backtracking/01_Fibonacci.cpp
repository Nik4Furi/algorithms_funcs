/* To finding the fibonacci series of nth term, we have 3 Approaches
    0 1 1 2 3 5 8 ...

    1. Iterative Way
    2. Recursivly
    3. Dynamic Programing
*/

/*1. Iterative Way
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
int fib(int n){
    int a=0,b=1,nextterm=0;

    for(int i =2;i<=n;i++){
        nextterm = a+b;
        a=b;
        b=nextterm;
    }
    return nextterm;
}

/*2. Recursivly
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
int fib_rec(int n){
    //base case
    if(n == 0 || n==1) return n;

    //Recursion call
    return fib(n-1)+fib(n-2);
}

/*2. Dynamic Programing
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
int fib_dp(int n){
    int dp[n+1];
    dp[0] =0;
    dp[1] = 1;

    for(int i=2;i<=n;i++)
        dp[i] = dp[i-1]+dp[i-2];

    return dp[n];
}