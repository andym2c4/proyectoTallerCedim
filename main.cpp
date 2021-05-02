#include <iostream>
#include <string>
int main(){
	std::cout<<"Hola mundo";
	std::string s = "Hola";
	std::cout<<std::endl;
	for (int i=0;i<4;i++){
		std::cout << s[i];
	}
	return 0;
}
