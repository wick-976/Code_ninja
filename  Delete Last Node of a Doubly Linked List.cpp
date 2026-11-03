/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    Node* tail=head;

    if(head==NULL ||head->next==nullptr) return nullptr;

    while(tail->next!=nullptr)
    {
        tail=tail->next;
    }
    Node* prev=tail->prev;

    prev->next=nullptr;

    tail->prev=nullptr;

    delete tail;

    return head;
}
