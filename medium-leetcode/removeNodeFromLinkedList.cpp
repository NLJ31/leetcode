#include <iostream>


using namespace std;

class ListNode {
    public:
    int val;
    ListNode* next;

    ListNode(int value) {
        val = value;
        next = nullptr;
    }
};

class Solution {
    public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int len = length(head);

        ListNode* triggerNode = head;

        for (int i = 1 ; i <= (len-n) ; i++) {
            triggerNode = triggerNode->next;
        }

        if (triggerNode->next == nullptr || (len - n ) < 0 ) {
            triggerNode = triggerNode->next;
            return triggerNode;
        }
        
        triggerNode->next = triggerNode->next->next;

        return head;
    }

    void printNode(ListNode* head) {
        ListNode* temp = head;
        while(temp->next != nullptr) {
            cout << temp->val << endl;
            temp = temp->next;
        }
    }

    int length(ListNode* head) {
        if (head->next == nullptr) {
            return 0;
        }

        return length(head->next) + 1;
    }
};

int main() {

}