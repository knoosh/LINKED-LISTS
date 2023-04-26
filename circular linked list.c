#include <stdio.h>
#include<stdlib.h>
void disp();
struct node
{
int data;
struct node *next;
};
struct node *start;

int main()
{
struct node *newnode1,*newnode2,*newnode3;
newnode1=(struct node*)malloc(sizeof(struct node));
start=newnode1;
newnode1->data=20;
newnode2=(struct node*)malloc(sizeof(struct node));
newnode2->data=30;
newnode3=(struct node*)malloc(sizeof(struct node));
newnode3->data=40;
newnode1->next=newnode2;
newnode2->next=newnode3;
newnode3->next=newnode1;
disp();
}
void disp()
{
struct node *temp;
temp=start;
int flag=0;
while(flag!=3)
{
printf("data=%d selfadd=%d nextadd=%d \n",temp->data,temp,temp->next);
temp=temp->next;
flag++;
}
}