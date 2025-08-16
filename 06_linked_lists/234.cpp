struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *reverseLL(ListNode *head) {
    ListNode *curr = head;
    ListNode *prev = nullptr;

    while (curr != nullptr) {
      ListNode *next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }

    return prev;
  }

  bool isPalindrome(ListNode *head) {
    ListNode *hare = head;
    ListNode *tortoise = head;
    ListNode *prev = nullptr;

    while (hare != nullptr && hare->next != nullptr) {
      hare = hare->next->next;
      prev = tortoise;
      tortoise = tortoise->next;
    }

    hare = head;
    tortoise = reverseLL(tortoise);

    while (tortoise != nullptr) {
      if (head->val != tortoise->val) {
        return false;
      }
      head = head->next;
      tortoise = tortoise->next;
    }

    return true;
  }
};
