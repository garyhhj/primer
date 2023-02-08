#include <iostream>
#include <string>
#include <vector>

/*
class Screen; 
class WindowsMgr {

public:
	WindowsMgr() = default;
	std::vector<Screen>& getVs() { return vs; }
	void clear(int vsIndex); 

private:
	std::vector<Screen> vs;
};

class Screen {
	friend void WindowsMgr::clear(int vsIndex); 
public:
	typedef std::string::size_type pos; 

	Screen() = default; 
	Screen(pos initialRow, pos initialCol)
		: row(initialRow), col(initialCol), content(row* col, 'd') {}


private:
	pos row; 
	pos col;
	std::string content; 
};

void WindowsMgr::clear(int vsIndex) {
	Screen& screen = vs[vsIndex];
	screen.content = std::string(screen.row * screen.col, 'c');
}


int main() {
	Screen s(3, 3); 

	WindowsMgr wm; 
	wm.getVs().push_back(s); 

	wm.clear(0); 
}
*/