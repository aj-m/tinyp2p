#include <stdio.h>
#include <tinyp2p.h>

struct metainfo {
	void *info;
	char *announce;
	char *announce_list_opt;
	long long creation_date_opt;
	char *comment_opt;
	char *created_by_opt;
	char *encoding_opt;
};

#ifdef TINYP2P_MAIN
int main(int argc, char** argv){
	for (int i = 0; i < argc; i++){
		printf("%d: %s\n", i, argv[i]);
	}
	return 0;
}
#endif

void *create_info_dict(int mode, int piece_length, char *pieces, int private) {
	return NULL;
}

void *create_info_dict_single() {
	return NULL;
}

void *create_info_dict_multi() {
	return NULL;
}

