/**
  *
  *
  */
#include <stdio.h>
#include <stdlib.h>


int printEnvironment(void) {

	char * pwd = getenv("PWD");
	if (pwd){
		printf("PWD = %s\n", pwd);
		return 0;
	}
	return -1;
}


int printEnvironement(char *env) {

	char * some_env = getenv(env);
	if(some_env){
		printf("The value is: %s\n",some_env);
		return 0;
	}
	return -1;

}

