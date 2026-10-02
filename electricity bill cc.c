#include <stdio.h>

//fumction prototype
float calculateBill(float number_of_units_consumed);


int main(){

    float number_of_units_consumed,total_bill;
    printf("Enter the number of units consumed:\t");
    scanf("%f",&number_of_units_consumed);
    //function call
    total_bill=calculateBill(number_of_units_consumed);

    printf("\n");
    printf("ELECTRICITY BILL TOTALS \n");
    printf("======================\n");
    printf("number_of_units_consumed:Ksh. %.2f \n",number_of_units_consumed);
    printf("total_bill:Ksh. %.2f \n",total_bill);
    printf("======================\n");

    return 0;
}
//function definition
float calculateBill(float number_of_units_consumed){
     float bill;
     if (number_of_units_consumed <=100){
        bill = number_of_units_consumed *10;
     }
    else if(number_of_units_consumed <=200){
        bill=number_of_units_consumed*15;
        }
    else if(number_of_units_consumed >200){
        bill=number_of_units_consumed*20;
    }

        return bill;
}
