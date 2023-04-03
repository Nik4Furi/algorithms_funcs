/* Finding the middle of list have 2 approach*/
/* 1. :: BRUTE FORCE :: We follow these steps
    a. Finding the length of list n
    b. now travers again the list of n/2, get your middle node
    
    Time Complexity: O(n) + O(n/2)
    Space Complexity: O(1)
*/

/*2. :: OPTIMAL ::
    Time Complexity: O(n)
    Space Complexity: O(1)
 */

Node* getMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;

    //Edge case
    if(head == NULL || head->next == NULL) return head;

    while(fast!= NULL){
        slow = slow->next;
        fast = fast->next;
        if(fast->next != NULL) fast = fast->next;
    }
    return slow;
}