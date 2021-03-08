#include <stdio.h>
#include <stdlib.h>

struct node {
 int data; struct node *link; };
typedef struct node nd;
nd * insert_rear(nd *);
nd * delete_front(nd *);
void display( nd *);
int main( ){
 nd *r=0, *f=0; int ch=0;
 for(;;)
 {
 printf("1. Insert rear\n2. Delete front\n3. Display\n4. Exit\n");
 printf("choice :"); scanf("%d",&ch);
 switch(ch) {
 case 1: r = insert_rear(r); if (f==0) f=r; break;
 case 2: f = delete_front(f); break;
 case 3: display(f); break;
 case 4: exit(0);
 }
 }

}
nd * insert_rear(nd * r)
{
 
 // creating a new node
 nd *t;
 t = (nd *) malloc(sizeof(nd));
printf("Enter data\n");
scanf("%d", &(t->data));
 t->link=0;

 if (r == 0)
 return t;
 r->link = t;
 return t; }
nd * delete_front( nd *f)
{
 nd* t;
 if ( f == NULL)
 { printf("queue is empty\n"); return 0; }
 printf("Element delete is %d\n", f->data);
 t=f->link; free(f);
 return t;
}
void display( nd * f) {
 if ( f == NULL) {
 printf("LL is empty\n");
 return;
}
printf("Contents of list are \n");
for( ; f != NULL; ) {
printf("%d\n", f->data);
f = f -> link;
}}
