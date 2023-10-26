#include <iostream>
#include <conio.h>
using namespace std;

class queue{
	public:
	queue *F;
	queue *R;
	queue *next;
	int data;
	public:
		queue(){
			F=NULL;
			R=NULL;
		}
		void Enqueue(int v){
			queue *Q=new queue();
			Q->data=v;
			Q->next=NULL;
			if(F==NULL || R==NULL){
				F=Q;
				R=Q;
				
			}
			else{
				R->next=Q;
				R=Q;
					
			}
			
		}
	void Dequeue(){
		if(F==R){
			F=NULL;
			R=NULL;
		}
		else{
			F=F->next;
		}
		
	}
	void Display(){
		queue *temp;
		temp=F;
		cout<<"\n{ ";
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		
		cout<<"}";
	}
		
	
};
int main(){
queue q;
int sw=0;
	do{
		system("cls");
cout<<"<'''''''QUEUE-MAIN-MENU '''''''>\n";
cout<<" 1. Enqueue.\n";
cout<<" 2. Dequeue.\n";
cout<<" 3. Display. \n";
cout<<"==> Your Choice is ";
int choice;
cin>>choice;


switch(choice){
		case 1:{
			int v;
			cout<<"\nEnter Value --> ";
			cin>>v;
			q.Enqueue(v);
			
			break;
		}
		case 2:{
			q.Dequeue();
	
			break;
		}
		case 3:{
			q.Display();
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
	    		
	
}//switch

 	}while(sw!=1);


} 
