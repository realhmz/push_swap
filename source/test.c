
struct ListNode {
      int val;
      struct ListNode *next;
};
 #include <stdlib.h>
 #include <stdio.h>
 #include <stddef.h>
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *tmp;
    int tmp1;
    int size = 0;
    int i = 0;
    tmp = head;
    while (head)
    {
        head = head->next;
        size++;
    }
    head = tmp;
    while(head)
    {
        while (i < size -1)
        {
            tmp1 = head->val;
            head->val = head->next->val;
            head->next->val = tmp1;
            head = head->next;
            i++;
        }
        i = 0;
        size--;
        head = tmp;
        if (size == 0)
            break;
    }
    return tmp;
}

int main()
{
    struct ListNode* head = malloc(sizeof (struct ListNode));
    struct ListNode* a = malloc(sizeof (struct ListNode));
    struct ListNode* b = malloc(sizeof (struct ListNode));
    struct ListNode* c = malloc(sizeof (struct ListNode));
    struct ListNode* d = malloc(sizeof (struct ListNode));
    head->next = a;
    head->val = 1;
    a->val = 2;
    b->val = 3;
    c->val = 4;
    d->val = 5;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;
    head = reverseList(head);
    while (head)
    {
        printf("val -> %d ;",head->val);
        head= head->next;
    }
}