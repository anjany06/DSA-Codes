#include <iostream>
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
  Node *delete_kNode(Node *head, int k)
  {
    if (head == NULL)
      return head;
    if (k == 1)
    {
      Node *temp = head;
      head = head->next;
      free(temp);
      return head;
    }

    int cnt = 0;
    Node *prev = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
      cnt++;
      if (cnt == k)
      {
        prev->next = prev->next->next;
        free(temp);
        break;
      }
      prev = temp;
      temp = temp->next;
    }
    return head;
  }
};
int main()
{
  List LL;
  LL.push_back(1);
  LL.push_back(2);
  LL.push_back(13);
  LL.push_back(14);
  LL.push_back(15);
  LL.push_back(16);

  LL.print_list();
  LL.delete_kNode(LL.head, 1);
  cout << endl
       << "After deleting 3rd node" << endl;
  LL.print_list();

  return 0;
}
