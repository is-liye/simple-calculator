#include<stdio.h>
#include<math.h>
void print_menu();
double division(double ,double);
double modulus(int ,int);
int main(){
    int choose;
    double num1,num2,result;
    printf("welcome to simple calculator\n");
    while(1){
        print_menu();
      printf("Enter your choice: "); 
        scanf("%d",&choose);
        if(choose==7){
            break;
        }
        if(choose<1||choose>7){
            fprintf(stderr,"Invalid menu choice.Please try again.\n");
            continue;
        }
printf("\nEnter num1 numbers: ");
        scanf("%lf",&num1);
        printf("\nEnter num2 numbers: ");
        scanf("%lf",&num2);
        switch(choose){
            case 1:
            result=num1+num2;
            break;
            case 2:
            result=num1-num2;
            break;
            case 3:
            result=num1*num2;
            break;
            case 4:
            result=division(num1,num2);
            break;
            case 5:
            result=modulus((int)num1,(int)num2);
            break;
            case 6:
            result=pow(num1,num2);
            break;
        }
        if(!isnan(result)){
            printf("Result: %.2lf\n", result);

        }
    }
    return 0;
}

void print_menu(){
    printf("-------------------------------------------------------------------------------------\n");
    printf("for addition press 1\n");
    printf("for subtraction press 2\n");
    printf("for multiplicatioin press 3\n");
    printf("for division press 4\n");
    printf("for moldulous press 5\n");
    printf("for power press 6\n");
    printf("for exiting press 7\n");
}

double division(double a,double b){
    if(b==0){
        fprintf(stderr,"Error: Division by zero is not allowed.\n");
        return NAN; // Return NaN or handle as needed
    }else{
        return a/b;
    }
}
double modulus(int a,int b){
    if(b==0){
        fprintf(stderr,"Error: Division by zero is not allowed.\n");
        return NAN; // Return NaN or handle as needed
    }else{
        return a%b;
    }
}
    