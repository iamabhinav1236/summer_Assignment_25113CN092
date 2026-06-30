// Write a program to Create quiz application. 

// Approach Used - Display multiple-choice questions, take user answers, check correctness, and calculating score at the end.
// Difficulty Level - Medium
// Concept Used - Use of functions, loops, if-else conditions, arrays, and string handling

#include <stdio.h>

int runQuiz();                                      // Function Declaration

int main() 
{
    int score;
    score = runQuiz();                              // Calling function
    
    printf("\nYour final score is: %d\n", score);
    return 0;
}

int runQuiz()                                       // Function Definition
{
    int score = 0;
    int answer;

    printf("\n--- Quiz Application ---\n");

    // Question 1
    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) 
    {
        printf("Correct!\n");
        score++;
    } 
    else 
    {
        printf("Wrong! Correct answer is Delhi.\n");
    }

    // Question 2
    printf("\nQ2. Which language can be used to write programs?\n");
    printf("1. English\n2. C Language\n3. Assembly\n4. Binary\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 2) 
    {
        printf("Correct!\n");
        score++;
    } 
    else 
    {
        printf("Wrong! Correct answer is C Language.\n");
    }

    // Question 3
    printf("\nQ3. Who is known as the father of computers?\n");
    printf("1. Charles Babbage\n2. Alan Turing\n3. Bill Gates\n4. Steve Jobs\n");
    printf("Enter your answer (1-4): ");
    scanf("%d", &answer);
    if (answer == 1) 
    {
        printf("Correct!\n");
        score++;
    } 
    else 
    {
        printf("Wrong! Correct answer is Charles Babbage.\n");
    }

    return score;
}
