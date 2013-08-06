/*  Lab 06: THE CSTRING WITH POINTERS 
 *  writen by Nga Ho on 08/03/2013
 *  Instructor: Hadeel Ammari
 *  Class CS 2A - Foothill College
 */ 

#include <iostream>
#include <cstring>
using namespace std;


int main()
{
   const int MAX_LENGTH=100;
   char user_string [MAX_LENGTH]; // Declare an array of char with the MAX LENGTH
   char *head_pointer, *tail_pointer; // Two pointers
   char temp; // temporarily keeping the swapped value of char
   int string_length; 
   int k=0;
   char answer;
 
   do
   {
      cout << "Please enter your string with less than 100 characters: \n";
      cin.getline(user_string, MAX_LENGTH, '\n'); 
      string_length=strlen(user_string); // Get the string length to use for the loop   
   
      //Assign the address of the first char to the head pointer
      head_pointer = &user_string[0]; 
      //Assign the address of the last char to the tail pointer (ignore the NULL)
      tail_pointer = &user_string[string_length-1]; 
    
      while ( k != (string_length-1)/2)
      {      
         // Assign the address of the char at the position of k to the head pointer
         head_pointer = &user_string[k];
         // Assign the address of the char at the position of (string_lenth -1-k) to the tail pointer
         tail_pointer= &user_string[string_length - 1 - k];
     
         // Temporarily store the value pointed by the head pointer to temp
         temp = *head_pointer;
         // Transfer the value pointed by the tail pointer to the postion pointed by the head pointer
         *head_pointer = *tail_pointer;
         // Transfer the value of temp to the position pointed by the tail pointer
         *tail_pointer = temp; 
         // Move to the next position in the array of char
         k++;
      };  
      cout << "This is the reverse string: " << endl; 
      cout << user_string << endl; 
      cout << "\nDo you want to continue converting strings ?(Yes='y'; No='n') ";
      cin >> answer;
   } while (tolower(answer)=='y');
      cout << "Thank you! Have a good day!\n\n";
      return 0;
}



/*--------------------------------- The  Sample Run -------------------------------------------/

Please enter your string with less than 100 characters:
Welcome to CS 2A OOP Methods in C++
This is the reverse string:
++C ni sdohteM POO A2 SC ot emocleW

Do you want to continue converting strings ?(Yes='y'; No='n') n
Thank you! Have a good day!

Press any key to continue . . .

/------------------------------- End of the Sample Run ----------------------------------------*/

