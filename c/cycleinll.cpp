#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    node* n= new node(val);
    n->next=head;
    head=n;
}

// function to create a linked list by inserting the elements at the tail
void insertAtTail(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}


// Making a cycle for checking the working of the function
void makeCycle(node* &head, int pos)
{
    node* temp = head;
    node* startNode;
    int count =1;
    while (temp->next!=NULL)
    {
        if(count == pos)
        {
            startNode= temp;
        }
        temp=temp->next;
        count++;
    }
    
    temp->next = startNode;
}

// Function to detect whether there is a loop in the linked list
bool detectCycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!= NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow)
        {
            return true;
        }
    }
    return false;
}

// function to remove the loop
void removeCycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow!=fast);

    fast=head;
    while(slow->next!=fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next=NULL;
        
}


int main()
{
    
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4); 
    insertAtTail(head,5);
    insertAtTail(head,6);
    
    // Making a cycle at 3rd node to check working
    makeCycle(head,3);

    cout<<detectCycle( head)<<endl;
    
    removeCycle(head);
    
    cout<<detectCycle(head)<<endl;
    
    display(head);
    return 0;
}