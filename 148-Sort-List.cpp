class Solution {

    ListNode* findmid(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode a(-1);
        ListNode* temp = &a;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                temp->next = list1;
                temp = list1;
                list1 = list1->next;
            } else {
                temp->next = list2;
                temp = list2;
                list2 = list2->next;
            }
        }

        if (list1) temp->next = list1;
        else temp->next = list2;

        return a.next;
    }

public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* mid = findmid(head);
        ListNode* rightHead = mid->next;
        mid->next = nullptr;

        ListNode* left = sortList(head);
        ListNode* right = sortList(rightHead);

        return merge(left, right);
    }
};