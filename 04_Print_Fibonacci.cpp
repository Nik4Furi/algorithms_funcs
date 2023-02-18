/* Approach-1, To print the last ele or a series of the fibonacci without Recursion
    Time Complexity: O(n-2) or O(n)
    Space Complexity: O(1)

*/

void fib(int num){
    int a = 0,b=1;

    cout << a << " " << b;

    for(int i=2;i<num;i++){
        int nextNum = a +b ;

        cout << " " << nextNum;

        a = b;
        b = nextNum;
    }
}

/* Approach-2, To print the last ele of the fibonacci series using Recursion
    Time Complexity: O(n)
    Space Complexity: O(1) or may be use the Stack

*/

int FibonacciSeries(int num)
{
    if (num <= 1)
        return num;
    return FibonacciSeries(num - 1) + FibonacciSeries(num - 2);
}