#include<stdio.h>
#include<conio.h>
#include<string.h>

void mc();

void mm();

void mvc();

void mvm();

void dml();

void dmlv();

void mode();

void about();

void wlcmc();

void wlcmm();

void ttbrdc();

void ttbrdm();

void modchng();

void modchnge();

void prtc(char s1,char s2,char s3,char s4,char s5,char s6,char s7,char s8,char s9);

void prtm(char s1,char s2,char s3,char s4,char s5,char s6,char s7,char s8,char s9);



main()
{
    int g, i, k, l=0, n=1, T=0, U=0, V=0, W;
    char p, c[50], j[50], m[50];
    char v, x, y='n', z;
    char a1,a2,a3,b1,b2,b3,c1,c2,c3;


    printf("\n\n\n\n\n\n\n");
    printf("\t  To work with this software you may face some difficulties.\n\n\n");
    printf("\t  If you abide every term of instructions appropriately and \n\n\n");
    printf("\t  honestly you will face  no problem.\n\n\n");
    printf("\t  So enjoy it by using appropriately.\n\n\n\n\n\n\n\n");
    printf("\t  To next page press p ");

    p=getche();
    if(p=='p'||'P')
    {
        system("cls");

        printf("\n\n\t\t\t\t    Welcome\n\n\t\t\t\t      t o\n\n");
        printf("\n\t\t\t\t       *\n");
        printf("\t\t\t\t       *\n");
        printf("\t\t\t\t      ***\n");
        printf("\t\t\t\t   ***   ***  \n");
        printf("\t\t\t\t    *******\n");
        printf("\t\t\t\t    *******\n");
        printf("\t\t\t\t    *******\n");
        printf("\t\t\t\t    *******\n");
        printf("\t\t\t\t    *******\n");
        printf("\t\t\t\t     *   *\n");
        printf("\t\t\t\t     *****\n");
        printf("\t\t\t\t  ***********\n");
        printf("\t\t\t\t***************\n");
        printf("\n\n\n\t\t\t        Star Game World \n\n\n");
        printf("\n\n\n Please types your name then press Enter: ");
        scanf("%s",&c);


        for(;V<4; V++)
        {

        if(strlen(c)<50)
        {
            if(T==0)
            {

            if(V==0){
            printf("\n\n Please types next four digit of the series 132435.....then press Enter: ");
            scanf("%d",&g);}

            else if(V==1){printf("\n Input was wrong ! Please Try again:  ");
            scanf("%d",&g);}

            else if(V==2){printf("\n Input was wrong !! Please Try again: ");
            scanf("%d",&g);
            }
            else{printf("\n Input was wrong !!! You are not allowed. ");break;}



            if(g==4657)
            {
                system("cls");

                about();

                mode();

                scanf("%s",&j);

                if(!strcmp(j,"com"))
                {
                    system("cls");


                    while(n<=50)
                    {
                        int A1=0, A2=0, A3=0, B1=0, B2=0, B3=0, C1=0, C2=0, C3=0;
                        int K1, K2, K3, R1, R2, R3, X1, X2;

                        system("cls");

                        a1='a',a2='b',a3='c',b1='d',b2='e',b3='f',c1='g',c2='h',c3='i';

                        wlcmc();

                        prtc(a1,a2,a3,b1,b2,b3,c1,c2,c3);printf("First your turn:");


                        /*kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk*/


                        for(i=1;i<10;i++)
                        {
                            x=getche();
                            if(x=='q'){printf("\n\n\n");break;}
                            system("cls");

                            ttbrdc();

                            k=0;


                            /* Computer's turn */
                            /* *************** */


                            if(i%2==0)
                            {
                                if(i==2&&b2!='X'){b2='O';}

                                else if(i==2&&b2=='X'){a1='O';}

                                else if(K1==-20||K2==-20||K3==-20||R1==-20||R2==-20||R3==-20||X1==-20||X2==-20){U=5;

                                        if(K1==-20){     if(a1!='X'&&a1!='O')a1='O';
                                                    else if(b1!='X'&&b1!='O')b1='O';
                                                    else if(c1!='X'&&c1!='O')c1='O';}

                                else if(K2==-20){     if(a2!='X'&&a2!='O')a2='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(c2!='X'&&c2!='O')c2='O';}

                                else if(K3==-20){     if(a3!='X'&&a3!='O')a3='O';
                                                    else if(b3!='X'&&b3!='O')b3='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';}

                                else if(R1==-20){     if(a1!='X'&&a1!='O')a1='O';
                                                    else if(a2!='X'&&a2!='O')a2='O';
                                                    else if(a3!='X'&&a3!='O')a3='O';}

                                else if(R2==-20){     if(b1!='X'&&b1!='O')b1='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(b3!='X'&&b3!='O')b3='O';}

                                else if(R3==-20){     if(c1!='X'&&c1!='O')c1='O';
                                                    else if(c2!='X'&&c2!='O')c2='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';}

                                else if(X1==-20){     if(a1!='X'&&a1!='O')a1='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';}

                                else if(X2==-20){     if(a3!='X'&&a3!='O')a3='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(c1!='X'&&c1!='O')c1='O';}}


                                else if(K1==2||K2==2||K3==2||R1==2||R2==2||R3==2||X1==2||X2==2){U=5;

                                        if(K1 == 2){     if(a1!='X'&&a1!='O')a1='O';
                                                    else if(b1!='X'&&b1!='O')b1='O';
                                                    else if(c1!='X'&&c1!='O')c1='O';}

                                else if(K2 == 2){     if(a2!='X'&&a2!='O')a2='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(c2!='X'&&c2!='O')c2='O';}

                                else if(K3 == 2){     if(a3!='X'&&a3!='O')a3='O';
                                                    else if(b3!='X'&&b3!='O')b3='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';}

                                else if(R1 == 2){     if(a1!='X'&&a1!='O')a1='O';
                                                    else if(a2!='X'&&a2!='O')a2='O';
                                                    else if(a3!='X'&&a3!='O')a3='O';}

                                else if(R2 == 2){     if(b1!='X'&&b1!='O')b1='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(b3!='X'&&b3!='O')b3='O';}

                                else if(R3 == 2){     if(c1!='X'&&c1!='O')c1='O';
                                                    else if(c2!='X'&&c2!='O')c2='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';}

                                else if(X1 == 2){     if(a1!='X'&&a1!='O')a1='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';}

                                else if(X2 == 2){     if(a3!='X'&&a3!='O')a3='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(c1!='X'&&c1!='O')c1='O';}}


                                else if(K1==1||K2==1||K3==1||R1==1||R2==1||R3==1||X1==1||X2==1){U=5;

                                        if(K1 == 1){     if(a1!='X'&&a1!='O')a1='O';
                                                    else if(c1!='X'&&c1!='O'&&X2!=-9)c1='O';
                                                    else if(b1!='X'&&b1!='O')b1='O';}

                                else if(K3 == 1){     if(a3!='X'&&a3!='O')a3='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';
                                                    else if(b3!='X'&&b3!='O')b3='O';}

                                else if(R3 == 1){     if(c1!='X'&&c1!='O')c1='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';
                                                    else if(c2!='X'&&c2!='O')c2='O';}

                                else if(R1 == 1){     if(a3!='X'&&a3!='O')a3='O';
                                                    else if(a1!='X'&&a1!='O')a1='O';
                                                    else if(a2!='X'&&a2!='O')a2='O';}

                                else if(X1 == 1){     if(b2!='X'&&b2!='O')b2='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';
                                                    else if(a1!='X'&&a1!='O')a1='O';}

                                else if(X2 == 1){     if(a3!='X'&&a3!='O')a3='O';
                                                    else if(c1!='X'&&c1!='O')c1='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';}

                                else if(R2 == 1){     if(b2!='X'&&b2!='O')b2='O';
                                                    else if(b3!='X'&&b3!='O')b3='O';
                                                    else if(b1!='X'&&b1!='O')b1='O';}

                                else if(K2 == 1){     if(b2!='X'&&b2!='O')b2='O';
                                                    else if(a2!='X'&&a2!='O')a2='O';
                                                    else if(c2!='X'&&c2!='O')c2='O';}}


                            }


                            /* Player's turn */
                            /* ************* */


                            else
                            {
                                if(x=='a') { if(a1=='X'||a1=='O'){ i--; k++;} else a1='X';}
                                if(x=='b') { if(a2=='X'||a2=='O'){ i--; k++;} else a2='X';}
                                if(x=='c') { if(a3=='X'||a3=='O'){ i--; k++;} else a3='X';}
                                if(x=='d') { if(b1=='X'||b1=='O'){ i--; k++;} else b1='X';}
                                if(x=='e') { if(b2=='X'||b2=='O'){ i--; k++;} else b2='X';}
                                if(x=='f') { if(b3=='X'||b3=='O'){ i--; k++;} else b3='X';}
                                if(x=='g') { if(c1=='X'||c1=='O'){ i--; k++;} else c1='X';}
                                if(x=='h') { if(c2=='X'||c2=='O'){ i--; k++;} else c2='X';}
                                if(x=='i') { if(c3=='X'||c3=='O'){ i--; k++;} else c3='X';}
                            }


                            if(a1=='X'){A1=1;}
                            else if(a1=='O'){A1=-10;}

                            if(a2=='X'){A2=1;}
                            else if(a2=='O'){A2=-10;}

                            if(a3=='X'){A3=1;}
                            else if(a3=='O'){A3=-10;}

                            if(b1=='X'){B1=1;}
                            else if(b1=='O'){B1=-10;}

                            if(b2=='X'){B2=1;}
                            else if(b2=='O'){B2=-10;}

                            if(b3=='X'){B3=1;}
                            else if(b3=='O'){B3=-10;}

                            if(c1=='X'){C1=1;}
                            else if(c1=='O'){C1=-10;}

                            if(c2=='X'){C2=1;}
                            else if(c2=='O'){C2=-10;}

                            if(c3=='X'){C3=1;}
                            else if(c3=='O'){C3=-10;}


                            K1 = A1+B1+C1;  K2 = A2+B2+C2;  K3 = A3+B3+C3;
                            R1 = A1+A2+A3;  R2 = B1+B2+B3;  R3 = C1+C2+C3;
                            X1 = A1+B2+C3;  X2 = A3+B2+C1;


                            prtc(a1,a2,a3,b1,b2,b3,c1,c2,c3);


                            if((k==0)&&(i==1||i==3||i==5||i==7)&&(x!='j'&&x!='k'&&x!='l'&&x!='m'&&x!='z'&&x!='o'
                                        &&x!='p'&&x!='q'&&x!='r'&&x!='s'&&x!='t'&&x!='v'&&x!='w'&&x!='x'&&x!='y'))

                                {printf("For com's turn press Enter:");}

                            else if(i==2&&k!=1||i==4&&k!=1||i==6&&k!=1||i==8&&k!=1)printf("Now your turn:");

                            else if((k==0)&&(x=='j'||x=='k'||x=='l'||x=='m'||x=='o'||x=='p'||x=='q'||x=='r'||
                                        x=='s'||x=='t'||x=='u'||x=='v'||x=='w'||x=='x'||x=='y'||x=='z'))

                                {printf(" Wrong key pressed\n\n \t\t\t\t\t\t     Please try again:");i--;}

                            else if(k==1)

                                {printf("Cell is already taken\n\n\t\t\t\t\t\t    Please try another:");}



                            /* CHECK WINNER */
                            /* ************ */


                            if(K1==3||K2==3||K3==3||R1==3||R2==3||R3==3||X1==3||X2==3)
                                {
                                    printf("\n\n\t\t\t  Game over: Congratulation, you won!\n");

                                    printf("\n\t\t\t  To new game press N to change mode press M\n\n"); break;
                                }


                            if(K1==-30||K2==-30||K3==-30||R1==-30||R2==-30||R3==-30||X1==-30||X2==-30)
                                {
                                    printf("\n\n\t\t\t  Game over: Computer won!\n");

                                    printf("\n\t\t\t  To new game press N to change mode press M\n\n"); break;
                                }


                            if((i==8)&&((K1==-20)||(K2==-20)||(K3==-20)||(R1==-20)||(R2==-20)||(R3==-20)||(X1==-20)||(X2==-20))&&((K1!=2)&&(K2!=2)&&(K3!=2)&&(R1!=2)&&(R2!=2)&&(R3!=2)&&(X1!=2)&&(X2!=2)))
                                {
                                    printf("\n\n\t\t\t  Game over : match draw\n");

                                    printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                }


                            if((K1!=-20&&K1!=-10&&K1!=0&&K1!=1&&K1!=2)&&(K2!=-20&&K2!=-10&&K2!=0&&K2!=1&&K2!=2)&&(K3!=-20&&K3!=-10&&K3!=0&&
                                K3!=1&&K3!=2)&&(R1!=-20&&R1!=-10&&R1!=0&&R1!=1&&R1!=2)&&(R2!=-20&&R2!=-10&&R2!=0&&R2!=1&&R2!=2)&&(R3!=-20&&
                                R3!=-10&&R3!=0&&R3!=1&&R3!=2)&&(X1!=-20&&X1!=-10&&X1!=0&&X1!=1&&X1!=2)&&(X2!=-20&&X2!=-10&&X2!=0&&X2!=1&&X2!=2))
                                {
                                    printf("\n\n\t\t\t  Game over : match draw\n");

                                    printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                }


                            if((i==6)&&((K1+2)<3&&(K2+2)<3&&(K3+2)<3&&(R1+2)<3&&(R2+2)<3&&(R3+2)<3&&(X1+2)<3&&(X2+2)<3)&&((K1-10!=-30)
                                        &&(K2-10!=-30)&&(K3-10!=-30) &&(R1-10!=-30)&&(R2-10!=-30)&&(R3-10!=-30)&&(X1-10!=-30)&&(X2-10!=-30)))
                                {
                                    printf("\n\n\t\t\t  Game over : match draw\n");

                                    printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                }


                            if((i==7)&&((K1+1!=3)&&(K2+1!=3)&&(K3+1!=3)&&(R1+1!=3)&&(R2+1!=3)&&(R3+1!=3)&&(X1+1!=3)&&(X2+1!=3)&&(K3+1!=3))&&
                                        ((K1-10!=-30)&&(K2-10!=-30)&&(K3-10!=-30)&&(R1-10!=-30)&&(R2-10!=-30)&&(R3-10!=-30)&&(X1-10!=-30)&&(X2-10!=-30)))
                                {
                                    printf("\n\n\t\t\t  Game over : match draw\n");

                                    printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                }


                            else if (i==9)
                                {
                                    printf("\n\n\t\t\t  Game over : match draw\n");

                                    printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                }

                        }

                        y=getche();

                        if(y=='n'){n++;}

                        else if(y=='m'){T=1; W=2; break;}

                        else if(y=='q'){printf("\t\t\t  Thank you\t\t A game by Monabber\n\n\t\t\t  "); W=0; break;}

                    }

                }
                else
                {
                    system("cls");


                    while(n<=50)
                    {
                        int A1=0, A2=0, A3=0, B1=0, B2=0, B3=0, C1=0, C2=0, C3=0;
                        int K1, K2, K3, R1, R2, R3, X1, X2;

                        system("cls");

                        a1='a',a2='b',a3='c',b1='d',b2='e',b3='f',c1='g',c2='h',c3='i';

                        wlcmm();

                        prtm(a1,a2,a3,b1,b2,b3,c1,c2,c3);printf(" Who want to turn");

                        printf("\n\n\t\t\t\t\t\t     first: ");scanf("%s",&m);

                        system("cls");

                        a1='a',a2='b',a3='c',b1='d',b2='e',b3='f',c1='g',c2='h',c3='i';

                        wlcmm();

                        prtm(a1,a2,a3,b1,b2,b3,c1,c2,c3);printf(" First %s's turn: ",m);


                        /*kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk*/


                        for(i=1;i<10;i++)
                        {
                            x=getche();
                            if(x=='q'){printf("\n\n\n");break;}
                            system("cls");

                            ttbrdm();

                            k=0;
                            if(i%2==0)

                            {
                                if(x=='a') { if(a1=='X'||a1=='O'){ k++; i--;} else a1='O';}
                                if(x=='b') { if(a2=='X'||a2=='O'){ k++; i--;} else a2='O';}
                                if(x=='c') { if(a3=='X'||a3=='O'){ k++; i--;} else a3='O';}
                                if(x=='d') { if(b1=='X'||b1=='O'){ k++; i--;} else b1='O';}
                                if(x=='e') { if(b2=='X'||b2=='O'){ k++; i--;} else b2='O';}
                                if(x=='f') { if(b3=='X'||b3=='O'){ k++; i--;} else b3='O';}
                                if(x=='g') { if(c1=='X'||c1=='O'){ k++; i--;} else c1='O';}
                                if(x=='h') { if(c2=='X'||c2=='O'){ k++; i--;} else c2='O';}
                                if(x=='i') { if(c3=='X'||c3=='O'){ k++; i--;} else c3='O';}

                            }

                            else

                            {
                                if(x=='a') { if(a1=='X'||a1=='O'){ k++; i--;} else a1='X';}
                                if(x=='b') { if(a2=='X'||a2=='O'){ k++; i--;} else a2='X';}
                                if(x=='c') { if(a3=='X'||a3=='O'){ k++; i--;} else a3='X';}
                                if(x=='d') { if(b1=='X'||b1=='O'){ k++; i--;} else b1='X';}
                                if(x=='e') { if(b2=='X'||b2=='O'){ k++; i--;} else b2='X';}
                                if(x=='f') { if(b3=='X'||b3=='O'){ k++; i--;} else b3='X';}
                                if(x=='g') { if(c1=='X'||c1=='O'){ k++; i--;} else c1='X';}
                                if(x=='h') { if(c2=='X'||c2=='O'){ k++; i--;} else c2='X';}
                                if(x=='i') { if(c3=='X'||c3=='O'){ k++; i--;} else c3='X';}

                            }



                                if(a1=='X'){A1=1;}
                                else if(a1=='O'){A1=-10;}

                                if(a2=='X'){A2=1;}
                                else if(a2=='O'){A2=-10;}

                                if(a3=='X'){A3=1;}
                                else if(a3=='O'){A3=-10;}

                                if(b1=='X'){B1=1;}
                                else if(b1=='O'){B1=-10;}

                                if(b2=='X'){B2=1;}
                                else if(b2=='O'){B2=-10;}

                                if(b3=='X'){B3=1;}
                                else if(b3=='O'){B3=-10;}

                                if(c1=='X'){C1=1;}
                                else if(c1=='O'){C1=-10;}

                                if(c2=='X'){C2=1;}
                                else if(c2=='O'){C2=-10;}

                                if(c3=='X'){C3=1;}
                                else if(c3=='O'){C3=-10;}


                                K1 = A1+B1+C1;  K2 = A2+B2+C2;  K3 = A3+B3+C3;
                                R1 = A1+A2+A3;  R2 = B1+B2+B3;  R3 = C1+C2+C3;
                                X1 = A1+B2+C3;  X2 = A3+B2+C1;


                            prtm(a1,a2,a3,b1,b2,b3,c1,c2,c3);


                            if(!strcmp(c,m))
                            {
                                if(i==1||i==3||i==5||i==7)
                                {
                                    if(x=='j'||x=='k'||x=='l'||x=='m'||x=='z'||x=='o'||x=='p'||x=='q'||
                                       x=='r'||x=='s'||x=='t'||x=='u'||x=='v'||x=='w'||x=='x'||x=='y')

                                       {printf(" Wrong key pressed\n\n \t\t\t\t\t\t     Please try again:");i--;}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==0)

                                             {printf("Now %s's turn:",j);}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==1)

                                             {printf("Cell is already taken\n\n\t\t\t\t\t\t    Please try another:");}

                                    else{printf("Now %s's turn:",j);}}


                                else if(i==2||i==4||i==6||i==8)
                                {
                                    if(x=='j'||x=='k'||x=='l'||x=='m'||x=='z'||x=='o'||x=='p'||x=='q'||
                                       x=='r'||x=='s'||x=='t'||x=='u'||x=='v'||x=='w'||x=='x'||x=='y')

                                       {printf(" Wrong key pressed\n\n \t\t\t\t\t\t     Please try again:");i--;}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==0)

                                             {printf("Now %s's turn:",c);}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==1)

                                             {printf("Cell is already taken\n\n\t\t\t\t\t\t    Please try another:");}

                                    else{printf("Now %s's turn:",j);}}}



                            else if(!strcmp(j,m))
                            {
                                if(i==1||i==3||i==5||i==7)
                                {
                                    if(x=='j'||x=='k'||x=='l'||x=='m'||x=='z'||x=='o'||x=='p'||x=='q'||
                                       x=='r'||x=='s'||x=='t'||x=='u'||x=='v'||x=='w'||x=='x'||x=='y')

                                       {printf(" Wrong key pressed\n\n \t\t\t\t\t\t     Please try again:");i--;}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==0)

                                             {printf("Now %s's turn:",c);}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==1)

                                             {printf("Cell is already taken\n\n\t\t\t\t\t\t    Please try another:");}

                                    else{printf("Now %s's turn:",j);}}


                                else if(i==2||i==4||i==6||i==8)
                                {
                                    if(x=='j'||x=='k'||x=='l'||x=='m'||x=='z'||x=='o'||x=='p'||x=='q'||
                                       x=='r'||x=='s'||x=='t'||x=='u'||x=='v'||x=='w'||x=='x'||x=='y')

                                       {printf(" Wrong key pressed\n\n \t\t\t\t\t\t     Please try again:");i--;}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==0)

                                             {printf("Now %s's turn:",j);}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==1)

                                             {printf("Cell is already taken\n\n\t\t\t\t\t\t    Please try another:");}

                                    else{printf("Now %s's turn:",j);}}}



                                    /*CHECK WINNER*/
                                    /*kkkkkkkkkkkk*/



                                    if(K1==3||K2==3||K3==3||R1==3||R2==3||R3==3||X1==3||X2==3)
                                        {
                                            printf("\n\n\t\t\t  Game over: Congratulation %s, you won!\n",m);

                                            printf("\n\t\t\t  To new game press N to change mode press M\n\n"); break;
                                        }


                                    if(K1==-30||K2==-30||K3==-30||R1==-30||R2==-30||R3==-30||X1==-30||X2==-30)
                                        {
                                            if(!strcmp(m,c)){printf("\n\n\t\t\t  Game over: Congratulation %s, you won!\n",j);}

                                            else {printf("\n\n\t\t\t  Game over: Congratulation %s, you won!\n",c);}

                                            printf("\n\t\t\t  To new game press N to change mode press M\n\n"); break;
                                        }


                                    if((i==8)&&((K1==-20)||(K2==-20)||(K3==-20)||(R1==-20)||(R2==-20)||(R3==-20)||(X1==-20)||(X2==-20))&&((K1!=2)&&(K2!=2)&&(K3!=2)&&(R1!=2)&&(R2!=2)&&(R3!=2)&&(X1!=2)&&(X2!=2)))
                                        {
                                            printf("\n\n\t\t\t  Game over : match draw\n");

                                            printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                        }


                                    if((K1!=-20&&K1!=-10&&K1!=0&&K1!=1&&K1!=2)&&(K2!=-20&&K2!=-10&&K2!=0&&K2!=1&&K2!=2)&&(K3!=-20&&K3!=-10&&K3!=0&&
                                        K3!=1&&K3!=2)&&(R1!=-20&&R1!=-10&&R1!=0&&R1!=1&&R1!=2)&&(R2!=-20&&R2!=-10&&R2!=0&&R2!=1&&R2!=2)&&(R3!=-20&&
                                        R3!=-10&&R3!=0&&R3!=1&&R3!=2)&&(X1!=-20&&X1!=-10&&X1!=0&&X1!=1&&X1!=2)&&(X2!=-20&&X2!=-10&&X2!=0&&X2!=1&&X2!=2))
                                        {
                                            printf("\n\n\t\t\t  Game over : match draw\n");

                                            printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                        }


                                    if((i==6)&&((K1+2)<3&&(K2+2)<3&&(K3+2)<3&&(R1+2)<3&&(R2+2)<3&&(R3+2)<3&&(X1+2)<3&&(X2+2)<3)&&((K1-10!=-30)
                                            &&(K2-10!=-30)&&(K3-10!=-30) &&(R1-10!=-30)&&(R2-10!=-30)&&(R3-10!=-30)&&(X1-10!=-30)&&(X2-10!=-30)))
                                        {
                                            printf("\n\n\t\t\t  Game over : match draw\n");

                                            printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                        }


                                    if((i==7)&&((K1+1!=3)&&(K2+1!=3)&&(K3+1!=3)&&(R1+1!=3)&&(R2+1!=3)&&(R3+1!=3)&&(X1+1!=3)&&(X2+1!=3)&&(K3+1!=3))&&
                                                ((K1-10!=-30)&&(K2-10!=-30)&&(K3-10!=-30)&&(R1-10!=-30)&&(R2-10!=-30)&&(R3-10!=-30)&&(X1-10!=-30)&&(X2-10!=-30)))
                                        {
                                            printf("\n\n\t\t\t  Game over : match draw\n");

                                            printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                        }


                                    else if (i==9)
                                        {
                                            printf("\n\n\t\t\t  Game over : match draw\n");

                                            printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                        }

                                    }

                                    y=getche();

                                    if(y=='n'){n++;}

                                    else if(y=='m'){T=1; W=2; break;}

                                    else if(y=='q'){printf("\t\t\t  Thank you\t\t A game by Monabber\n\n\t\t\t  "); W=1; break;}}}
                                    }

                                    if(W==0){break;}
                                    else if(W==1){break;}

                                }



                else if(T==1)
                {

                system("cls");

                printf("\n\n Don,t change the mode if there is no message\n\n about the change on the previous screen.\n\n\n");

                mode();

                scanf("%s",&j);

                if(!strcmp(j,"com"))
                {
                    system("cls");


                    while(n<=50)
                    {
                        int A1=0, A2=0, A3=0, B1=0, B2=0, B3=0, C1=0, C2=0, C3=0;
                        int K1, K2, K3, R1, R2, R3, X1, X2;

                        system("cls");

                        a1='a',a2='b',a3='c',b1='d',b2='e',b3='f',c1='g',c2='h',c3='i';

                        wlcmc();

                        prtc(a1,a2,a3,b1,b2,b3,c1,c2,c3);printf("First your turn:");


                        /*kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk*/


                        for(i=1;i<10;i++)
                        {
                            x=getche();
                            if(x=='q'){printf("\n\n\n");break;}
                            system("cls");

                            ttbrdc();

                            k=0;


                            /* Computer's turn */
                            /* *************** */


                            if(i%2==0)
                            {
                                if(i==2&&b2!='X'){b2='O';}

                                else if(i==2&&b2=='X'){a1='O';}

                                else if(K1==-20||K2==-20||K3==-20||R1==-20||R2==-20||R3==-20||X1==-20||X2==-20){U=5;

                                        if(K1==-20){     if(a1!='X'&&a1!='O')a1='O';
                                                    else if(b1!='X'&&b1!='O')b1='O';
                                                    else if(c1!='X'&&c1!='O')c1='O';}

                                else if(K2==-20){     if(a2!='X'&&a2!='O')a2='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(c2!='X'&&c2!='O')c2='O';}

                                else if(K3==-20){     if(a3!='X'&&a3!='O')a3='O';
                                                    else if(b3!='X'&&b3!='O')b3='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';}

                                else if(R1==-20){     if(a1!='X'&&a1!='O')a1='O';
                                                    else if(a2!='X'&&a2!='O')a2='O';
                                                    else if(a3!='X'&&a3!='O')a3='O';}

                                else if(R2==-20){     if(b1!='X'&&b1!='O')b1='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(b3!='X'&&b3!='O')b3='O';}

                                else if(R3==-20){     if(c1!='X'&&c1!='O')c1='O';
                                                    else if(c2!='X'&&c2!='O')c2='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';}

                                else if(X1==-20){     if(a1!='X'&&a1!='O')a1='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';}

                                else if(X2==-20){     if(a3!='X'&&a3!='O')a3='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(c1!='X'&&c1!='O')c1='O';}}


                                else if(K1==2||K2==2||K3==2||R1==2||R2==2||R3==2||X1==2||X2==2){U=5;

                                        if(K1 == 2){     if(a1!='X'&&a1!='O')a1='O';
                                                    else if(b1!='X'&&b1!='O')b1='O';
                                                    else if(c1!='X'&&c1!='O')c1='O';}

                                else if(K2 == 2){     if(a2!='X'&&a2!='O')a2='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(c2!='X'&&c2!='O')c2='O';}

                                else if(K3 == 2){     if(a3!='X'&&a3!='O')a3='O';
                                                    else if(b3!='X'&&b3!='O')b3='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';}

                                else if(R1 == 2){     if(a1!='X'&&a1!='O')a1='O';
                                                    else if(a2!='X'&&a2!='O')a2='O';
                                                    else if(a3!='X'&&a3!='O')a3='O';}

                                else if(R2 == 2){     if(b1!='X'&&b1!='O')b1='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(b3!='X'&&b3!='O')b3='O';}

                                else if(R3 == 2){     if(c1!='X'&&c1!='O')c1='O';
                                                    else if(c2!='X'&&c2!='O')c2='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';}

                                else if(X1 == 2){     if(a1!='X'&&a1!='O')a1='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';}

                                else if(X2 == 2){     if(a3!='X'&&a3!='O')a3='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';
                                                    else if(c1!='X'&&c1!='O')c1='O';}}


                                else if(K1==1||K2==1||K3==1||R1==1||R2==1||R3==1||X1==1||X2==1){U=5;

                                        if(K1 == 1){     if(a1!='X'&&a1!='O')a1='O';
                                                    else if(c1!='X'&&c1!='O'&&X2!=-9)c1='O';
                                                    else if(b1!='X'&&b1!='O')b1='O';}

                                else if(K3 == 1){     if(a3!='X'&&a3!='O')a3='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';
                                                    else if(b3!='X'&&b3!='O')b3='O';}

                                else if(R3 == 1){     if(c1!='X'&&c1!='O')c1='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';
                                                    else if(c2!='X'&&c2!='O')c2='O';}

                                else if(R1 == 1){     if(a3!='X'&&a3!='O')a3='O';
                                                    else if(a1!='X'&&a1!='O')a1='O';
                                                    else if(a2!='X'&&a2!='O')a2='O';}

                                else if(X1 == 1){     if(b2!='X'&&b2!='O')b2='O';
                                                    else if(c3!='X'&&c3!='O')c3='O';
                                                    else if(a1!='X'&&a1!='O')a1='O';}

                                else if(X2 == 1){     if(a3!='X'&&a3!='O')a3='O';
                                                    else if(c1!='X'&&c1!='O')c1='O';
                                                    else if(b2!='X'&&b2!='O')b2='O';}

                                else if(R2 == 1){     if(b2!='X'&&b2!='O')b2='O';
                                                    else if(b3!='X'&&b3!='O')b3='O';
                                                    else if(b1!='X'&&b1!='O')b1='O';}

                                else if(K2 == 1){     if(b2!='X'&&b2!='O')b2='O';
                                                    else if(a2!='X'&&a2!='O')a2='O';
                                                    else if(c2!='X'&&c2!='O')c2='O';}}


                            }


                            /* Player's turn */
                            /* ************* */


                            else
                            {
                                if(x=='a') { if(a1=='X'||a1=='O'){ i--; k++;} else a1='X';}
                                if(x=='b') { if(a2=='X'||a2=='O'){ i--; k++;} else a2='X';}
                                if(x=='c') { if(a3=='X'||a3=='O'){ i--; k++;} else a3='X';}
                                if(x=='d') { if(b1=='X'||b1=='O'){ i--; k++;} else b1='X';}
                                if(x=='e') { if(b2=='X'||b2=='O'){ i--; k++;} else b2='X';}
                                if(x=='f') { if(b3=='X'||b3=='O'){ i--; k++;} else b3='X';}
                                if(x=='g') { if(c1=='X'||c1=='O'){ i--; k++;} else c1='X';}
                                if(x=='h') { if(c2=='X'||c2=='O'){ i--; k++;} else c2='X';}
                                if(x=='i') { if(c3=='X'||c3=='O'){ i--; k++;} else c3='X';}
                            }


                            if(a1=='X'){A1=1;}
                            else if(a1=='O'){A1=-10;}

                            if(a2=='X'){A2=1;}
                            else if(a2=='O'){A2=-10;}

                            if(a3=='X'){A3=1;}
                            else if(a3=='O'){A3=-10;}

                            if(b1=='X'){B1=1;}
                            else if(b1=='O'){B1=-10;}

                            if(b2=='X'){B2=1;}
                            else if(b2=='O'){B2=-10;}

                            if(b3=='X'){B3=1;}
                            else if(b3=='O'){B3=-10;}

                            if(c1=='X'){C1=1;}
                            else if(c1=='O'){C1=-10;}

                            if(c2=='X'){C2=1;}
                            else if(c2=='O'){C2=-10;}

                            if(c3=='X'){C3=1;}
                            else if(c3=='O'){C3=-10;}


                            K1 = A1+B1+C1;  K2 = A2+B2+C2;  K3 = A3+B3+C3;
                            R1 = A1+A2+A3;  R2 = B1+B2+B3;  R3 = C1+C2+C3;
                            X1 = A1+B2+C3;  X2 = A3+B2+C1;


                            prtc(a1,a2,a3,b1,b2,b3,c1,c2,c3);


                            if((k==0)&&(i==1||i==3||i==5||i==7)&&(x!='j'&&x!='k'&&x!='l'&&x!='m'&&x!='z'&&x!='o'
                                        &&x!='p'&&x!='q'&&x!='r'&&x!='s'&&x!='t'&&x!='v'&&x!='w'&&x!='x'&&x!='y'))

                                {printf("For com's turn press Enter:");}

                            else if(i==2&&k!=1||i==4&&k!=1||i==6&&k!=1||i==8&&k!=1)printf("Now your turn:");

                            else if((k==0)&&(x=='j'||x=='k'||x=='l'||x=='m'||x=='o'||x=='p'||x=='q'||x=='r'||
                                        x=='s'||x=='t'||x=='u'||x=='v'||x=='w'||x=='x'||x=='y'||x=='z'))

                                {printf(" Wrong key pressed\n\n \t\t\t\t\t\t     Please try again:");i--;}

                            else if(k==1)

                                {printf("Cell is already taken\n\n\t\t\t\t\t\t    Please try another:");}



                            /* CHECK WINNER */
                            /* ************ */


                            if(K1==3||K2==3||K3==3||R1==3||R2==3||R3==3||X1==3||X2==3)
                                {
                                    printf("\n\n\t\t\t  Game over: Congratulation, you won!\n");

                                    printf("\n\t\t\t  To new game press N to change mode press M\n\n"); break;
                                }


                            if(K1==-30||K2==-30||K3==-30||R1==-30||R2==-30||R3==-30||X1==-30||X2==-30)
                                {
                                    printf("\n\n\t\t\t  Game over: Computer won!\n");

                                    printf("\n\t\t\t  To new game press N to change mode press M\n\n"); break;
                                }


                            if((i==8)&&((K1==-20)||(K2==-20)||(K3==-20)||(R1==-20)||(R2==-20)||(R3==-20)||(X1==-20)||(X2==-20))&&((K1!=2)&&(K2!=2)&&(K3!=2)&&(R1!=2)&&(R2!=2)&&(R3!=2)&&(X1!=2)&&(X2!=2)))
                                {
                                    printf("\n\n\t\t\t  Game over : match draw\n");

                                    printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                }


                            if((K1!=-20&&K1!=-10&&K1!=0&&K1!=1&&K1!=2)&&(K2!=-20&&K2!=-10&&K2!=0&&K2!=1&&K2!=2)&&(K3!=-20&&K3!=-10&&K3!=0&&
                                K3!=1&&K3!=2)&&(R1!=-20&&R1!=-10&&R1!=0&&R1!=1&&R1!=2)&&(R2!=-20&&R2!=-10&&R2!=0&&R2!=1&&R2!=2)&&(R3!=-20&&
                                R3!=-10&&R3!=0&&R3!=1&&R3!=2)&&(X1!=-20&&X1!=-10&&X1!=0&&X1!=1&&X1!=2)&&(X2!=-20&&X2!=-10&&X2!=0&&X2!=1&&X2!=2))
                                {
                                    printf("\n\n\t\t\t  Game over : match draw\n");

                                    printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                }


                            if((i==6)&&((K1+2)<3&&(K2+2)<3&&(K3+2)<3&&(R1+2)<3&&(R2+2)<3&&(R3+2)<3&&(X1+2)<3&&(X2+2)<3)&&((K1-10!=-30)
                                        &&(K2-10!=-30)&&(K3-10!=-30) &&(R1-10!=-30)&&(R2-10!=-30)&&(R3-10!=-30)&&(X1-10!=-30)&&(X2-10!=-30)))
                                {
                                    printf("\n\n\t\t\t  Game over : match draw\n");

                                    printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                }


                            if((i==7)&&((K1+1!=3)&&(K2+1!=3)&&(K3+1!=3)&&(R1+1!=3)&&(R2+1!=3)&&(R3+1!=3)&&(X1+1!=3)&&(X2+1!=3)&&(K3+1!=3))&&
                                        ((K1-10!=-30)&&(K2-10!=-30)&&(K3-10!=-30)&&(R1-10!=-30)&&(R2-10!=-30)&&(R3-10!=-30)&&(X1-10!=-30)&&(X2-10!=-30)))
                                {
                                    printf("\n\n\t\t\t  Game over : match draw\n");

                                    printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                }


                            else if (i==9)
                                {
                                    printf("\n\n\t\t\t  Game over : match draw\n");

                                    printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                }

                        }

                        y=getche();

                        if(y=='n'){n++;}

                        else if(y=='m'){T=1; W=2; break;}

                        else if(y=='q'){printf("\t\t\t  Thank you\t\t A game by Monabber\n\n\t\t\t  "); W=0; break;}

                    }

                }
                else
                {
                    system("cls");

                    while(n<=50)
                    {
                        int A1=0, A2=0, A3=0, B1=0, B2=0, B3=0, C1=0, C2=0, C3=0;
                        int K1, K2, K3, R1, R2, R3, X1, X2;

                        system("cls");

                        a1='a',a2='b',a3='c',b1='d',b2='e',b3='f',c1='g',c2='h',c3='i';

                        wlcmm();

                        prtm(a1,a2,a3,b1,b2,b3,c1,c2,c3);printf(" Who want to turn");

                        printf("\n\n\t\t\t\t\t\t     first: ");scanf("%s",&m);

                        system("cls");

                        a1='a',a2='b',a3='c',b1='d',b2='e',b3='f',c1='g',c2='h',c3='i';

                        wlcmm();

                        prtm(a1,a2,a3,b1,b2,b3,c1,c2,c3);printf(" First %s's turn: ",m);


                        /*kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk*/


                        for(i=1;i<10;i++)
                        {
                            x=getche();
                            if(x=='q'){printf("\n\n\n");break;}
                            system("cls");

                            ttbrdm();

                            k=0;
                            if(i%2==0)

                            {
                                if(x=='a') { if(a1=='X'||a1=='O'){ k++; i--;} else a1='O';}
                                if(x=='b') { if(a2=='X'||a2=='O'){ k++; i--;} else a2='O';}
                                if(x=='c') { if(a3=='X'||a3=='O'){ k++; i--;} else a3='O';}
                                if(x=='d') { if(b1=='X'||b1=='O'){ k++; i--;} else b1='O';}
                                if(x=='e') { if(b2=='X'||b2=='O'){ k++; i--;} else b2='O';}
                                if(x=='f') { if(b3=='X'||b3=='O'){ k++; i--;} else b3='O';}
                                if(x=='g') { if(c1=='X'||c1=='O'){ k++; i--;} else c1='O';}
                                if(x=='h') { if(c2=='X'||c2=='O'){ k++; i--;} else c2='O';}
                                if(x=='i') { if(c3=='X'||c3=='O'){ k++; i--;} else c3='O';}

                            }

                            else

                            {
                                if(x=='a') { if(a1=='X'||a1=='O'){ k++; i--;} else a1='X';}
                                if(x=='b') { if(a2=='X'||a2=='O'){ k++; i--;} else a2='X';}
                                if(x=='c') { if(a3=='X'||a3=='O'){ k++; i--;} else a3='X';}
                                if(x=='d') { if(b1=='X'||b1=='O'){ k++; i--;} else b1='X';}
                                if(x=='e') { if(b2=='X'||b2=='O'){ k++; i--;} else b2='X';}
                                if(x=='f') { if(b3=='X'||b3=='O'){ k++; i--;} else b3='X';}
                                if(x=='g') { if(c1=='X'||c1=='O'){ k++; i--;} else c1='X';}
                                if(x=='h') { if(c2=='X'||c2=='O'){ k++; i--;} else c2='X';}
                                if(x=='i') { if(c3=='X'||c3=='O'){ k++; i--;} else c3='X';}

                            }



                                if(a1=='X'){A1=1;}
                                else if(a1=='O'){A1=-10;}

                                if(a2=='X'){A2=1;}
                                else if(a2=='O'){A2=-10;}

                                if(a3=='X'){A3=1;}
                                else if(a3=='O'){A3=-10;}

                                if(b1=='X'){B1=1;}
                                else if(b1=='O'){B1=-10;}

                                if(b2=='X'){B2=1;}
                                else if(b2=='O'){B2=-10;}

                                if(b3=='X'){B3=1;}
                                else if(b3=='O'){B3=-10;}

                                if(c1=='X'){C1=1;}
                                else if(c1=='O'){C1=-10;}

                                if(c2=='X'){C2=1;}
                                else if(c2=='O'){C2=-10;}

                                if(c3=='X'){C3=1;}
                                else if(c3=='O'){C3=-10;}


                                K1 = A1+B1+C1;  K2 = A2+B2+C2;  K3 = A3+B3+C3;
                                R1 = A1+A2+A3;  R2 = B1+B2+B3;  R3 = C1+C2+C3;
                                X1 = A1+B2+C3;  X2 = A3+B2+C1;


                            prtm(a1,a2,a3,b1,b2,b3,c1,c2,c3);


                            if(!strcmp(c,m))
                            {
                                if(i==1||i==3||i==5||i==7)
                                {
                                    if(x=='j'||x=='k'||x=='l'||x=='m'||x=='z'||x=='o'||x=='p'||x=='q'||
                                       x=='r'||x=='s'||x=='t'||x=='u'||x=='v'||x=='w'||x=='x'||x=='y')

                                       {printf(" Wrong key pressed\n\n \t\t\t\t\t\t     Please try again:");i--;}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==0)

                                             {printf("Now %s's turn:",j);}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==1)

                                             {printf("Cell is already taken\n\n\t\t\t\t\t\t    Please try another:");}

                                    else{printf("Now %s's turn:",j);}}


                                else if(i==2||i==4||i==6||i==8)
                                {
                                    if(x=='j'||x=='k'||x=='l'||x=='m'||x=='z'||x=='o'||x=='p'||x=='q'||
                                       x=='r'||x=='s'||x=='t'||x=='u'||x=='v'||x=='w'||x=='x'||x=='y')

                                       {printf(" Wrong key pressed\n\n \t\t\t\t\t\t     Please try again:");i--;}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==0)

                                             {printf("Now %s's turn:",c);}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==1)

                                             {printf("Cell is already taken\n\n\t\t\t\t\t\t    Please try another:");}

                                    else{printf("Now %s's turn:",j);}}}



                            else if(!strcmp(j,m))
                            {
                                if(i==1||i==3||i==5||i==7)
                                {
                                    if(x=='j'||x=='k'||x=='l'||x=='m'||x=='z'||x=='o'||x=='p'||x=='q'||
                                       x=='r'||x=='s'||x=='t'||x=='u'||x=='v'||x=='w'||x=='x'||x=='y')

                                       {printf(" Wrong key pressed\n\n \t\t\t\t\t\t     Please try again:");i--;}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==0)

                                             {printf("Now %s's turn:",c);}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==1)

                                             {printf("Cell is already taken\n\n\t\t\t\t\t\t    Please try another:");}

                                    else{printf("Now %s's turn:",j);}}


                                else if(i==2||i==4||i==6||i==8)
                                {
                                    if(x=='j'||x=='k'||x=='l'||x=='m'||x=='z'||x=='o'||x=='p'||x=='q'||
                                       x=='r'||x=='s'||x=='t'||x=='u'||x=='v'||x=='w'||x=='x'||x=='y')

                                       {printf(" Wrong key pressed\n\n \t\t\t\t\t\t     Please try again:");i--;}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==0)

                                             {printf("Now %s's turn:",j);}

                                    else if((x!='j'||x!='k'||x!='l'||x!='m'||x!='z'||x!='o'||x!='p'||x!='q'||
                                             x!='r'||x!='s'||x!='t'||x!='u'||x!='v'||x!='w'||x!='x'||x!='y')&&k==1)

                                             {printf("Cell is already taken\n\n\t\t\t\t\t\t    Please try another:");}

                                    else{printf("Now %s's turn:",j);}}}



                                    /*CHECK WINNER*/
                                    /*kkkkkkkkkkkk*/



                                    if(K1==3||K2==3||K3==3||R1==3||R2==3||R3==3||X1==3||X2==3)
                                        {
                                            printf("\n\n\t\t\t  Game over: Congratulation %s, you won!\n",m);

                                            printf("\n\t\t\t  To new game press N to change mode press M\n\n"); break;
                                        }


                                    if(K1==-30||K2==-30||K3==-30||R1==-30||R2==-30||R3==-30||X1==-30||X2==-30)
                                        {
                                            if(!strcmp(m,c)){printf("\n\n\t\t\t  Game over: Congratulation %s, you won!\n",j);}

                                            else {printf("\n\n\t\t\t  Game over: Congratulation %s, you won!\n",c);}

                                            printf("\n\t\t\t  To new game press N to change mode press M\n\n"); break;
                                        }


                                    if((i==8)&&((K1==-20)||(K2==-20)||(K3==-20)||(R1==-20)||(R2==-20)||(R3==-20)||(X1==-20)||(X2==-20))&&((K1!=2)&&(K2!=2)&&(K3!=2)&&(R1!=2)&&(R2!=2)&&(R3!=2)&&(X1!=2)&&(X2!=2)))
                                        {
                                            printf("\n\n\t\t\t  Game over : match draw\n");

                                            printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                        }


                                    if((K1!=-20&&K1!=-10&&K1!=0&&K1!=1&&K1!=2)&&(K2!=-20&&K2!=-10&&K2!=0&&K2!=1&&K2!=2)&&(K3!=-20&&K3!=-10&&K3!=0&&
                                        K3!=1&&K3!=2)&&(R1!=-20&&R1!=-10&&R1!=0&&R1!=1&&R1!=2)&&(R2!=-20&&R2!=-10&&R2!=0&&R2!=1&&R2!=2)&&(R3!=-20&&
                                        R3!=-10&&R3!=0&&R3!=1&&R3!=2)&&(X1!=-20&&X1!=-10&&X1!=0&&X1!=1&&X1!=2)&&(X2!=-20&&X2!=-10&&X2!=0&&X2!=1&&X2!=2))
                                        {
                                            printf("\n\n\t\t\t  Game over : match draw\n");

                                            printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                        }


                                    if((i==6)&&((K1+2)<3&&(K2+2)<3&&(K3+2)<3&&(R1+2)<3&&(R2+2)<3&&(R3+2)<3&&(X1+2)<3&&(X2+2)<3)&&((K1-10!=-30)
                                            &&(K2-10!=-30)&&(K3-10!=-30) &&(R1-10!=-30)&&(R2-10!=-30)&&(R3-10!=-30)&&(X1-10!=-30)&&(X2-10!=-30)))
                                        {
                                            printf("\n\n\t\t\t  Game over : match draw\n");

                                            printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                        }


                                    if((i==7)&&((K1+1!=3)&&(K2+1!=3)&&(K3+1!=3)&&(R1+1!=3)&&(R2+1!=3)&&(R3+1!=3)&&(X1+1!=3)&&(X2+1!=3)&&(K3+1!=3))&&
                                                ((K1-10!=-30)&&(K2-10!=-30)&&(K3-10!=-30)&&(R1-10!=-30)&&(R2-10!=-30)&&(R3-10!=-30)&&(X1-10!=-30)&&(X2-10!=-30)))
                                        {
                                            printf("\n\n\t\t\t  Game over : match draw\n");

                                            printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                        }


                                    else if (i==9)
                                        {
                                            printf("\n\n\t\t\t  Game over : match draw\n");

                                            printf("\n\t\t\t  To new game press N to change mode press M\n\n");break;
                                        }

                                    }

                                    y=getche();

                                    if(y=='n'){n++;}

                                    else if(y=='m'){T=1; W=2; break;}

                                    else if(y=='q'){printf("\t\t\t  Thank you\t\t A game by Monabber\n\n\t\t\t  "); W=1; break;}}}
                                    }

                                    if(W==0){break;}
                                    else if(W==1){break;}
                            }

                        }

                    }

                    system("pause");


    }






