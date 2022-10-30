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
	
	//  

};

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