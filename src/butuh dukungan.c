#include <stdio.h>
 
void playgame()
{
    printf( "Play game called" );
}
void loadgame()
{
    printf( "Load game called" );
}
void playmultiplayer()
{
    printf( "Play multiplayer game called" );
}
     
int main()
{
    int input;
    while (1)
    {
    
    
        printf( "1. Play game\n" );
        printf( "2. Load game\n" );
        printf( "3. Play multiplayer\n" );
        printf( "4. Exit\n" );
        printf( "Selection: " );
        scanf( "%d", &input );
        switch ( input ) {
            case 1:            /* Note the colon, not a semicolon */
                playgame();
                continue;
            case 2:          
                loadgame();
                continue;
            case 3:         
                playmultiplayer();
                continue;
            case 4:        
                printf( "Thanks for playing!\n" );
                continue;
            default:            
                printf( "Bad input, quitting!\n" );
                break;
        }
        getchar();
    }
}