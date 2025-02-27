#include <stdio.h>

char *ft_strcpy(char *dest, char *src){
    int i = 0;
    while (src[i] != '\0'){
        
        dest[i] = src[i] ;
        i++;
    }
    
    dest[i] = '\0';
    return (dest);
}


int main (void){
 
char dizi1[] = "hello";
char dizi2[10];

*ft_strcpy(dizi2, dizi1);

int i =0;

while (dizi2[i] != '\0'){
    
printf("%c", dizi2[i]);    
    i++;
}
}