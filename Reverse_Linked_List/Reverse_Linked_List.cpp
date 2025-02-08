#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head == NULL || head->next == NULL)
        return head;
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* fwd = NULL;

    while(curr != NULL)
    {
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
    }
    return prev;
}
#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
void reverseList(LinkedListNode<int> *&head,LinkedListNode<int> *curr,LinkedListNode<int> *prev)
{
  if (curr == NULL) {
    head = prev;
    return;
  }
  LinkedListNode<int>* frwd = curr->next;
  reverseList(head,frwd,curr);
  curr->next = prev;
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = NULL;
    reverseList(head,curr,prev);
    return head;
}
#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int> *reverse2(LinkedListNode<int> *head) 
{
  if(head == NULL || head->next == NULL)
  {
    return head;
  }
  LinkedListNode<int>* smallhead = reverse2(head->next);
  head->next->next = head;
  head->next = NULL;
  return smallhead;
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    return reverse2(head);
}