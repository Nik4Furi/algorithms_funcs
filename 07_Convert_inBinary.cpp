/* Approach-1, to convert a decimal number to binary. We are follow thess steps

    1. Module of 'num', and save its digit in another array
    like that--> num = 15, digit=15%2, and newNum = 15/2; Here we repeat upto num!=0

    2. In which array we store the digits, now rerverse the array

    3. Now Print the newArray= ReverseArray(arr)

    Got the conversion of Decimal -> Binary

    Time complexity :- O(n/2) or O(log n)
    Space Complexity :- O(n) or O(20) or O(1) . here n is no. of digits we store
    
*/
void Ap_1_Binary(int num){
    vector<int> arr(20);
    int i=0;

    while(num != 0){
        int digit = num%2;
        arr[20-i-1] = digit;
        num = num/2;
        i++;
    }

    //Reverse the array, 
    Reverse_Array(arr);

    //Print the array
    Print_Arr(arr);
} //----------X

/* Approach-2 , to convert Decimal -> Binary, we follow these steps

    1. find the digit, help of AND operator, and store in a variables ans
        where ans = digit * pow(10,i) + ans  ,Initialy ans=0,i=0

    2. Right shift the 'num', upto num!=0

    Time Complexity: O(n/2) or O(log n)
    Space Complexity: O(1)

*/
int Ap_2_Binary(int num){
    int ans=0,i=0,digit;
    while(num != 0){
        digit = num&1;
        // cout << endl << digit << endl;
        ans = (digit * pow(10,i)) + ans;
        // cout << endl << ans << endl;
        num = (num>>1);
        i++;
    }
    return ans;
}
