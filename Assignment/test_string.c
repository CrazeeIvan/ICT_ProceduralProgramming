#include <stdio.h>
#include <string.h>

int main()
{
    FILE*file_ptr; int i;
    char text[5];
    file_ptr = fopen( "c:\\c\\inisfree.txt", "r+a");

    if(file_ptr!= NULL )
    {
        printf( "File inisfree.txt opened\n" );
        while(fgets(text, 5, file_ptr) )
        {
            printf( "%s", text) ;
        }
        strcpy( text, "…by W.B.Yeats");
        fputs( text, file_ptr) ; fclose( file_ptr);
        return 0;
    }
    else
    {
        printf( "Unable to open file\n");
        return 1;
    }
}
