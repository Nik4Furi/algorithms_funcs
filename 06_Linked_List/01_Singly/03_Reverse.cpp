/* To reverse the list have 2 Approaches
    1. Brute Force
    2. Optimal
*/

/* 1. ::BRUTE FORCE :: We follow these steps
    a. Create a array and insert all else of list
    b. Reverse array
    c. Insert else of reversed array into a new list

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

/*2. :: OPTIMAL :: 
    Time Complexity: O(n)
    Space Complexity: O(n)
*/

ListNode* reverseList(ListNode* head) {
    ListNode* curr =head;
    ListNode* prev = NULL;

    while(curr != NULL){
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr=temp;
    }

    return prev;
}