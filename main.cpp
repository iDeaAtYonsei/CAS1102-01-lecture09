#include <iostream>
#include <cstdlib>
#include <ctime>

struct Node {
    int value;
    Node* next;
};

// (1) TODO: Define the "Compare" function pointer type.
// Requirement: a function pointer that takes two ints and returns boolean


// (2) TODO: Implement the sorted insertion function (in ascending order, using Compare).
// Requirement: Accept the list head by reference and insert `value` of the Node at the correct position.
// Use Compare cmp: if cmp(a, b) is true, then `a` should appear before `b`.
// - Find the first position where `value` should be inserted.
void insertSorted(Node*& head, int value, Compare cmp) {
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

    // TODO: Create a non-capturing lambda and assign it to a Compare pointer named "asc".
    // It should return true when `a` should come before `b` (ascending) — e.g., `a < b`.
    // Example: [](int a, int b){ return a < b; }

    Node* head = nullptr;
    for (int i = 0; i < N; ++i) {
        insertSorted(head, arr[i], asc);
    }

    std::cout << "Sorted: ";
    printList(head);
    clear(head);
    return 0;
}