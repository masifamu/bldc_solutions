#include<iostream>
#include<fstream>
#include<string>
#include <dirent.h>
#include <unistd.h>

#define GetCurrentDir getcwd

std::string GetCurrentWorkingDir( void ) {
  char buff[FILENAME_MAX];
  GetCurrentDir( buff, FILENAME_MAX );
  std::string current_working_dir(buff);
  return current_working_dir;
}


int main(void){
	std::string dir = GetCurrentWorkingDir();
	std::ifstream greetingFile(dir+"/resources/greeting.txt");
	if(greetingFile.is_open()){
		std::string greetingText;
		getline(greetingFile, greetingText);
		std::cout<<greetingText<<std::endl;
	}else{
		std::cout<<"Error: "<< greetingFile.rdstate();
	}
	return 0;
}
