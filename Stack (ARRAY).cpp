#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
const char* title = "Notification";
const char* message = " Invalid Choice! ";
const char* message_del = " Value Deleted Successfully!.";
int top=-1;
	int n=10;
	int stack[10];
	
void PUSH(){
	
	if(top>=n-1){
		cout<<"\n ==> Stack is Overflow <==\n";
	}
	else{
		int v;
			cout<<"\nEnter Value --> ";
			cin>>v;
		top++;
		stack[top]=v;
		cout<<"\n --> The value "<<v<<" is Successfully Pushed!  <--"; 
	}
 }
void POP(){
	if(top<=-1){
				cout<<"\n ==> Stack is Underflow <==\n";

	} 
	else{
		cout<<"\n --> The value "<<stack[top]<<" is Successfully Popped!  <--"; 
		top--;

	}
 }
 void Display()
 {
 	if(top>=0){
 		cout<<"\n";
 		for(int i=top; i>=0 ;i--){
 			cout<< "| "<<stack[i]<<" |\n";
 			
		 }
		 cout<<"----";
	 }
	 else{
	 	cout<<"\n { Stack is Empty }\n";
	 }
 }

int main(){
	
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
			
			PUSH();
			getch();
			break;
		}
		case 2:{
			POP();
			getch();
			break;
		}
		case 3:{
			Display();
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
