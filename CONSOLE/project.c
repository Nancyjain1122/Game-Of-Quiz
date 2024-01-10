#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

void intro();//introduction to quiz can be call repaetadily
void start();
void c();
void cplus();
void java();
void python();
void mysql();
void tab(int n);//tab k liye
void newline(int n);//newline k liye
void cls();// screen ko clear karne k liye
void display_score();
void game_over();
void countdown();


char category[30];
char name[50];
int ch;
int choice;
int score = 0;
time_t start_time;


int main()
{
 intro();
 return 0;
} 
void intro()
{
    newline(6);
    tab(4); printf("********************************************************");newline(1);
    tab(4); printf("               Welcome to Quiz Game!                    ");newline(1);
    tab(4); printf("********************************************************");newline(4);
    tab(4); printf("Enter your Name:  ");
    gets(name);
    cls();
    newline(6);
    tab(4);printf("HELLO! Dear %s",name);newline(1);
    tab(4);printf("-------------------------------------");newline(1);
    tab(4);printf("Here are the some Rules of this Game.");newline(1);
    tab(4);printf("-------------------------------------");newline(3);
    tab(4);printf( "1. You are supposed to answers the questions in this game !!" );   newline(2);
    Sleep(1000);
    tab(4);printf( "2. There will be 4 options given for each questions in this game.." );newline(2);
    Sleep(1000);
    tab(4);printf( "3. For each correct answer, you will be awarded with 1 point !!" );newline(2);
    Sleep(1000);
    tab(4);printf( "4. As soon as you answer a question, you will be directed to the next question without any pause." );newline(2); 
    Sleep(1000);
    tab(4);printf( "5. If your answer is wrong, no marks will be deducted from your score !!" );newline(3);
    Sleep(1000);
    tab(4);printf( "!! Wish you all the best !!" );
    Sleep(10000);
    cls();
    start();
                  

}
void start()
{
    newline(6);
    tab(4); printf(" Choose a category to play a quiz Game\n:");
    tab(4); printf("1. C\n");
    tab(4); printf("2. C++\n");
    tab(4); printf("3. JAVA\n");
    tab(4); printf("4. PYTHON\n");
    tab(4); printf("5. MYSQL\n");
    tab(4); printf("\nEnter your choice (1-5): ");
    scanf("%d", &choice);
	
    if(choice==1)
    {
    	countdown();
        c();
    }
    else if(choice==2)
    {
    	countdown();
        cplus();          
    }
    else if(choice==3)
    {
    	countdown();
        java();        
    }
    else if(choice==4)
    {
    	countdown();
        python();
    }
    else if(choice==5)
    {
    	countdown();
        mysql();    
    }          
}

