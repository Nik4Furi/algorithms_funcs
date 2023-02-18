/*
    Time Complexity: O(n*r)
    Space Complexity: O(1)

*/

int nCr(int num,int r){
    int ans ;
    //Find factorial of the n and r
    ans = fact(num)/(fact(r)* fact(num-r));
    return ans;
}