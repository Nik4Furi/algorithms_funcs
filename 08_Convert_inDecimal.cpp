/* Convert a Binary -> Decimal , something -2 same as Binary Approach

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

int  Ap_1_Decimal(int num){
    int ans=0,i=0;

    while (num != 0)
    {
        int digit = num%10;
        if(digit == 1)
            ans = ans + (digit * pow(2,i));
        num = num/10;
        i++;
    }
    return ans;   

}