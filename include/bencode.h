#pragma once
#include <stdlib.h>
#include <stdio.h>

void* bencode_decode(const char*);
const char* bencode_encode(void*);

