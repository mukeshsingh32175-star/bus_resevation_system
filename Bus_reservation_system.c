#include <stdio.h>
#include <string.h>
#include <ctype.h>
int choice2, choice3, bus_number, seat_number, total_seats = 50,  avilabe_seat,cflag=0, cancel_seat, MONEY = 500, cseat;
char usr_name[10];
int sign()
{

    while (1)
    {
        int flag = 0, board = 0, at = -1, dot = -1, aplabet = 0, digit = 0, special = 0;
        char name[11], mobile_number[11], email[50], password[11];
        printf("\n*****SIGN_IN******");
        printf("\nenter your name: ");
        scanf("%s", &name);
        for (int i = 0; i < strlen(name); i++)
        {

            if (name[i] >= '0' && name[i] <= '9')
            {
                printf("!--ERROR");
                printf("!___NAME_CONTAIN_ONLY_CHAR....__!");
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            continue;
        }

        if (strlen(name) < 3)
        {
            printf("\nERROR...!");
            printf("\nMORE_THEN_THREE_CHAR_ALLOWED...!\n");
            continue;
        }

        printf("\nenter your mobile number: ");
        scanf("%s", &mobile_number);
        if (strlen(mobile_number) != 10)
        {
            printf("\n!__ERROR__!");
            printf("\nMOBILE_NUM_CONTAIN_MIN_10_DIGIT___!");
            continue;
        }
        else if (mobile_number[0] == '0')
        {
            printf("\n !...MOBILE_CAN'T_BE_ZEERO..!\n");
            continue;
        }
        for (int i = 0; i < 10; i++)
        {
            if (!isdigit(mobile_number[i]) != 0)
            {
                printf("!..ERROR..");
                printf("!.....MOBILE_NUMBER_CONTAIN_ONLY_DIGIT.....!");
                board = 1;
                break;
            }
        }
        if (board)
        {
            continue;
        }
        printf("\nenter your email id: ");
        scanf("%s", &email);
        for (int i = 0; email[i] != '\0'; i++)
        {
            if (email[i] == ' ')
            {
                printf("!...Error....!");
                printf("Invalid Email....!\n");
            }

            if (email[i] == '@')
                at = i;

            if (email[i] == '.')
                dot = i;
        }

        if (at > 0 && dot > at + 1)
        {
        }

        else
        {
            printf("Invalid Email\n");
            continue;
        }
        printf("\nenter your password: ");
        scanf("%s", &password);
        if (strlen(password) < 4 || strlen(password) > 11)
        {
            printf("ERROR.....!\n");
            printf("\nPASSWORD_CONTAIN_CHAR&DIGIT_BITWEEN_FOuR_TO_EIGHT.......!");
            continue;
        }
        for (int i = 0; i < password[i]; i++)
        {
            if ((password[i] >= 'A' && password[i] <= 'Z') || (password[i] >= 'a' && password[i] <= 'z'))
                aplabet = 1;
            else if (password[i] >= '0' && password[i] <= '9')
                digit = 1;
            else if (password[i] == '@' || password[i] == '#' ||
                     password[i] == '$' || password[i] == '%' ||
                     password[i] == '&' || password[i] == '!')
                special = 1;
        }
        if (aplabet && digit && special)
        {
            printf("\n*****SUCESSFULLY_SIGN_IN_WELCOME___%s ****\n ", name);
            break;
        }
        else
        {
            printf("\n!..ERROR...!");
            printf("\n!..YOU_ENTERED_WROG_PASWORD....!");
            continue;
        }
    }
    return 0;
}
int login()
{
    int a, b, c;

    printf("\n******LOGIN*****");
    printf("\nenter your name: ");
    scanf("%d", &a);
    printf("\nenter your mobile number: ");
    scanf("%d", &b);
    printf("\nenter your email id:");
    scanf("%d", &c);

    printf("\n*****8sucessfully_login**welcome*%d\n", a);
    return 0;
}
int user_menu()
{
    printf("\n*******BOOK_YOUR_TICKET_FAST******");
    printf("\n*******USER_MENUE********");
    printf("\n1.BOOK-A-TICKET");
    printf("\n2.CNECEL_THE_TICKET");
    printf("\n3.CHECK_THE_BUS_ STATUS");
    printf("\n4.LOGOUT");
    printf("\nenter your choice: ");
    scanf("%d", &choice3);

    return 0;
}
int uttrakhand()
{
    while (1)
    {
       

    int choicenum;
    printf("\n*****DELHI_TO_UTTRAKHAND_ROADWAYS******");
    printf("\n1.DELHI_TO_BAGESHWAR ");
    printf("\n2.DELHI_TO_ALMODA");
    printf("\n3.DELHI_TO_HALDWANI");
    printf("\n4.DELHI_TO_RISHIKESH");
    printf("\n5.DELHI_TO_HARIDWAR");
    printf("\nWHICH_DISTRICT_YOU_WANT_GO: ");
    scanf("%d", &choicenum);

    if (choicenum == 1)
    {
        printf("\n*****SECHUDULE*******");
        printf("\n  BUS.NO   SEAT.AV   secudele ");
        printf("\n1. 1012       50      8:00am  ");
        printf("\n2. 1013       40      9:00am  ");
        printf("\n3. 1014       30     10:00am  ");
        printf("\n4. 1015       20      12:00am  ");
        break;
    }
    else if (choicenum == 2)
    {

        printf("\n*****SECHUDULE*******");
        printf("\n  BUS.NO   SEAT.AV   secudele ");
        printf("\n1. 1023      50      8:00am  ");
        printf("\n2. 1053       40      9:00am  ");
        printf("\n3. 1064       30     10:00am  ");
        printf("\n4. 1075       20      12:00am  ");
        break;
    }
    else if(choicenum>2 &&  choicenum < 5)
    {
        printf("\n!....sorry_for_intrupt_we_don't_have_avilable_bus....!");
        continue;
    }
    else{
        printf("!..Error..!");
        continue;
    }
    }
}


int book_ticket()
{
    while (1)
    {
        cflag = 0;

        printf("\nEnter your name: ");
        scanf("%s", usr_name);

        for (int i = 0; usr_name[i] != '\0'; i++)
        {
            if (!isalpha(usr_name[i]))
            {
                printf("\n!...ERROR...!");
                printf("\nName must contain only alphabets!\n");
                cflag = 1;
                break;
            }
        }

        if (cflag)
            continue;

        printf("\nENTER _YOUR_BUS_NUMBER: ");
        scanf("%d", &bus_number);

        printf("\nenter the numbers of seats: ");
        scanf("%d", &seat_number);
        if (seat_number > total_seats)
        {
            printf("!__we_don't_have_avilable_that_much_seat___!");
            continue;
        }
    
        avilabe_seat = total_seats - seat_number;
        printf("\n***BOOKING_SUCESSFULLY ! %d,SEAT_BOOK_ON_THE_BUS_NUM_%d******", seat_number, bus_number);
        break;
    
    }

    return 0;
}
int cencel_ticket()
{
    int cseat;
    printf("how many seat you want to cancel: ");
    scanf("%d", &cseat);
    seat_number -= cseat;
    total_seats += cseat;
   
    printf("\n%d_CANCELLED !", cseat);
    printf("\n***CENCEL_SUCESSFULLY ! %d,SEAT_cancel_ON_THE_BUS_NUM_%d******");
    return 0;
}
int bus_status()
{
    printf("\n*****BUS__STATUS*****");
    printf("\nPassanger_name-------%s",&usr_name);
    printf("\nAVILABLE_SEAT------%d", total_seats);
    printf("\nBOOKED-SEAT------%d", seat_number);
    printf("\nper_seat------------%d", MONEY);
    return 0;
}
int payment()
{  
    while (1)
    {
        
    int payment, pay_choice, total_money;
    printf("\n1.PAYTEM");
    printf("\n2.G_PAY");
    printf("\nwhich_type_of_pament_would_you_like_to_do: ");
    scanf("%d", &payment);
    if (pay_choice = 1)
    {
        total_money = 500 * seat_number;
        printf("\nTOTAL_MONEY_YOU_HAVE_TO_PAY:%d", total_money);
        printf("\nYOU_HAVE_TO_PAY_ON_THIS_NUM == 7668660825 ");
        break;
    }
    else if (pay_choice = 2)
    {
         total_money = 500 * seat_number;
        printf("\nTOTAL_MONEY_YOU_HAVE_TO_PAY:%d", total_money);
        printf("\nYOU_HAVE_TO_PAY_ON_THIS_NUM == 7668660825 ");
        break;
    }
    else
    {
        printf("!...Error...!");
        continue;
    }
  }
    return 0;
}
int uttarpradesh()
{
    while (1)
    {
       
    int choicenum;
    printf("\n*******DELHI_TO_UP_ROADWAYS*******");
    printf("1.DELHI_TO_AGARA  ");
    printf("2.DELHI_TO_ALIGRH ");
    printf("3.DELHI_TO_GHAZIYABAD");
    printf("4.DELHI_TO_VARANSI  ");
    printf("5.DELHI_TO_JAUNPUR ");
    printf("ENTER_YOUR_CHOICE: ");
    scanf("%d", &choicenum);
    if (choicenum = 1)
    {
        printf("\n*****SECHUDULE*******");
        printf("\n  BUS.NO   SEAT.AV   secudele ");
        printf("\n1. 1023      50      8:00am  ");
        printf("\n2. 1053       40      9:00am  ");
        printf("\n3. 1064       30     10:00am  ");
        printf("\n4. 1075       20      12:00am  ");
        break;

    }
    else if (choicenum == 2)
    {
        printf("\n*****SECHUDULE*******");
        printf("\n  BUS.NO   SEAT.AV   secudele ");
        printf("\n1. 1023      50      8:00am  ");
        printf("\n2. 1053       40      9:00am  ");
        printf("\n3. 1064       30     10:00am  ");
        printf("\n4. 1075       20      12:00am  ");
        break;

 
    }
    else if (choicenum == 3)
    {
        printf("\n*****SECHUDULE*******");
        printf("\n  BUS.NO   SEAT.AV   secudele ");
        printf("\n1. 1233      50      8:00am  ");
        printf("\n2. 1553       40      9:00am  ");
        printf("\n3. 1904       30     10:00am  ");
        printf("\n4. 1005       20      12:00am  ");
        break;

    }
    else if (choicenum == 4)
    {
        printf("\n*****SECHUDULE*******");
        printf("\n  BUS.NO   SEAT.AV   secudele ");
        printf("\n1. 1003      50      8:00am  ");
        printf("\n2. 1543       40      9:00am  ");
        printf("\n3. 1964       30     10:00am  ");
        printf("\n4. 1205       20      12:00am  ");
        break;
    }
    else if (choicenum == 5)
    {
        printf("\n*****SECHUDULE*******");
        printf("\n  BUS.NO   SEAT.AV   secudele ");
        printf("\n1. 1008      50      8:00am  ");
        printf("\n2. 1503       40      9:00am  ");
        printf("\n3. 1904       30     10:00am  ");
        printf("\n4. 1275       20      12:00am  ");
        break;

    }
    else{
        printf("!...ERROR..!");
        continue;
    }
 }
    
}
int himanchal()
{
    printf("\n*******DELHI_TO_HIMANCHAL_PREDESH_ROADWAYS*******");
    printf("1.DELHI_TO_SHIMLA  ");
    printf("2.DELHI_TO_UNA");
    printf("3.DELHI_TO_KANGRA");
    printf("4.DELHI_TO_VARANSI  ");
    printf("5.DELHI_TO_JAUNPUR ");
}

int main()
{
    while (1)
    {

        int choice, choice2;
        printf("\n********WELCOME_IN_THE_BUS_RESERVATION_SYSTEM*******\n");
        printf("\n1.sign up");
        printf("\n2.exit");

        printf("\n plese enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            login();
        }
        else if (choice == 1)
        {
            sign();
        }
        else if (choice == 2)
        {
            printf("\n******THANKS_FOR_VSIT_OUR_WEBSITE*******\n");
            break;
        }
        else
        {
            printf("\n!__ERROR__!");
            printf("\n!...enter_the_valid_number...!");
            continue;
        }

        while (1)
        {
            user_menu();

            if (choice3 == 1)
            {

                printf("\n1. DELHI TO UK");
                printf("\n2. DELHI TO UP");
                printf("\n3. DELHI TO HIMSNCHAL PREDESH ");
                printf("\n4. DELHI TO BHIAR");
                printf("\n4. DELHI TO LUCKNOW");
                printf("\n6. DELHI TO RAJASTHAN");
                printf("\nwhich state you want goo: ");
                scanf("%d", &choice2);

                if (choice2 == 1)
                {
                    uttrakhand();
                    book_ticket();
                }

                else if (choice2 == 2)
                {
                    uttarpradesh();
                    book_ticket();
                }

                else if (choice2 >= 3 && choice2 <= 5)
                {
                    printf("\n***THIS_TIME_WE_don't_have_avilable_bus_all_allredy_allbooked****");
                    continue;
                }
                else
                {
                    printf("\n ****YOU_ENTERED_WRONG_CHOICE_!***");
                    continue;
                }
            }
            else if (choice3 == 2)
            {
                cencel_ticket();
                continue;
            }
            else if (choice3 == 3)
            {
                bus_status();
                continue;
            }
            else if (choice3 == 4)
            {
                printf("\n******THANKS_FOTR_USING_OUR_WEBSITE****");
                break;
            }
            else
            {
                printf("!...ERROR...!");
                printf("!._ENTER_VALID_CHOICE_...!");
                continue;
            }
            payment();
            continue;

            printf("\n*****thanks_for_using_our_website*****");
        }
    }

    return 0;
}