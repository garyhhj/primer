#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <memory>

/*
//custom deleter 
class DebugDelete {
public: 
	template <typename T> 
	void operator()(T* ptr) {
		std::cout << "calling debug delete" << std::endl; 
		delete ptr; 
	}
};


//text query program 
struct QueryResult {
	mutable std::string element_; 
	mutable int count_ = 0; 
	mutable std::map<int, std::string> data_; //line num -> line 
};

class TextQuery {
public: 
	TextQuery(const std::string& fname) : fname_(fname) { }
	QueryResult Query(const std::string& element) const {
		std::fstream file{ fname_ }; 
		if (!file) {
			std::cerr << "[Error] can not open '" << fname_ << "'"; 
			return data_; 
		}

		data_.count_ = 0; 
		data_.element_ = element; 


		std::string line; 
		int line_num = 1; 
		while (getline(file, line)) {
			
			std::string word; 
			std::stringstream ss{line};
			while (ss >> word) {
				if (word == element) {
					data_.data_[line_num] = line; 
					data_.count_ += 1; 
				}
			}

			line_num += 1; 
		}

		return data_; 
	}

	void Print() const {
		std::cout << data_.element_ << " is found " << data_.count_ << " times\n"; 
		for (const auto& [line_num, line_str] : data_.data_) {
			std::cout << "    (line " << line_num << ") " << line_str << "\n"; 
		}
		std::cout << std::endl;  
	}

private:
	QueryResult data_; 
	std::string fname_; 
};

int main() {
	std::unique_ptr<TextQuery, DebugDelete> pgm_ptr(new TextQuery("sample.txt"), DebugDelete()); 
	pgm_ptr->Query("meow"); 
	pgm_ptr->Print(); 
}

*/