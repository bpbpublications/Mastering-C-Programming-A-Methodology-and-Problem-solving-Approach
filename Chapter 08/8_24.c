//	Using fseek() function. 
#include<stdio.h>
int main ()
{ 
FILE *fp; 
fp = fopen ("file.txt","w+");    
fputs ("This is kashmir", fp);
fseek (fp, 7, SEEK_SET); 
fputs ("C Programming Language", fp);    
fclose (fp); 
return (0);
} 
