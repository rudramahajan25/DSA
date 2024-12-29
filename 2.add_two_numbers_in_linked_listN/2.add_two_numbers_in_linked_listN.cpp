#include<stdio.h>
#include<stdlib.h>
struct LinkNode{
    int data;
    struct ListNode *next;
  }LinkNode;
  LinkNode newNode(int data)
  {
      LinkNode new_node =(LinkNode*)malloc(sizeof(LinkNode));
      new_node->data=data;
      new_node->next=NULL;
      return new_node;
  }
 void push(LinkNode** head_ref,int new_data)
 {
    LinkNode new_node = newNode(ew_data);
    new_node->next = (*head_ref);
    (*head_ref)=new_node;
 }
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    LinkNode* res =NULL;
    LinkNode* temp, *prev =NULL;
    int carry = 0,sum;
    while(l1!= NULL || l2!= NULL){
        sum  = carry +(l1 ? first->data :0) + (l2 ? second->data:0);
        carry =(sum>=10) ? 1:0;
        sum=sum%10;
        temp=newNode(sum);
        if(res == NULL)
        res=temp;
        else
        prev->next=temp;

        prev=temp;

        if(l1)
        l1=l1->next;
        if(l2)
        l2=l2->next;
    }
    if(carry>0)
    temp->next = newNode(carry);
    return res;
    }
    LinkNode* reverse(node* head){
        if(head==NULL||head->next== NULL)
        LinkNode* rest = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return rest;
    }
   void printList(LinkNode* node)
{
    while (node != NULL) {
        printf("%d  ",node->data);
        node = node->next;
    }
    printf("\n");
}
    int main(void)
{   int x;
    LinkNode* res = NULL;
    LinkNode* l1 = NULL;
    LinkNode* l2 = NULL;
    for(int i=0;i<100;i++)
    {
      scanf("%d",&x)
      push(&l1,x);
    }
    for(int i=0;i<100;i++)
    {
      scanf("%d",&x)
      push(&l2,x);
    }
    l1=reverse(l1);
    l2=reverse(l2);
    res=addTwoNumbers(l1,l2);
    res=reverse(res);
    printList(res);
    return 0;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* l3 = NULL, *p1 = l1, *p2 = l2, *p3 = l3, *p3_prev = NULL; int carry = 0; int turn = 0;
  while(p1 || p2 || carry) {
    int val1 = 0, val2 = 0, val3 = 0;
    if (p1) {
      val1 = p1->val;
      p1 = p1->next;
    }
    if (p2) {
      val2 = p2->val;
      p2 = p2->next;
    }
    val3 = val1 + val2 + carry;
    carry = val3 / 10;
    p3 = (struct ListNode *) malloc(sizeof(struct ListNode)); p3->val = val3 % 10; p3->next = NULL;
    if (!turn)
      l3 = p3;
    else
      p3_prev->next = p3;
    p3_prev = p3;
    turn++;
  }
  return l3;
}