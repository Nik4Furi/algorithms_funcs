/* Left shift a integer, iterative way
    Time Complexity: O(count)
    Space Complexity:  O(1)
*/

void LeftShift(int num,int count){
    
    for(int i=0;i<count;i++){
        num = num*2;
    }
    cout << "Left shift the num "<<num;
}

/* :: OPTIMAL :: Left shift by inbuilt function
    Time Complexity: O(count)
    Space Complexity:  O(1)
*/
int leftShift(int num,int count){

    for(int i=0;i<count;i++)
        num = num << 1;
    return num;
}