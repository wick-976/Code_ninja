/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *deleteLast(Node *list){
    Node* temp=list;

    if(temp==nullptr||temp->next==nullptr) return nullptr;

    while(temp->next->next!=nullptr)
    {
        temp=temp->next;
    }

    delete temp->next;
    temp->next=nullptr;

    return list;
}