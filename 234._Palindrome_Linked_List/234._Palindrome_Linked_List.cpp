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
    ListNode* getMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        
        ListNode* fast = head->next;
        ListNode* slow = head;
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return true;
        }
        
        // Step 1 - Find the middle of the list
        ListNode* middle = getMiddle(head);
        
        // Step 2 - Reverse the second half of the list
        ListNode* temp = middle->next;
        middle->next = reverse(temp);
        
        // Step 3 - Compare both halves
        ListNode* head1 = head;
        ListNode* head2 = middle->next;

        bool isPalindrome = true;
        while (head2 != NULL) {
            if (head2->val != head1->val) {
                isPalindrome = false;
                break;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        // Step 4 - Restore the list (reverse the second half back)
        temp = middle->next;
        middle->next = reverse(temp);
        
        return isPalindrome;
    }
};