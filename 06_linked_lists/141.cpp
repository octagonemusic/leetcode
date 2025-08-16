struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
  bool hasCycle(ListNode *head) {
    ListNode *hare = head;
    ListNode *tortoise = head;

    while (hare != nullptr && hare->next != nullptr) {
      hare = hare->next->next;
      tortoise = tortoise->next;

      if (hare == tortoise) {
        return true;
      }
    }

    return false;
  }
};
