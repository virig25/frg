char *ft_strncpy(char *dest, char *src, unsigned int n){
    
    int i = 0;
    while (i < n && src[i] != '\0'){
        
        dest[i] = src[i];
        i++;
        
    }
    
    dest[i] = '\0';
    return (dest);
    
}

int main (void){
    
    int size = 8;
    char dizi1 [] = "hello world!";
    char dizi2 [10];
    ft_strncpy (dizi2, dizi1, size);
    int i=0;
    
    while (dizi2[i] != '\0' ){
        
        printf ("%c", dizi2[i]);
        i++;
        
    }
    
} 