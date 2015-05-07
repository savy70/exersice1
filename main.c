/**
  * Version: 0.0.1
  * Author:
  */

#include "operations.h"

/**
  * This is main execution 
  * @param argc number of command line arguments
  * @param argv pointer to the array containing the cmd arguments
  * @return integer containing the exit status
  */

int main(int argc, char **argv){

	int ret_val = printEnvironment();
	if(ret_val == 0) {
		printEnvironement("HOME");
	}
}