void mc()
{
    printf("\n     Man versus Computer  *       *       *       * ");
}


void mm()
{
    printf("\n     Man versus Man  \t  *       *       *       * ");
}


void mvc()
{
    printf("\n   * Man versus Computer  ************************* ");
}


void mvm()
{
    printf("\n   * Man versus Man  \t  ************************* ");
}


void dml()
{
    printf("\n\t\t\t  ************************* ");
}


void dmlv()
{
    printf("\n\t\t\t  *       *       *       * ");
}


void modchng()
{
    printf("\n   To change mode press m *       *       *       * ");
}


void modchnge()
{
    printf("\n   after finish this game ************************* ");
}


void mode()
{
    printf(" \n\n To play with computer types com then press Enter:\n\n");
    printf(" To play with human types his/her name then press Enter:");
}


void wlcmc()
{
    printf("\n\t\t\t   ## Welcome to TictaC ##\n\n\n");
    printf("\t *    Type the letter where you wish to place your sign    *\n\n");
    printf("\t *\t   Your sign is X and computer's sign is O     \t   *\n\n");
    printf("\t *         Whoever puts three signs in a row  wins         *\n\n\n");
}


void ttbrdc()
{
    printf("\n\t\t\t    ##  Tictac  Board  ##\n\n\n");
    printf("\t *    Type the letter where you wish to place your sign    *\n\n");
    printf("\t * \t   Your sign is X and computer's sign is O     \t   *\n\n");
    printf("\t *         Whoever puts three signs in a row  wins         *\n\n\n");

}


