/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {
    
    Node* fast=head;
    Node* slow=head;
    int length=0;


    while(fast != NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            slow=slow->next;
            length++;

            while(slow != fast)
            {
                length++;
                slow=slow->next;
            }

        return length;

        }
    }

    return 0;
}
