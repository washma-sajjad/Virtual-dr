#include <stdio.h>

#define RESET "\x1B[0m"
#define RED "\x1B[31m"
#define YELLOW "\x1B[33m"
#define CYAN "\x1B[36m"

int main()
{
    // making a virtual dr app for diagnosis of diseases and this app will advise user to get proper treatment
    // declaring each illness as character
    char fever = 0; 
    char input;
    char pain_eyes = 0; // pain in eyes
    char s_breath = 0; // shortness of breath
    char diff_breath = 0; // difficulty in breathing
    char headache = 0;
    char malaria_area = 0; // travel history of malaria prone areas
    int age;
    char Y = 0; // capital Y for yes
    char y = 0; // small y for no

    printf("\n" CYAN "**************HELLO AND WELCOME!!**************\n" RESET);

    printf("\n" CYAN "We can help you diagnose any medical concern you may have.\n" RESET);
    printf("\n" YELLOW "This app will help you identify any symptoms you may be experiencing" RESET);
    printf("\n" YELLOW " and advise you properly for further diagnosis.\n" RESET);
    // letting user know the purpose of application

    printf("\nPlease enter \"Y\" as YES and \"y\" as NO as the answers for the following questions\n");
    // letting user know to answer the questions properly

    printf("\nYour cooperation is appreciated in this matter\n");

    printf("\nPlease enter your age:");
    scanf("%d", &age);

    printf("----------------------------------------------------\n");

    printf("\nNow let's get to the questions part\n");

    printf("----------------------------------------------------\n");
    
    printf("Do you have fever? Ans: ");
    scanf(" %c", &fever);

    if (fever == 'Y') // if-else condition to determine different cases of fever the user may have
    {
        printf("\n" RED "You might have seasonal fever.\n" RESET);
    }
    else
    {
        printf("\nAnswer a few more questions.\n");
    }

    // prompting user to know about more symptoms of dengue fever
    printf("\nDo you have pain in eyes? Ans: ");
    scanf(" %c", &pain_eyes);

    printf("\nDo you have headache? Ans: ");
    scanf(" %c", &headache);

    if (fever == 'Y' && pain_eyes == 'Y' && headache == 'Y') // if both cases are true then diagnose as dengue
    {
        printf("\n" RED "Regrettably you might have dengue fever.\n" RESET);
    }
    else
    {
        printf("\nPlease answer a few more questions ahead.\n");
        // telling user that there are more questions ahead
    }

    // *** Code to complete: handle malaria, breathing issues, etc. ***

    // Ask about shortness of breath
    printf("\nDo you have shortness of breath? Ans: ");
    scanf(" %c", &s_breath);

    // Ask about difficulty in breathing
    printf("\nDo you have difficulty in breathing? Ans: ");
    scanf(" %c", &diff_breath);

    // Ask about malaria area travel history
    printf("\nHave you recently traveled to a malaria-prone area? Ans: ");
    scanf(" %c", &malaria_area);

    // Decision making based on symptoms
    if (s_breath == 'Y' && diff_breath == 'Y')
    {
        printf("\n" RED "You might be having a respiratory infection.\n" RESET);
    }
    else if (malaria_area == 'Y' && fever == 'Y')
    {
        printf("\n" RED "You might have malaria. Please consult a doctor urgently.\n" RESET);
    }
    else
    {
        printf("\n" CYAN "Based on your answers, no serious illness detected, but consult a doctor if symptoms persist.\n" RESET);
    }

    printf("\n" YELLOW "Thank you for using the Virtual Doctor App!\n" RESET);

    return 0;
}
