/*Daryl De Castro C2A
Excercise*/
#include<iostream>
#include<string>
using namespace std; 

class Book{
	private:
		string title;
		string author;
		int year;
	
	public:
		Book(){
			title="";
			author="";
			year=0;
		}
		Book(string t, string a, int y){
			title = t;
			author = a;
			year = y;
		}
		
		void setTitle(string t){
		    title = t;
		}
		void setAuthor(string a){
			author = a;
		}
		void setYear(int y){
			year=y;
		}
		string getTitle(){
			return title;
		}
		string getAuthor(){
			return author;
		}
		int getYear(){
			return year;
		}
};


const int maxBook=100;//max num of books
Book lib[maxBook];//array para ma store books
int bookcount=0;//ma track num of books

void menu();
void addBook();
void displayBook();
void searchBook();

Book b1; 

void menu(){
	char choice;
	cout<<"---Menu---"<<endl;
	cout<<"\n1. Add Book"<<endl;
	cout<<"2. Display All Book"<<endl;
	cout<<"3. Search Book"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	system("cls");
	switch(choice){	
		case'1':
			cout<<"---Add Book---"<<endl;
			addBook();
			break;
			
		case '2':
			displayBook();
			break;
			
		case '3':
			cout<<"---Search Book---\n";
			searchBook();
			break;
			
		case '4':
			cout<<"Exiting...";
			exit(0);
		
		default:
			cout<<"Invalid Input!!!...Returning to Menu\n\n";
			menu();
			break;
	}
	
}

void addBook(){
	if(bookcount<maxBook){
	string mtitle, mauthor;
	int myear;
	char choice;
	
	//for enter title
	cout<<"\nEnter Book Title: ";
	cin.ignore();
	getline(cin, mtitle);
	b1.setTitle(mtitle);
		
	//for enter author
	cout<<"Enter Author: ";
	cin.ignore();
	getline(cin,mauthor);
	b1.setAuthor(mauthor);

	//for enter year
	cout<<"Enter Year: ";
	cin>>myear;
	b1.setYear(myear);
	
	lib[bookcount]=b1;
	bookcount++;//inc book count

	//Display
	cout<<endl;
	cout<<b1.getTitle()<<" has been succesfully added!!!"<<endl;
	
	cout<<"\nPress [1] to Add Another Book, Press [2] to return to Menu: ";
	cin>>choice;
	cout<<endl;
	if(choice=='1'){
		addBook();
	}
	else if(choice=='2'){
		system("cls");
		menu();
	}
	else{
		cout<<"Invalid Input!!!";
		cout<<"\nPress [1] to Add Another Book, Press [2] to return to Menu: ";
		cin>>choice;
	}
	}
}