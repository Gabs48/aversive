#ifndef _PARSE_STRING_H_
#define _PARSE_STRING_H_

#include "parse.h"

/* size of a parsed string */
#define STR_TOKEN_SIZE 32

typedef char fixed_string_t[STR_TOKEN_SIZE];

struct token_string_data {
	PGM_P str;
};

struct token_string {
	struct token_hdr hdr;
	struct token_string_data string_data;
};
typedef struct token_string parse_token_string_t;

extern struct token_ops token_string_ops;

int8_t parse_string(PGM_P tk, const char * srcbuf, void * res);
int8_t complete_get_nb_string(PGM_P tk);
int8_t complete_get_elt_string(PGM_P tk, int8_t idx, 
			       char * dstbuf, uint8_t size);
int8_t get_help_string(PGM_P tk, char * dstbuf, uint8_t size);

#define TOKEN_STRING_INITIALIZER(structure, field, string)  \
{							    \
	.hdr = {					    \
		.ops = &token_string_ops,		    \
		.offset = offsetof(structure, field),	    \
	},						    \
	.string_data = {				    \
                .str = string,				    \
	},						    \
}

#endif /* _PARSE_STRING_H_ */
