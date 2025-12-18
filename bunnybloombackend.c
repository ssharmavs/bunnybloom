#include<stdio.h>

int main(){
    int mood;

    printf("********\n");
    
    printf("\033[1;95m");
    printf("\n<3(> <)Welcome To BunnyBloom Farm(> <)<3\n");
    printf("\033[0;33m");
    printf("══════════════════════════════\n");
    printf("\033[1;92m");
    printf("Where your mood hop freely(> <)\n");
    printf("\033[0m");
    
    
    //mood menu
    printf("\n\033[1;92m");
    printf("How are you feeling today?(> <)");
    printf("1. ^o^Happy\n");
    printf("2. ^_^Okay\n");
    printf("3. :(Sad\n");
    printf("4. !!!Angry\n");
    printf("5. zzzTired\n");
    printf("\033[0m");

    printf("Enter your Mood Number(> <): ");
    scanf("%d",&mood);

    printf("\n\033[1;93m");
    printf("A Message from the Bunnies(> <):\n");

    if(mood==1)
       printf("The Bunnies are dancing today!! (> <) Keep Smiling.\n");
    else if(mood==2)  
       printf("A calm day in the fields ~ Take it slow.\n");
    else if(mood==3)
       printf("Even bunnies feel blue sometimes <3<*> Rest and Heal.\n");
    else if(mood==4)
       printf("Take deep breaths with the bunnies ~<*> This feeling will pass.\n");
    else if(mood==5)
       printf("Nap time in the hay with bunnies |||~(> <) You deserve rest.\n");
    else
       printf("A mysterious mood hop by...<*>(> <)");
       

    printf("\033[0m");


    //the goodbye
    printf("\n\033[1;95m");
    printf("(o) Thank You for visiting BunnyBloom Farm (o)\n");
    printf("See you soon friend |||(> <)\n");
    printf("\033[0m");

    return 0;
}