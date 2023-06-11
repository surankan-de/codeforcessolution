// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
typedef struct lol{
        int x;
        struct lol *next;
    }node;  
void addhead(node **head,int y)
{
    node *addh = (node *)malloc(sizeof(node));
    addh->x = y;
    addh->next = *head;
    *head = addh;
}
void add (node *head,int y)
{
   node * adde = (node *)malloc(sizeof(node)) ;
   adde->x =y;
   adde->next = NULL;
   
   node *ptr = (node *)malloc(sizeof(node));
   ptr = head;
   while(ptr->next!=NULL)
   {
       ptr = ptr->next;
   }
   
   ptr->next = adde;
   
}
void addpos(node **head,int pos,int y)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr = *head;
    int count =0;
    for(count =0;count<pos;count++)
    {
        ptr=ptr->next;
    }
    node * addpos = (node *)malloc(sizeof(node));
    addpos->x = y;
    addpos->next = ptr->next;
    
    ptr->next = addpos;
    
    
}

int main() {
    
    
    node *head,*tmp,*prev;
    
    head = (node *)malloc(sizeof(node));
    prev = (node *)malloc(sizeof(node));
    for(int i =0;i<5;i++)
    {
        if(i==0)
        {
            tmp = (node *)malloc(sizeof(node));
            printf("enter head\n");
            scanf("%d",&tmp->x);
            tmp->next = NULL;
            head = tmp;
            prev = tmp;
        }else{
            tmp = (node *)malloc(sizeof(node));
            printf("enter elements: ");
            scanf("%d",&tmp->x);
            tmp->next = NULL;
            prev->next = tmp;
            prev = tmp;
        }
    }
    add(head,6);
    addhead(&head,7);
    
    int count =0;
    tmp =head;
    while(tmp->next!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    int pos=0,value =0;
    printf("enter pos and value: ");
    
    scanf("%d %d",&pos,&value);
    if(pos<=count-1)
    {
        addpos(&head,pos,value);
    }
    
    
    for(int i =0;i<8;i++)
    {
        if(i==0)
        {
            tmp = head;
            printf("%d ",tmp->x);
            tmp = tmp->next;
        }else{
            printf("%d ",tmp->x);
            tmp = tmp ->next;
        }
    }

    return 0;
}
