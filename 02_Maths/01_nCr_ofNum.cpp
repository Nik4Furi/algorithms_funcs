/* Finding the nCr of any number
    Time Complexity: O(n*r)
    Space Complexity: O(1)

*/
int fact(int n){
    long long int ans = 1;

    for(int i =n;i>0;i--){
        ans = ans * i;
    }
    return ans;
}

int nCr(int num,int r){
    int ans =0;
    //Find factorial of the n and r
    ans = fact(num) / (fact(r)* fact(num-r));
    return ans;
}