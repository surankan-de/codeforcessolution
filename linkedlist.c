// Online C compiler to run C program online
#include <stdio.h>
typedef struct lol{
        int x;
        struct lol *next;
    }node;  

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
    
    for(int i =0;i<6;i++)
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
