//  ELECTRICITY BILL GENERATOR

#include <stdio.h>

int main() {
    printf("Welcome to website of TNEB ");
    
    char date[100];
    scanf("%s",date);
    printf("\nDate: %s",date);
    
    int Unit,type;
    
    float Amount=0.0;
    
    char Name[100],Card_number[100],Mobile_number[100],Area[100];
    
    scanf("%s",Name);
    printf("\nEnter Customer Name : %s",Name);
    scanf("%s",Card_number);
    printf("\nEnter Card number : %s",Card_number);
    
    scanf("%s",Mobile_number);
    printf("\nEnter Mobile number : %s",Mobile_number);
    scanf("%s",Area);
    printf("\nEnter Area : %s",Area);
    
    printf("\nEnter your type.\n1:Domestic\n2:Commercial");
    
    scanf("%d",&type);
    printf("\nEnter Type : %d",type);
    scanf("%d",&Unit);
    printf("\nEnter unit : %d",Unit);
    
    if(type==1){
        if(Unit<=100){
            Amount=0;
            }
            else if(Unit>=100 && Unit<=200){
            Amount=((Unit-100)*1.5)+20.0;
            }
            else if(Unit>=200 && Unit<=500){
            Amount=(100*2.0)+((Unit-200)*3.0)+30.0;
            }
            else{
            Amount=(100.0*3.5)+(300*4.6)+((Unit-500)*6.6)+50.0;
            }
    }
    else if (type==2){
        Amount=(Unit*6.35)+300.0;
    }
    printf("\nThe amount to be paid = Rs. %.2f",Amount);
    printf("\nThank you!");
    
    
    
    return 0;
}