#include <iostream>
struct node {
 int data;
 node* next;
 node(int value) : data(value), next(nullptr) {}
};
int search(Node* head, int target) {
 Node* current = head;
 while (current != nullptr) {
 if (current->data == target) {
target
 return true;
 }
 current = current->next;
 }
 return false;
}
void printList(Node* head) {
 Node* current = head;
 while (current != nullptr) {
 std::cout << current->data << " ";
 current = current->next;
 }
 std::cout << std::endl;
}
int main() {
 Node* head = new Node(1);
 head->next = new Node(2);
 head->next->next = new Node(3);
 head->next->next->next = new Node(4);
 head->next->next->next->next = new Node(5);
 std::cout << "Linked List: ";
 printList(head);
 int valueToSearch = 3;
 if (search(head, valueToSearch)) {
 std::cout << "Value " << valueToSearch << " found in the list." << std::endl;
 } else {
 std::cout << "Value " << valueToSearch << " not found in the list." << std::endl;
 }
 while (head != nullptr) {
 Node* temp = head;
 head = head->next;
 delete temp;
 }
 return 0;
}
