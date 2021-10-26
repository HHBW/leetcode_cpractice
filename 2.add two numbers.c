struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    char carry_bit=0,sum;
    struct ListNode *ret=l1; 

    do{
        sum=l1->val+l2->val+carry_bit;
        carry_bit=sum/10;
        l1->val=sum%10;
        
        if(l1->next==NULL){
            if(l2->next==NULL){
                if(carry_bit!=0){
                    struct ListNode *node=(struct ListNode *)malloc(sizeof(struct ListNode));
                    node->val=carry_bit;
                    node->next=NULL;
                    l1->next=node;
                    break;
                }
                else{
                    break;
                }
            }
            else{
                l2=l2->next;
                l1->next=l2;
                while(carry_bit){
                    
                    sum=l2->val+carry_bit;
                    l2->val=sum%10;
                    carry_bit=sum/10;
                    if(l2->next==NULL){
                        if(carry_bit==0) break;
                        else{
                            struct ListNode *node=(struct ListNode *)malloc(sizeof(struct ListNode));
                            node->val=carry_bit;
                            node->next=NULL;
                            l2->next=node;
                            break;
                        }
                    }
                    else l2=l2->next;

                }
                
                
                break;
            }
        }
        else if(l2->next==NULL){
           while(carry_bit){
                l1=l1->next;
                sum=l1->val+carry_bit;
                l1->val=sum%10;
                carry_bit=sum/10;
                if(l1->next==NULL){
                    if(carry_bit==0) break;
                    else{
                        struct ListNode *node=(struct ListNode *)malloc(sizeof(struct ListNode));
                        node->val=carry_bit;
                        node->next=NULL;
                        l1->next=node;
                        break;
                    }
                }

            }
            break;

        }
        else{
            l1=l1->next;
            l2=l2->next;
            
        }
        
    }while(1);
    return ret;
}