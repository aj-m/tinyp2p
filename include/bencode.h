#pragma once
#include <stdlib.h>
#include <stdio.h>

enum bencode_type;
void* bencode_decode(const char*);
const char* bencode_encode(void*);

