

 ///////////////  TASK 1:   ///////////////
#include <iostream>
using namespace std;
int main(){
	int n1=100;
	int *ptr;
	ptr=&n1;
	
	cout<<&n1; //print address of valriable n1
	cout<<endl;
	cout<<n1;//print vale of valriable n1
	cout<<endl;
//.......................................
	cout<<ptr; //print address of valriable n1 stored in ptr variable
	cout<<endl;
	cout<<&ptr;//print address of ptr
	cout<<endl;
	cout<<*ptr; //print value of valriable n1 stored in ptr variable

} 
 

 ///////////////   TASK 2 :   ///////////////
#include <iostream>
using namespace std;
int main(){
	float n1;
	n1=15.5;
	float* ptr;
	ptr=&n1;
	
	cout<<&n1; //print address of valriable n1
	cout<<endl;
	cout<<n1;//print vale of valriable n1
	cout<<endl;
//.......................................
	cout<<ptr; //print address of valriable n1 stored in ptr variable
	cout<<endl;
	cout<<&ptr;//print address of ptr
	cout<<endl;
	cout<<*ptr; //print value of valriable n1 stored in ptr variable

}
 

 ///////////////   TASK 3:    ///////////////
	#include <iostream>
using namespace std;
int main(){
	string st;
	st="AMMAR";
	string* ptr;
	ptr=&st;
	
	
	
	cout<<&st; //print address of valriable n1
	cout<<endl;
	cout<<st;//print vale of valriable n1
	cout<<endl;
//.......................................
	cout<<ptr; //print address of valriable n1 stored in ptr variable
	cout<<endl;
	cout<<&ptr;//print address of ptr
	cout<<endl;
	cout<<*ptr; //print value of valriable n1 stored in ptr variable
}
 

 ///////////////  TASK 4:   ///////////////
#include <iostream>
using namespace std;
int main(){
	int n1=999;
	int *ptr;
	ptr=&n1;
	
	cout<<&n1; //print address of valriable n1
	cout<<endl;
	cout<<n1;//print vale of valriable n1
	cout<<endl;
//......... { MODIFY value through pointer }.....................

	*ptr=555;
	cout<<ptr; //print address of valriable n1 stored in ptr variable
	cout<<endl;
	cout<<&ptr;//print address of ptr
	cout<<endl;
	cout<<*ptr; //print value of valriable n1 stored in ptr variable

}
 

 ///////////////   TASK 5:  ///////////////
#include <iostream>
using namespace std;
int main(){

	int a=10;
	int* ptr1; 
	ptr1=&a;    //ptr1 stores address of variable a
	int** ptr2;  //to store address of another variable
	*ptr2=ptr1;   //ptr2 stores value of ptr1 which is address of 'a'.
	cout<<&a;  //print address of a
	cout<<endl;
	cout<<*ptr1;  //print value of address stores in ptr1
	cout<<endl;
	cout<<*ptr2; //print value of ptr2 which is address of ptr1

}
 
	
 ///////////////  TASK 6:  ///////////////
#include<iostream>
using namespace std;
int main(){
	
	int a,b;
	cout<<"Enter two numbers\n";
	cin>>a>>b;
	int* p1=&a; //stores address of a
	int* p2=&b;   //stores address of b
	int sum;
	sum=*p1+*p2;   // *p1 means value of address in p1
	
	cout<<"After Addition is "<<sum;
}
 

///////// TASK 7: /////////

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter 1st value...";
	cin>>a;
	cout<<"Enter 2nd value...";
	cin>>b;
	//......{ Swap using pointer }....
	int *p1,*p2;
	int c;
	p1=&a;  //stores address of a
	p2=&b;    // stores address of b
	c=*p1;    //stores value of a
	*p1=*p2;      //transfer value of b to a address
	*p2=c;     //transfer value of c to b address
	
	cout<<"1st value after swap is "<<a<<endl;
	cout<<"2nd value after swap is "<<b;
}
 

///////   TASK 8: ///////////

#include<iostream>
using namespace std;
int main(){
	
int size;
	cout << "Enter Size of Array : ";
	cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter [" << i << "] index Element in Array  ";
		cin >> arr[i];
	}
	cout << "Array at Run-Time " << endl;
	cout << "{  ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i]<<"  ";
	}
	cout << " }";
	delete[]arr;

	system("pause");
}
	 

