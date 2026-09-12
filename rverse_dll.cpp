//here we need to reverse the double linked list 
//The first solutoin like naive way or the brute force would be like
//just simply create a stack and push these values into stack and place these 
//values to the address
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    Node* temp=head;
    
    stack<int>st;

    while(temp!=NULL)
    {
        st.push(temp->data);
        temp=temp->next;
    }

    temp=head;
    while(temp!=NULL)
    {
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }

    return head;


}

//optimal Solution
//using pointer variables by interchanging the address of
//next and prev
Node* reverseDLL(Node* head)
{   
    Node* curr=head;

    Node* prev=NULL;

    if(curr==NULL || curr->next==NULL) return curr;

    while(curr != NULL)
    {
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;

        curr=curr->prev;
    }  

    return prev->prev;
}
