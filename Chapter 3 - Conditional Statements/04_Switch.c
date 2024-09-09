    #include<stdio.h>

int main(){
    int day ; // 1-monday 2- tuesday 3- wednesday..... or char m - monday.....change the %d to %s
    printf("enter the day(1-7):");
    scanf("%d", &day);

    switch (day)
    {
    case 1 : printf("monaday \n"); // or case 'm' : as it is 
        break;
    case 2 : printf("tuesday\n");
        break;
    case 3 : printf("wednesday\n");
        break;
    case 4 : printf("thursday \n");
        break;
    case 5 : printf("friday\n");
        break;
    case 6 : printf("saturaday\n");
        break;
    case 7 : printf("sunday \n");
        break;

    
    default: printf("please enter the vaild number");
        break;
    }

    return 0;
}