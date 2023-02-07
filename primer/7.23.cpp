#include <iostream>
#include <string>

/*
class Screen {
typedef std::string::size_type pos; 


Screen() = default;
Screen(const pos initialHeight, const pos initialWidth, const char c) 
	: height(initialHeight), width(initialWidth), content(initialHeight* initialWidth, c) {}

char get() const { return content[cursor]; }
char get(const pos height, const pos width) { return content[(height - 1) * this->width + width]; }
Screen& move(pos height, pos width) { cursor = (height - 1) * this->width + width;  return *this; }

private: 
	pos height = 0; 
	pos width = 0; 
	pos cursor = 0; 
	std::string content; 
};

int main() {

}
*/