//MyProjects
//Projects for resume
//Library Management System

#include<stdio.h>

int main()

{

    printf("-----------------MAIN MENU----------------");

    printf("1. ADD BOOKS\n");//for adding any new books
    printf("2. DISPLAY BOOK INFORMATION\n");//
    printf("3. SEARCH BOOKS(BOOK STATUS)\n");//
    printf("4. EXIT\n");//

    int a1;
    printf("Enter : ");
    scanf("%d", & a1);
    printf("\n\n");

    if (a1==1)

    {
        printf("You can add book information\n\n");

        printf("Choose the category :  \n\n");

        printf("1. Computer\n");
        printf("2. Electronics\n");
        printf("3. Mechanical\n");

        int a2;
        printf("Choose a category : ");
        scanf("%d",&a2);

        printf("\n\n");

        if (a2==1){
            printf("You have chosen Computer category\n\n");

            printf("1. Introduction to C\n");
            printf("2. Introduction to Python\n");
            printf("3. Introduction to Java\n\n");

            int a3;

            printf("Choose a book : ");
            scanf("%d",&a3);

            printf("\n\n");

            if (a3==1){
                 printf("You have chosen Introduction to C book\n\n");

                 char book_name_a[50];
                 char author_name1_a[50];
                 int pages_a;
                 int price_a;

                 printf("Book Name : ");
                 scanf("%s",&book_name_a);
                 printf("\n\n");

                 printf("Author Name : ");
                 scanf("%s",&author_name1_a);
                 printf("\n\n");

                 printf("Pages : ");
                 scanf("%d",&pages_a);
                 printf("\n\n");

                 printf("Price : ");
                 scanf("%d",&price_a);
                 printf("\n\n");

            }
            else if(a3==2){

                printf("You have chosen Introduction to Python Programming\n\n");

                char book_name_b[50];
                char author_name_b[50];
                int page_b;
                int price_b;

                printf("Book Name : ");
                scanf("%s", &book_name_b);
                printf("\n\n");

                printf("Author Name : ");
                scanf("%s",&author_name_b);
                printf("\n\n");

                printf("Pages : ");
                scanf("%s", &page_b);
                printf("\n\n");

                printf("Price : ");
                scanf("%d",&price_b);
                printf("\n\n");

            }

            else if(a3==3)
            {
                printf("You have chosen Introduction to R Programming\n\n");

                char book_name_c[50];
                char author_name_c[50];
                int pages_c;
                int prices_c;

                printf("Book name : ");
                scanf("%s", &book_name_c);
                printf("\n\n");

                printf("Author Name : ");
                scanf("%s",&author_name_c);
                printf("\n\n");

                printf("Pages : ");
                scanf("%d",&pages_c);
                printf("\n\n");

                printf("Price : ");
                scanf("%d",&prices_c);
                printf("\n\n");

            }
            
            }

            else if(a2==2){

                printf("You have chosen Electronics category\n\n");

                printf("1. Digital Integrated Electronics\n");
                printf("2. Network Theory\n");
                printf("3. Modern digital and analog communications\n");

                int a4;
                printf("Choose a book : ");
                scanf("%d",&a4);

                printf("\n\n");

                if (a4==1){

                    printf("You have chosen Digital Integrated Electronics\n");

                    char book_name_d[50];
                    char author_name_d[50];
                    int page_d;
                    int price_d;

                    printf("Book Name : ");
                    scanf("%s", &book_name_d);
                    printf("\n\n");

                    printf("Author Name : ");
                    scanf("%s",&author_name_d);
                    printf("\n\n");

                    printf("Pages : ");
                    scanf("%d",&page_d);
                    printf("\n\n");

                    printf("Price : \n");
                    scanf("%d", &price_d);
                    printf("\n\n");
                }

                else if(a4==2){

                    printf("You have chosen Network Theory\n");

                    char book_name_e[50];
                    char author_name_e[50];
                    int page_e;
                    int price_e;

                    printf("Book Name : ");
                    scanf("%s", &book_name_e);
                    printf("\n\n");

                    printf("Author Name : ");
                    scanf("%s",&author_name_e);
                    printf("\n\n");

                    printf("Pages : ");
                    scanf("%d",&page_e);
                    printf("\n\n");

                    printf("Price : \n");
                    scanf("%d", &price_e);
                    printf("\n\n");

                }

                else if(a4==3){
                    printf("You have chosen Modern Analog and Digital\n");

                    char book_name_f[50];
                    char author_name_f[50];
                    int page_f;
                    int price_f;

                    printf("Book Name : ");
                    scanf("%s", &book_name_f);
                    printf("\n\n");

                    printf("Author Name : ");
                    scanf("%s",&author_name_f);
                    printf("\n\n");

                    printf("Pages : ");
                    scanf("%d",&page_f);
                    printf("\n\n");

                    printf("Price : \n");
                    scanf("%d", &price_f);
                    printf("\n\n");
                }
                }

                else if(a2==3)
                {
                    printf("You have chosen Mechanical category\n");

                    printf("1. Introduction to Autocad\n");
                    printf("2. Fundamentals of Thermodynamics\n");
                    printf("3. Mechanical Engineering : Conventional and Objective Type\n\n");

                    int a5;
                    printf("Choose a book : ");
                    scanf("%d",&a5);

                    printf("\n\n");

                    if (a5==1){

                    printf("You have chosen Introduction to Autocad\n");

                    char book_name_g[50];
                    char author_name_g[50];
                    int page_g;
                    int price_g;

                    printf("Book Name : ");
                    scanf("%s", &book_name_g);
                    printf("\n\n");

                    printf("Author Name : ");
                    scanf("%s",&author_name_g);
                    printf("\n\n");

                    printf("Pages : ");
                    scanf("%d",&page_g);
                    printf("\n\n");

                    printf("Price : \n");
                    scanf("%d", &price_g);
                    printf("\n\n");
                    }

                    else if(a5==2){

                    printf("You have chosen Fundamentals of Thermodynamics\n");

                    char book_name_h[50];
                    char author_name_h[50];
                    int page_h;
                    int price_h;

                    printf("Book Name : ");
                    scanf("%s", &book_name_h);
                    printf("\n\n");

                    printf("Author Name : ");
                    scanf("%s",&author_name_h);
                    printf("\n\n");

                    printf("Pages : ");
                    scanf("%d",&page_h);
                    printf("\n\n");

                    printf("Price : \n");
                    scanf("%d", &price_h);
                    printf("\n\n");

                    }

                    else if(a5==3){

                        printf("You have chosen Mechanical Engineering : Conventional and Objective type\n");

                    char book_name_i[50];
                    char author_name_i[50];
                    int page_i;
                    int price_i;

                    printf("Book Name : ");
                    scanf("%s", &book_name_i);
                    printf("\n\n");

                    printf("Author Name : ");
                    scanf("%s",&author_name_i);
                    printf("\n\n");

                    printf("Pages : ");
                    scanf("%d",&page_i);
                    printf("\n\n");

                    printf("Price : \n");
                    scanf("%d", &price_i);
                    printf("\n\n");


                    }
                }
    }
    else if (a1==3){

        printf("You can search the book (Book status)\n\n");

        printf("Press the code:123 for Introduction to C\n");
        printf("Press the code:321 for Introduction to Python\n");
        printf("Press the code:765 for Introduction to R Programming\n");
        printf("Press the code:903 for Digital Integrated Electronics\n");
        printf("Press the code:778 for Network Theory\n");
        printf("Press the code:865 for Modern Digital and Analog Communications\n");
        printf("Press the code:223 for Introduction to Autocad\n");
        printf("Press the code:880 for Fundamentals of Thermodynamics\n");
        printf("Press the code:331 for Mechanical Enineering:Conventional and Objective type\n");

        int a6;
        printf("Enter the book to search (USE THE CODE ) :  ");
        scanf("%d",&a6);

        printf("\n");

        switch(a6)

        {
            case 123:
            printf("Book Name : Introduction to C\n");
            printf("Book Status : 22 Copies left");
            break;

            case 321:
            printf("Book Name : Introduction to Python\n");
            printf("Book Status : 26 Copies left");
            break;

            case 765:
            printf("Book Name : Introduction to R Programming\n");
            printf("Book Status : 31 Copies left");
            break;

            case 903:
            printf("Book Name : Network Theory\n");
            printf("Book Status : 23 Copies left");
            break;

            case 778:
            printf("Book Name : Digital Integrated Electronics\n");
            printf("Book Status : 22 Copies left");
            break;

            case 865:
            printf("Book Name : Modern Digital and Analog Communications\n");
            printf("Book Status : 12 Copies left");
            break;

            case 223:
            printf("Book Name : Introduction to Autocad\n");
            printf("Book Status : Out of stock");
            break;

            case 880:
            printf("Book Name : Fundamentals of Thermodynamics\n");
            printf("Book Status : 12 Copies left");
            break;

            case 331:
            printf("Book Name : Mechanical Enineering:Conventional and Objective type\n");
            printf("Book Status : 22 Copies left");
            break;
            
        }
    }

    else if (a1==4){

        printf("The library is closed\n\n");

        printf("Have a nice day");
    }
}
