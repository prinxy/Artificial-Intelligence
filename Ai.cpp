


			// XUX INTERACTIVE AI


#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <ctime>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <functional>


using namespace std;

// these global variables are for creating and checking admin
// priviledge
string bossInput, admin_name, admin_password, pass_check;
int admin_number ;
bool isDone = true;


void panel();
void greeting();
void response();
void introduction();
void task();
void welcome();
void welcome_reply();
void register_admin();
void help();
void prompt_password();		// to get passwod for admin func
void maths ();
void math_operations ();






int main ()
{
  welcome();
  while (isDone)
  {
    panel();
  }
}


			// :: Help
void help ()
{
   cout << "These are some commands i respond to \n\n";
   cout << "** Hello \n"
	<< "** Tell me about you \n"
	<< "** Are you there \n"
	<< "** Clear screen \n"
	<< "** Am good and You  ( when xux say hope "
	<< "you are good ) \n"
	<< "** whats the time \n"
	<< "** Create admin \n"
	<< "** Play Song \n"
	<< "** Clear Screen \n"
	<< "** Maths \n"
	<< "** Help \n"
	<< endl;

}


			// :: WELCOME MESSAGE

void welcome()
{
  system("clear");
  srand(static_cast <unsigned>(time(NULL)));
  string welcome [] = {">>> welcome boss, how are you doing today ?",
	  		">>> welcome boss, hope you are good ?",
			">>> welcome Sir, so glad you're back !!!",
			">>> welcome Sir", ">>> Welcome Boss", 
			">>> Welcome back Sir"};
  int i = rand ()%9 + 1;
  cout << welcome[i] << endl;
  cout << endl;
}




			// :: AI'S REPLY TO HOW ARE YOU
			// ---------------------------|

void welcome_reply()
{
  srand(time(NULL));
  string welcomeReply [] = {">>> Am great Sir",">>> Am fine Boss",
	  		    ">>> A beautiful day for me Sir", 
			    ">>> Unphanthomed bliss sir"};
  int i = rand ()%4;
  cout  << welcomeReply[i] << endl;
  cout << endl;
}



			// :: GREETING FUNCTION

void greeting()
{
  srand(time(NULL));
  string greet[] = {">>> Hello Boss",">>> Hi Boss",
	  	    ">>> How are you doing Boss"};
  
  int i = rand ()%3;
  cout <<greet[i] << endl;
  cout << endl;
}



			// :: AI'S FUNCTION TO NAME

void response()
{
  srand(time(NULL));
  string reply[] = {">>> Yes Boss",">>> Yes Sir",">>> Sir",">>> Boss", 
	            ">>> Right here boss", ">>> Am here Sir"};

  int i = rand ()%6;
  cout << reply[i] << endl;
  cout << endl;
}



			// :: INTRODUCTION FUNCTION BY AI

void introduction()
{
  srand(time(NULL));
  string myIntro[]={">>> My name is Xux",
	  	    ">>> I am an Artificial Intelligent",
		    ">>> You should should definitely know me Sir",
		    ">>> Xux is my name, an Artificial Intelligence"};

  int i = rand ()%4;
  cout << myIntro[i] << endl;
  cout << endl;
}




			// :: FUNCTION TO OUTPUT TASK
			// :: MORE TASK WILL BE ADDED

void task()
{
  srand(time(NULL));
  string can_do = ">>> Play Songs\n>>> Calculate\n>>> Am a Reminder\n>>> Others i can do are hidden for My Boss";
  
  cout << can_do << endl;
  cout << endl;
}




			// :: AI Admin 

void register_admin()
{

  system("clear");
  cout << "Important Notice:\n" << setw(46) << "******************\n" <<
	  "Admin can only be one and cannot be changed, that's how i "<<
	  "was programmed\n\n" << "Enter Admin name: ";

  getline (cin, admin_name);

  cout << "Enter Admin Password: ";
  cin >> admin_password;

  system("clear");
  cout << "Admin created Sucessfully. Explore, i have great "
	  << "Functionality" << endl;
  cin.ignore();
  admin_number = 1;
  cout << endl;
}



void maths ()
{
   system ("clear");
   cout << ">>> Maths operation are listed below.\nChoose "
   	<< "respective keys to do operations \n\n"
	<< "1. Percentage"
	// More will be added here
	<< endl;
   math_operations ();
}



