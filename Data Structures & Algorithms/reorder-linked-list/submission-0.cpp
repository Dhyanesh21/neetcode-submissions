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
    void reorderList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return;
        }

        //middle
        ListNode* p1 = head;
        ListNode* p2 = head;
        while(p2->next != nullptr && p2->next->next != nullptr){
            p1 = p1->next;
            p2 = p2->next->next;
        }

        //reverse
        ListNode* second = p1->next;
        p1->next = nullptr;

        ListNode* prev = nullptr;
        ListNode* curr = second;

        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        second = prev;

        //reorder
        ListNode* first = head;

        while(second){
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;

        }
    }
};
