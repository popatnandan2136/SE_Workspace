#include<stdio.h>
#include<conio.h>
void main(){
    FILE *fp;
    int choice;
    char fileName[20],name[20],email[20],password[20],loginemail[20],loginpassword[20];
    printf("Enter File Name: ");
    gets(fileName);

    printf("1 For Signup \n2 For Login \n");
    printf("Enter Choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            fp = fopen(fileName,"w");
            printf("Enter Name:");
            scanf("%s",&name);
            printf("Enter Email:");
            scanf("%s",&email);
            printf("Enter Paasword:");
            scanf("%s",&password);

            fprintf(fp,"Name: %s\nEmail:%s\nPassword:%s\n",name,email,password);   
            fclose(fp);
            break;

        case 2:
            fp = fopen(fileName,"r");
            if(fp == NULL){
                printf("No User Found Please Signup First.....");
                fclose(fp);
                break;
            }
            else{
               
                printf("Enter Email: ");
                scanf("%s",&loginemail);
                printf("Enter Password: ");
                scanf("%s",&loginpassword);

                 while(fscanf(fp,"%s\n%s\n",&email,&password)!=EOF)
                 {
                       if(strcmp(loginemail,email)){
                            if(strcmp(loginpassword,password)){
                                printf("Login Successfully");
                            }
                            else{
                                printf("Invalid Password");
                            }
                        }
                        else{
                            printf("Invalid Email");
                        }
                }
            }

    }


}