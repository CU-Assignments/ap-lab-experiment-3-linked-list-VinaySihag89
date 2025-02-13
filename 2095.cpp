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
    ListNode* deleteMiddle(ListNode* head) {
         
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        
         
        ListNode* current = head;
        int count = 0;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        
        
        int middleIndex = count / 2;  
        
         
        current = head;
        ListNode* prev = nullptr;
        for (int i = 0; i < middleIndex; i++) {
            prev = current;  
            current = current->next;  
        }
        
        
        if (prev != nullptr) {
            prev->next = current->next;  
        }
        
        return head;  
    }
};
