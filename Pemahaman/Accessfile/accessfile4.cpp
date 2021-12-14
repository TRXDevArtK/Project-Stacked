#include<stdlib.h>
#include<stdio.h>
 
struct node {
  char data;
   struct node *next;
};
 
main ()
{
FILE *fp;
 fp = fopen ("Names.txt","r");
 int i, names =0;
 char c, *pN;
 while((c=getc(fp))!=EOF) 
   {
     if(c=='\n')
       names++ ;               
     }
 printf("\tThe total number of members are : %d\n",names);   
  
  
 pN = (char*) calloc(names, sizeof(char));
 rewind (fp);
  
 for (i=0;i<names;i++)
   {
     fscanf(fp,"%c", &pN[i]);
     printf("%c", pN[i]);
      
   }
 
struct node *head = NULL;
struct node *tail = NULL;
struct node *curr = NULL;
 
 head = NULL;
for(i=1;i<=names;i++) {
      curr = (struct node*)malloc(sizeof(node));
      curr->data = pN[i];
      curr->next  = tail;
      tail = curr;
  if (!head) head = curr;
   }
 
   curr = head;
 
   while(curr) {
      printf("%d\n", curr->data);
      curr = curr->next ;
   }
}
