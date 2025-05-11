#include <iostream>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class Node
{
public:
  int data;
  Node *next;

  // Constructor to initialize the node
  Node(int value)
  {
    data = value;
    next = nullptr;
  }
};

class LinkedList
{
public:
  Node *head;

public:
  // Constructor to initialize the linked list
  LinkedList()
  {
    head = nullptr;
  }

  void addNode(int value)
  {
    Node *newNode = new Node(value);

    if (head == nullptr)
    {
      head = newNode;
    }
    else
    {
      Node *temp = head;
      while (temp->next != nullptr)
      {
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }

  // Function to detect a loop in the linked list using hashing approach
  bool detectLoop()
  {
    unordered_set<Node *> hashSet;

    Node *temp = head;
    while (temp != nullptr)
    {
      // If the node's address is already present in the hash set, a loop exists
      if (hashSet.find(temp) != hashSet.end())
      {
        return true;
      }

      // Add the node's address to the hash set
      hashSet.insert(temp);

      // Move to the next node
      temp = temp->next;
    }

    // If the loop is not detected, return false
    return false;
  }
  // Function to detect a loop in the linked list using hare and tortoise method
  bool detectLoop2()
  {
    Node *tortoise = head;
    Node *hare = head;

    while (hare != nullptr && hare->next != nullptr)
    {
      // Move the tortoise one step at a time
      tortoise = tortoise->next;

      // Move the hare two steps at a time
      hare = hare->next->next;

      // If the tortoise and hare meet, a loop exists
      if (tortoise == hare)
      {
        return true;
      }
    }

    // If the loop is not detected, return false
    return false;
  }
  // Length of loop in linked list
  // Brute force approach
  int length_of_loop(Node *head)
  {
    unordered_map<Node *, int> mp;
    Node *temp = head;
    int timer = 1;
    while (temp != NULL)
    {
      if (mp.find(temp) != mp.end())
      {
        return timer - mp[temp];
      }
      mp[temp] = timer;
      timer++;
      temp = temp->next;
    }
    return 0;
  }
  // Function to create a loop in the linked list
  void createLoop(int position)
  {
    Node *temp = head;
    Node *loopNode = nullptr;

    int count = 0;
    while (temp != nullptr)
    {uj
      if (count == position)
      {
        loopNode = temp;
      }
      temp = temp->next;
      count++;
    }

    if (loopNode != nullptr)
    {
      temp->next = loopNode;
    }
  }
};

// Example usage
int main()
{
  LinkedList list;

  // Add nodes to the linked list
  list.addNode(1);
  list.addNode(2);
  list.addNode(3);
  list.addNode(4);

  // Create a loop in the linked list
  list.createLoop(1);

  // Detect a loop in the linked list
  cout << "Length : " << list.length_of_loop(list.head) << endl;

  return 0;
}