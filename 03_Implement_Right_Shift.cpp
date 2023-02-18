/*
    Time Complexity: O(n)
    Space Complexity:  O(1)
*/

void RightShift(int num,int count){
    
    for(int i=0;i<count;i++){
        num = num/2;
    }
    cout << "Right shift the num "<<num;
}