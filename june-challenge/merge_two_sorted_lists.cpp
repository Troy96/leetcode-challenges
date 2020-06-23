// Merge two sorted linked lists and return it as a new sorted list. The new list should be made by splicing together the nodes of the first two lists.

// Example:

// Input: 1->2->4, 1->3->4
// Output: 1->1->2->3->4->4

#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main()
{
}

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    if(l1 ==  NULL) return l2;
    else if(l2 == NULL) return l1;

    ListNode *result;

    if(l1->val <= l2->val) {
        result = l1;
        result->next = mergeTwoLists(l1->next, l2);
    }

    else {
        result = l2;
        result->next = mergeTwoLists(l1, l2->next);
    }

    return result;
}