void wlcmm()
{
    printf("\n\t\t\t   ## Welcome to TictaC ##\n\n\n");
    printf("\t * Please type the letter where you wish to place your sign *\n\n");
    printf("\t *   The sign is X who types first and O who types second   *\n\n");
    printf("\t *          Whoever puts three signs in a row wins          *\n\n\n");
}


void ttbrdm()
{
    printf("\n\t\t\t    ##  Tictac  Board  ##\n\n\n");
    printf("\t * Please type the letter where you wish to place your sign *\n\n");
    printf("\t *   The sign is X who types first and O who types second   *\n\n");
    printf("\t *          Whoever puts three signs in a row wins          *\n\n\n");
}


void prtc(char s1,char s2,char s3,char s4,char s5,char s6,char s7,char s8,char s9)
{
    dml();
    dmlv(); dmlv();printf(" To new any");
    printf("\n   Modes:\t\t  *   %c   *   %c   *   %c   *",s1,s2,s3);
    dmlv();printf(" time type qn"); dmlv();

    mvc(); dmlv(); mm();printf(" To quit any");
    printf("\n\t\t\t  *   %c   *   %c   *   %c   *",s4,s5,s6);
    dmlv();printf(" time type qq"); dmlv();
    dml(); dmlv(); dmlv();
    printf("\n   * means active mode\t  *   %c   *   %c   *   %c   *",s7,s8,s9);
    dmlv(); dmlv(); dml();
}


