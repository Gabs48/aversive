#ifndef _PARSE_NUM_H_
#define _PARSE_NUM_H_

#include "parse.h"

enum numtype {
	UINT8 = 0,
	UINT16,
	UINT32,
	UINT64,
	INT8,
	INT16,
	INT32,
	INT64,
#ifndef CONFIG_MODULE_PARSE_NO_FLOAT
	FLOAT,
#endif
};

struct token_num_data {
	enum numtype type;
};

struct token_num {
	struct token_hdr hdr;
	struct token_num_data num_data;
};
typedef struct token_num parse_token_num_t;

extern struct token_ops token_num_ops;

int8_t parse_num(PGM_P tk, const char * srcbuf, void * res);
int8_t get_help_num(PGM_P tk, char * dstbuf, uint8_t size);

#define TOKEN_NUM_INITIALIZER(structure, field, numtype)   \
{							   \
	.hdr = {					   \
		.ops = &token_num_ops,			   \
		.offset = offsetof(structure, field),	   \
	},						   \
	.num_data = {					   \
		.type = numtype,			   \
	},						   \
}

#endif /* _PARSE_NUM_H_ */
