/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int countList(ListNode* head)
    {
        ListNode* temp = head;
        int cnt = 0;
        while(temp!=NULL)
        {
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
            if(head == NULL || head->next == NULL)
        return NULL;
        int pos = countList(head)-n;

        
        
        if(pos==0 ){
            ListNode* temp = head;
            head = head->next;
            // memory free start node
            temp->next = NULL;
            delete temp;
            return head;
        }
        ListNode* curr = head;
        ListNode* temp = head;
        ListNode* prev = NULL;
        int cnt= 0;
        
        while (cnt < pos) {
            prev = curr;
            curr = curr->next;
            cnt++;

        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        
        
    return head;
    }
};