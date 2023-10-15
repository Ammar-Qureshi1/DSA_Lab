#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
	const char* title = "Notification";
	const char* message = " Invalid Choice! ";
    const char* message_del = " Value Deleted Successfully!.";
class node{
	private:
		int data;
		node *prev;
		node *next;
	public:
		node *head; 
		node(){
			head=NULL;
		}
		void Insert_END_DLL(int n){
			node *new_node=new node();
				new_node->data=n;
				
		if(head==NULL){
				new_node->next=NULL;
			new_node->prev=new_node;
			head=new_node;
		}
		else {
		node *temp;
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		new_node->next=NULL;
		temp->next=new_node;
		new_node->prev=temp;
		
	}
			
		}  // insert END function
		///////////////////////////////////////////////////////////////////////////////
		
		void Insert_Begin_DLL(int n){
				if(head==NULL){
			node *new_node=new node();
			new_node->data=n;
			new_node->next=NULL;
			new_node->prev=new_node;
			head=new_node;
		}
		else {
		node *new_node=new node();
		node *temp;
		temp=head;
		temp->prev=new_node;
		new_node->data=n;
		new_node->next=head;
		head=new_node;
			
			
		}  //else
	}//insert Begin function
	///////////////////////////////////////////////////////////////////////////////	
		void Display_DLL(){
			
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
		void Display_DLL_ADRS(){
			
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
		void Del_end_DLL(){
			if(head==NULL){	
			message_del="\n Linked-List is Empty Already!!!";
			getch();
			}
			else if(head->next==NULL){
				head=NULL;
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
	void Insert_spec_DLL(int v,int sp){
		node *new_node= new node();
		node *temp;
		new_node->data=v;
		temp=head;
		while(temp->data!=sp){
			temp=temp->next;			
		}
		new_node->next=temp->next;
		new_node->prev=temp;
		temp->next=new_node;
		
	}// insert SLL specific location
	
	///////////////////////////////////////////////////////////////////////////////
	void Del_BEGIN_DLL(){
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
	void Del_Spec_DLL(int sp){
		if (head->data==sp){
			head=head->next;
			head->prev=head;
		}
		else{
		
		node *temp1,*temp2,*temp3;
		temp1=head;
		while(temp1->data!=sp){
			temp1=temp1->next;
		}
		temp2=temp1->prev;
		temp3=temp1->next;
		temp2->next=temp3;
		temp3->prev=temp2;
		}
		
	}
	///////////////////////////////////////////////////////////////////////////////
	void Reverse_DLL(){
		node *temp1,*temp2,*temp3,*temp4;
		temp1=head;
		temp2=temp1;
		temp4=temp1;
		while(temp1!=NULL){
			temp3=temp1->prev;
			temp1->prev=temp1->next;
			temp1->next=temp3;
			temp2=temp1;
			temp1=temp1->prev;
		}
		temp4->next=NULL;
		temp2->prev=temp2;
		head=temp2;
	}
	
	///////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////
};
int main(){
node n;
int dw=0;
	do{
		system("cls");
cout<<"<''''''' MAIN-MENU '''''''>\n";
cout<<" 1. Insert At beginning.\n";
cout<<" 2. Insert At END.\n";
cout<<" 3. Insert At Specific Location.\n";
cout<<" 4. Delete At Beginning.\n";
cout<<" 5. Delete At END.\n";
cout<<" 6. Delete At Specific Location.\n";
cout<<" 7. Reverse Linked-List.\n";
cout<<" 8. DISPLAY ( ADDRESS ).\n";
cout<<" 9. DISPLAY ( SIMPLE ). \n";
cout<<" 0. To go Back. \n\n";

cout<<"==> Your Choice is ";
int choice;
cin>>choice;


switch(choice){
	case 1:{
		cout<<"\n Enter Value ";
		int v;
		cin>>v;
		n.Insert_Begin_DLL(v);
		break;
		}
		case 2:{
			cout<<"\n Enter Value ";
		int v;
		cin>>v;
		n.Insert_END_DLL(v);

			break;
		}
		case 3:{
			cout<<"\n Enter Value ";
			int v;
		cin>>v;
		cout<<"\n Enter location, you want to put after that value ";
		int sp;
		cin>>sp;
			n.Insert_spec_DLL(v,sp);
			break;
		}
		case 4:{
			n.Del_BEGIN_DLL();
			getch();
			break;
		}
		case 5:{
			n.Del_end_DLL();
			break;
		}
		case 6:{
			cout<<"\n Enter Data, You want to Delete ";
		int sp;
		cin>>sp;
			n.Del_Spec_DLL(sp);
			MessageBox(NULL, message_del, title, MB_ICONINFORMATION | MB_OK);
			cout<<"\n ==> DELETED SUCCESSFULLY !!! <==\n";
		getch();
			break;
		}
		case 7:{
			n.Reverse_DLL();
			cout<<"\n ==> Reversed Successfully!!! <==";
			getch();
			break;
		}
		case 8:{
			n.Display_DLL_ADRS();
			getch();
			break;
		}
		case 9:{
			n.Display_DLL();
			getch();
			break;
		}
		
		case 0:{
			dw=1;
			break;
		}
		default:
	    		cout<<"\n=> Invalid Choice"<<endl;
	   	MessageBox(NULL, message, title, MB_ICONINFORMATION | MB_OK);

	    		
	
}//switch SLL

 	}while(dw!=1);







} 
