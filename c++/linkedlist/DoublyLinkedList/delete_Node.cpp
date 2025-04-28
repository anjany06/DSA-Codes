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

void deleteNode(Node *temp)
{
  Node *prev = temp->prev;
  Node *next = temp->next;

  if (next == NULL)
  {
    prev->next = NULL;
    temp->prev = NULL;
    delete temp;
    return;
  }
  prev->next = next;
  next->prev = prev;

  temp->next = NULL;
  temp->prev = NULL;
  delete temp;
}

int main()
{
  vector<int> arr = {11, 226};
  Node *head = convertArrToDLL(arr);
  deleteNode(head->next);
  print_list(head);
  return 0;
}