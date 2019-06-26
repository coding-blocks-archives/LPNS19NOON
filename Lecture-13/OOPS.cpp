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
	const int tyres;
	static int count;
	// Default Constructor
	Car():tyres(4),name(NULL){
		// name = NULL;
		cout<<"In Default Constructor"<<endl;
		count++;
	}

	// Parameterized Constructor
	Car(char* n,int p,int s,int m):tyres(4){
		cout<<"In Parameterized Constructor"<<endl;
		name = new char[strlen(n)+1];
		strcpy(name,n);
		price = p;
		seats = s;
		model = m;
		count++;
	}

	// Copy Constructor
	// Car c = a;
	Car(Car &X):tyres(4){
		cout<<"In Copy Constructor"<<endl;
		price = X.price;
		model = X.model;
		seats = X.seats;
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
		count++;
	}

	// Copy assignment
	// d = c;
	void operator=(Car X){
		if(name!=NULL){
			delete []name;
			name = NULL;
		}
		cout<<"In Copy assignment"<<endl;
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}
	// a+=b;
	void operator+=(Car X){
		price += X.price;
		model += X.model;
		seats += X.seats;
		char *oldname = name;
		name = new char[strlen(name)+strlen(X.name)+1];
		strcpy(name,oldname);
		strcat(name,X.name);
		delete []oldname;
	}

	void Print()const{
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

	int GetPrice()const{
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

	~Car(){
		cout<<"Deleting Car "<<name<<endl;
		if(name){
			delete []name;
			name = NULL;
		}
		count--;
	}
};
// -----------------------------------------

int Car::count = 0;



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
	Car d;

	d = c; // Copy assignment
	d.name[0] = 'Z';

	// int *a = new int;
	// float *f = new float;
	Car* e = new Car("Maruti",200,4,3000);
	(*e).SetName("Audi");
	a+=b;

	a.Print();
	b.Print();
	c.Print();
	d.Print();
	(*e).Print();
	cout<<"Count : "<<Car::count<<endl;
	delete e;
	cout<<"Count : "<<Car::count<<endl;



	return 0; 
}