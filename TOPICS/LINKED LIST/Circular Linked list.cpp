#include <iostream>
#include <conio.h>
using namespace std;
class node{
	public:
		int data;
		node *next;
	public:
		node *head;
		node(){
			head=NULL;
		}
		void Insert_END_CLL(int n){
			
		if(head==NULL){
			node *new_node=new node();
			new_node->data=n;
			new_node->next=new_node;
			head=new_node;
		}
		else {
		node *new_node=new node();
		node *temp;
		temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		new_node->data=n;
		temp->next=new_node;
		new_node->next=head;
		
	}
			
		}  // insert END function
	/////////////////////////////////////////////////////////	
		void Insert_Begin_CLL(int n){
				if(head==NULL){
			node *new_node=new node();
			new_node->data=n;
			head=new_node;
			new_node->next=head;
		}
		else {
		node *new_node=new node();
		node *temp;
		temp=head;
		new_node->next=temp;
		
		while(temp->next!=head){
			temp=temp->next;
		}
		new_node->data=n;
	temp->next=new_node;
	head=new_node;
			
			
		}  //else
	}//insert Begin function
////////////////////////////////////////////////////////////////////		
		void Display_CLL(){
			if(head==NULL){
				cout<<"\n Linked-List is Empty!. ";
			}
			else{
			
			node *temp;
			temp=head;
			cout<<" ==> Linked List { ";
			while(temp->next!=head){
				
				cout<<temp->data<<" ";
				temp=temp->next;
				
			}
			cout<<temp->data<<" ";
			cout<<" }";
		}//else display
		}//display function
	/////////////////////////////////////////////////////////////////////////	
			
		void insert_spec_CLL(int sp,int value){	//sp=specific position
		node *new_node= new node();
		node *temp;
		
		temp=head;
		while(temp->data!=sp){
			temp=temp->next;
		}
		new_node->data=value;
		new_node->next=temp->next;
		temp->next=new_node;
		
		}
		//////////////////////////////////////////////////////////////////////////
		
		void Display_CLL_ADRS(){
			
			if(head==NULL){
				cout<<"\n Linked-List is Empty!. ";
			}
			else{
			node *temp;
			temp=head;
			system("cls");
			cout<<"\n ==> Linked List { ";
			while(temp->next!=head){
				
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
			while(temp->next!=head){
				cout<<"\n          >> NODE "<<i<<" <<\n\n";
				cout<<"  ADDRESS = "<<temp;
				cout<<"\n  NEXT    = "<<temp->next;
				
				cout<<"\n  DATA    = "<<temp->data<<" \n";
				i++;
				temp=temp->next;
				
			}
				cout<<"\n          >> NODE "<<i<<" <<\n\n";
				cout<<"  ADDRESS = "<<temp;
				cout<<"\n  NEXT    = "<<temp->next;
				
				cout<<"\n  DATA    = "<<temp->data<<" \n";
			
	}
		}//display Cll with adresses
		////////////////////////////////////////////////////////////////////////////
		void Del_END_CLL(){
			if(head->next==head){
				head = NULL;
			}
			else{
			node *temp1,*temp2;
			temp1=head;
			while(temp1->next!=head){
				temp2=temp1;
				temp1=temp1->next;
				}
				temp2->next=head;
			}	
		}
		
		////////////////////////////////////////////////////////////////////////////
		void Reverse_CLL(){
			node *temp1,*temp2,*temp3,*temp4;
			temp1=head;
			temp2=temp1->next;
			temp3=temp2;
			temp4=head;
			while(temp3->next!=head){
				temp3=temp2->next;
				temp2->next=temp1;
				temp1=temp2;
				temp2=temp3;
			}
			temp2->next=temp1;
			head=temp2;
			temp4->next=head;
			
		}
		////////////////////////////////////////////////////////////////////////////
		void Del_Spec_CLL(int sp){
			if(head->data==sp){
				Del_Begin_CLL();
			}
			else{
				node *temp1,*temp2;
				temp1=head;
				while(temp1->data!=sp){
					temp2=temp1;
					temp1=temp1->next;
				}
				temp2->next=temp1->next;
				delete temp1;
				
			} 
			
		}
		////////////////////////////////////////////////////////////////////////////
		void Del_Begin_CLL(){
			node *temp;
			temp=head;
			while(temp->next!=head){
				temp=temp->next;
			}
			temp->next=head->next;
			head=head->next;
		}
		
		////////////////////////////////////////////////////////////////////////////
		
		////////////////////////////////////////////////////////////////////////////
		
		////////////////////////////////////////////////////////////////////////////

};
int main(){
node n;
int cw=0;

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
cout<<" 0. Exit. \n\n";

cout<<"==> Your Choice is ";
int choice;
cin>>choice;
switch(choice){
	case 1:{
		cout<<"\n Enter Value ";
		int v;
		cin>>v;
		n.Insert_Begin_CLL(v);
		break;
		}
		case 2:{
			cout<<"\n Enter Value ";
		int v;
		cin>>v;
		n.Insert_END_CLL(v);
			break;
		}
		case 3:{
			cout<<"\n Enter Value you want to add ";
		int v;
		cin>>v;
		cout<<"\n Enter location, you want to put after that value ";
		int sd;
		cin>>sd;
		n.insert_spec_CLL(sd,v);
			break;
		}
		case 4:{
			n.Del_Begin_CLL();
				cout<<"\n ==> DELETED SUCCESSFULLY !!! <==\n";
		getch();
			break;
		}
		case 5:{
			n.Del_END_CLL();
			cout<<"\n ==> DELETED SUCCESSFULLY !!! <==\n";
		getch();
			break;
		}
		case 6:{
			cout<<"\n Enter Data, You want to Delete.\n  ==> You Select ->  ";
		int sd;
		cin>>sd;
			n.Del_Spec_CLL(sd);
				cout<<"\n ==> DELETED SUCCESSFULLY !!! <==\n";
		getch();
			break;
		}
		case 7:{
			n.Reverse_CLL();
			cout<<"\n ==> Reversed Successfully!!! <==";
			getch();
			break;
		}
		case 8:{
			n.Display_CLL_ADRS();
			getch();
			break;
		}
		
		case 9:{
			n.Display_CLL();
			getch();
			break;
		}
		case 0:{
			cw=1;
			break;
		}
		default:
	    		cout<<"\n=> Invalid Choice"<<endl;
	   	   		getch();
	
}

 	}while(cw!=1);

cout<<"\n\n { PROGRAM ENDED }";



} 
