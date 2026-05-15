//QuickNotes

#include <stdio.h>

int main(int argc, char *argv[]) {
    
    if(argc == 1){
        printf("quicknotes. add basic usage instructions here\n");	
    }
    else{
        FILE *pNote = fopen(argv[1], "w"); 

        if(pNote == NULL) {
            printf("Error opening file\n");
	    return 1;
        }
        for (int i = 2; i < argc; ++i) {
        fprintf(pNote, "%s ", argv[i]);
        }
        printf("Note taken!\n");

        fclose(pNote);
    }
    
return 0;
 
}
