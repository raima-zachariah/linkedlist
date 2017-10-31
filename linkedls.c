#include<stdio.h>
struct node
{int num;
struct node *link;
};

void insert(struct node **,int); 
void delete(struct node **,int);
int search(struct node *,int);
void sort(struct node **);

int main()
{struct node *top;
top=NULL;
//Comment

char ch;

do
{
printf("1.insert\n2.delete\n3.search\n4.sort\n");
printf("enter your option\n");
int n;
scanf("%d",&n);




switch(n)
{case 1:
         {int i;
         printf("enter the no.to be inserted\n ");
         scanf("%d",&i);
         insert(&top,i);          
         break;}         
 case 2:
         {int d;
         printf("enter the no.to be deleted\n ");
         scanf("%d",&d);
         delete(&top,d);
         break;}
 case 3:
         {int s;
         printf("enter the no.to be searched\n");    
         scanf("%d",&s);
         search(top,s);   
         break;}
 case 4:
         {sort(&top);
         break;}

 default:
         printf("enter a valid option\n");
}

    
    printf("enter 'y' for doing again, else 'n'\n");
    scanf("%c",&ch);
}while(ch=='y');



}
