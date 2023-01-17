#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char t[20],a[20],e,ch;
int f;
do
{
printf("\nPress 1 for encrypting a file:-");
printf("\nPress 2 for decrypting a file:-");
printf("\nPress 3 for clear screen:-");
printf("\nPress 4 to exit:-\n");
scanf("%d",&f);
switch (f)
{
case 1: printf("Enter the name or location of the text file:- ");
scanf("%s",t);
printf("Enter the name of the encrypted file to be created:- ");
scanf("%s",a);
FILE *file,*encrypt;
file=fopen(t,"r");
printf("\nThe contents of the text file is:- \n\n");
while (!feof(file))
{
    ch = fgetc(file);
    printf("%c",ch);
}
fclose(file);
file=fopen(t,"r");
if (!file)
{
printf("Failed to open file\n");
system("pause");
exit(1);
}
printf("\n\nThe contents of the encrypted file is:- \n\n");
while(!feof(file))
{
ch=fgetc(file);
switch(ch)
{
case 'A': e='5';
break;
case 'B': e='6';
break;
case 'C': e='7';
break;
case 'D': e='8';
break;
case 'E': e='9';
break;
case 'F': e='0';
break;
case 'G': e='n';
break;
case 'H': e='o';
break;
case 'I': e='p';
break;
case 'J': e='q';
break;
case 'K': e='r';
break;
case 'L': e='s';
break;
case 'M': e='t';
break;
case 'N': e='u';
break;
case 'O': e='v';
break;
case 'P': e='w';
break;
case 'Q': e='x';
break;
case 'R': e='y';
break;
case 'S': e='z';
break;
case 'T': e='a';
break;
case 'U': e='b';
break;
case 'V': e='c';
break;
case 'W': e='1';
break;
case 'X': e='2';
break;
case 'Y': e='3';
break;
case 'Z': e='4';
break;
case 'a': e='H';
break;
case 'b': e='I';
break;
case 'c': e='J';
break;
case 'd': e='K';
break;
case 'e': e='L';
break;
case 'f': e='M';
break;
case 'g': e='N';
break;
case 'h': e='O';
break;
case 'i': e='P';
break;
case 'j': e='Q';
break;
case 'k': e='R';
break;
case 'l': e='S';
break;
case 'm': e='T';
break;
case 'n': e='U';
break;
case 'o': e='V';
break;
case 'p': e='W';
break;
case 'q': e='X';
break;
case 'r': e='Y';
break;
case 's': e='Z';
break;
case 't': e='A';
break;
case 'u': e='B';
break;
case 'v': e='C';
break;
case 'w': e='D';
break;
case 'x': e='E';
break;
case 'y': e='F';
break;
case 'z': e='G';
break;
case '1': e='+';
break;
case '2': e='_';
break;
case '3': e='!';
break;
case '4': e=':';
break;
case '5': e='?';
break;
case '6': e='%';
break;
case '7': e='^';
break;
case '8': e='&';
break;
case '9': e='*';
break;
case '0': e='-';
break;
case '.': e='.';
break;
case '(': e='(';
break;
case '[': e='[';
break;
case ')': e=')';
break;
case ']': e=']';
break;
case '<': e='<';
break;
case '>': e='>';
break;
case '"': e='"';
break;
case '\n': e='~';
break;
case '/': e='/';
break;
case ':': e='|';
break;
default:e='`';
break;
}
encrypt=fopen(a,"a+");
if(!encrypt)
{
printf("Failed to open file\n");
system("pause");
exit(1);
}
fputc(e,encrypt);
fclose(encrypt);
printf("%c",e);
}
fclose(file);
printf("\n\n");
break;
case 2: printf("Enter the name or location of the encrypted file:- ");
scanf("%s",t);
printf("Enter the name of the decrypted file to be created:- ");
scanf("%s",a);
FILE *file2,*decrypt;
file2=fopen(t,"r");
printf("\nThe contents of the encrypted file is:- \n\n");
while(!feof(file2))
{
ch = fgetc(file2);
printf("%c",ch);
}
fclose(file2);
file2=fopen(t,"r");
if (!file2)
{
printf("Failed to open file\n");
system("pause");
exit(1);
}
printf("\n\nThe contents of the decrypted file is:- \n\n");
while(!feof(file2))
{
ch=fgetc(file2);
switch(ch)
{
case '5': e='A';
break;
case '6': e='B';
break;
case '7': e='C';
break;
case '8': e='D';
break;
case '9': e='E';
break;
case '0': e='F';
break;
case 'n': e='G';
break;
case 'o': e='H';
break;
case 'p': e='I';
break;
case 'q': e='J';
break;
case 'r': e='K';
break;
case 's': e='L';
break;
case 't': e='M';
break;
case 'u': e='N';
break;
case 'v': e='O';
break;
case 'w': e='P';
break;
case 'x': e='Q';
break;
case 'y': e='R';
break;
case 'z': e='S';
break;
case 'a': e='T';
break;
case 'b': e='U';
break;
case 'c': e='V';
break;
case '1': e='W';
break;
case '2': e='X';
break;
case '3': e='Y';
break;
case '4': e='Z';
break;
case 'H': e='a';
break;
case 'I': e='b';
break;
case 'J': e='c';
break;
case 'K': e='d';
break;
case 'L': e='e';
break;
case 'M': e='f';
break;
case 'N': e='g';
break;
case 'O': e='h';
break;
case 'P': e='i';
break;
case 'Q': e='j';
break;
case 'R': e='k';
break;
case 'S': e='l';
break;
case 'T': e='m';
break;
case 'U': e='n';
break;
case 'V': e='o';
break;
case 'W': e='p';
break;
case 'X': e='q';
break;
case 'Y': e='r';
break;
case 'Z': e='s';
break;
case 'A': e='t';
break;
case 'B': e='u';
break;
case 'C': e='v';
break;
case 'D': e='w';
break;
case 'E': e='x';
break;
case 'F': e='y';
break;
case 'G': e='z';
break;
case '+': e='1';
break;
case '_': e='2';
break;
case '!': e='3';
break;
case ':': e='4';
break;
case '?': e='5';
break;
case '%': e='6';
break;
case '^': e='7';
break;
case '&': e='8';
break;
case '*': e='9';
break;
case '-': e='0';
break;
case '.': e='.';
break;
case '(': e='(';
break;
case '[': e='[';
break;
case ')': e=')';
break;
case ']': e=']';
break;
case '<': e='<';
break;
case '>': e='>';
break;
case '"': e='"';
break;
case '`': e=' ';
break;
case '/': e='/';
break;
case '~':e='\n';
break;
case '|':e=':';
break;
default:e=' ';
break;
}
decrypt=fopen(a,"a+");
if (!decrypt)
{
printf("Failed to open file\n");
system("pause");
exit(1);
}
fputc(e,decrypt);
fclose(decrypt);
printf("%c",e);
}
fclose(file2);
printf("\n\n");
break;
case 3:system("cls");
break;
case 4:exit(1);
break;
default:printf("Invalid choice!!!");
break;
}
}while(f!=0);
}
////Written by Saradwata Bandyopadhyay.
