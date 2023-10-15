#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
	char* title = "Notification";
    char* message = " Invalid Choice! ";
    char* message_del = " Value Deleted Successfully!.";
class node{
	private:
		int data;
	
		node *next;
	public:
		node *head;
		node(){
			head=NULL;
		}
		void Insert_END_SLL(int n){
			
		if(head==NULL){
			node *new_node=new node();
			new_node->data=n;
			new_node->next=NULL;
			head=new_node;
		}
		else {
		node *new_node=new node();
		node *temp;
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		new_node->data=n;
		new_node->next=NULL;
		temp->next=new_node;
		
	}
			
		}  // insert END function
		///////////////////////////////////////////////////////////////////////////////
		
		void Insert_Begin_SLL(int n){
				if(head==NULL){
			node *new_node=new node();
			new_node->data=n;
			new_node->next=NULL;
			head=new_node;
		}
		else {
		node *new_node=new node();
		node *temp;
		temp=head;
		new_node->data=n;
		new_node->next=temp;
		head=new_node;
			
			
		}  //else
	}//insert Begin function
	///////////////////////////////////////////////////////////////////////////////	
		void Display_SLL(){
			
			if(head==NULL){
				cout<<"\n Linked-List is Empty!. ";
			}
			else{
			node *temp;
			temp=head;
			cout<<" ==> Linked List { ";
			while(temp!=NULL){
				
				cout<<temp->data<<" ";
				temp=temp->next;
				
			}
			cout<<" }";
		}
			
		}//display function
		///////////////////////////////////////////////////////////////////////////////
		void Display_SLL_ADRS(){
			
			if(head==NULL){
				cout<<"\n Linked-List is Empty!. ";
			}
			else{
			node *temp;
			temp=head;
			system("cls");
			cout<<"\n ==> Linked List { ";
			while(temp!=NULL){
				
				cout<<temp->data<<" ";
				temp=temp->next;
				
			}
			cout<<" }\n\n";
			//.................................
			
			cout<<"\n          >> HEAD << \n";
			cout<<"\n  ADDRESS = "<<&head;
			cout<<"\n  CONTENT = "<<head;
			cout<<"\n";
			int i=1;
			temp=head;
			while(temp!=NULL){
				cout<<"\n          >> NODE "<<i<<" <<\n\n";
				cout<<"  ADDRESS = "<<temp;
				cout<<"\n  NEXT    = "<<temp->next;
				
				cout<<"\n  DATA    = "<<temp->data<<" \n";
				i++;
				temp=temp->next;
				
			}
			
	}
		}//display sll with adresses
		///////////////////////////////////////////////////////////////////////////////
		void Del_end_SLL(){
			if(head==NULL){	
			message_del="\n Linked-List is Empty Already!!!";
						MessageBox(NULL, message_del, title, MB_ICONINFORMATION | MB_OK);

			}
			else{
			
			node *temp1,*temp2;
			temp1=head;
			while(temp1->next!=NULL){
				temp2=temp1;
				temp1=temp1->next;
			}
			temp2->next=NULL;
			delete temp1;
			MessageBox(NULL, message_del, title, MB_ICONINFORMATION | MB_OK);
		}
		}
	///////////////////////////////////////////////////////////////////////////////
	void Insert_spec_SLL(int v,int sp){
		node *new_node= new node();
		node *temp;
		new_node->data=v;
		temp=head;
		while(temp->data!=sp){
			temp=temp->next;			
		}
		new_node->next=temp->next;
		temp->next=new_node;
		
	}// insert SLL specific location
	
	///////////////////////////////////////////////////////////////////////////////
	void Del_BEGIN_SLL(){
		if(head==NULL){
			cout<<"\n\n ...>> There's NO Node !!! <<...";
		}
		else if(head->next==NULL){
			head=NULL;
			cout<<"\n ==> DELETED SUCCESSFULLY !!! <==\n";
			MessageBox(NULL, message_del, title, MB_ICONINFORMATION | MB_OK);
		}
		else
		{
			head=head->next;
			cout<<"\n ==> DELETED SUCCESSFULLY !!! <==\n";
			MessageBox(NULL, message_del, title, MB_ICONINFORMATION | MB_OK);
			
		}
		
	}
	///////////////////////////////////////////////////////////////////////////////
	void Del_Spec_SLL(int sp){
		if (head->data==sp){
			head=head->next;
		}
		else{
		
		node *temp1,*temp2;
		temp1=head;
		while(temp1->data!=sp){
			temp2=temp1;
			temp1=temp1->next;
		}
		temp2->next=temp1->next;}
		
	}
	///////////////////////////////////////////////////////////////////////////////
	void Reverse_SLL(){
		node *temp1,*temp2,*temp3;
		temp1=head;
		temp2=temp1->next;
		temp1->next=NULL;
		temp3=temp2;
		while(temp3->next!=NULL){
			temp3=temp2->next;
			temp2->next=temp1;
			temp1=temp2;
			temp2=temp3;
		}
		temp2->next=temp1;
		head=temp3;
	}
	
	///////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////
};
int main(){
node n;
int sw=0;
	do{
		system("cls");
cout<<"<''''''' MAIN-MENU '''''''>\n";
cout<<" 1.Insert At beginning.\n";
cout<<" 2.Insert At END.\n";
cout<<" 3.Insert At Specific Location.\n";
cout<<" 4.Delete At Beginning.\n";
cout<<" 5.Delete At END.\n";
cout<<" 6.Delete At Specific Location.\n";
cout<<" 7.Reverse Linked-List.\n";
cout<<" 8.DISPLAY ( ADDRESS ).\n";
cout<<" 9.DISPLAY ( SIMPLE ). \n";
cout<<" 0. Exit. \n\n";

cout<<"==> Your Choice is ";
int choice;
cin>>choice;


switch(choice){
	case 1:{
		cout<<"\n Enter Value ";
		int v;
		cin>>v;
		n.Insert_Begin_SLL(v);
		break;
		}
		case 2:{
			cout<<"\n Enter Value ";
		int v;
		cin>>v;
		n.Insert_END_SLL(v);

			break;
		}
		case 3:{
			cout<<"\n Enter Value ";
			int v;
		cin>>v;
		cout<<"\n Enter location, you want to put after that value ";
		int sp;
		cin>>sp;
			n.Insert_spec_SLL(v,sp);
			break;
		}
		case 4:{
			n.Del_BEGIN_SLL();
			getch();
			break;
		}
		case 5:{
			n.Del_end_SLL();
			break;
		}
		case 6:{
			cout<<"\n Enter Data, You want to Delete ";
		int sp;
		cin>>sp;
			n.Del_Spec_SLL(sp);
			MessageBox(NULL, message_del, title, MB_ICONINFORMATION | MB_OK);
			cout<<"\n ==> DELETED SUCCESSFULLY !!! <==\n";
		getch();
			break;
		}
		case 7:{
			n.Reverse_SLL();
			cout<<"\n ==> Reversed Successfully!!! <==";
			getch();
			break;
		}
		case 8:{
			n.Display_SLL_ADRS();
			getch();
			break;
		}
		case 9:{
			n.Display_SLL();
			getch();
			break;
		}
		
		case 0:{
			sw=1;
			break;
		}
		default:
	    		cout<<"\n=> Invalid Choice"<<endl;
	   	MessageBox(NULL, message, title, MB_ICONINFORMATION | MB_OK);

	    		
	
}//switch SLL

 	}while(sw!=1);







} 
