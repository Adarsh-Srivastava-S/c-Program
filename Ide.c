#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    
}*first;
void create(int a[],int n)
{
    int i;
    struct Node *t,*last;
    first =(struct Node*)malloc(sizeof(struct Node));
    first->data=a[0];
    first->next=NULL;
    last->next=first;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
        
    }
}
/*void AddNode(struct Node* p,key)
{
    struct Node*q,*t;
    while(p->data==key)
    {
        q->next=p;
        q=p;
        p=p->next;
        
    }
    
}*/
int Display(struct Node *p)
{
    if(p==0)
    {
        return 0;
    }
      else
    {
        printf("%d\n",p->data);
        return Display(p->next)+1;
        
    }
}
int main()
{
    int a[]={21,65,87,3,77},q=0;
    create(a,5);
    q=Display(first);
    printf("%d\n\n",q);
    return 0;
}