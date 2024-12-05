#include <stdio.h>  
#include <stdlib.h> 

void countwordfreq(FILE *fp){
    char ch;  
    int count = 0;
    int in_word = 0;
    int counts[26] = {0};    
    while((ch = fgetc(fp)) != EOF){  
    if (isspace(ch)) {  // Use isspace to handle all whitespace characters
            in_word = 0;
        } else if (!in_word) {
            count++;
            in_word = 1;
        }

    if (isalpha(ch)) {
            ch = tolower(ch);
            counts[ch - 'a']++;
        }       
    }    
        printf("Character frequencies:\n");
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            printf("%c: %d\n", i + 'a', counts[i]);
        }
    }
    printf("Number of words present in given file: %d", count);

}



   
int main()  
{   
     FILE *fp;
    char filename[50];
   

    printf("Enter the filename: ");
    scanf("%s", filename);
    strcat(filename,".txt");

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
   
    
    countwordfreq(fp); 

  
    fclose(fp);
    return 0;
    
}  