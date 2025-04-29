#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev; // Pointer to the previous node
public:
  Node(int val, Node *next1, Node *prev1)
  {
    data = val;
    next = next1;
    prev = prev1;
  }

public:
  Node(int val)
  {
    data = val;
    next = NULL;
    prev = NULL;
  }
};

class List
{
  Node *head;
  Node *tail;

public:
  List()
  {
    head = NULL;
    tail = NULL;
  }
};
Node *convertArrToDLL(vector<int> arr)
{
  Node *head = new Node(arr[0]);
  Node *prev = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i], NULL, prev);
    prev->next = temp;
    prev = temp;
  }
  return head;
}
void print_list(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
Node *insertAtTail(Node *head, int val)
{
  if (head == NULL)
  {
    return new Node(val);
  }
  Node *tail = head;
  while (tail->next != NULL)
  {
    tail = tail->next;
  }
  Node *newNode = new Node(val, NULL, tail);
  tail->next = newNode;
  return head;
}
int main()
{
  vector<int> arr = {1, 2, 3, 4};
  Node *head = convertArrToDLL(arr);
  head = insertAtTail(head, 5);
  print_list(head);
  return 0;
}
