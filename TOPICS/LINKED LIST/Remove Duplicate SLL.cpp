#include<iostream>
#include<conio.h>
using namespace std;
class Node{
    public:
        int data;
        Node * next;
        Node *head;
    Node(){
        head=NULL;
    }
    void Insert(int v){
        Node *newnode=new Node();
        newnode->data=v;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
        }
        else{
            Node* temp;
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        } 
    }
    Node * Del(Node *ptr){
            Node* temp1,*temp2;
            temp1=head;
        
        while(temp1!=ptr){
                temp2=temp1;
                temp1=temp1->next;
            }
            temp2->next=temp1->next;
            return temp1->next;
            delete temp1;
            
                              
    }
                      
    void Display(){
        Node *temp;
        temp=head;
        cout<<"\n{  ";
        while(temp!=NULL){
            cout<<temp->data;
            cout<<" ";
            temp=temp->next;
        }
        cout<<"}";
    }
    ///////////////////
    void del_DUPLICTE(){
        Node *temp1,*temp2;
        temp1=head;
        while(temp1!=NULL){
              int tv;
            tv=temp1->data;
            temp2=temp1->next;
            while(temp2!=NULL){
                if(tv==temp2->data){
                Del(temp2);
                }
                temp2=temp2->next;
            }//inner while
            temp1=temp1->next;
        }//outer while
    }
    
};
int main(){
	Node n;
	int w=1;
	do{
		system("cls");
		int c;
		cout<<"\n{ __Main Menu__ }\n";
		cout<<"\n1. Insert -->";
		cout<<"\n2. Remove Duplicates -->";
		cout<<"\n3. Display -->";
		cout<<"\nYour choice is ->";
		cin>>c;
		switch(c){
			case 1:{
				int v;
				cout<<"\n Enter Value ->";
				cin>>v;
				n.Insert(v);
				break;
			}
			case 2:{
				n.del_DUPLICTE();
				break;
			}
			case 3:{
				n.Display();
				getch();
				break;
			}
			
		}
	}while(w!=0);
}
