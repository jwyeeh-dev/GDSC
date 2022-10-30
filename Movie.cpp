#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;

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

string Movie::getTitle() {
	return title;
}

string Movie::getDirector() {
	return director;
}

string Movie::getActors() {
	return actors;
}

string Movie::getGrade() {
	return grade;
}
