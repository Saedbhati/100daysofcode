#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct ListNode {
        int val;
        struct ListNode *next;
    };
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *p;
    struct ListNode *j;
    int sizeofl1=1;
    int sizeofl2=1;
    
    p=l1;
    j=l2;

    while(p->next != NULL){
        sizeofl1++;
        p=p->next;

    }
    while(j->next != NULL){
        sizeofl2++;
        j=j->next;

    }
    char reversel1[sizeofl1];
    char reversel2[sizeofl2];
    p=l1;
    

    for (int i = sizeofl1; i >=1; i--)
    {
        
        int temp=p->val;
        char temp_arr[1];

        sprintf(temp_arr,"%d",temp);

        strcat(reversel1,temp_arr);
        
        p=p->next;
        
    }
    
    
    int reversel_1;
    reversel_1=atoi(strrev(reversel1));
    //printf("%d",reversel_1);
    
    j=l2;
    
    

    for (int i = 3; i >=1; i--)
    {
        
        int temp=j->val;
        char temp_arr[1];

        sprintf(temp_arr,"%d",temp);

        strcat(reversel2,temp_arr);
        
        j=j->next;
        
    }
    
    
    int reversel_2;
    reversel_2=atoi(strrev(reversel2));
    


    int total= reversel_1+reversel_2;
    

    char total_s[10];
    char temp__s[14];
    sprintf(temp__s,"%d",total);
    strcat(total_s,temp__s);
    
    
    


    struct ListNode *answer=(struct ListNode *)malloc(sizeof(struct ListNode));
    p=answer;

    if (reversel_1<reversel_2)
    {
        for (int i = 0; i < sizeofl2; i++)
        {
            for (int j = sizeof(total_s);  j> 0; j--)
    {
        int x;
         x=atio(&total_s[j]);
         printf("%d",x);
    }
            
        }
        
    }
    


    
    

    
    



    
    
    
    
   
    
    

}

void main(){
    

    struct ListNode *l1=(struct ListNode *)malloc(sizeof(struct ListNode));
    l1->val=2;
    l1->next=(struct ListNode *)malloc(sizeof(struct ListNode));

    l1->next->val=4;
    l1->next->next=(struct ListNode *)malloc(sizeof(struct ListNode));

    l1->next->next->val=3;
    l1->next->next->next=NULL;
    

    struct ListNode *l2=(struct ListNode *)malloc(sizeof(struct ListNode));
    l2->val=1;
    l2->next=(struct ListNode *)malloc(sizeof(struct ListNode));

    l2->next->val=5;
    l2->next->next=(struct ListNode *)malloc(sizeof(struct ListNode));

    l2->next->next->val=4;
    l2->next->next->next=NULL;

    

    addTwoNumbers(l1,l2);


}