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
Node *insertBeforeHead(Node *head, int val)
{
  Node *newNode = new Node(val, head, NULL);
  if (head != NULL)
  {
    head->prev = newNode;
  }
  return newNode;
}
Node *insertBeforeKNode(Node *head, int k, int val)
{
  if (k == 1)
  {
    return insertBeforeHead(head, val);
  }
  Node *temp = head;
  int cnt = 0;
  while (temp != NULL)
  {
    cnt++;
    if (cnt == k)
      break;
    temp = temp->next;
  }
  Node *prev = temp->prev;
  Node *newNode = new Node(val, temp, prev);
  prev->next = newNode;
  temp->prev = newNode;
  return head;
}
int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};
  Node *head = convertArrToDLL(arr);
  head = insertBeforeKNode(head, 3, 0); // Insert 0 before the head
  print_list(head);
  return 0;
}
