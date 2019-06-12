// Functions
#include <iostream>
using namespace std;

// SYNTAX : 
// return_type function_name(arguments){

// }
void HelloWorld(){
	cout<<"Hello World"<<endl;
}

// void add(int x,int y);
// void add(int ,int );

// void add(int x,int y){
// 	cout<<x+y<<endl;
// }

int add(int x,int y){
	return (x+y);
}

int main(){
	HelloWorld();

	int a,b;
	a = 20;
	b = 20;

	int ans = add(a,b);
	cout<<ans*10<<endl;

	return 0;
}






