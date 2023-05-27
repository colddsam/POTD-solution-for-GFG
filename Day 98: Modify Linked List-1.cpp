struct Node* modifyTheList(struct Node *head)
    {
     Node* mid = get_m(head);

    // Partition 2nd list
    Node* backlist = mid->next; // 3->6->NULL

    // Mark next as null for the last node of the first list
    mid->next = nullptr; // 10>4>5>NULL

    backlist = reverse(backlist); // 6>3>NULL

    // Iterate in both lists, store the difference in the 1st and copy 1st list data to 2nd
    Node* curr1 = head;
    Node* curr2 = backlist;
    while (curr2 != nullptr) {
        int temp = curr1->data;
        curr1->data = curr2->data - temp;
        curr2->data = temp;

        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    // 1st: -4, -1, 5->NULL || 2nd: 10>4>NULL
    // Reverse 2nd list and append it to the 1st (last node of the 1st list is mid)
    mid->next = reverse(backlist);
    return head;
}

Node* get_m(Node* head) {
    Node* f = head;
    Node* s = head;
    while (f->next != nullptr && f->next->next != nullptr) {
        s = s->next;
        f = f->next->next;
    }
    return s;
}

Node* reverse(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;
    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;

        curr = next;
    }
    return prev;
}
