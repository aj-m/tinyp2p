#include <bencode.h>

#ifdef BENCODE_MAIN
int main(int argc, char** argv){
	printf("Hello, world!\n");
	return 0;
}
#endif

enum bencode_type {
	BYTESTRING_bct,
	INTEGER_bct,
	LIST_bct,
	DICT_bct
};

void* bencode_decode(const char* encoded_str){
	printf("%s\n", encoded_str);
	return NULL;
}

const char* bencode_encode(void* target){
	printf("Encode function not implemented yet\n");
	return NULL;
}

