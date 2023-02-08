#include <iostream>
#include <string>

/*
class Screen {
public:
	typedef std::string::size_type pos;

	Screen() = default;
	Screen(pos initialRow, pos initialCol)
		: row(initialRow), col(initialCol), content(row* col, 'd') {}
	pos size() const; 

private:
	pos row;
	pos col;
	std::string content;
};

//typedef scope only applys within the curly brackets of the class 
Screen::pos Screen::size() const
{
	return row * col; 
}


int main() {
	Screen s(3, 4);
	std::cout << s.size(); 
}
*/