void c()
{

    int ans, choice;
    char c_ans;
    int score=0;

    newline(6);
    tab(4); printf("*******************************************************\n");
    tab(4); printf("              welcome to C Quiz\n");
    tab(4); printf("*******************************************************\n\n");
            printf("Question 1: Who is the father of C language??\n");
			printf(" a) Steve Jobs \n b) James Gosling \n c) Dennis Ritchie \n d) Rasmus Lerdorf \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);

				   if (ans == 'c') 
				   {
				      printf(" Correct!\n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is: Dennis Ritchie \n \n" );
				       }
			printf("Question 2: Which of the following is not a valid C variable name? ?\n");
			printf(" a) int number; \n b) float rate; \n c) int variable_count; \n d) int $main; \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);

				   if (ans == 'd') 
				   {
				      printf(" Correct! \n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is:  int $main; \n\n" );
				       }
		    printf("Question 3: Which of the following cannot be a variable name in C?\n");
			printf(" a) volatile \n b) true \n c) friend \n d) export \n");
			printf(" Your answer: ");
			scanf(" %d", &ans);

				   if (ans == 'a') 
				   {
				      printf(" Correct!\n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is:  volatile  \n\n" );
				       }
			printf("Question 4:  Which keyword is used to prevent any changes in the variable within a C program?\n");
			printf(" a) immutable \n b) mutable \n c) const \n d) volatile \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);

				   if (ans == 'c') 
				   {
				      printf(" Correct!\n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is: const \n \n" );
				       }
			printf("Question 5: Functions can return enumeration constants in C?\n");
			printf(" a)  true \n b) false \n c) depends on the compiler \n d) depends on the standard \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);

				   if (ans == 'a') 
				   {
				      printf(" Correct! \n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is:   true  \n\n" );
				       }
				       printf("\nYour score is: %d out of 5\n", score);
				       display_score();
				       game_over();
    
}

void cplus()
{
	int ans, choice;
    char c_ans;
    int score=0;
    newline(6);
    tab(4); printf("*******************************************************\n");
    tab(4); printf("              Welcome to  C++ Quiz\n");
    tab(4); printf("*******************************************************\n\n");
            printf("Question 1: Which of the following features must be supported by any programming language to become a pure object-oriented programming language??\n");
			printf(" a) Encapsulation \n b) Inheritance \n c) Polymorphism \n d) All of the above \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);

				   if (ans == 'd') 
				   {
				      printf(" Correct!\n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is: All of the above \n \n" );
				       }
			printf("Question 2: The programming language that has the ability to create new data types is called___?\n");
			printf(" a) Overloaded \n b) Encapsulated \n c) Reprehensible \n d) Extensible \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);

				   if (ans == 'd') 
				   {
				      printf(" Correct!\n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is:  Extensible \n\n" );
				       }
		    printf("Question 3: Which of the following is the original creator of the C++ language??\n");
			printf(" a) Dennis Ritchie \n b) Ken Thompson \n c) Bjarne Stroustrup \n d) Brian Kernighan \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);

				   if (ans == 'c') 
				   {
				      printf(" Correct!\n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is:  Bjarne Stroustrup  \n" );
				       }
			printf("Question 4: Which of the following is the correct syntax to read the single character to console in the C++ language?\n");
			printf(" a) Read ch() \n b) Getline vh() \n c) get(ch) \n d) Scanf(ch) \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);

				   if (ans == 'c') 
				   {
				      printf(" Correct!\n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is: get(ch)  \n \n" );
				       }
			printf("Question 5: The C++ language is ______ object-oriented language?\n");
			printf(" a) Pure Object oriented \n b) Not Object oriented \n c) Semi Object-oriented or Partial Object-oriented \n d) None of the above  \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);

				   if (ans == 'c') 
				   {
				      printf(" Correct!\n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is:  Semi Object-oriented or Partial Object-oriented \n" );
				       }

                          printf("\nYour score is: %d out of 5\n", score);
                          display_score();
				          game_over();
    
}

void java()
{
    int ans, choice;
    char c_ans;
    int score=0;
    newline(6);
    tab(4); printf("*******************************************************\n");
    tab(4); printf("              Welcome to  JAVA Quiz\n");
    tab(4); printf("*******************************************************\n\n");
            printf("Question 1:  Number of primitive data types in Java are?\n");
			printf(" a) 6 \n b) 7 \n c) 8 \n d) 9\n");
			printf(" Your answer: ");
			scanf(" %c", &ans);

				   if (ans == 'c') 
				   {
				      printf(" Correct!\n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is:  8 \n\n" );
				       }
			printf("Question 2: Arrays in java are?\n");
			printf(" a) Object references \n b) Objects \n c) Primitive data type \n d) None\n");
			printf(" Your answer: ");
			scanf(" %c", &ans);

				   if (ans == 'b') 
				   {
				      printf(" Correct! \n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is:  Objects \n \n" );
				       }
			printf("Question 3: Identify the corrected definition of a package?\n");
			printf(" a) A Package is a Collection Of Editing tools \n b) A Package is a collection of classes \n c) A Package is a collection of classes and Interfaces \n d) A Package is a collection of Interfaces\n");
			printf(" Your answer: ");
			scanf(" %c", &ans);
 
				   if (ans == 'c') 
				   {
				      printf(" Correct! \n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is: A Package is a collection of classes and Interfaces \n \n" );
				       }
			printf("Question 4: Identify the modifier which cannot be used for constructor?\n");
			printf(" a) Public \n b) Protected \n c) Dynamic \n d) static \n \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);
 
				   if (ans == 'd') 
				   {
				      printf(" Correct! \n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is: Static \n \n" );
				       }
			printf("Question 5:  Identify the return type of a method that does not return any value.?\n");
			printf(" a) int \n b) void \n c) double \n d) none \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);
 
				   if (ans == 'b') 
				   {
				      printf(" Correct! \n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is: void \n \n" );
				       }
				       printf("\nYour score is: %d out of 5\n", score);
				       display_score();
				       game_over();
    
}


void python()
{
    char ans, choice;
    char c_ans;
    int score=0;
    newline(6);
    tab(4); printf("*******************************************************\n");
    tab(4); printf("              Welcome to  PYTHON Quiz\n");
    tab(4); printf("*******************************************************\n\n");
            printf("Question 1:  Who developed the Python language?\n");
			printf(" a) Zim Den \n b) Guido van Rossum \n c) Niene Stom \n d) Wick van Rossum \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);

				   if (ans == 'b') 
				   {
				      printf(" Correct!\n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is:  Guido van Rossum \n\n" );
				       }
			printf("Question 2:  In which year was the Python language developed?\n");
			printf(" a) 1995 \n b)1972 \n c) 1981 \n d)1989\n");
			printf(" Your answer: ");
			scanf(" %c", &ans);

				   if (ans == 'd') 
				   {
				      printf(" Correct! \n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is:  1989 \n\n" );
				       }
			printf("Question 3: In which language is Python written?\n");
			printf(" a) English \n b) PHP \n c) C \n d) All of the above \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);
 
				   if (ans == 'c') 
				   {
				      printf(" Correct! \n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is: c \n \n");
				       }
			printf("Question 4: What do we use to define a block of code in Python language?\n");
			printf(" a) Key \n b) Brackets \n c) Indentation \n d) None of the above \n \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);
 
				   if (ans == 'c') 
				   {
				      printf(" Correct! \n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is: Identation \n \n" );
				       }
			printf("Question 5:  What is the method inside the class in python language?\n");
			printf(" a) Object \n b) Function \n c) Attribute \n d) Argument \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);
 
				   if (ans == 'b') 
				   {
				      printf(" Correct! \n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is: Function \n \n" );
				       }
				       printf("\nYour score is: %d out of 5\n", score);
				       display_score();
				       game_over();
    
}




void mysql()
{
    int ans, choice;
    char c_ans;
    int score=0;
    newline(6);
    tab(4); printf("*******************************************************\n");
    tab(4); printf("              Welcome to  MYSQL Quiz\n");
    tab(4); printf("*******************************************************\n\n");
            printf("Question 1:  What is MySQL?\n");
			printf(" a) A Relational database management system \n b) Developed,distributed and supported by Oracle corporation \n c) Cross-Plateform,Open-source and free \n d) All the options are correct \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);

				   if (ans == 'a') 
				   {
				      printf(" Correct!\n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is:  A Relational database management system  \n\n" );
				       }
			printf("Question 2:  To see the list of options provided by MYSQL which of the following command is used?\n");
			printf(" a) HELP \n b) -HELP \n c) --HELP \n d) GET\n");
			printf(" Your answer: ");
			scanf(" %c", &ans);

				   if (ans == 'C') 
				   {
				      printf(" Correct! \n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is:  --HELP \n\n" );
				       }
			printf("Question 3: In which language MYSQL is written?\n");
			printf(" a) Python \n b) Java\n c) C,C++ \n d) ELP \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);
 
				   if (ans == 'c') 
				   {
				      printf(" Correct! \n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is: c,c++ \n \n");
				       }
			printf("Question 4: To know your MYSQL version and current date which of the following command you should use?\n");
			printf(" a) VERSION, CURRENT_DATE(); \n b) SELECT VERSION, CURRENTDATE(); \n c) SELECT VERSION(), CURRENT_DATE; \n d) SELECT VERSON(),CURRENT_DATE(); \n \n");
			printf(" Your answer: ");
			scanf(" %c", &ans);
 
				   if (ans == 'c') 
				   {
				      printf(" Correct! \n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is: SELECT VERSION(), CURRENT_DATE; \n \n" );
				       }
			printf("Question 5: Is a semicolon necessary after every query?\n");
			printf(" a) True \n b) false \n ");
			printf(" Your answer: ");
			scanf(" %c", &ans);
 
				   if (ans == 'a') 
				   {
				      printf(" Correct! \n\n");
				      score++;
				   }
				   else
				       {
				           printf(" Wrong!\n correct answer is: True \n \n" );
				       }
					   printf("\nYour score is: %d out of 5\n", score);
					   display_score();
				       game_over();        
}

void countdown()
 {
    int seconds = 3; // Change the countdown time here
    printf("\nStarting in ");
    while (seconds > 0)
	{
        printf("%d ", seconds);
        Sleep(1000); // Windows-specific function to sleep for 1 second
        seconds--;
    }
    printf("\n\n");
}


void display_score() 
{
    time_t end_time = time(NULL);
    int total_time = (int) difftime(end_time, start_time);
    printf("\nTotal time taken: %d seconds\n", total_time);
}

void game_over() 
{
    char c_ans;
    newline(3);
    tab(4); printf("*******************************************************\n");
    tab(4); printf("              GAME OVER\n");
    tab(4); printf("*******************************************************\n\n");
    newline(2);
    tab(4); printf("Do you want to play again? (Y/N): ");
    fflush(stdin);
    scanf("%c", & c_ans);
    if (c_ans == 'Y' || c_ans == 'y') {
        cls();
        start();
    } else {
        newline(1);
        tab(4); printf("Thank you for playing. Goodbye!");
        newline(2);
        exit(0);
    }
}



void tab(int n)
{
	int i;
    for( i=1;i<=n;i++)
    printf("\t");
}

void newline(int n)
{
	int i;
    for(i=1;i<=n;i++)
    printf("\n");
}

void cls()
{
    system("cls");
}


