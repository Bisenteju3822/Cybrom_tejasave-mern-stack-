#include<iostream>
using namespace std;
class Node {
	public:
		int data;
		Node *next;
	Node(int data){
		this->data=data;
		next=NULL;
		
	}
	void display(Node *head){
	Node	 *temp=head;
		 while(temp!=NULL){
		 	cout<<temp->data;
		 	temp=temp->next;
		 }
		 
	}
};
int main(){
 Node *first=new Node(10);
 Node *second=new Node(20);
 Node *third=new Node(30);
 Node *head=first;
  head->next=second;
  head->next->next=third;
  cout<<"==>"<<head->data;
  cout<<"==>"<<head->next->data;
  cout<<"==>"<<head->next->next;
  cout<<head->display(head)<<endl;
 
 


	return 0;
}
