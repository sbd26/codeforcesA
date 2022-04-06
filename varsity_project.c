#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX_USER 100
typedef struct Vaccine{

    int age;
    char name[25];
    char gender[9];
    int id;
    int date;
    int month;
}vaccine;


void printgoodbye(){
    printf("Okay,Bye\n");
}
vaccine person[MAX_USER];
int person_count = 0;

void showinfo(int pcount){
    printf("Your Name is : %s\n",person[pcount].name);
    printf("Your Age is : %d\n",person[pcount].age);
    printf("Your Gender is : %s\n",person[pcount].gender);
    printf("Your ID is %d\n",person[pcount].id);
    printf("Your Vaccine Date is: %d-%d-2022\n",person[pcount].date,person[pcount].month);
}

void showinfoa(int pcount){
    printf("Your Name is : %s\n",person[pcount].name);
    printf("Your Age is : %d\n",person[pcount].age);
    printf("Your Gender is : %s\n",person[pcount].gender);
    printf("Your ID is %d\n",person[pcount].id);
    printf("Your Vaccine Date was: %d-%d-2022\n",person[pcount].date,person[pcount].month);
}

void InputforFirstDose()
{
    char ans;
    srand(time(0));
            printf("Enter your Name :");
            scanf(" %[^\n]",person[person_count].name);
            printf("Enter Your Age : ");
            scanf("%d",&person[person_count].age);
            printf("Enter Your Gender: ");
            if(person[person_count].age < 18){
                printf("You are under 18\nYou can't register\n");
                return;
            }
            scanf("%s",person[person_count].gender);
            person[person_count].id = rand() % 600;
            srand(time(0));
            person[person_count].date = rand() % 30;
            srand(time(0));
            person[person_count].month = rand() % 12;
            if (person[person_count].gender[0] == 'F' || person[person_count].gender[0] == 'f')// if gender is female
            {
                printf("Are you pregnent? Y/N :");
                scanf(" %c",&ans);
                getchar();
                if (ans == 'Y' || ans == 'y'){
                    printf("You cannot register Becasue you are pregnent\n");
                    printgoodbye();
                    return;
                    }
            }
              printf("Your First Covid Registration is complete, Good Luck\nKeep remember your ID\n");
                    printf("Here is your information:\n");
                    showinfo(person_count);
                    person_count++;



}

void secondvaccinedate()
{
    int tmp_ID;
    printf("Enter your ID number : ");
    scanf("%d",&tmp_ID);
    int flag = 0;
    int i;
    for (i = 0; i < person_count; i++)//searching the id using linear search
        if(tmp_ID == person[i].id){
            flag = 1;
            break;
        }

    if (flag == 1){
        printf("ID found Here Is your Information:\n");
        showinfo(i);
        printf("Thank you for registration for the first dose\n");
        int next_vaccinedate = person[i].date + 30;
        int next_vaccine_month = person[i].month + 1;
        if(next_vaccine_month <= 12)
        printf("Your Next Vaccine Date is : %d-%d-2022\n",person[i].date,next_vaccine_month);
        else{
            next_vaccine_month %= 12;
             printf("Your Next Vaccine Date is : %d-%d-2023\n",next_vaccinedate,next_vaccine_month);
        }
    }
    else
    {
        char inp;
        printf("Your ID is not found\nDo you want to register again? Y/N : ");
        scanf(" %c",&inp);
        getchar();
        if ( inp == 'Y' || inp == 'y'){
            InputforFirstDose();
            printf("Registration Complete\n");
            showinfoa(i);
        }
        else{
            printf("You better have to register but best of luck\n");
            exit(0);
        }

    }




}



int main()
{
    char ans;
    int aa;
    printf("Are you interested? Y/N : ");
    scanf("%c",&ans);
    getchar();
    if ( ans == 'N' || ans == 'n'){
        printf("COVID is bad for Human so be aware and register asap\n");
        printgoodbye();//
        return 0;
    }

    else{
        printf("Are You Vaccinated? Y/N : ");
        scanf("%c",&ans);
        getchar();
        if (ans == 'Y' || ans == 'y'){
            printgoodbye();
            return 0;
        }
        else
        {
            while(1){
                    printf("PRESS 1 FOR NEW REGISTRATION/FIRST VACCINE\n");
                    printf("PRESS 2 FOR SECOND VACCINE DATE\n");
                    printf("PRESS 3 FOR EXIT\n");
                    scanf("%d",&aa);
                    switch(aa){
                    case 1:
                        InputforFirstDose();
                        break;
                    case 2:
                        secondvaccinedate();
                        break;
                    case 3:
                        return 0;
                    }
            }

        }


    }

}
