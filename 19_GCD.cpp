/*
    GCD--> stands for Greatest Common Divider,or HCF, is finding the common divider b/w two numbers

    Time Complexity: O(n) n is greatest number
    Space Complexity: O(1)
*/

//I Iterative Way
int gcd(int a,int b){
    //Edge cases
    if(a==b) return a;
    if(a==0) return b;
    if(b==0) return a;

    while(a!=b){
        if(a>b) a=a-b;
        else b= b-a;
    }
    return a;
}


//II Recursivly tc O(n),sc O(n)
int solve(int a,int b){
    //Edge cases
    if(a==b) return a;
    if(a==0) return b;
    if(b==0) return a;

    if(a>b)
        return solve(a-b,b);
    return solve(a,b-a);

    /*or
        return b==0 ? a:gcd(a-b,b);
    */ 
}