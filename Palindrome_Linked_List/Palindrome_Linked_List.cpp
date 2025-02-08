#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
Node<int>* solve(Node<int>*first,Node<int>*second)
{
    if(first->next == NULL)
    {
        first->next = second;
        return first;
    }
    Node<int>* curr1 = first;
    Node<int>* next1 = curr1 -> next;
    
    Node<int>* curr2 = second;
    Node<int>* next2 = curr2 -> next;

    while(next1 != NULL && curr2 != NULL)
    {
        if((curr2 -> data >= curr1 -> data ) 
           && ( curr2 -> data <= next1 -> data))
        {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        
        else
        {
            curr1 = next1;
            next1 = next1->next;
            if(next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first == NULL)
        return second;
    if(second == NULL)
        return first;

   if(first->data <= second->data)
   {
       return solve(first,second);
   }    
   else{
       return solve(second,first);
   }

}
class Solution {
  private:
  Node* getMid(Node* head)
  {
      Node* slow = head;
      Node* fast = head->next;
      
      while(fast != NULL && fast->next != NULL)
      {
          fast = fast->next->next;
          slow = slow->next;
      }
      return slow;
 }
 Node* reverse(Node* head)
 {
     Node* curr = head;
     Node* prev = NULL;
     Node* next = NULL;
     while(curr != NULL)
     {
         next = curr->next;
         curr -> next =prev;
         prev = curr;
         curr = next;
     }
     return prev;
     
 }
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
          if(head -> next == NULL) {
            return true;
        }
        
        //step 1 -> find Middle
        Node* middle = getMid(head);
        //cout << "Middle " << middle->data << endl;
        
        //step2 -> reverse List after Middle
        Node* temp = middle -> next;
        middle -> next = reverse(temp);
        
        //step3 - Compare both halves
        Node* head1 = head;
        Node* head2 = middle -> next;
        
        while(head2 != NULL) {
            if(head2->data != head1->data) {
                return 0;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
    
        //step4 - repeat step 2
        temp = middle -> next;
        middle -> next = reverse(temp);
        
        return true;
    }
};