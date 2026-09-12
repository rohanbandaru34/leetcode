/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *p = head;
    struct ListNode *q = head;
    
    for (int i = 0; i < n; i++)
    {
        p = p->next;
    }

    if (p == NULL)
    {
        struct ListNode *r = head;
        head = head->next;
        free(r);

        return head;
    }

    while (p->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    struct ListNode *s = q->next;
    q->next = q->next->next;
    free(s);

    return head;   
}