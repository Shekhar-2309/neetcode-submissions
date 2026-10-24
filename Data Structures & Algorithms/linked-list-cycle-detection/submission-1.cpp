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
    bool hasCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fas = head;

        while(fas!= nullptr && fas->next != nullptr){
            slow = slow->next;
            fas = fas->next->next;
        if(slow == fas){
            return true;
        }
        }
        return false;
    }
};
