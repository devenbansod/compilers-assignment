#ifndef LEXER_DEF
#define LEXER_DEF

typedef enum {
	TK_SQL = 1,
	TK_SQR = 2,
	TK_SEM = 3,
	TK_COLON = 4,
	TK_DOT = 5,
	TK_OP = 6,
	TK_CL = 7,
	TK_PLUS = 8,
	TK_MINUS = 9,
	TK_MUL = 10,
	TK_DIV = 11,
	TK_NOT = 12,
	TK_NE = 14,
	TK_EQ = 16,
	TK_GE = 18,
	TK_GT = 19,
	TK_LE = 21,
	TK_ASSIGNOP = 24,
	TK_LT = 25,
	TK_AND = 28,
	TK_RECORDID = 31,
	TK_OR = 34,
	TK_COMMENT = 36,
	TK_RNUM = 40,
	TK_NUM = 41,
	TK_FUNID = 45,
	TK_ID = 49,
	TK_FIELDID = 51,
	TK_COMMA = 52,

	// keywords
	TK_WITH = 61,
	TK_PARAMETERS = 62,
	TK_END = 63,
	TK_WHILE = 64,
	TK_INT = 65,
	TK_REAL = 66,
	TK_TYPE = 67,
	TK_MAIN = 68,
	TK_GLOBAL = 69,
	TK_PARAMETER = 70,
	TK_LIST = 71,
	TK_INPUT = 72,
	TK_OUTPUT = 73,
	TK_ENDWHILE = 74,
	TK_IF = 75,
	TK_THEN = 76,
	TK_ENDIF = 77,
	TK_READ = 78,
	TK_WRITE = 79,
	TK_RETURN = 80,
	TK_RECORD = 81,
	TK_ENDRECORD = 82,
	TK_ELSE = 83,
	TK_CALL = 84
} Terminal;

struct tokenInfo {
    Terminal state_id;
    int final;
    int error;
    int line_no;
    char lexeme[100];
};

typedef struct tokenInfo tokenInfo;

#endif
