/*system in c where there is file handling and structure where we can input details of bank customers i need as many details in this system as possible like real and it would be transferred to Excel sheet in a proper format and we can use as much as customer details */
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
typedef struct newBankAc
{
    /* data */
    char AcholderName[40],pAddress[40],tAddress[40],emailadd[40];
    char AcType[20],Branch[50],bankName[60],Nominee[50],doB[15];
    char phone[20],acDate[20];
}nba;
int main()
{
    FILE *fptr;
    fptr = fopen("d:\\Bank.csv","a");
    if(fptr != NULL)
    {
        nba c1;
        printf("\n");
        printf("\t|___________SANDESH BANK CO.LTD_________________|\n\n");
        fprintf(fptr,"Accountholder name,Date of Birth,Permanent address,Temporary address,Contact Number,Ac type,Brach Address,Nominee,A/C Open\n");
        printf("Accountholder name: ");
        fgets(c1.AcholderName,sizeof(c1.AcholderName),stdin);
        c1.AcholderName[strcspn(c1.AcholderName, "\n")] = '\0'; 
        printf("Date of Birth: ");
        fgets(c1.doB,sizeof(c1.doB),stdin);
        c1.doB[strcspn(c1.doB, "\n")] = '\0';
        printf("Permanent address: ");
        fgets(c1.pAddress,sizeof(c1.pAddress),stdin);
        c1.pAddress[strcspn(c1.pAddress, "\n")] = '\0';
        printf("Temporary address: ");
        fgets(c1.tAddress,sizeof(c1.tAddress),stdin);
        c1.tAddress[strcspn(c1.tAddress,"\n")] ='\0';
        printf("Contact Number: ");
        fgets(c1.phone,sizeof(c1.phone),stdin);
        c1.phone[strcspn(c1.phone,"\n")] = '\0';
        printf("Ac type: ");
        fgets(c1.AcType,sizeof(c1.AcType),stdin);
        c1.AcType[strcspn(c1.acDate, "\n")] = "\0";
        printf("Brach Address: ");
        fgets(c1.Branch,sizeof(c1.Branch),stdin);
        c1.Branch[strcspn(c1.Branch, "\n")] = "\0";
        printf("Nominee: ");
        fgets(c1.Nominee,sizeof(c1.Nominee),stdin);
        c1.Nominee[strcspn(c1.Nominee, "\n")] = "\0";
        printf("Account open date: ");
        fgets(c1.acDate,sizeof(c1.acDate),stdin);
        c1.acDate[strcspn(c1.acDate, "\n")] = "\0";
        fprintf(fptr,"%s,%s,%s,%s,%s,%s,%s,%s\n",c1.AcholderName,c1.doB,c1.pAddress,c1.tAddress,c1.phone,c1.Branch,c1.Nominee,c1.acDate);

    }
    else
    {
        printf("File does not exits.\n");
    }
    fclose(fptr);
    return 0;
}