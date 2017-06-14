#include <stdio.h>
#include <tinyp2p.h>

#ifdef TINYP2P_MAIN
int main(int argc, char** argv){
	for (int i = 0; i < argc; i++){
		printf("%d: %s\n", i, argv[i]);
	}
	return 0;
}
#endif
