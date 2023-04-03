/* To perform insertion we have 3-4 types
    1. Insert at head
    2. Insert at tail
    3. Insert at postion
    4. Insert at ele before/after
*/

/* We are mostly use function write it,may be we include changes on them
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
void insertAtPosi(Node* &head,Node* &tail,int d,int position){
    Node* insertNode = new Node(d);

    //Edge case
    if(head == NULL) head = insertNode;

    if(head->next == NULL) head->next = insertNode;

    // Check insert a new node at position 1 or head
    if(position == 1){
        // insertToHead
        Node* temp = new Node(d);

        temp->next = head;
        head = temp;
        return;
    } 

    //2. Now start to finding the position, where to insert
    int cnt=1;
    Node* curr = head;
    while(cnt < position-1){
        curr = curr->next;
        cnt++;
    }

    //Check curr is at tail
    if(curr->next == NULL){
        // insertAtTail
        Node* temp = new Node(d);

        tail->next = temp;
        tail = temp;
        return;
    }

    Node* temp = curr->next;

    //3. After finding position to insert, now inserting a new node
    curr->next = insertNode;
    insertNode->next = temp;
}