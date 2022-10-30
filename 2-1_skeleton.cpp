#include <iostream>
#include <string>
using namespace std;

class Movie{

private:
	string title;
	string director;
	string actors;
	string grade;

public:
	void setTitle(string sentence);
	void getTitle();
	void setDirector(string sentence);
	void getDirector();
	void setActors(string sentence);
	void getActors();
	void setGrade(string sentence);
	void getGrade();
};

void Movie::setTitle(string sentence) {
	title = sentence;
}

void Movie::setDirector(string sentence) {
	director = sentence;
}

void Movie::setActors(string sentence) {
	actors = sentence;
}

void Movie::setGrade(string sentence) {
	grade = sentence;
}

void Movie::getTitle() {
	return title;
}

void Movie::getDirector() {
	return director;
}

void Movie::getActors() {
	return actors;
}

void Movie::getGrade() {
	return grade;
}

int main(){
	Movie mv;

	mv.setTitle("Jurassic World: Fallen Kingdom, 2018	");	
	mv.setDirector("Juan Antonio Bayona	");
	mv.setActors("Chris Pratt	");
	mv.setGrade("12 years old");

	cout << mv.getTitle() << endl;
	cout << mv.getDirector() << endl;
	cout << mv.getActors() << endl;
	cout << mv.getGrade() << endl;

	return 0;
}