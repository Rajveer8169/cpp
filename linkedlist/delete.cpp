#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head , int val)
{
    node* n = new node(val);

    if(head==NULL)
    {
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void deletenode(node* &head , int x)
{
    if(head == NULL)
    {
        return ;
    }
    node* temp = head;
    node* prev = NULL;
    int count = 1;
    while(temp != NULL)
    {
        if(count == x)
        {
            if(prev == NULL)
            {
                return temp -> next;
            }
            else{
                prev -> next = temp -> next;
                delete temp;
                return head;
            }
        }
        prev = temp;
        temp = temp -> next;
        count++;
    }
}

int main()
{
    node* head = NULL;
    insertAtTail(head , 1);
    insertAtTail(head , 2);
    insertAtTail(head , 3);
    display(head);
    deletenode(head , 2);
    display(head);
    return 0;
}