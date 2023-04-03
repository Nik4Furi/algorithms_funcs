/* Deletion in the linked list also have 4 types of conditions
    1. Delete at head
    2. Delete at tail
    3. Delete at postion
    4. Delete finding ele
*/
/*1. Delete at head
    Time Complexity: O(1)
    Space Complexity: O(1)
*/
void deleteAtHead(Node*& head,Node*& tail){
    //Edge case
    if(head == NULL) return;

    if(head->next == NULL){
        head = NULL;
        tail = NULL;
        return;
    } 

    //A. After edge cases now delete the head
    Node* temp = head->next;

    head->next = NULL;
    delete head;
    head = temp; 
}

/*2 Delete at tail
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
void deleteAtTail(Node*& head,Node*& tail){
    //Edge case
    if(head == NULL) return;

    if(head->next == NULL){
        head = NULL;
        tail = NULL;
        return;
    } 

    //A. Traverse the list and find tail
    Node* curr = head;
    Node* prev = NULL;

    while(curr->next != NULL){
        prev = curr;
        curr = curr->next;
    }

    //B. Deleting node
    prev->next = NULL;
    delete curr;
    tail = prev;
}

/* We write here mostly asked function requirments, may change *
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
void deleteAtPosi(Node*& head,Node*& tail,int position){

    //if postion is 1, i.e. delete at head
    if(position == 1){
         deleteAtHead(head,tail);
         return;
    }

    //A. Finding the position of ele
    Node* curr = head;
    int cnt=1;
    while(cnt < position-1){
        curr = curr->next;
        cnt++;
    }

    //Check here, curr is at tail
    if(curr->next == NULL) {
        deleteAtTail(head,tail);
        return;
    }

    //B. Deleting the ele
    Node* temp = curr->next;
    curr->next = temp->next;
    temp->next = NULL;
    delete temp;

}