#include <iostream>
using namespace std;

int main(){





	// char b[10];
	// cin>>b;
	// cout<<b<<endl;
	// cin.getline(b,10);
	// string s1 = "Hello"; // Initialization
	// string s2 = "World";
	// char a[100] = "We are learning strings";
	// string s = s1;// Initialization
	// string sa(s2);// Initialization
	// string sb(a);// Initialization

	// s2+=s1;
	// cout<<s2<<endl;
	// cout<<s<<endl;
	// cout<<sa<<endl;
	// cout<<sb<<endl;

	// cin>>s;
	// getline(cin,s);
	// for(int i=0;s[i]!='\0';i++){
	// 	cout<<s[i]<<" ";
	// }
	// cout<<endl;
	// s = "Coding Blocks";


	// cout<<s<<endl;


	// char a[][10]={
	// 	"one","two","three","four"
	// };

	// cout<<a[0]<<endl;
	// cout<<a[1]<<endl;
	// cout<<a[2]<<endl;
	string s[10]={
		"one",
		"two",
		"three",
		"four"
	};
	for(int i=0;i<4;i++){
		for(int j=0;s[i][j]!='\0';j++){
			cout<<s[i][j]<<" ";
		}
		cout<<endl;
	}
	// for(int i=0;i<3;i++){
	// 	cin>>s[i];
	// }
	for(int i=0;i<4;i++){
		cout<<s[i]<<endl;
	}



	return 0; 
}