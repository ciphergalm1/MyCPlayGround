#include<iostream>
#include<string>
#include<map>

using namespace std;

// a simple program to solve Morse Code like ".---" or "-.-." split by spaces
//pair<string, char > MorseCode;
map<string,char> Morse2AlphaList;

void setUpMorseList() {

	//insert the alphabets into the dictionary
	Morse2AlphaList.insert(pair<string,char>(".-",'A'));
	Morse2AlphaList.insert(pair<string, char>("-...", 'B'));
	Morse2AlphaList.insert(pair<string, char>("-.-.", 'C'));
	Morse2AlphaList.insert(pair<string, char>("-..", 'D'));
	Morse2AlphaList.insert(pair<string, char>(".", 'E'));
	Morse2AlphaList.insert(pair<string, char>("..-.", 'F'));
	Morse2AlphaList.insert(pair<string, char>("--.", 'G'));
	Morse2AlphaList.insert(pair<string, char>("....", 'H'));
	Morse2AlphaList.insert(pair<string, char>("..", 'I'));
	Morse2AlphaList.insert(pair<string, char>(".---", 'J'));
	Morse2AlphaList.insert(pair<string, char>("-.-", 'K'));
	Morse2AlphaList.insert(pair<string, char>(".-..", 'L'));
	Morse2AlphaList.insert(pair<string, char>("--", 'M'));
	Morse2AlphaList.insert(pair<string, char>("-.", 'N'));
	Morse2AlphaList.insert(pair<string, char>("---", 'O'));
	Morse2AlphaList.insert(pair<string, char>(".--.", 'P'));
	Morse2AlphaList.insert(pair<string, char>("--.-", 'Q'));
	Morse2AlphaList.insert(pair<string, char>(".-.", 'R'));
	Morse2AlphaList.insert(pair<string, char>("...", 'S'));
	Morse2AlphaList.insert(pair<string, char>("-", 'T'));
	Morse2AlphaList.insert(pair<string, char>("..-", 'U'));
	Morse2AlphaList.insert(pair<string, char>("...-", 'V'));
	Morse2AlphaList.insert(pair<string, char>(".--", 'W'));
	Morse2AlphaList.insert(pair<string, char>("-..-", 'X'));
	Morse2AlphaList.insert(pair<string, char>("-.--", 'Y'));
	Morse2AlphaList.insert(pair<string, char>("--..", 'Z'));

	//insert digits into the dictionary
	
	Morse2AlphaList.insert(pair<string, char>(".----", '1'));
	Morse2AlphaList.insert(pair<string, char>("..---", '2'));
	Morse2AlphaList.insert(pair<string, char>("...--", '3'));
	Morse2AlphaList.insert(pair<string, char>("....-", '4'));
	Morse2AlphaList.insert(pair<string, char>(".....", '5'));
	Morse2AlphaList.insert(pair<string, char>("-....", '6'));
	Morse2AlphaList.insert(pair<string, char>("--...", '7'));
	Morse2AlphaList.insert(pair<string, char>("---..", '8'));
	Morse2AlphaList.insert(pair<string, char>("----.", '9'));
	Morse2AlphaList.insert(pair<string, char>("-----", '0'));

	Morse2AlphaList.insert(pair<string,char>("/",' '));
	//Morse2AlphaList.insert(pair<string,char>("",' '));

}

int main() {
	string input;
	map<string, char>::iterator morseIt;
	setUpMorseList();
	while (cin>>input&& input!="END")
	{
		char output;
		try
		{
			morseIt = Morse2AlphaList.find(input);
			if (morseIt == Morse2AlphaList.end()) {
				cout << "input error! Your Morse code had an error: " << endl;
				cout << "The error is : " << input << endl;
			}
			else {
				output = morseIt->second;
				cout << output;
			}
		}
		catch (const std::exception&)
		{

		}
		
	}

	cout << endl;
	system("pause");

	return 0;
}