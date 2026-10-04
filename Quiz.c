#include<stdio.h>

void main(){
    char quiz[][150]= {"1.Which is the largest planet in our Solar System?\na) Earth\nb) Jupiter\nc) Saturn\nd) Neptune\n",
        "2.Who wrote the national anthem of India?\na) Bankim Chandra Chattopadhyay\nb) Rabindranath Tagore\nc) Sarojini Naidu\nd) Mahatma Gandhi\n",
        "3.What is the chemical symbol for Gold?\na) Go\nb) Gd\nc) Au\nd) Ag\n",
        "4.Which is the longest river in India?\na) Yamuna\nb) Ganga\nc) Godavari\nd) Narmada\n",
        "5.How many continents are there on Earth?\na) 5\nb) 6\nc) 7\nd) 8\n"
    };
    char answers[5] = {'b','b','c','b','c'};
    int i=4,score=0;
    char userAns;
    char options[4] = {'a','b','c','d'};

    printf("=================================================================================C QUIZ=================================================================================\n");
    

    for (i=0;i<5;i++) {
        printf(quiz[i]);
        again:
        printf("Enter the Your choice:");
        scanf(" %c", &userAns);
        if (userAns != 'a' && userAns != 'b' && userAns != 'c' && userAns != 'd'){
            printf("Choose from option \"a,b,c,d\"\n");
            goto again;
        }

        if (userAns == answers[i]){
            printf("Correct!!\n");
            score++;
        }
        else{
            printf("Wrong!!\n");
            printf("Correct answer is %c\n", answers[i]);
        }
    }
    printf("=================================================================================QUIZ FINISHED=================================================================================\n");
    printf("Your score is %d out of 5",score);
    




}
