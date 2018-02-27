// Keywords2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
using namespace std;

string user;
const int MAX_WRONG = 8;
int numOfSims = 0;

int main()
{
	// Display Title of program to user
	cout << "Welcome to Keywords II!";
	// Ask the recruit to login using thier name
	cout << "Please, sign in using your name.";
	// Hold the recruit's name in a var, and address them by it throughout the simulation.
	cin >> user;
	cout << "\n\n";
	// Display an overview of what Keywords II is to the recruit 
	cout << "Greetings, "<< user << ", this is a program where you must utilize your skills to guess the letters in a word in a certain amount of guesses.\n\n";
	// Display an directions to the recruit on how to use Keywords
	cout << "So, "<< user << "you will get a secret word and must input a letter to check to see if it is in the word. If it is, then it will be easier to find the word. If it isn't, it will add to your incorrect guesses.";


	// Create a collection of 10 words you had wrote down manually
	vector<string> words;
	words.push_back("war");
	words.push_back("battle");
	words.push_back("attack");
	words.push_back("sword");
	words.push_back("bow");
	words.push_back("axe");
	words.push_back("spear");
	words.push_back("tome");
	words.push_back("general");
	words.push_back("army");
	// Create an int var to count the number of simulations being run starting at 1
	numOfSims++;
	// Display the simulation # is staring to the recruit. 
	cout << "This is simulation #" << numOfSims << ", " << user <<".\n\n";
	// Pick new 3 random words from your collection as the secret code word the recruit has to guess. 



	// While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word

	//     Tell recruit how many incorrect guesses he or she has left

	//     Show recruit the letters he or she has guessed

	//     Show player how much of the secret word he or she has guessed

	//     Get recruit's next guess

	//     While recruit has entered a letter that he or she has already guessed

	//          Get recruit ’s guess

	//     Add the new guess to the group of used letters

	//     If the guess is in the secret word

	//          Tell the recruit the guess is correct

	//          Update the word guessed so far with the new letter

	//     Otherwise

	//          Tell the recruit the guess is incorrect

	//          Increment the number of incorrect guesses the recruit has made

	// If the recruit has made too many incorrect guesses

	//     Tell the recruit that he or she has failed the Keywords II course.

	// Otherwise

	//     Congratulate the recruit on guessing the secret words

	// Ask the recruit if they would like to run the simulation again

	// If the recruit wants to run the simulation again

	//     Increment the number of simiulations ran counter

	//     Move program execution back up to // Display the simulation # is staring to the recruit. 

	// Otherwise 

	//     Display End of Simulations to the recruit

	//     Pause the Simulation with press any key to continue
    return 0;
}

