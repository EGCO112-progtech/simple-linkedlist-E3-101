//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node a,b,*head ;
    struct node e;
    struct node d;
    e.value=2;
    e.next=&a;
    a.value = c;
    a.next=&b;
    head=&e;
    b.value=head->value+3;
    
    b.next=&d;
    d.value=11;
    d.next=NULL;

    printf("%d\n", head->value ); //what value for 5 , a.value
    printf("%d\n", head->next->value ); //what value for 8 , b.value
    printf("%d\n", head->next->next->value); //d.value
    printf("%d\n", head->next->next->next->value);
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
*/
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
      printf("Exercise III Use loop to print everything");
        int i,n=4;
        for(i=0;i<n;i++){
            printf("\n%d", tmp->value);
            tmp=tmp->next;
          // What is missing???
        }
    
     printf("\nExercise IV change to while loop!!"); //(you can use NULL to help)
        tmp=head;
         while(tmp!=NULL){
            printf("\n%d", tmp->value);
            tmp=tmp->next;
            //if ((tmp->value)==NULL) break;
           // What is missing???
        }
    
    
   printf("\nExercise V Use malloc to create all nodes, instead of create a struct!!");
         //use a loop to help
         head=(NodePtr)malloc(sizeof(struct node));
         tmp=head;
        for (i=0;i<3;i++){
            tmp->value=i+3;
            tmp->next=(NodePtr)malloc(sizeof(struct node));
            tmp=tmp->next;
        }
        tmp->value=i+3;
        tmp->next=NULL;

         for(tmp=head; tmp!=NULL; tmp=tmp->next){
            //tmp->next=(NodePtr)malloc(sizeof(struct node));
            printf("\n%d", tmp->value);
         }
     

      printf("\nExercise VI Free all node !!");
         //use a loop to help
          
        for(tmp=head; tmp!=NULL; tmp=head){
            //tmp->next=(NodePtr)malloc(sizeof(struct node));
            head=head->next;
            printf("\nFree %d",tmp->value);
            free(tmp);
            //printf("%d", tmp->value);
         }
     
    
    return 0;
}