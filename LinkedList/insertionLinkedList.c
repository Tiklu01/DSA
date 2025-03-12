#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void traverseList(struct node* ptr){
    while(ptr!=NULL){
        printf("ELEMENT : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
void insertion(int num,struct node * ptr,int newData,struct node ** start){
    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    if(newNode==NULL){
            printf("unable to allocate memory\n");
         }
         newNode->data=newData;
         newNode->next=NULL;
    switch (num)
    {
    case 1:{

         newNode->next = *start;
         *start = newNode;
        break;
    }
         
        
    case 2:{
        int key;
        printf("Enter the key before which you wanna add the new node = ");
        scanf("%d",&key);
        
         struct node *prePtr = ptr;
         while(ptr->data!=key && ptr->next!=NULL){
            prePtr=ptr;
             ptr= ptr->next; 
         }
         prePtr->next = newNode;
         newNode->next = ptr;
        break;
    }
        
         case 3:{
            int key;
        printf("Enter the key after which you wanna add the new node = ");
        scanf("%d",&key);
         
         
         while(ptr->data!=key && ptr->next!=NULL){
             ptr= ptr->next; 
            
         }
         newNode->next = ptr->next;
         ptr->next = newNode;
        break;
         }
         
         case 4:{
            while(ptr->next!=NULL){
              ptr=ptr->next;
               }
             ptr->next = newNode;
          break;
               }
        
           
    default:
        break;
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
     printf("Press 1 to insert at benginnig press 2 to insert before a node press 3 to insert after a node press 4 to insert at end = ");
     int num;
     scanf("%d",&num);
     insertion(num,head,90,&head);
     traverseList(head);
    return 0;
}