#include<stdio.h>
void question_corrector(int student_num);
int main()
{

    int student_num;
    printf("Enter the number of the student : ");
    scanf("%i",&student_num);
    for(int i=1 ; i<=student_num ; i++)
    {

        question_corrector(i);

    }


    return 0;
}



void question_corrector(int student_num)
{

    char arranswer[26];
    char arrinput[26];
    int countcorrect =0;
    int countincorrect =0;
    int incor=0;
    int arrincorput[26];

    printf("\n\nInput key of the items for student %i\n", student_num);
    for(int i=0; i<2 ; i++)
    {
        scanf("%s",&arranswer[i]);
    }

    printf("Input responses of student %i\n", student_num);

    for(int i=0; i<2 ; i++)
    {
        scanf("%s",&arrinput[i]);
        if(arranswer[i] != arrinput[i])
        {
            countincorrect++;
            incor++;

            arrincorput[incor]=i;
        }
    }


    printf("student %i\nscore is %i from 25\n",student_num,(25-countincorrect));
    if(countincorrect!=0)
    {
        printf("this is wrong answer\n");

        for(int i=incor ; i>0 ; i--)
        {
            printf(" %i ,",(arrincorput[i]+1));
        }
    }



}
