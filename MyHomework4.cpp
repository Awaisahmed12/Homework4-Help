// Awais Ahmed
// Programming Spring 2019, Rincon
// 25 February 2019
// This code handles files via input and output. There are
// 4 different functions decided by the user

#include <iostream>
#include <fstream>
using namespace std;

//This function copies the text inside a file to another file with no white space
void removeWhiteSpace(string userFile){
	
	string userWord;

	ifstream inFile;
	inFile.open(userFile.c_str());
  	ofstream outFile;
  	outFile.open("output.txt");
  	
  	if (inFile.is_open() and outFile.is_open()){
		while(inFile >> userWord){
			if (userWord != " "){
				outFile << userWord;
			}
			else{
				continue;
			}
		}
	}
  	
  	
  	outFile.close();
  	inFile.close();
}

// This function counts all characters in a file and prints it to another file
void countCharacters(string userFile){
	
	string userWord;
	int count = 0;

	ifstream inFile;
	inFile.open(userFile.c_str());
  	ofstream outFile;
  	outFile.open("output.txt");
  	
  	if (inFile.is_open() and outFile.is_open()){
		while(inFile >> userWord){
			for(int i = 0; i < userWord.length(); i++){
				if(!isspace(userWord[i])){
					count+=1;
			}
		}
	}
  	
  	outFile << count;
  	outFile.close();
  	inFile.close();
}
}
//This function counts the number of words
void countWords(string userFile){
	
	string userWord;
	int count = 0;

	ifstream inFile;
	inFile.open(userFile.c_str());
  	ofstream outFile;
  	outFile.open("output.txt");
  	
  	if (inFile.is_open() and outFile.is_open()){
		while(inFile >> userWord){
			if (userWord != " "){
				count++;
			}
			else{
				continue;
			}
		}
	}
  	
  	outFile << count;
  	outFile.close();
  	inFile.close();
}
// Replaces all vowels with a '3'
/* not working ##
void replaceVowels(string userFile){
	
	string userWord;

	ifstream inFile;
	inFile.open(userFile.c_str());
  	ofstream outFile;
  	outFile.open("output.txt");
  	
  	if (inFile.is_open() and outFile.is_open() ){
		if (inFile.get(userWord)){
			if (userWord != L'\n'){
				for(int i = 0; i < userWord.length(); i++){
					if(userWord[i] == 'a' or userWord[i] == 'e' or userWord[i] == 'i' or userWord[i] == 'o' or userWord[i] == 'u'){
						outFile << "3";
					}
					else {
						outFile << userWord[i];
						}
														}
		}
		
		}
			
			
		}

  	outFile.close();
  	inFile.close();
}
*/





/*

##############################
#*******"Main function"******#
##############################

*/
int main () {
	string userInp;
	int selection;
	cin >> userInp;
	cin >> selection;
	
	if (selection == 1){
	removeWhiteSpace(userInp);}
	
	else if(selection == 2){
	countCharacters(userInp);}
	
	else if(selection == 3){
	countWords(userInp);}

	
  	return 0;
}
