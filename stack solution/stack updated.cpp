#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <math.h>
#include <string>
#include <stack>          


using namespace std;

//declaration block.

//declaration of functions.
void displayMenu(); //menu displayer.

//different functions.
void push();
void pop();
void sees_top_content();
void printer();
void counter();
void empty_or_not();
void cleaner();
void quit();
void invalid_choice();


//Declaration of stacks.			
//stack.
std::stack<string> mystack;
//stack that holds the string temporarily.
std::stack<string> tmp_holder;


//declaration of variables.
int userchoice = 0;
char word[80];
string str_holder;

//functioning blocks.

int main() {
			//starts the programme.
			cout << endl <<"      WELCOME!" << endl <<endl;
			cout <<"Press 5 to continue: ";
			cin >> userchoice;
			system("CLS");

			
		// loop until user choose the code of quit(8)
		while(userchoice != 8){
			
			system("CLS");
			displayMenu(); //displaying the menu.
			//asking for choice number.
			cout <<endl<< "Enter your choice number: " ;
			cin >> userchoice;
			
			if (userchoice == 1) {
		    	push();
		      }
		      
		    else if (userchoice == 2) {
		    	pop();  
		      }
		      
		    else if (userchoice == 3) {
		    	sees_top_content();  
		      }
		      
		    else if (userchoice == 4) {
		    	if(mystack.size() == 0){
		    		cout << "Stack is empty.";
				}
				else{
		    	printer();
			      }
		  		}
		      
		    else if (userchoice == 5) {
		    	counter();  
		      }
		      
		    else if (userchoice == 6) {
		    	empty_or_not();  
		      }
		      
		    else if (userchoice == 7) {
		    	cleaner();  
		      }
		      
		    else if (userchoice == 8) {
				quit();
				break;
		      }
		      
		    else {
		      	invalid_choice();
		      }
			
		cout <<endl << endl << "Press 5 to continue: " ;
		cin >> userchoice;	
		}
		
		return 0;
	}

//coding blocks for fonctions.

	// design for menu.
	  void displayMenu(){
	    cout << "" << endl;
	    cout << "Choose your choice,Please!" <<endl;
	    cout << "-------------------------" <<endl;
	    cout << "" <<endl;
	    cout << "===========================" <<endl;    
	    cout << "1. Insert word into stack." <<endl;
	    cout << "2. Pop off word from stack." <<endl;
	    cout << "3. Print the top word on the stack." <<endl;
	    cout << "4. Print all the words in the stack, as a sentence." <<endl;
	    cout << "5. Count the number of items in the stack." <<endl;
	    cout << "6. Tell if stack is empty or not." <<endl;
	    cout << "7. Delete everything in the stack." <<endl;
	    cout << "8. Quit" <<endl;
	    cout << "===========================" <<endl;
	
	  }
	  
	  //Insert word into stack.
	  void push(){
	  	cout << endl<< "Enter the word you would like to insert: ";
	  	cin >> word;
		mystack.push(word);
		cout << endl <<word<<" is inserted.";  	  
	  }
	  
	  //Pop off word from stack. 
	  void pop(){
	  	mystack.pop();
	  	cout << " Top Word is removed" <<endl;
	  }
	  
	  //Print the top word on the stack.
	  void sees_top_content(){
	  	cout << "Top word is: " << mystack.top();
	  }
	  
	  //Print all the words in the stack, as a sentence.
	  void printer(){
	  	cout << "Contents of stacks are:" <<endl;
	  	str_holder = "";  // Clearing the contents of sentence holder.
			do{
				tmp_holder.push(mystack.top());
				mystack.pop();
			}while (mystack.size() != 0);
			do{
				str_holder = str_holder + " ";    // Adds space between each character.
				str_holder = str_holder + tmp_holder.top();
				mystack.push(tmp_holder.top());
				tmp_holder.pop();
			}while (tmp_holder.size() != 0);
		cout << str_holder<< endl;	
	  }
	  
	  //Count the number of items in the stack.
	  void counter(){
	  	cout << "Total items are: " << mystack.size() << endl;
	  }
	  
	  //Tell if stack is empty or not.
	  void empty_or_not(){
	  	if(mystack.size() == 0){
	  		cout << "Stack is empty.";
		  }
		else{
		  	cout << "Stack is not empty." << "It contains " << mystack.size() << " items.";
		}
	  }
	  
	  //Delete everything in the stack.
	  void cleaner(){
	  	while (mystack.size() != 0){
			mystack.pop();
		}
	  	cout << "Stack is cleared." <<endl;
	  }
	  
	  //Quit
	  void quit(){
	  		cout << endl << "You have closed the program" << endl;
	    	cout << "   Good Bye!" <<endl;
	  }
	  
	  //Inform invalid choice.
	  void invalid_choice(){
	  	cout << "Invalid choice" <<endl;
	  }
	  
	  
	  
	  
	  

