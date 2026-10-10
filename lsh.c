#include "lsh.h"


void lsh_loop(void)
{
	char *line ;
	char ** args ;
	int status ;


	do{
		printf("> ");
		line = lsh_read_line() ; 
		args = lsh_split_line( line );
		status = lsh_execute( args ) ;
	
		free( line );
		free( args );
	} while( status );

}


char * lsh_read_line(void)
{
	int bufsize = LSH_RL_BUFSIZE ;
	int position = 0 ;
	char * buffer = malloc( sizeof(char) * bufsize ) ;
	int c ;	

	
} ;
