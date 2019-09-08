
#ifndef linked_h
#define linked_h

#include <iostream>

using namespace std;

struct  Node
{
	int value;
	Node* next;
};
class Linked_List
{
public:
	Linked_List()
	{
		head = nullptr;
		size = 0;
	}
	void add(int v)
	{
		if (head == nullptr)
		{
			Node *p = new Node;
			p->value = v;
			p->next = head;
			head = p;
			size++;
		}
		else
		{
			Node *temp = head;
			while (temp->next != nullptr)
				temp = temp->next;

			Node *n = new Node;
			n->value = v;
			temp->next = n;
			n->next = nullptr;
			size++;
		}
		/*Node *p = new Node;
		p->value = v;
		p->next = head;
		head = p;
		size++;*/
		cout << "the number has been added as a linked list\n";
		cout << "size is: " << size << endl;
		
	}


	void middle()
	{
		int count = 0;
		Node *p = head;
		if (p == nullptr)
			cout << "The list is empty\n";

		else
		{
			Node *a, *b;
			a = b = head;
			while (b != nullptr && b->next != nullptr)
			{
				a = a->next;
				b = b->next->next;
			}
			cout <<"The middle number is " <<a->value;
		}
	}

	void print()
	{
		Node *p = head;
		
		if (p == nullptr)
		{
			cout << "List is empty\n";

		}
		else
		{
			while (p!=nullptr)
			{
				cout << p->value << " ";
				p=p->next;
			}
		}
		cout << "\n--------------------------" << endl;
		
	}

	int min()
	{
		/*Node *current = head;
		int min = head->value;
		if (head = nullptr)
			cout << "List it empty\n";
		else
			do {
				if (min > current->value)
					min = current->value;
				current = current->next;
			} while (current != head);
					
		return min;*/
		Node *i = head;
		int min = i->value;
		for (; i != nullptr; i = i->next)
		{
			if (min > i->value)
				min = i->value;
		}

		return min;
		
	}

	void reverseList()
	{
		Node *current, *prev, *next;
		current = head;
		prev = nullptr;
		while (current != nullptr)
		{
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
		head = prev;

	}

	void search(int value)
	{
		Node *p = head;
		int counter = 1;
		while (p!=nullptr)
		{
			if (p->value == value)
				cout << value << " is located in node " << counter << endl;
			counter++;
			p = p->next;
		}
	}

	void nthNode(int n)
	{
		Node *p1 = head;
		Node *p2 = head;
		int counter = 1;

		while (counter<=n-1)
		{
			p1 = p1->next;
			counter++;
		}

		while (p1->next==nullptr)
		{
			p1 = p1->next;
			p2 = p2->next;
		}
		cout << "value at node " <<n <<" from the end of the list is " <<p1->value;
	}

	void sort()
	{
		int temp;
		if (head == nullptr)
			cout << "The list if empty\n";
		else
		{
			for (Node *i = head; i != nullptr; i = i->next)
				for (Node *j = i->next; j != nullptr; j = j->next)
				{
					if (i->value > j->value)
					{
						temp = i->value;
						i->value = j->value;
						j->value = temp;
					}
				}
			print();
		}
		
	}

private:
	Node *head;
	int size;

};
#endif