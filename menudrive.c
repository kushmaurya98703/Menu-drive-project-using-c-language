#include<stdio.h>
    int msg,newmsg;
    float amount,newamount,finalamt,msgamt;
    int num;
    
int main(){
    printf("Menu Drive of Prepared Recharge for msg\n");
    printf("Option 1:Know about your total Msg Amount \n");
    printf("Option 2: know about GST Amount of 12th(yearly) Months\n");
    printf("Option 3: know abount GST Amount of 6th(half yearly) Month\n ");
    printf("Option 4: know abount GST Amount of 3rd (quatarly)Month\n");
    printf("Enter the menu\n");
    scanf("%d",&num);
    switch(num){
        
        case 1:
        printf("you are choosen !st option ");
        printf("Your amount will be depend upon msg \n");
        printf("So Please Enter the massage\n");
        scanf("%d",&msg);
        if(msg<100){
            printf("Your Amount will be : 250Rup");
        }
        else if(msg>101&&msg<=200){
            newmsg=msg-100;
            newamount=newmsg*0.6;
            finalamt=250+newamount;
            printf("Your amount:%f",finalamt);}

            else if(msg>200&&msg<=300){
            newmsg=msg-100;
            newamount=newmsg*0.5;
            finalamt=250+newamount;
            printf("Your amount:%f",finalamt);}

            else if(msg>300&&msg<=400){
            newmsg=msg-100;
            newamount=newmsg*0.4;
            finalamt=250+newamount;
            printf("Your amount:%f",finalamt);}

            else if(msg>400){
            newmsg=msg-100;
            newamount=newmsg*0.4;
            finalamt=250+newamount;
            printf("Your amount:%f",finalamt);
            }
            break;

            case 2:
            printf("you are choosen 2nd option of GST Amount of yarly\n");
            printf("enter your amount of according to msg pack\n");
            scanf("%f",& msgamt);
            printf("Your GST amount will be: %f\n",msgamt*0.05);
            printf("Your GST amount will be 1Yearly is:%f\n",msgamt*0.05*12);
            printf("Your total amount with GST for yearly is: %f\n",msgamt*1.05*12);
            break;

            case 3:
            printf("Your are choosen 3rd option GST amount of 6 months\n");
            printf("enter your amount of according to msg pack\n");
            scanf("%f",& msgamt);
            printf("Your GST amount will be: %f\n",msgamt*0.05);
            printf("Your GST amount will be half Yearly is:%f\n",msgamt*0.05*6);
            printf("Your total amount with GST is for half yearly: %f\n",msgamt*1.05*6);
            break;


            case 4:
            printf("Your are choosen 4th option GST amount of three months\n");
            printf("enter your amount of according to msg pack\n");
            scanf("%f",& msgamt);
            printf("Your GST amount will be: %f\n",msgamt*0.05);
            printf("Your GST amount will be quatarly is:%f\n",msgamt*0.05*6);
            printf("Your total amount with GST quatarly is : %f\n",msgamt*1.05*6);
            break;

    }
    return 0;
}