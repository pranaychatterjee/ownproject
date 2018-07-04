#define max 80
#define max_try 5
#define max_row 7


#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int get_letter(char,string,string&);

int main()
{
	string name;
	char send_letter;
	int wrong_input=0;
	string word;
	string words[] =
	{
		"india",
		"pakistan",
		"nepal",
		"malaysia",
		"philippines",
		"australia",
		"iran",
		"ethiopia",
		"oman",
		"indonesia"
		"america"
		"britain"
		"japan"
		"china"
		"southkorea"
		"southafrica"
		"greenland"
		"mexico"
		"canada"
		"brazil"
		"germany"
		"france"
		"scotland"
		"madagascar"
		"srilanka"
	};
	srand(time(NULL));
	int n=rand()%25;
	word=words[n];
	
	string unknown(word.length(),'*');
	
	cout << "\n\nWelcome to hangman...Guess a country Name";
	cout << "\n\nEach letter is represented by a star.";
	cout << "\n\nYou have to type only one letter in one try";
	cout << "\n\nYou have " << max_try << " tries to try and guess the word.";
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

	while(wrong_input<max_try)
{
	cout << "\n\n" << unknown;
	cout << "\n\nGuess a letter: ";
	cin>>send_letter;
	if(get_letter(send_letter,word,unknown)==0)
{
	cout<<endl<<"Letter isn't correct";
	wrong_input++;
}
	else
{
	cout<<endl<<"You Found a letter";
}
	cout << "You have " << max_try - wrong_input;
	cout << " guesses left." << endl;
	if(word==unknown)
{
	cout<<word<<endl;
	cout<<"Yeah! You got it";
	break;
}
}
	if(wrong_input==max_try)
{
	cout << "\nSorry, you lose...you've been hanged." << endl;
	cout << "The word was : " << word << endl;
}
	return 0;
}


	int get_letter(char guess , string secretword , string &guessword)
{
	int i;
	int match=0;
	int len=secretword.length();
	for(i=0;i<len;i++)
{
	if(guess==guessword[i])
	return 0;
	if(guess==secretword[i])
{
	guessword[i]=guess;
	match++;
}
}
	return match;
}


