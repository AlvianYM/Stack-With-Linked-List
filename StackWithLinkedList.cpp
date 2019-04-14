//Alvian Yusuf Mizan (1817051053)
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

int main() {
	int pilihan, n;
    	char ulang;
    	MyStack s;
   	
	do {
		system ("cls");
		cout<<"||PROGRAM STACK WITH LINKED LIST||"<<endl<<endl;
		if (head != NULL){
			s.printStackList();
		}
		cout<<"\nDaftar Menu :"<<endl;	
		cout<<"1. Isi"<<endl;
		cout<<"2. Hapus"<<endl;
		cout<<"3. Keluar"<<endl;
		cout<<"Pilih: "; cin>>pilihan;
		switch (pilihan) {
			case 1:
				if(!isFull()) {
					cout<<"Masukkan Angka : ";
					cin>>n;
					s.push(n);
            			}
				else {
					cout<<"\nStack Penuh!"<<endl;
				}
				break;
		
			case 2:
				s.pop();
				break;
			
			case 3:
				cout<<"\nTerima Kasih Telah Mencoba :)";
				exit(0);
				break;
		
			default:
				cout<<"\n Pilihan tidak tersedia.\n";		
		}
		cout<<"\nIngin Melanjutkan?(Y/N)\n";
      		cin>>ulang;
	} 
		while (ulang=='y' || ulang=='Y');
	
	return 0;
}
