#pragma once
#include <stdio.h>
#include <stdlib.h>

int MainSort_1d(){
    typedef struct type{
        struct type* pre;
        float data;
        struct type* next;} as;
        printf("Enter the array: ");
        
        as* head= (as*) malloc (sizeof(as));
        head->pre=NULL;
        scanf("%f",&head->data);
        
        as* p1= (as*) malloc (sizeof(as));
        head->next=p1;
        p1->pre=head;
        scanf("%f",&p1->data);
        
        char c=' ';
        while (c!='\n'){
            as* p2= (as*) malloc (sizeof(as));
            p1->next=p2;
            p2->pre=p1;
            scanf("%f",&p2->data);
            p1=p2;
            c=getchar();
        }
        p1->next=NULL;
        
        for (as* p=head; p->next!=NULL; p=p->next){
            for (as* j=head; j->next!=NULL; j=j->next){
                if (j->data>j->next->data){
                    float temp=j->data;
                    j->data= j->next->data;
                    j->next->data=temp;
                }
            }
        }
        
        printf("Asending order: ");
        for (as* i=head; i!=NULL; i=i->next){
            printf("%g ",i->data);
        }
        
        as* y=head;
        for (; y->next!=NULL; y=y->next);
        printf("\nDesending order: ");
        for (; y!=NULL; y=y->pre){
            printf("%g ",y->data);
        }
        
        as* fr=head->next;
        while(fr!=NULL){
            free(head);
            head=fr;
            fr=fr->next;
        }
        free(head);
        head=NULL;
        return 0;
}