void math_operations ()
{
   int choice;
   cout << "\n\nChoose an operation by key enter [ 0 ] to quit"
	<< " maths\n"
	<< ": ";
   cin >> choice;

   switch (choice)
   {
      case 0:
	system ("clear");
	cout << "Maths function was exited ";
	cin.ignore();
	panel();
	break;
      case 1:
      {
        system ("clear");
        auto num_2_know_percent = 0, percent_range = 0;
	int result;
	char choice;
	while (true)
	{
	   cout << "Enter percentage value e.g 10%, don't "
	        << "include percentage sign\n: ";
	   cin >> percent_range;
	   cout << "Enter percent value: ";
	   cin >> num_2_know_percent;

	 result = ( num_2_know_percent * percent_range ) / 100 ;

	   cout << percent_range << "%" << " of " 
	       << num_2_know_percent << " is " 
	       << result << endl;

	
	   cout <<"Do you want to do another operation"
		<<" [ Y / N ]: ";
	   cin >> choice;

	   if ( choice == 'n' || choice == 'N')
	   {
	      break;
	   }
	   system ("clear");
	}	// while loop closer
      }	      // switch case 1 closer
      default:
      	  cout << "Inappropriate key choosen" << endl;
	  cin.ignore ();
	  break;
   }	   // switch closer
}        // function closer 
 
				






void panel()
{
   getline(cin,bossInput);

   // this is to transform string to lower case
   transform(bossInput.begin(), bossInput.end(), bossInput.begin(), ::tolower);



   if(bossInput=="hello"|| bossInput=="hi")
   {
     greeting();
   }




   else if (bossInput == "who are you" || bossInput == "What are you" ||
	    bossInput == "tell me about you")
   {
     introduction();
   }




   else if (bossInput=="what can you do"|| bossInput=="what do you do"||
	    bossInput=="list duties")
   {
     task();
   }




   else if (bossInput=="hey xux" || bossInput == "hello xux" ||
	    bossInput=="are you there")
   {
     response();
   }



   else if (bossInput == "help")
   {
      help ();
   }




   else if (bossInput=="clearscreen" || bossInput == "clear screen")
   {
     system("clear");
     cout << ">>> Screen was just cleared boss" << endl;
   }

   else if ( bossInput == "maths" || bossInput == "calculation" )
   {
      maths ();
   }




   else if(bossInput=="am good and you" || bossInput=="am good and you"
	   || bossInput == "great what about you" ||
	   bossInput == "am doing nice you" || bossInput =="fine you")
   {
     welcome_reply();
   }




   else if (bossInput =="fine thank you" || bossInput=="good" ||
	    bossInput =="great" || bossInput == "beautifully well" ||
	    bossInput =="thank you" || bossInput == "nice")
   {
     cout << ">>> ..." << endl;
   }




   else if( bossInput == "what is the time Xux" ||
	    bossInput == "what time is it" || bossInput == "time xux")
   {
     cout << ">>> Boss, thats the complete date and time "<<endl;
     cout << endl;
     system("date");
   }


   else if (bossInput == "create admin")
   {
     if (admin_number > 0)
     {
	cout << ">> Admin Exist and can't be overriden" << endl;
     }
     else
       register_admin();
   }


/*PACKAGE NOT INSTALLED
   else if(bossInput =="open calender" || bossInput=="calender" ||
	   bossInput =="show me calender")
   {
     cout << ">>> Current Month Calender here Sir ::> ";
     system("gcal");
   }
PACKAGE NOT INSTALLED
*/



   else if (bossInput=="goodbye xux" || bossInput == "good bye" ||
	    bossInput=="goodbye")
   {
     system("clear");
     cout <<">>> bye boss" << endl;
     isDone = false;
     system("exit");
   }




		     // REGISTERED BOSS COMMANDS
// BOSS COMMANDS WILL BEGIN HERE :: BOSS COMMANDS WILL BEGIN HERE
////////////////////////////////////////////////////////////////////




   else if (bossInput == "song" || bossInput == "play song")
   {
     cout << "\n>> Admin function loading...\n";
     if (admin_number < 1) {
	cout << ">> can't access this, admin needed."
		<<"\n\t\tInput ** create admin** to add one"
	          << endl;
     }

     else if (admin_number > 0)
     {
	cout << ">> Admin password needed\n\nPassword: ";
	cin >> pass_check;

	if (pass_check != admin_password){
		cout << "Access Denied, invalid password\n" << endl;
		cin.ignore();
	}

	else if (pass_check == admin_password)
	{
	  cout << "Access granted\n\n"<< endl;
          system("mpd");
          system("ncmpcpp");
          system("clear");
          cout <<">>you just used the media player boss, "
	       << "hope you had a cool time boss\n" << endl;
	  cin.ignore();
        }
     }
   }


   else 
   {
     cout << ">>> Invalid input Boss" << endl;
     cout << endl;
   }
}
