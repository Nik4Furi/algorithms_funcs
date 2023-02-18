/* Approach-1, to check 'num' is Even
    Description: Its is basic apprh(Approach), we use it many times

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

bool isEven_0(int num){
    if(num%2)
        return false;
    return true;
}

/* Approach-2, to check 'num' is Even
    Description: is use the Bit manipulation, wher help of AND operator, if last bit of the number is 1 than ans is 1, it denotes the given is odd, else ans is 0 than num is even

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

bool isEven_1(int num){
    if(num&1)
        return false;
    return true;
}