#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode dummy_head(0);
    ListNode* current = &dummy_head;
    int carry = 0;

    while (l1 || l2 || carry) {
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = sum / 10;
        current->next = new ListNode(sum % 10);
        current = current->next;
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    return dummy_head.next;
}

using namespace std;

void printList(ListNode* head) { //Функция вывода ответа
    ListNode* current = head;
    while (current) {
        cout << current->val;
        if (current->next) std::cout << " -> ";
        current = current->next;
    }
    cout << "\n";
}

int main() { // Примеры
    // Пример 1: [2, 4, 3] + [5, 6, 4] = [7, 0, 8]
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode* result1 = addTwoNumbers(l1, l2);
    printList(result1);

    // Пример 2: [0] + [0] = [0]
    ListNode* l3 = new ListNode(0);
    ListNode* l4 = new ListNode(0);

    ListNode* result2 = addTwoNumbers(l3, l4);
    printList(result2);

    // Пример 3: [9,9,9,9,9,9,9] + [9,9,9,9] = [8,9,9,9,0,0,0,1]
    ListNode* l5 = new ListNode(9);
    l5->next = new ListNode(9);
    l5->next->next = new ListNode(9);
    l5->next->next->next = new ListNode(9);
    l5->next->next->next->next = new ListNode(9);
    l5->next->next->next->next->next = new ListNode(9);
    l5->next->next->next->next->next->next = new ListNode(9);

    ListNode* l6 = new ListNode(9);
    l6->next = new ListNode(9);
    l6->next->next = new ListNode(9);
    l6->next->next->next = new ListNode(9);

    ListNode* result3 = addTwoNumbers(l5, l6);
    printList(result3);

    return 0;
}
