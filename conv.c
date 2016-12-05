//2016-12-05
//STEPHEN ZELENAK
//QUICKLY CONVERTS BETWEEN C AND F

#include <stdio.h>

//prints usage information
void printUsage() {
	printf( "usage: \"conv (C/F) to (C/F)\"\n" );
}

//prints help information
void printHelp() {
	printf( "conv: converts between C and F.\n" );
}

int main ( int argc, char * argv[] ) {
	//prints help
	if( argv[1] = "help" ) {
		printHelp();
	}
	
	//prints usage	
	if( argv[1] = "usage" ){
	
	}

	//prints usage info if given bad args
	if( argc < 3 ) {
		printUsage();
		return 0;
	}
}
