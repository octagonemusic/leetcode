struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
  ListNode *detectCycle(ListNode *head) {
    ListNode *hare = head;
    ListNode *tortoise = head;

    while (hare != nullptr && hare->next != nullptr) {
      hare = hare->next->next;
      tortoise = tortoise->next;

      if (hare == tortoise) {
        ListNode *hare = head;

        while (hare != tortoise) {
          hare = hare->next;
          tortoise = tortoise->next;
        }

        return hare;
      }
    }

    return nullptr;
  }
};
