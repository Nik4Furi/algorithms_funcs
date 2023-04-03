/* Right shift how that implement
    Time Complexity: O(n)
    Space Complexity:  O(1)
*/

void RightShift(int num,int count){
    
    for(int i=0;i<count;i++){
        num = num/2;
    }
    cout << "Right shift the num "<<num;
}

/* :: OPTIMAL :: Right shift a num, upto count,by inbuilt func
    Time Complexity: O(count)
    Space Complexity:  O(1)
*/
int rightShift(int num,int count){

    for(int i=0;i<count;i++)
        num = num >> 1;
    return num;
}