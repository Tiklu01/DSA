#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
};
void insertAtbeg(Node ** head_ref, int new_data){
    Node * new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void insertAtEnd(Node ** head_ref, int new_data){
        Node * new_node = new Node();
        new_node->data = new_data;
        Node* ptr = (*head_ref);
        new_node->next = NULL;
        if(*head_ref == NULL){
            *head_ref = new_node;
            return;
        }
        
    while(ptr->next!=NULL){
        ptr = ptr -> next;
    }
    ptr->next = new_node;
        
}

void insertAfter(Node ** head_ref, int new_data, int key){
    Node * new_node = new Node();
    new_node -> data = new_data;
    Node * ptr = (*head_ref);
    while( ptr->data != key  ){
        ptr = ptr->next;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;
}
void insertBefore(Node ** head_ref, int new_data, int key){
    Node * new_node = new Node();
    Node * temp = new Node();
    new_node -> data = new_data;
    Node * ptr = (*head_ref);
    while( ptr->data != key  ){
        temp=ptr;
        ptr = ptr->next;
    }
    temp->next = new_node;
    new_node -> next = ptr;
    
}

void deleteNode(Node * head,int n){ // the main delete function
     
    //if head node is to be deleted
    if(head==NULL){
        cout<<"Linked List is empty deletion not possible"<<endl;
        return;
    }
    //if 1st node to be deleted
    if(head->data==n){
    Node * temp = head;
    head = head->next;
    delete temp;
    return;
    }
    //if not 1st node then 
    Node * prev = head;
    Node * temp = head->next;
    
    while (temp->next!=NULL && temp->data!=n){
        prev = temp;
        temp = temp->next;
        }
        if(temp->next== NULL){
            cout<<"\nGiven node is not present in Linked List"<<endl;
            return;
        }
        prev->next = temp->next; // or we can do prev->next->next instead of temp->next it's the same
        delete temp;
        return;
    
  
    
}

void printList(Node* node){
    while(node!=NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
    cout<<"\n";

}

int main() {
    Node * head = NULL;
    insertAtbeg(&head,1);
    insertAtbeg(&head,2);
    insertAtbeg(&head,3);
    insertAtbeg(&head,4);
    insertAtbeg(&head,5);
    printList(head);
    deleteNode(head,4);
    printList(head);
    return 0;
}