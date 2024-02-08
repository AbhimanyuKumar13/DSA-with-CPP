#include <iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
};

void insert_at_beginning(struct node **head, int data) {
    struct node *new_node = new struct node;
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void insert_at_end(struct node **head, int data) {
    struct node *new_node = new struct node;
    new_node->data = data;
    new_node->next = NULL;
    if (*head == NULL) {
        *head = new_node;
    } else {
        struct node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void insert_at_position(struct node **head, int data, int position) {
    struct node *new_node = new struct node;
    new_node->data = data;
    new_node->next = NULL;
    if (*head == NULL) {
        *head = new_node;
    } else {
        struct node *temp = *head;
        int i = 0;
        while (i < position - 1) {
            temp = temp->next;
            i++;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

void print_list(struct node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void traverse_list(struct node *head) {
    cout << "Traversing the linked list: ";
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    struct node *head = NULL;
    int choice, data, position;

    while (true) {
        cout << "1. Insert at beginning" << endl;
        cout << "2. Insert at end" << endl;
        cout << "3. Insert at position" << endl;
        cout << "4. Print list" << endl;
        cout << "5. Traverse list" << endl;
        cout << "6. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data: ";
                cin >> data;
                insert_at_beginning(&head, data);
                break;
            case 2:
                cout << "Enter data: ";
                cin >> data;
                insert_at_end(&head, data);
                break;
            case 3:
                cout << "Enter data: ";
                cin >> data;
                cout << "Enter position: ";
                cin >> position;
                insert_at_position(&head, data, position);
                break;
            case 4:
                print_list(head);
                break;
            case 5:
                traverse_list(head);
                break;
            case 6:
                cout<<"exit";
                exit(0);
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}