void prtm(char s1,char s2,char s3,char s4,char s5,char s6,char s7,char s8,char s9)
{
    dml();
    dmlv(); dmlv();printf(" To new any");
    printf("\n   Modes:\t\t  *   %c   *   %c   *   %c   *",s1,s2,s3);
    dmlv();printf(" time type qn"); dmlv();

    mvm(); dmlv(); mc();printf(" To quit any");
    printf("\n\t\t\t  *   %c   *   %c   *   %c   *",s4,s5,s6);
    dmlv();printf(" time type qq"); dmlv();
    dml(); dmlv(); dmlv();
    printf("\n   * means active mode\t  *   %c   *   %c   *   %c   *",s7,s8,s9);
    dmlv(); dmlv(); dml();
}


void about()
{
    system("cls");

    printf("\n\n");
    printf(" Game         : Tic Tac Toe\n\n\n");
    printf(" Version      : 1.03\n\n\n");
    printf(" Created by   : Monabber\n\n");
    printf(" \t        mnbbr_in@yahoo.com\n\n\n");
    printf(" Date created : 19th February 2013\n\n\n");
    printf(" Last update  : 7th September 2013\n\n\n");
    printf(" Write in     : C Programming Language\n\n\n");
    printf(" Compiled in  : Code::Blocks Compiler\n\n\t\t  by Code::Blocks.org\n\n\n");
    printf("\t        All rights reserved by Monabber\n\n\n");
}