////////  TASK 9:  ///////////
		#include <iostream>
using namespace std;
int sum(int* ,int*);

int main(){
	int n1,n2,s;
	cout<<"Enter two numbers\n ";
	cin >>n1>>n2;	
	// .....Sum using pointer with function...
	s=sum(&n1,&n2);
	cout<<"Sum = "<<s;	
}
int sum(int * a,int *b){
	int sum;
		sum = *a+*b;
		return sum;
}
		 

///////  TASK 10:   //////////
		#include <iostream>
using namespace std;
int sum(int* ,int*);

int main(){
	int n1,n2;
	cout<<"Enter two numbers\n ";
	cin >>n1>>n2;	
	// .....find large number using pointer ...
	
	int *p1,*p2;
	p1=&n1;
	p2=&n2;
	
	if(*p1>*p2)
	cout<<"\n ==> First number is greater ";
	if(*p1<*p2)
	cout<<"\n ==> Second number is greater ";
	else if(*p1==*p2)
	cout<<"\n ==> Both are Equal ";
	}
		 


//////////       TASK  11://////////////
		#include <iostream>
using namespace std;
int main() {
	//   pointer with null keyword
	int  *ptr = NULL; ////stores zero value
	cout << "Value of ptr is: " << ptr;
	return 0;
}
		 

/////   TASK 12 :  /////////////

#include<iostream>
using namespace std;
int main()
{
	float a,b;
	char choice;
	float *p1,*p2;
	p1=&a;
	p2=&b;
	cout<<"Enter two Numbers:"<<endl;
	cin>>a>>b;
	cout<<"Press + for Addition: \n";
	cout<<"Press - for Subtraction: \n";
	cout<<"Press * for Multiplication: \n";
	cout<<"Press / for Division: \n";
	cin>>choice;
	switch(choice){
		case '+':
			cout<<"Addition = "<<*p1+*p2<<endl;
			break;
			
	    case '-':
	    	cout<<"Subtraction = "<<*p1-*p2<<endl;
	    	break;
	    case '*':
	    	cout<<"Multiplication = "<<*p1 * *p2<<endl;
	    	break;
	    case '/':
	    	cout<<"Division = "<<*p1/ *p2<<endl;
	    	break;
	    	default:
	    		cout<<"Invalid Choice"<<endl;
	}
	
	cout<<"...END...";
}
		 

///////////    TASK 13:  /////////////////////////


		#include<iostream>
using namespace std;
string C_Name(string *);
int main()
{
	string str;
	getline(cin,str);
cout<<"I am writing this message to inform you that Rehan will be retiring from "<<C_Name(&str)<<",\n";
cout<<"effectice March 1,2022.Rehan has been a dedicated employee of "<<C_Name(&str)<<",serving more\n";
cout<<"than three decades with the company ("<<C_Name(&str)<<"),eight of them as vice president \nof sales.";
	
}
string C_Name(string* s)
{
	 *s="'C++ Software Developers'";
	return *s;
}
 

////////////// TASK 14: //////////
#include <iostream>

using namespace std;
void test(int*, int*);
int main() {
	int a = 5, b = 5;
	cout << "Before changing:" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
//   ..... {  Change value of variables with pointer using function  }...
	test(&a, &b);

	cout << "\nAfter changing" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}

void test(int* n1, int* n2) {
	*n1 = 10;
	*n2 = 11;
}

 

////////////  TASK 15 : /////////

#include <iostream>

class MyClass {
public:
    int data;

    // Constructor
    MyClass(int value) {
        data = value;
    }

    // Member function to double the data using a pointer
    void doubleData() {
        int* ptr = &data;  // Pointer to the data member
        *ptr *= 2;        // Double the value through the pointer
    }
};

int main() {
    // Create an instance of MyClass
    MyClass myObject(10);

    // Print the initial value
    std::cout << "Initial data: " << myObject.data << std::endl;

    // Call the doubleData method to double the value
    myObject.doubleData();

    // Print the updated value
    std::cout << "Updated data: " << myObject.data << std::endl;

    return 0;
}
		 


