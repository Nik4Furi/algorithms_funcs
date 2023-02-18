/*
    Time Complexity: O(n)
    Space Complexity:  O(1)
*/

void LeftShift(int num,int count){
    
    for(int i=0;i<count;i++){
        num = num*2;
    }
    cout << "Left shift the num "<<num;
}