/*
    Time Complexity: O(n-2) or O(n)
    Space Complexity: O(1)

*/

bool isPrime(int num){
    for (int i = 2; i < num-1; i++){
        if (num%i == 0)
            return false;        
    }
    return true;    
}