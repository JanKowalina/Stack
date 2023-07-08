#include <iostream>

using namespace std;

struct Cell {
    int value;
    struct Cell* next;
};

class Stack {
    struct Cell* head;
    int size;

public:
    Stack() {
        size = 0;
        head = NULL;
    }

    const int getSize(void);
    void push(int value);
    int pop(void);
    const int getPosition(int index);
    void freeStack(void);
};

const int Stack::getSize(void) {
    return size;
}

void Stack::push(int value) {
    struct Cell* newCell = new Cell();
    newCell->value = value;
    newCell->next = NULL;

    if (head != NULL) {
        newCell->next = head;
    }

    head = newCell;
    size++;
}

int Stack::pop(void) {
    if (head == NULL) {
        return -1; // Return a special value to indicate an empty stack
    }

    int value = head->value;
    struct Cell* temp = head;
    head = head->next;
    delete temp;
    size--;

    return value;
}

const int Stack::getPosition(int index) {
    struct Cell* temp = head;
    for (int i = 0; i < (size - 1 - index); i++) {
        temp = temp->next;
    }
    return temp->value;
}

void Stack::freeStack(void) {
    struct Cell* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Stack stack;
    int value;
    char command;
    cin >> command;

    while (command != 'q') {
        switch (command) {
            case 'i':
                cin >> value;
                stack.push(value);
                break;
            case 'd':
                if (stack.getSize() != 0) {
                    cout << stack.pop() << endl;
                } else {
                    cout << "!" << endl;
                }
                break;
            case 'g':
                cin >> value;
                if (stack.getSize() - 1 >= value) {
                    cout << stack.getPosition(value) << endl;
                } else {
                    cout << "?" << endl;
                }
                break;
        }
        cin >> command;
    }

    stack.freeStack();

    return 0;
}
