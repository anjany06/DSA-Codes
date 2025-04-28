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

Node *deleteHead(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    cout << "Sorry meri bss ki ni" << endl;
    return NULL;
  }
  Node *prev = head;
  head = head->next;
  prev->next = NULL;
  head->prev = NULL;
  delete prev;
  return head;
}
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

int main()
{
  vector<int> arr = {1,2,3,4,5};
  Node *head = convertArrToDLL(arr);
  head = deleteHead(head);
  print_list(head);
  return 0;
}
