
#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

public:
  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

class List
{
public:
  Node *head;
  Node *tail;

public:
  List()
  {
    head = NULL;
    tail = NULL;
  }

  void push_back(int val)
  {
    Node *newNode = new Node(val);

    if (head == NULL)
    {
      head = tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
  }

  void print_list()
  {
    Node *temp = head;

    while (temp != NULL)
    {
      cout << temp->data << "->";
      temp = temp->next;
    }
  }
  // With Extra space
  void reverse_list_with_extra_space()
  {
    stack<int> s;
    Node *temp = head;
    while (temp != NULL)
    {
      s.push(temp->data);
      temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
      temp->data = s.top();
      s.pop();
      temp = temp->next;
    }
  }

  // Without extra space
  void reverse_list()
  {
    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
      Node *next = curr->next;

      curr->next = prev;
      prev = curr;
      curr = next;
    }
    head = prev;
  }

  // Recursive
  Node *reverseLinkedList(Node *head)
  {
    if (head == NULL || head->next == NULL)
    {
      return head;
    }
    Node *newHead = reverseLinkedList(head->next);
    Node *front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
  }
};
int main()
{
  List LL;
  LL.push_back(1);
  LL.push_back(2);
  LL.push_back(3);
  LL.push_back(4);
  LL.push_back(5);
  LL.print_list();
  LL.head = LL.reverseLinkedList(LL.head); // Recursive

  cout << endl;
  LL.print_list();

  return 0;
}
