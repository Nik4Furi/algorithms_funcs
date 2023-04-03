/*
    Time Complexity: O(n) or (n/2) or O(log n)
    Space Complexity: O(1)

*/

int count_0s_setbits(int num){
    int count_0s=0;
    while (num != 0)
    {
        int digit = num&1;
        if(digit == 0)
            count_0s ++;  
        num = num >>1;    
    }
    return count_0s;
}