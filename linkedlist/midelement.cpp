#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void insert(node* &head , int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
}

void findmiddle(node* head){
    if(head == NULL){
        return;
    }
    int count = 0;
    node* temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    if(count %2 != 0){
    node* temp1 = head;
    int middle = 1 ;
    while(middle<=count/2){
        temp1 = temp1 -> next;
        middle++;
    }
    cout<<temp1->data;
    }
    else{
         node* temp1 = head;
    int middle = 1 ;
    while(middle<=count/2){
        temp1 = temp1 -> next;
        middle++;
    }
    cout<<temp1->data;
    }
}
int main(){
    node* head = NULL;
    insert(head , 1);
    insert(head , 2);
    insert(head , 3);
    insert(head , 4);
    insert(head , 5);
    findmiddle(head);
    return 0;
}