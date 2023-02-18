/*
    Time Complexity: O(n)
    Space Complexity: O(1)

*/

int fact(int num){
    if(num == 1 || num == 0)
        return 1;
    return num * fact(num-1);
    
}