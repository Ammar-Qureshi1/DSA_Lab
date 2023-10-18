#include <iostream>
#include <conio.h>
using namespace std;

class queue{
	public:
	int F=-1;
	int R=-1;
	int QUEUE[5];
	int N=5; // { N= Maxsize }
	public:
		void Enqueue(int x){
			if(R==N-1){
				cout<<"\n QUEUE is Full ! ...";
				getch();
			}
			else if( F==-1 && R==-1){
				F=0;
				R=0;
				QUEUE[R]=x;
			}
			else {
				R++;
				QUEUE[R]=x;
			}
			
		}
	void Dequeue(){
		if( F==-1 && R==-1){
			cout<<"\n QUEUE is Empty ! ...";
			getch();
		}
		else if(R==F){
			F=-1;
			R=-1;
		}
		else{
			F=F+1;
		}
		
	}
	void Display(){
		if( F==-1 && R==-1){
			cout<<"\n QUEUE is Empty ! ...";
			
		}
		else{
		cout<<"\n{ ";
		for(int i=F;i<=R;i++){
			cout<<QUEUE[i]<<" ";
		}
		cout<<"}";
	}
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
