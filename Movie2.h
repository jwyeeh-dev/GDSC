#include <string>

class Movie {
private:
	std::string title;
	std::string director;
	std::string  actors;
	std::string grade;

public:
	void setTitle(std::string sentence);
	std::string getTitle();
	void setDirector(std::string sentence);
	std::string getDirector();
	void setActors(std::string sentence);
	std::string getActors();
	void setGrade(std::string sentence);
	std::string getGrade();
};

