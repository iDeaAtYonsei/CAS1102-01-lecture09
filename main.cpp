#include <iostream>
#include <cstdlib>
#include <ctime>

struct Node {
    int value;
    Node* next;
};

// (1) TODO: Define the "Compare" function pointer type.
// A function pointer that takes two ints and returns boolean


// (2) TODO: Implement the insertNode function (in ascending order, using Compare).
// Parameters: a list head by reference, int 'value' of the Node, and Compare
// Use Compare cmp: if cmp(a, b) is true, then `a` should appear before `b`.
// Find the first position where `value` should be inserted.
void insertNode(Node*& head, int value, Compare cmp) {
}

void printList(Node* head) {
    for (Node* p = head; p; p = p->next) std::cout << p->value << ' ';
    std::cout << "\n";
}

void clear(Node*& head) {
    while (head) { Node* nx = head->next; delete head; head = nx; }
}

int main() {
    const int N = 10;
    const int MOD = 100;
    int arr[N];

    std::srand(static_cast<unsigned>(std::time(nullptr)));
    std::cout << "Array : ";
    for (int i = 0; i < N; ++i) {
        arr[i] = std::rand() % MOD;
        std::cout << arr[i] << ' ';
    }
    std::cout << "\n";

    // (3) TODO: Create a lambda and assign it to a Compare pointer named "asc".
    // It should return true when `a` should come before `b` (e.g., 'a < b').
    // Example: [](int a, int b){ return a < b; }

    Node* head = nullptr;
    for (int i = 0; i < N; ++i) {
        insertNode(head, arr[i], asc);
    }

    std::cout << "Sorted: ";
    printList(head);
    clear(head);
    return 0;
}