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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* node = head;
        int count = 0;
        while(count<k)
        {
            if(node == NULL) return head;
            node = node->next;
            count++;
        }
        ListNode* pre = reverseKGroup(node,k);
        while(count>0){
            ListNode* next = head->next;
            head->next = pre;
            pre = head;
            head = next;
            count--;
        }
        return pre;
    }
};