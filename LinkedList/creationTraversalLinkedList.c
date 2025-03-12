#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void traverseList(struct node* ptr){
    while(ptr->next!=NULL){
        printf("ELEMENT : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *first = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
     head->data=7;
     head->next=first;
     first->data=8;
     first->next=second;
     second->data=9;
     second->next=NULL;
     traverseList(head);
    return 0;
}