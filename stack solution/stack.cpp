#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
//#include <sdtio.h>
//#include <conio.h>
#include <math.h>
#include <string>
#include <stack>          


using namespace std;

//declaration block.

//declaration of functions.
void displayMenu(); //menu displayer.

//different functions.
void function1();
void function2();
void function3();
void function4();
void function5();
void function6();
void function7();
void function8();
void function9();


//declaration of variables.
int userchoice = 0;
char word[80];
int size = 0;
int tmp_size = 0;
string str_holder;

//functioning blocks.

int main() {
			//starts the programme.
			cout << endl <<"      WELCOME!" << endl <<endl;
			cout <<"Press 5 to continue: ";
			cin >> userchoice;
			system("CLS");
			
			//stack.
			std::stack<string> mystack;
			//stack that holds the string temporarily.
			std::stack<string> tmp_holder;
			
			
		// loop until user choose the code of quit(8)
		do{
			
			system("CLS");
			displayMenu(); //displaying the menu.
			//asking for choice number.
			cout <<endl<< "Enter your choice number: " ;
			cin >> userchoice;
			
			if (userchoice == 1) {
		    	function1();
		    	mystack.push(word);
		    	size = size + 1;
				cout << endl <<word<<" is inserted.";
		      }
		      
		    else if (userchoice == 2) {
		    	mystack.pop();
		    	size = size - 1;
		    	function2();  
		      }
		      
		    else if (userchoice == 3) {
		    	function3();
				cout << mystack.top();  
		      }
		      
		    else if (userchoice == 4) {
		    	if(size == 0){
		    		cout << "Stack is empty.";
				}
				else{
		    	function4();
		    	str_holder = "";  // Clearing the contents of sentence holder.
					do{
						tmp_holder.push(mystack.top());
						tmp_size = tmp_size + 1;
						mystack.pop();
			    		size = size - 1;
					}while (size != 0);
					do{
						str_holder = str_holder + " ";    // Adds space between each character.
						str_holder = str_holder + tmp_holder.top();
						mystack.push(tmp_holder.top());
						size = size + 1;
						tmp_holder.pop();
						tmp_size = tmp_size - 1;
					}while (tmp_size != 0);
					cout << str_holder<< endl;				
			      }
		  		}
		      
		    else if (userchoice == 5) {
		    	function5();
				cout << size << endl;  
		      }
		      
		    else if (userchoice == 6) {
		    	function6();  
		      }
		      
		    else if (userchoice == 7) {
		    	do{
		    		mystack.pop();
		    		size = size - 1;
				}while (size != 0);
		    	function7();  
		      }
		      
		    else if (userchoice == 8) {
				function8();
				break;
		      }
		      
		    else {
		      	function9();
		      }
			
		cout <<endl << endl << "Press 5 to continue: " ;
		cin >> userchoice;	
		}while (userchoice != 8);
		
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
	  void function1(){
	  	cout << endl<< "Enter the word you would like to insert: ";
	  	cin >> word;	  
	  }
	  
	  //Pop off word from stack. 
	  void function2(){
	  	cout << " Top Word is removed" <<endl;
	  }
	  
	  //Print the top word on the stack.
	  void function3(){
	  	cout << "Top word is: ";
	  }
	  
	  //Print all the words in the stack, as a sentence.
	  void function4(){
	  	cout << "Contents of stacks are:" <<endl;
	  }
	  
	  //Count the number of items in the stack.
	  void function5(){
	  	cout << "Total items are: " ;
	  }
	  
	  //Tell if stack is empty or not.
	  void function6(){
	  	if(size == 0){
	  		cout << "Stack is empty.";
		  }
		else{
		  	cout << "Stack is not empty." << "It contains " << size << " items.";
		}
	  }
	  
	  //Delete everything in the stack.
	  void function7(){
	  	cout << "Stack is cleared." <<endl;
	  }
	  
	  //Quit
	  void function8(){
	  		cout << endl << "You have closed the program" << endl;
	    	cout << "   Good Bye!" <<endl;
	  }
	  
	  //Inform invalid choice.
	  void function9(){
	  	cout << "Invalid choice" <<endl;
	  }
	  
	  
	  
	  
	  

