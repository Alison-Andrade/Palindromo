#include <iostream>
#include <stack>

int main(int argc, char const *argv[]){

	std::stack<char> s;

	std::string in, out = "";

	std::cin >> in;

	for (unsigned int i = 0; i < in.size(); i++){
		s.push(in[i]);
	}

	while(!s.empty()){
		out += s.top();
		s.pop();
	}

	if (in == out){
		std::cout << "É palindromo!" << std::endl;
	}else{
		std::cout << "Não é palindromo!" << std::endl;
	}


	return 0;
}