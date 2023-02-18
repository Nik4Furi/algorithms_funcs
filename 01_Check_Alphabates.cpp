/*
    Time Complexity: O(1)
    Space Complexity:  O(1)
*/

bool checkAlpha( char ch){

    if(ch>=65 && ch<=90)
        return true; //ch lies b/w 'A' to 'Z'

    else if(ch>=97 && ch<=122)
        return true; //ch lies b/w 'a' to 'z'

    else if(ch>=0 && ch<=9)
        return true; // ch lies b/w '0' to '9'

    return false;
}