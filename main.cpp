#include <iostream>
#include <cstdlib>
#include <ctime>

struct Node {
    int value;
    Node* next;
};

// (1) TODO: Define the "compare" function.
// A function pointer that takes two ints (a, b) and returns boolean.
// Return true if a < b.


// (2) TODO: Implement the insertNode function (in ascending order, using compare).
// Parameters: a list 'head' by reference, int 'value' of the Node, and a function ('func') to compare two int values
// Use com if func(a, b) is true, then `a` should appear before `b`.
// Find the first position where `value` should be inserted.
void insertNode() {
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

    Node* head = nullptr;
    for (int i = 0; i < N; ++i) {
        insertNode(head, arr[i], compare);
    }

    std::cout << "Sorted: ";
    printList(head);
    clear(head);
    return 0;
}