#include <iostream>
#define MAX_STACK_SIZE 10
using namespace std;

struct TNode {
	int data;
	TNode *next;
};

TNode *head;

void init() {
	head == NULL;
}

bool isEmpty() {
	return head == NULL;
}

bool isFull() {
	if (isEmpty() == 1) {
		return false;
	}
	else {
		TNode *bantu;
		int a;
		bantu = head;
		while (bantu != NULL) {
		 	a++;
	 		bantu = bantu->next;
		}
		return a > MAX_STACK_SIZE-1;
	}
}

class MyStack {
    public:
    void push(int newdata) {
        TNode *baru;
	baru = new TNode;
	baru->data = newdata;
	baru->next = NULL;
	    if(isEmpty() == 1) {
		    baru->next = head;
		    head = baru;
	    }
	    else {
		    baru->next = head;
		    head=baru;
	    }
    }
	
    void pop() {
        if (!isEmpty()) {
		cout<<endl<<"Data "<<head->data<<" telah terhapus."<<endl;
		head = head->next;
		}
	else {
		cout<<"Stack kosong"<<endl;
    	}
    }
	
    void printStackList() {
        TNode *bantu = head;
        if (!isEmpty()) {
            cout<<"Elemen di stack:"<<endl;
		while (bantu != NULL) {
			cout<<bantu->data<<endl;
			bantu = bantu->next;
		}
	}
		else {
			cout<<"Stack Kosong"<<endl;
		}
    }
};

int main()
{
    MyStack s;
    s.push(8);
    s.push(3);
    s.push(2);
    s.push(9);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.printStackList();
    return 0;
}
