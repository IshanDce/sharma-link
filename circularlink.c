#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
};
struct node *first;
void create();
void display();
void main(){
    create();
}
void create(){
    int ch;
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the value for node \n ");
    scanf("%d",&ptr->info);
    first=ptr;
    ptr->link=first;
    
    do{
        struct node *cpt;
        cpt=(struct node*)malloc(sizeof(struct node));
        printf(" Enter the value for next node \n ");
        scanf("%d",&cpt->info);
        ptr->link=cpt;
        ptr=cpt;
        printf(" \n enter 1 for continue and 0 for exit \n");
        scanf("%d",&ch);
    }
    while(ch==1);
    ptr->link=first;
    display();
}
void display(){
    struct node *ptr;
    ptr=first;
    while(ptr->link!=first){
        printf("%d \t",ptr->info);
        ptr=ptr->link;
    } 
    printf("%d",ptr->info);
}
void insert_front(){
    struct node *ptr;
    struct node *cpt;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\n enter the value for new node \n ");
    scanf("%d",&ptr->info);
    ptr->link=first;
    cpt=first;
    while(cpt->link!=first){
        cpt=cpt->link;
    }
    cpt->link=ptr;
    first=ptr;
    printf(" \n printing of a node after insertion at the front \n ");
    display();
}