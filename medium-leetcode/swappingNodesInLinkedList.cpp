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
    ListNode* swapNodes(ListNode* head, int k) {

        if (head->next == nullptr) {
            return head;
        }

        int len = length(head);
        int fromTheBegining = k - 1;
        int fromTheEnd = (len - k) + 1;
        int count = 0;
        int valueA, valueB; 

        ListNode* current = head;
        ListNode* start = nullptr;
        ListNode* end = nullptr;

        while(current != nullptr) {
            if (count == fromTheBegining) {
                start = current;
                valueA = current->val;
            }

            if (count == fromTheEnd) {
                end = current;
                valueB = current->val;
            }
            count++;
            current = current->next;
        }

        start->val = valueB;
        end->val = valueA;
        
        return head;
    }

    int length(ListNode* head) {
        if (head->next == nullptr) {
            return 0;
        }

        return length(head->next) + 1;
    }
};
