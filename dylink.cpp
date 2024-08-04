#include<iostream>
using namespace std;
int max_size=10;
class Node{
	int point;
	Node *next;
	public:
		Node(int v){
			point=v;
			next=NULL;
		}
};
class file{
	Node *adjList[max_size];
	int nopoint;
	public;
	List(){
		for(int i=0;i<max_size;i++){
			adjList	[i]=NULL;
			
			}
			nopoint =0;
		}
		void addpoint(){
			if(nopoint>=0&&nopoint<max_size){
				nopoint++;
				cout<<nopoint<<" "<<"added"<<endl;
			}
		}
		void addEdge(int src,int dest){
			Node *newnode =new Node(dest);
			newnode->next=adjList{src-1};
			adjList[src-1]=newnode;
			newnode=new Node(src);
			newnode->next=adjList[dest-1];
			adjList[dest-1]=newnode;
		}
		void print(){
			for(int j=0;j<max_size;j++){
				Node *temp=adjList[j];
				while(temp!=NULL){
					cout<<temp->vertex<<"";
					temp=temp->next;
										
				}
				cout<<endl;
			}
		}
			
	
	
	
};
int main(){



	return 0;
}
