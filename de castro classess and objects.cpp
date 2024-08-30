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

