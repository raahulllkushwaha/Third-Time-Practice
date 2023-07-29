#include <iostream>

struct Node
{
    int value;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void insert(int value)
    {
        Node *newNode = new Node;
        newNode->value = value;
        newNode->next = head;
        head = newNode;
    }

    void remove(int value)
    {
        Node *current = head;
        Node *previous = nullptr;
        while (current != nullptr)
        {
            if (current->value == value)
            {
                if (previous != nullptr)
                {
                    previous->next = current->next;
                }
                else
                {
                    head = current->next;
                }
                delete current;
                break;
            }
            previous = current;
            current = current->next;
        }
    }

    bool search(int value)
    {
        Node *current = head;
        while (current != nullptr)
        {
            if (current->value == value)
            {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void print()
    {
        Node *current = head;
        while (current != nullptr)
        {
            std::cout << current->value << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};
