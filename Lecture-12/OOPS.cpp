// OOPS
#include <iostream>
using namespace std;

// -------------- BLUEPRINT ----------------
class Car{
private:
	int price;
public:
	char* name;
	int seats;
	int model;
	// Default Constructor
	Car(){
		name = NULL;
		cout<<"In Default Constructor"<<endl;
	}

	// Parameterized Constructor
	Car(char* n,int p,int s,int m){
		cout<<"In Parameterized Constructor"<<endl;
		name = new char[strlen(n)+1];
		strcpy(name,n);
		price = p;
		seats = s;
		model = m;
	}

	// Copy Constructor
	// Car c = a;
	Car(Car &X){
		cout<<"In Copy Constructor"<<endl;
		price = X.price;
		model = X.model;
		seats = X.seats;
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
	}


	void Print(){
		cout<<"Name  : "<<name<<endl;
		cout<<"Seats : "<<seats<<endl;
		cout<<"Model : "<<model<<endl;
		cout<<"Price : "<<price<<endl<<endl;
	}

	void SetPrice(int p){
		if(p>100 && p<200){
			price = p;
		}
		else{
			price = 100;
		}
	}

	int GetPrice(){
		return price;
	}

	void SetName(char *n){
		if(name!=NULL){
			delete []name;
			name = NULL;
		}
		name = new char[strlen(n)+1];
		strcpy(name,n);
	}
};
// -----------------------------------------

int main(){
	Car a; // Object : a
	// a.price = 10;
	a.SetPrice(-10000);
	a.seats = 4;
	a.model = 2004;
	// a.name = "BMW";
	// strcpy(a.name,"BMW");
	a.SetName("BMW");

	// cout<<a.name<<endl;
	// cout<<a.price<<endl;
	// cout<<a.seats<<endl;
	// cout<<a.model<<endl;

	Car b("Audi",150,3,3333);
	b.SetName("Renault");
	// strcpy(b.name,"Audi");
	// // b.price = 200;
	// b.SetPrice(150);
	// b.model = 3333;
	// b.seats = 3;
	// cout<<b.price<<endl;
	// cout<<b.GetPrice()<<endl;
	Car c = a;


	a.Print();
	b.Print();
	c.Print();


	return 0; 
}