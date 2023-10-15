#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
class stack{
	public:
		stack *next;
		int data;
	public:
		stack *top;
		stack(){
			top=NULL;
		}
		
		void PUSH(){
			int v;
			cout<<"\nEnter Value --> ";
			cin>>v;
			stack *newstack=new stack();
			newstack->data=v;
			newstack->next=top;
			top=newstack;
			cout<<" \n Value Pushed Successfully! \n";
			
		}
		void POP(){
			if(top==NULL){
				cout<<"\n { Stack is Empty }\n";	
		}
			else{
			stack * temp;
			temp=top;
			top=temp->next;
			temp=NULL;
			cout<<"\n --> The value is Successfully Popped!  <--"; 
		}
			
		}
		void Display(){
				if(top==NULL){
				cout<<"\n { Stack is Empty }\n";	
		}
			else{
			stack *temp;
			temp=top;
		cout<<"\n";
 		while(temp!=NULL){
 			cout<< "| "<<temp->data<<" |\n";
 			temp=temp->next;
		 }
		 cout<<"----";
	}
		}
};
int main(){
	stack s;
int sw=0;
	do{
		system("cls");
cout<<"<'''''''STACK-MAIN-MENU '''''''>\n";
cout<<" 1. PUSH.\n";
cout<<" 2. POP.\n";
cout<<" 3. Display. \n\n";

cout<<"==> Your Choice is ";
int choice;
cin>>choice;


switch(choice){
		case 1:{
			
			s.PUSH();
			getch();
			break;
		}
		case 2:{
			s.POP();
			getch();
			break;
		}
		case 3:{
			s.Display();
			getch();
			break;
		}
		case 0:{
			sw=1;
			break;
		}
		default:
	    		cout<<"\n=> Invalid Choice"<<endl;
				getch();
	    		
	
}//switch SLL

 	}while(sw!=1);







} 
