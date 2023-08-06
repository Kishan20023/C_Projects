#include<stdio.h>
#include<time.h>
void classno(int ,int );
void timenow()
{    char cur_time[128];

  time_t      t;
  struct tm*  ptm;

  t = time(NULL);
  ptm = localtime(&t);

  strftime(cur_time, 128, "%d-%b-%Y %H:%M:%S", ptm);

  printf("Date and time: %s\n", cur_time);

}
void details()
{
    char st_name[100],father_name[100];
    int class_std,admi_no;
    int sta=2000,books,uni,tution,term_1,term_2,term_3,selection_st,bus=8000,nobus;
    float Ah,totalh;
    long long int gstno=7891234650;
    scanf("%[^\n]",st_name);
    printf("\nEnter Student name: %s",st_name);
    scanf("%s",father_name);
    printf("\nEnter Father's name: %s",father_name);
    printf("\nBillno:%lld",gstno);
    scanf("%d",&class_std);
    printf("\nEnter class :%d",class_std);
    scanf("%d",&admi_no);
    printf("\nEnter admission number :%d",admi_no);
    


    if(class_std==1){
     books=2000;uni=1500;tution;2500;term_1=1500;term_2=4000;term_3=3000;selection_st;nobus;
    }else     if(class_std==2){
    books=3000;uni=1500;tution=3000;term_1=2000;term_2=5000;term_3=4000;selection_st;nobus;
    }else     if(class_std==3){
    books=3500;uni=1500;tution=4000;term_1=2500;term_2=5500;term_3=4500;selection_st;nobus;
    }else     if(class_std==4){
    books=3600;uni=2000;tution=4100;term_1=3000;term_2=5600;term_3=4500;selection_st;nobus;
    }else if(class_std==5){
    books=3700;uni=2000;tution=4200;term_1=3200;term_2=5700;term_3=4700;selection_st;bus=8000;nobus;
    }else if(class_std==6){
    books=3800;uni=2000;tution=4300;term_1=3300;term_2=5900;term_3=4800;selection_st;bus=8000;nobus;
    Ah=(float)(sta+books+uni+(tution/2)+term_1); totalh=(float)(Ah+term_2+term_3+(tution/2));
    }else if(class_std==7){
    books=3900;uni=2500;tution=4400;term_1=3400;term_2=6000;term_3=4900;selection_st;bus=8000;nobus;
    }else if(class_std==7){
    books=3900;uni=2500;tution=4400;term_1=3400;term_2=6000;term_3=4900;selection_st;bus=8000;nobus;
    }else if(class_std==8){
    books=4000;uni=2500;tution=4500;term_1=3500;term_2=6500;term_3=5000;selection_st;bus=8000,nobus;
    }else if(class_std==9){
    books=4000;uni=2700;tution=4500;term_1=3500;term_2=6500;term_3=5000;selection_st,bus=8000,nobus;
    }else if(class_std==10){
    books=4100;uni=2700;tution=4700;term_1=3700;term_2=6700;term_3=5200;selection_st;bus=8000;nobus;
    }else if(class_std==11){
    books=4500;uni=2700;tution=5000;term_1=3800;term_2=6900;term_3=5400;selection_st;bus=8000;nobus;
    }else{
    books=4700;uni=2700;tution=5200;term_1=3900;term_2=7000;term_3=5500;selection_st;bus=8000;nobus;
    }
    Ah=(float)(sta+books+uni+(tution/2)+term_1); totalh=(float)(Ah+term_2+term_3+(tution/2));
    printf("\n%s is a hostel or dayscholar: \nIf student is hosteller press 1 (or) dayscholar press 2: ",st_name);
    scanf("%d",&selection_st);
    if(selection_st==1){
            printf("\n%s is a hosteller",st_name);
            printf("\nFees for stationary : %d",sta);
            printf("\nFees for books : %d",books);
            printf("\nFees for uniform : %d",uni);
            printf("\nTuition fee:%d",tution);
            printf("\nThree term fees:\t1st term:%d\t2nd term:%d\t3rd term:%d",term_1,term_2,term_3);
            printf("\n\nAMOUNT TO BE PAID IN 1ST TERM: \n\n\tStationary:%d,\n\tBooks:%d,\n\tUniform:%d,\n\tTution 1st term fees:%d \n\t----TOTAL:%f-----\n",sta,books,uni,tution/2,Ah);
            printf("\n AMOUNT TO BE PAID IN 2ND TERM: \n\n\t ---TOTAL:%d---\n",term_2);
            printf("\n AMOUNT TO BE PAID IN 3RD TERM: \n \t--TOTAL:%f--\n",(float)(term_3+(tution/2)));
            printf("\n ---Total amount to be paid : %f---\n",totalh);
            printf("**____________**\n");
            printf("%s is studying %d class and admission number:%d.\nMr/Ms.%s should pay:%f\n",st_name,class_std,admi_no,father_name,totalh);
            printf("--------------------------------------------------\n");
        }else
          { int a=term_1+term_2+term_3,b=term_1+term_2+term_3+bus;
            printf("\n\nAMOUNT TO BE PAID IN 1ST TERM: \n\tterm_1:%d\n\tstationary=%d\n\tbooks:%d,\n\tuniform=%d*\n \t\t----TOTAL:-%d-----",term_1,sta,books,uni,term_1+sta+books+uni);
            printf("\n AMOUNT TO BE PAID IN 2ND TERM: \n \t\t---TOTAL:-%d---\n",term_2);
            printf("\n AMOUNT TO BE PAID IN 3RD TERM: \n \t\t--TOTAL:-%d--",term_3);
            printf("\n\tBus fees : 8000");
            printf("\nStudent need bus\n no press '0' (or) yes press '1': ");
            scanf("%d",&nobus);
            if(nobus==0){
            printf("\n ---Total amount to be paid : %d---",a);
            printf("**____________**\n");
            printf("%s is studying %d class and admission number:%d, Mr/Ms.%s should pay:%d\n",st_name,class_std,admi_no,father_name,a);
            printf("--------------------------------------------------\n");
            }else{
            printf("\n ---Total amount to be paid : %d---",b);
            printf("**____________**\n");
            printf("%s is studying %d class and admission number:%d, Mr/Ms.%s should pay:%d\n",st_name,class_std,admi_no,father_name,b);
            printf("--------------------------------------------------\n");
            }
        }
}
void main()
{   timenow();
    printf("**  BILL SYSTEM  ** \n");
    details();


}