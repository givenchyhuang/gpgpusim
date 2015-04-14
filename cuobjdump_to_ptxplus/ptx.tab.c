/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         ptx_parse
#define yylex           ptx_lex
#define yyerror         ptx_error
#define yylval          ptx_lval
#define yychar          ptx_char
#define yydebug         ptx_debug
#define yynerrs         ptx_nerrs


/* Copy the first part of user declarations.  */


/* Line 268 of yacc.c  */
#line 79 "ptx.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     OPCODE = 259,
     ALIGN_DIRECTIVE = 260,
     BRANCHTARGETS_DIRECTIVE = 261,
     BYTE_DIRECTIVE = 262,
     CALLPROTOTYPE_DIRECTIVE = 263,
     CALLTARGETS_DIRECTIVE = 264,
     CONST_DIRECTIVE = 265,
     CONSTPTR_DIRECTIVE = 266,
     PTR_DIRECTIVE = 267,
     ENTRY_DIRECTIVE = 268,
     EXTERN_DIRECTIVE = 269,
     FILE_DIRECTIVE = 270,
     FUNC_DIRECTIVE = 271,
     GLOBAL_DIRECTIVE = 272,
     LOCAL_DIRECTIVE = 273,
     LOC_DIRECTIVE = 274,
     MAXNCTAPERSM_DIRECTIVE = 275,
     MAXNNREG_DIRECTIVE = 276,
     MAXNTID_DIRECTIVE = 277,
     MINNCTAPERSM_DIRECTIVE = 278,
     PARAM_DIRECTIVE = 279,
     PRAGMA_DIRECTIVE = 280,
     REG_DIRECTIVE = 281,
     REQNTID_DIRECTIVE = 282,
     SECTION_DIRECTIVE = 283,
     SHARED_DIRECTIVE = 284,
     SREG_DIRECTIVE = 285,
     STRUCT_DIRECTIVE = 286,
     SURF_DIRECTIVE = 287,
     TARGET_DIRECTIVE = 288,
     TEX_DIRECTIVE = 289,
     UNION_DIRECTIVE = 290,
     VERSION_DIRECTIVE = 291,
     ADDRESS_SIZE_DIRECTIVE = 292,
     VISIBLE_DIRECTIVE = 293,
     IDENTIFIER = 294,
     INT_OPERAND = 295,
     FLOAT_OPERAND = 296,
     DOUBLE_OPERAND = 297,
     S8_TYPE = 298,
     S16_TYPE = 299,
     S32_TYPE = 300,
     S64_TYPE = 301,
     U8_TYPE = 302,
     U16_TYPE = 303,
     U32_TYPE = 304,
     U64_TYPE = 305,
     F16_TYPE = 306,
     F32_TYPE = 307,
     F64_TYPE = 308,
     FF64_TYPE = 309,
     B8_TYPE = 310,
     B16_TYPE = 311,
     B32_TYPE = 312,
     B64_TYPE = 313,
     BB64_TYPE = 314,
     BB128_TYPE = 315,
     PRED_TYPE = 316,
     TEXREF_TYPE = 317,
     SAMPLERREF_TYPE = 318,
     SURFREF_TYPE = 319,
     V2_TYPE = 320,
     V3_TYPE = 321,
     V4_TYPE = 322,
     COMMA = 323,
     PRED = 324,
     HALF_OPTION = 325,
     EQ_OPTION = 326,
     NE_OPTION = 327,
     LT_OPTION = 328,
     LE_OPTION = 329,
     GT_OPTION = 330,
     GE_OPTION = 331,
     LO_OPTION = 332,
     LS_OPTION = 333,
     HI_OPTION = 334,
     HS_OPTION = 335,
     EQU_OPTION = 336,
     NEU_OPTION = 337,
     LTU_OPTION = 338,
     LEU_OPTION = 339,
     GTU_OPTION = 340,
     GEU_OPTION = 341,
     NUM_OPTION = 342,
     NAN_OPTION = 343,
     CF_OPTION = 344,
     SF_OPTION = 345,
     NSF_OPTION = 346,
     LEFT_SQUARE_BRACKET = 347,
     RIGHT_SQUARE_BRACKET = 348,
     WIDE_OPTION = 349,
     SPECIAL_REGISTER = 350,
     MINUS = 351,
     PLUS = 352,
     COLON = 353,
     SEMI_COLON = 354,
     EXCLAMATION = 355,
     PIPE = 356,
     RIGHT_BRACE = 357,
     LEFT_BRACE = 358,
     EQUALS = 359,
     PERIOD = 360,
     BACKSLASH = 361,
     DIMENSION_MODIFIER = 362,
     RN_OPTION = 363,
     RZ_OPTION = 364,
     RM_OPTION = 365,
     RP_OPTION = 366,
     RNI_OPTION = 367,
     RZI_OPTION = 368,
     RMI_OPTION = 369,
     RPI_OPTION = 370,
     UNI_OPTION = 371,
     GEOM_MODIFIER_1D = 372,
     GEOM_MODIFIER_2D = 373,
     GEOM_MODIFIER_3D = 374,
     SAT_OPTION = 375,
     FTZ_OPTION = 376,
     NEG_OPTION = 377,
     SYNC_OPTION = 378,
     RED_OPTION = 379,
     ARRIVE_OPTION = 380,
     ATOMIC_POPC = 381,
     ATOMIC_AND = 382,
     ATOMIC_OR = 383,
     ATOMIC_XOR = 384,
     ATOMIC_CAS = 385,
     ATOMIC_EXCH = 386,
     ATOMIC_ADD = 387,
     ATOMIC_INC = 388,
     ATOMIC_DEC = 389,
     ATOMIC_MIN = 390,
     ATOMIC_MAX = 391,
     LEFT_ANGLE_BRACKET = 392,
     RIGHT_ANGLE_BRACKET = 393,
     LEFT_PAREN = 394,
     RIGHT_PAREN = 395,
     APPROX_OPTION = 396,
     FULL_OPTION = 397,
     ANY_OPTION = 398,
     ALL_OPTION = 399,
     BALLOT_OPTION = 400,
     GLOBAL_OPTION = 401,
     CTA_OPTION = 402,
     SYS_OPTION = 403,
     EXIT_OPTION = 404,
     ABS_OPTION = 405,
     TO_OPTION = 406,
     CA_OPTION = 407,
     CG_OPTION = 408,
     CS_OPTION = 409,
     LU_OPTION = 410,
     CV_OPTION = 411,
     WB_OPTION = 412,
     WT_OPTION = 413
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 30 "../src/cuda-sim/ptx.y"

  double double_value;
  float  float_value;
  int    int_value;
  char * string_value;
  void * ptr_value;



/* Line 293 of yacc.c  */
#line 283 "ptx.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 343 of yacc.c  */
#line 198 "../src/cuda-sim/ptx.y"

  	#include "ptx_parser.h"
	#include <stdlib.h>
	#include <string.h>
	#include <math.h>
	void syntax_not_implemented();
	extern int g_func_decl;
	int ptx_lex(void);
	int ptx_error(const char *);


/* Line 343 of yacc.c  */
#line 307 "ptx.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   584

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  159
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  272
/* YYNRULES -- Number of states.  */
#define YYNSTATES  378

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   413

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    13,    14,    18,    19,
      20,    26,    33,    36,    39,    41,    44,    45,    46,    54,
      55,    59,    61,    62,    63,    70,    72,    74,    76,    79,
      82,    83,    85,    86,    91,    92,    98,    99,   104,   105,
     109,   112,   114,   116,   118,   121,   125,   127,   129,   132,
     135,   138,   140,   143,   146,   150,   153,   158,   165,   168,
     172,   177,   181,   184,   187,   192,   197,   204,   206,   208,
     212,   214,   219,   223,   228,   230,   233,   235,   237,   239,
     241,   244,   246,   248,   250,   252,   254,   256,   258,   260,
     262,   264,   266,   269,   271,   273,   275,   277,   279,   281,
     283,   285,   287,   289,   291,   293,   295,   297,   299,   301,
     303,   305,   307,   309,   311,   313,   315,   317,   319,   323,
     327,   329,   333,   336,   339,   343,   344,   356,   363,   369,
     372,   374,   375,   379,   381,   384,   388,   392,   396,   400,
     404,   408,   412,   416,   420,   424,   428,   432,   434,   437,
     439,   441,   443,   445,   447,   449,   451,   453,   455,   457,
     459,   461,   463,   465,   467,   469,   471,   473,   475,   477,
     479,   481,   483,   485,   487,   489,   491,   493,   495,   497,
     499,   501,   503,   505,   507,   509,   511,   513,   515,   517,
     519,   521,   523,   525,   527,   529,   531,   533,   535,   537,
     539,   541,   543,   545,   547,   549,   551,   553,   555,   557,
     559,   561,   563,   565,   567,   569,   571,   573,   575,   577,
     579,   581,   583,   585,   587,   591,   593,   596,   599,   601,
     603,   605,   607,   610,   612,   616,   619,   623,   626,   630,
     634,   639,   644,   648,   653,   658,   664,   672,   682,   686,
     687,   694,   697,   699,   703,   708,   713,   718,   721,   725,
     730,   735,   740,   746,   752,   757,   759,   761,   763,   765,
     768,   771,   775
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     160,     0,    -1,    -1,   160,   185,    -1,   160,   161,    -1,
     160,   167,    -1,    -1,   167,   162,   183,    -1,    -1,    -1,
     167,   163,   166,   164,   183,    -1,    22,    40,    68,    40,
      68,    40,    -1,    23,    40,    -1,    20,    40,    -1,   165,
      -1,   166,   165,    -1,    -1,    -1,   174,   139,   168,   177,
     140,   169,   171,    -1,    -1,   174,   170,   171,    -1,   174,
      -1,    -1,    -1,    39,   172,   139,   173,   175,   140,    -1,
      39,    -1,    13,    -1,    16,    -1,    38,    16,    -1,    14,
      16,    -1,    -1,   177,    -1,    -1,   175,    68,   176,   177,
      -1,    -1,    24,   178,   187,   180,   189,    -1,    -1,    26,
     179,   187,   189,    -1,    -1,    12,   181,   182,    -1,    12,
     182,    -1,    17,    -1,    18,    -1,    29,    -1,     5,    40,
      -1,   103,   184,   102,    -1,   185,    -1,   200,    -1,   184,
     185,    -1,   184,   200,    -1,   184,   183,    -1,   183,    -1,
     186,    99,    -1,    36,    42,    -1,    36,    42,    97,    -1,
      37,    40,    -1,    33,    39,    68,    39,    -1,    33,    39,
      68,    39,    68,    39,    -1,    33,    39,    -1,    15,    40,
       3,    -1,    19,    40,    40,    40,    -1,    25,     3,    99,
      -1,   167,    99,    -1,   187,   188,    -1,   187,   189,   104,
     198,    -1,   187,   189,   104,   221,    -1,    11,    39,    68,
      39,    68,    40,    -1,   190,    -1,   189,    -1,   188,    68,
     189,    -1,    39,    -1,    39,   137,    40,   138,    -1,    39,
      92,    93,    -1,    39,    92,    40,    93,    -1,   191,    -1,
     190,   191,    -1,   193,    -1,   195,    -1,   192,    -1,    14,
      -1,     5,    40,    -1,    26,    -1,    30,    -1,   194,    -1,
      10,    -1,    17,    -1,    18,    -1,    24,    -1,    29,    -1,
      32,    -1,    34,    -1,   197,    -1,   196,   197,    -1,    65,
      -1,    66,    -1,    67,    -1,    43,    -1,    44,    -1,    45,
      -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,    50,
      -1,    51,    -1,    52,    -1,    53,    -1,    54,    -1,    55,
      -1,    56,    -1,    57,    -1,    58,    -1,    59,    -1,    60,
      -1,    61,    -1,    62,    -1,    63,    -1,    64,    -1,   103,
     199,   102,    -1,   103,   198,   102,    -1,   221,    -1,   199,
      68,   221,    -1,   201,    99,    -1,    39,    98,    -1,   205,
     201,    99,    -1,    -1,   203,   139,   214,   140,   202,    68,
     214,    68,   139,   213,   140,    -1,   203,   214,    68,   139,
     213,   140,    -1,   203,   214,    68,   139,   140,    -1,   203,
     213,    -1,   203,    -1,    -1,     4,   204,   206,    -1,     4,
      -1,    69,    39,    -1,    69,   100,    39,    -1,    69,    39,
      73,    -1,    69,    39,    71,    -1,    69,    39,    74,    -1,
      69,    39,    72,    -1,    69,    39,    76,    -1,    69,    39,
      81,    -1,    69,    39,    85,    -1,    69,    39,    82,    -1,
      69,    39,    89,    -1,    69,    39,    90,    -1,    69,    39,
      91,    -1,   207,    -1,   207,   206,    -1,   195,    -1,   212,
      -1,   194,    -1,   209,    -1,   123,    -1,   125,    -1,   124,
      -1,   116,    -1,    94,    -1,   143,    -1,   144,    -1,   145,
      -1,   146,    -1,   147,    -1,   148,    -1,   117,    -1,   118,
      -1,   119,    -1,   120,    -1,   121,    -1,   122,    -1,   141,
      -1,   142,    -1,   149,    -1,   150,    -1,   208,    -1,   151,
      -1,    70,    -1,   152,    -1,   153,    -1,   154,    -1,   155,
      -1,   156,    -1,   157,    -1,   158,    -1,   127,    -1,   126,
      -1,   128,    -1,   129,    -1,   130,    -1,   131,    -1,   132,
      -1,   133,    -1,   134,    -1,   135,    -1,   136,    -1,   210,
      -1,   211,    -1,   108,    -1,   109,    -1,   110,    -1,   111,
      -1,   112,    -1,   113,    -1,   114,    -1,   115,    -1,    71,
      -1,    72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,
      -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,
      -1,    82,    -1,    83,    -1,    84,    -1,    85,    -1,    86,
      -1,    87,    -1,    88,    -1,   214,    -1,   214,    68,   213,
      -1,    39,    -1,   100,    39,    -1,    96,    39,    -1,   219,
      -1,   221,    -1,   218,    -1,   215,    -1,    96,   215,    -1,
     216,    -1,    39,    97,    40,    -1,    39,    77,    -1,    96,
      39,    77,    -1,    39,    79,    -1,    96,    39,    79,    -1,
      39,   101,    39,    -1,    39,   101,    39,    77,    -1,    39,
     101,    39,    79,    -1,    39,   106,    39,    -1,    39,   106,
      39,    77,    -1,    39,   106,    39,    79,    -1,   103,    39,
      68,    39,   102,    -1,   103,    39,    68,    39,    68,    39,
     102,    -1,   103,    39,    68,    39,    68,    39,    68,    39,
     102,    -1,   103,    39,   102,    -1,    -1,    92,    39,    68,
     217,   215,    93,    -1,    95,   107,    -1,    95,    -1,    92,
     222,    93,    -1,    39,    92,   222,    93,    -1,    39,    92,
     221,    93,    -1,    39,    92,   220,    93,    -1,    96,   219,
      -1,    39,    97,    39,    -1,    39,    97,    39,    77,    -1,
      39,    97,    39,    79,    -1,    39,    97,   104,    39,    -1,
      39,    97,   104,    39,    77,    -1,    39,    97,   104,    39,
      79,    -1,    39,    97,   104,    40,    -1,    40,    -1,    41,
      -1,    42,    -1,    39,    -1,    39,    77,    -1,    39,    79,
      -1,    39,    97,    40,    -1,    40,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   211,   211,   212,   213,   214,   217,   217,   218,   218,
     218,   221,   224,   225,   228,   229,   232,   232,   232,   233,
     233,   234,   237,   237,   237,   238,   241,   242,   243,   244,
     247,   248,   249,   249,   251,   251,   252,   252,   254,   255,
     256,   258,   259,   260,   262,   264,   266,   267,   268,   269,
     270,   271,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   287,   288,   289,   290,   293,   295,   296,
     298,   299,   311,   312,   315,   316,   318,   319,   320,   321,
     324,   326,   327,   328,   331,   332,   333,   334,   335,   336,
     337,   340,   341,   344,   345,   346,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   373,   374,
     376,   377,   379,   380,   381,   383,   383,   384,   385,   386,
     387,   390,   390,   391,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   408,   409,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   461,   462,   464,   465,   466,
     467,   470,   471,   472,   473,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   496,   497,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   521,   522,   523,   524,   527,
     527,   532,   533,   536,   537,   538,   539,   540,   543,   544,
     545,   546,   547,   548,   549,   552,   553,   554,   557,   558,
     559,   560,   561
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "OPCODE", "ALIGN_DIRECTIVE",
  "BRANCHTARGETS_DIRECTIVE", "BYTE_DIRECTIVE", "CALLPROTOTYPE_DIRECTIVE",
  "CALLTARGETS_DIRECTIVE", "CONST_DIRECTIVE", "CONSTPTR_DIRECTIVE",
  "PTR_DIRECTIVE", "ENTRY_DIRECTIVE", "EXTERN_DIRECTIVE", "FILE_DIRECTIVE",
  "FUNC_DIRECTIVE", "GLOBAL_DIRECTIVE", "LOCAL_DIRECTIVE", "LOC_DIRECTIVE",
  "MAXNCTAPERSM_DIRECTIVE", "MAXNNREG_DIRECTIVE", "MAXNTID_DIRECTIVE",
  "MINNCTAPERSM_DIRECTIVE", "PARAM_DIRECTIVE", "PRAGMA_DIRECTIVE",
  "REG_DIRECTIVE", "REQNTID_DIRECTIVE", "SECTION_DIRECTIVE",
  "SHARED_DIRECTIVE", "SREG_DIRECTIVE", "STRUCT_DIRECTIVE",
  "SURF_DIRECTIVE", "TARGET_DIRECTIVE", "TEX_DIRECTIVE", "UNION_DIRECTIVE",
  "VERSION_DIRECTIVE", "ADDRESS_SIZE_DIRECTIVE", "VISIBLE_DIRECTIVE",
  "IDENTIFIER", "INT_OPERAND", "FLOAT_OPERAND", "DOUBLE_OPERAND",
  "S8_TYPE", "S16_TYPE", "S32_TYPE", "S64_TYPE", "U8_TYPE", "U16_TYPE",
  "U32_TYPE", "U64_TYPE", "F16_TYPE", "F32_TYPE", "F64_TYPE", "FF64_TYPE",
  "B8_TYPE", "B16_TYPE", "B32_TYPE", "B64_TYPE", "BB64_TYPE", "BB128_TYPE",
  "PRED_TYPE", "TEXREF_TYPE", "SAMPLERREF_TYPE", "SURFREF_TYPE", "V2_TYPE",
  "V3_TYPE", "V4_TYPE", "COMMA", "PRED", "HALF_OPTION", "EQ_OPTION",
  "NE_OPTION", "LT_OPTION", "LE_OPTION", "GT_OPTION", "GE_OPTION",
  "LO_OPTION", "LS_OPTION", "HI_OPTION", "HS_OPTION", "EQU_OPTION",
  "NEU_OPTION", "LTU_OPTION", "LEU_OPTION", "GTU_OPTION", "GEU_OPTION",
  "NUM_OPTION", "NAN_OPTION", "CF_OPTION", "SF_OPTION", "NSF_OPTION",
  "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET", "WIDE_OPTION",
  "SPECIAL_REGISTER", "MINUS", "PLUS", "COLON", "SEMI_COLON",
  "EXCLAMATION", "PIPE", "RIGHT_BRACE", "LEFT_BRACE", "EQUALS", "PERIOD",
  "BACKSLASH", "DIMENSION_MODIFIER", "RN_OPTION", "RZ_OPTION", "RM_OPTION",
  "RP_OPTION", "RNI_OPTION", "RZI_OPTION", "RMI_OPTION", "RPI_OPTION",
  "UNI_OPTION", "GEOM_MODIFIER_1D", "GEOM_MODIFIER_2D", "GEOM_MODIFIER_3D",
  "SAT_OPTION", "FTZ_OPTION", "NEG_OPTION", "SYNC_OPTION", "RED_OPTION",
  "ARRIVE_OPTION", "ATOMIC_POPC", "ATOMIC_AND", "ATOMIC_OR", "ATOMIC_XOR",
  "ATOMIC_CAS", "ATOMIC_EXCH", "ATOMIC_ADD", "ATOMIC_INC", "ATOMIC_DEC",
  "ATOMIC_MIN", "ATOMIC_MAX", "LEFT_ANGLE_BRACKET", "RIGHT_ANGLE_BRACKET",
  "LEFT_PAREN", "RIGHT_PAREN", "APPROX_OPTION", "FULL_OPTION",
  "ANY_OPTION", "ALL_OPTION", "BALLOT_OPTION", "GLOBAL_OPTION",
  "CTA_OPTION", "SYS_OPTION", "EXIT_OPTION", "ABS_OPTION", "TO_OPTION",
  "CA_OPTION", "CG_OPTION", "CS_OPTION", "LU_OPTION", "CV_OPTION",
  "WB_OPTION", "WT_OPTION", "$accept", "input", "function_defn", "$@1",
  "$@2", "$@3", "block_spec", "block_spec_list", "function_decl", "$@4",
  "$@5", "$@6", "function_ident_param", "$@7", "$@8",
  "function_decl_header", "param_list", "$@9", "param_entry", "$@10",
  "$@11", "ptr_spec", "ptr_space_spec", "ptr_align_spec",
  "statement_block", "statement_list", "directive_statement",
  "variable_declaration", "variable_spec", "identifier_list",
  "identifier_spec", "var_spec_list", "var_spec", "align_spec",
  "space_spec", "addressable_spec", "type_spec", "vector_spec",
  "scalar_type", "initializer_list", "literal_list",
  "instruction_statement", "instruction", "$@12", "opcode_spec", "$@13",
  "pred_spec", "option_list", "option", "atomic_operation_spec",
  "rounding_mode", "floating_point_rounding_mode", "integer_rounding_mode",
  "compare_spec", "operand_list", "operand", "vector_operand",
  "tex_operand", "$@14", "builtin_operand", "memory_operand",
  "twin_operand", "literal_operand", "address_expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   159,   160,   160,   160,   160,   162,   161,   163,   164,
     161,   165,   165,   165,   166,   166,   168,   169,   167,   170,
     167,   167,   172,   173,   171,   171,   174,   174,   174,   174,
     175,   175,   176,   175,   178,   177,   179,   177,   180,   180,
     180,   181,   181,   181,   182,   183,   184,   184,   184,   184,
     184,   184,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   186,   186,   186,   186,   187,   188,   188,
     189,   189,   189,   189,   190,   190,   191,   191,   191,   191,
     192,   193,   193,   193,   194,   194,   194,   194,   194,   194,
     194,   195,   195,   196,   196,   196,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   198,   198,
     199,   199,   200,   200,   200,   202,   201,   201,   201,   201,
     201,   204,   203,   203,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   206,   206,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   209,   209,   210,   210,   210,
     210,   211,   211,   211,   211,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   213,   213,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   215,   215,   215,   215,   217,
     216,   218,   218,   219,   219,   219,   219,   219,   220,   220,
     220,   220,   220,   220,   220,   221,   221,   221,   222,   222,
     222,   222,   222
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     0,     3,     0,     0,
       5,     6,     2,     2,     1,     2,     0,     0,     7,     0,
       3,     1,     0,     0,     6,     1,     1,     1,     2,     2,
       0,     1,     0,     4,     0,     5,     0,     4,     0,     3,
       2,     1,     1,     1,     2,     3,     1,     1,     2,     2,
       2,     1,     2,     2,     3,     2,     4,     6,     2,     3,
       4,     3,     2,     2,     4,     4,     6,     1,     1,     3,
       1,     4,     3,     4,     1,     2,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     3,     2,     2,     3,     0,    11,     6,     5,     2,
       1,     0,     3,     1,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     2,     1,     1,
       1,     1,     2,     1,     3,     2,     3,     2,     3,     3,
       4,     4,     3,     4,     4,     5,     7,     9,     3,     0,
       6,     2,     1,     3,     4,     4,     4,     2,     3,     4,
       4,     4,     5,     5,     4,     1,     1,     1,     1,     2,
       2,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,    84,     0,    26,    79,     0,    27,
      85,    86,     0,    87,     0,    81,    88,    82,    89,     0,
      90,     0,     0,     0,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,    93,    94,    95,     4,
       5,    21,     3,     0,     0,    67,    74,    78,    76,    83,
      77,     0,    91,    80,     0,    29,     0,     0,     0,    58,
      53,    55,    28,    62,     0,     0,    16,     0,    52,    70,
      63,    68,    79,    75,    92,     0,    59,     0,    61,     0,
      54,     0,     7,     0,     0,     0,    14,     9,     0,    25,
      20,     0,     0,     0,     0,     0,    60,    56,   131,     0,
       0,     0,    51,     0,    46,    47,     0,   130,     0,    13,
       0,    12,     0,    15,    34,    36,     0,     0,     0,    72,
       0,    69,   265,   266,   267,     0,    64,    65,     0,     0,
       0,   123,   134,     0,    45,    50,    48,    49,   122,   225,
       0,   252,     0,     0,     0,     0,   129,   223,   231,   233,
     230,   228,   229,     0,     0,    10,     0,     0,    17,    23,
      73,    71,     0,     0,   120,    66,    57,   176,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   157,   197,   198,   199,
     200,   201,   202,   203,   204,   156,   164,   165,   166,   167,
     168,   169,   153,   155,   154,   185,   184,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   170,   171,   158,   159,
     160,   161,   162,   163,   172,   173,   175,   177,   178,   179,
     180,   181,   182,   183,   151,   149,   132,   147,   174,   152,
     195,   196,   150,   137,   139,   136,   138,   140,   141,   143,
     142,   144,   145,   146,   135,   235,   237,     0,     0,     0,
       0,   268,   272,     0,   251,   227,     0,     0,   232,   257,
     226,     0,     0,     0,   124,     0,    38,     0,     0,    30,
     119,     0,   118,   148,   268,   265,     0,     0,     0,   234,
     239,   242,   249,   269,   270,     0,   253,   236,   238,   268,
       0,     0,   248,   125,     0,   224,   223,     0,     0,     0,
      37,    18,     0,    31,   121,     0,   256,   255,   254,   240,
     241,   243,   244,     0,   271,     0,     0,   128,     0,     0,
      11,     0,    41,    42,    43,     0,    40,    35,    32,    24,
     258,     0,     0,     0,   245,     0,   127,    44,    39,     0,
     259,   260,   261,   264,   250,     0,     0,    33,   262,   263,
       0,   246,     0,     0,     0,   247,     0,   126
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    49,    74,    75,   122,    96,    97,   111,    98,
     288,    77,   100,   127,   289,    51,   322,   359,   126,   166,
     167,   319,   345,   346,    92,   113,    52,    53,    54,    80,
      81,    55,    56,    57,    58,    59,    60,    61,    62,   136,
     173,   115,   116,   336,   117,   140,   118,   246,   247,   248,
     249,   250,   251,   252,   315,   316,   158,   159,   333,   160,
     161,   296,   162,   273
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -273
static const yytype_int16 yypact[] =
{
    -273,   411,  -273,   -29,  -273,   -20,  -273,     6,   -13,  -273,
    -273,  -273,    52,  -273,    92,  -273,  -273,  -273,  -273,    61,
    -273,   131,    63,   162,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
     -10,    26,  -273,    97,   160,   474,  -273,  -273,  -273,  -273,
    -273,   499,  -273,  -273,   148,  -273,   217,   183,   127,   175,
     154,  -273,  -273,  -273,   188,    76,  -273,   237,  -273,    70,
     231,   199,  -273,  -273,  -273,   271,  -273,   296,  -273,   299,
    -273,   343,  -273,   300,   301,   302,  -273,    76,   -18,   200,
    -273,    64,   303,   160,   -17,   276,  -273,   277,   129,   248,
     -34,   250,  -273,   268,  -273,  -273,   251,   135,   347,  -273,
     284,  -273,   188,  -273,  -273,  -273,   223,   216,   272,  -273,
     226,  -273,  -273,  -273,  -273,   -17,  -273,  -273,   326,   335,
      -3,  -273,   493,   339,  -273,  -273,  -273,  -273,  -273,   111,
     165,   278,    -2,   344,   345,   153,  -273,   346,  -273,  -273,
    -273,  -273,  -273,   314,   375,  -273,   474,   474,  -273,  -273,
    -273,  -273,   315,    34,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,    -3,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,   222,   378,   380,
     381,   192,  -273,   330,  -273,   110,   215,   117,  -273,  -273,
    -273,    96,   291,   141,  -273,   364,   421,   160,   237,   -18,
    -273,   225,  -273,  -273,   -59,  -273,   341,   349,   357,  -273,
     -43,   163,  -273,  -273,  -273,   398,  -273,  -273,  -273,   173,
     359,   400,  -273,  -273,   119,  -273,   384,   413,   229,   160,
    -273,  -273,   -52,  -273,  -273,    -7,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,   377,  -273,    98,   414,  -273,   350,   153,
    -273,   441,  -273,  -273,  -273,   478,  -273,  -273,  -273,  -273,
     198,   256,   392,   447,  -273,   153,  -273,  -273,  -273,   -18,
    -273,  -273,   211,  -273,  -273,   104,   419,  -273,  -273,  -273,
     450,  -273,   354,   393,   153,  -273,   356,  -273
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -273,  -273,  -273,  -273,  -273,  -273,   397,  -273,   496,  -273,
    -273,  -273,   213,  -273,  -273,  -273,  -273,  -273,  -272,  -273,
    -273,  -273,  -273,   157,    88,  -273,    72,  -273,   142,  -273,
    -101,  -273,   444,  -273,  -273,  -112,  -110,  -273,   446,   370,
    -273,   396,   394,  -273,  -273,  -273,  -273,   263,  -273,  -273,
    -273,  -273,  -273,  -273,  -117,  -116,  -149,  -273,  -273,  -273,
    -143,  -273,  -100,   244
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -134
static const yytype_int16 yytable[] =
{
     156,   157,   131,   278,   137,   142,   124,     4,   125,   279,
      -8,    63,    -8,    -8,    10,    11,   348,   323,   303,    64,
     304,    13,    65,   132,   133,   134,    16,    66,   244,    18,
     245,    20,   350,   334,   329,   174,   330,   275,   325,   282,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,   -19,   143,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   135,   367,   349,    73,
     276,   196,    67,    -6,   277,    68,    93,   351,    94,    95,
      69,   154,   291,    71,   128,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   279,   244,   292,   245,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   310,   129,   149,   132,
     133,   134,   101,   114,   311,    76,   353,   297,  -133,  -133,
    -133,  -133,   370,    70,   149,   132,   133,   134,    72,   112,
     149,   132,   133,   134,   352,   146,   320,   307,   265,   308,
     266,   324,   149,   132,   133,   134,    78,   338,   312,    79,
     354,   145,   267,   267,   271,   272,   371,   102,   268,   276,
     165,   150,   269,   277,   151,   152,    85,   270,   347,   153,
      86,  -133,   154,    87,  -133,  -133,    88,   150,  -133,  -133,
     151,   152,  -133,   150,   341,   153,   151,   152,   154,   366,
     331,   153,   332,    89,   154,   150,   342,   343,   151,   152,
     303,    90,   304,   153,   309,   272,   154,   376,   344,   337,
     302,   294,   295,   133,   134,   132,   133,   134,  -133,   303,
     305,   304,   108,     3,   155,   360,    99,   361,     4,     5,
     314,     6,     7,     8,     9,    10,    11,    12,   368,   305,
     369,    91,    13,    14,    15,   362,   363,    16,    17,   103,
      18,    19,    20,   104,    21,    22,    23,   109,   286,   287,
     105,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,   106,   110,   107,   -22,
     119,   120,   121,   130,   138,   139,   141,   108,     3,    73,
     148,   108,   164,     4,     5,   169,     6,     7,     8,     9,
      10,    11,    12,   168,   171,   170,   175,    13,    14,    15,
     144,    91,    16,    17,   176,    18,    19,    20,   264,    21,
      22,    23,   109,   280,   281,   274,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     2,   110,   284,   283,   285,     3,   290,   299,   300,
     301,     4,     5,   306,     6,     7,     8,     9,    10,    11,
      12,   313,   317,   318,   326,    13,    14,    15,   334,   335,
      16,    17,   327,    18,    19,    20,    91,    21,    22,    23,
     328,   267,   339,   340,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     3,
     154,   357,   355,   341,     4,   364,   365,   372,    82,   373,
     356,    10,    11,   374,   123,   375,   377,    50,    13,    83,
      15,   321,   358,    16,    17,   172,    18,    84,    20,   147,
     293,   298,   163,     0,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,   253,   254,   255,   256,     0,   257,
       0,     0,     0,     0,   258,   259,     0,     0,   260,     0,
       0,     0,   261,   262,   263
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-273))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     117,   117,   103,   152,   104,    39,    24,    10,    26,   152,
      20,    40,    22,    23,    17,    18,    68,   289,    77,    39,
      79,    24,    16,    40,    41,    42,    29,    40,   140,    32,
     140,    34,    39,    40,    77,   135,    79,    39,    97,   155,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    39,   100,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   103,   359,   140,    99,
      92,    94,    40,   103,    96,     3,    20,   104,    22,    23,
      39,   103,    68,    40,    40,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   277,   247,   102,   247,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,    39,    93,    39,    40,
      41,    42,    92,    91,    68,   139,    68,   267,    39,    40,
      41,    42,    68,    42,    39,    40,    41,    42,    16,    91,
      39,    40,    41,    42,   333,   113,   287,    77,    77,    79,
      79,   291,    39,    40,    41,    42,    99,   314,   102,    39,
     102,   113,    92,    92,    39,    40,   102,   137,    97,    92,
     122,    92,   101,    96,    95,    96,    68,   106,   319,   100,
       3,    92,   103,    40,    95,    96,    99,    92,    99,   100,
      95,    96,   103,    92,     5,   100,    95,    96,   103,   355,
      77,   100,    79,    68,   103,    92,    17,    18,    95,    96,
      77,    97,    79,   100,    39,    40,   103,   374,    29,   140,
      68,    39,    40,    41,    42,    40,    41,    42,   139,    77,
      97,    79,     4,     5,   139,    77,    39,    79,    10,    11,
     139,    13,    14,    15,    16,    17,    18,    19,    77,    97,
      79,   103,    24,    25,    26,    39,    40,    29,    30,    68,
      32,    33,    34,   104,    36,    37,    38,    39,   166,   167,
      39,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    40,    69,    39,   139,
      40,    40,    40,    40,    68,    68,    98,     4,     5,    99,
      99,     4,    68,    10,    11,   139,    13,    14,    15,    16,
      17,    18,    19,   140,   138,    93,    40,    24,    25,    26,
     102,   103,    29,    30,    39,    32,    33,    34,    39,    36,
      37,    38,    39,    39,    39,   107,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,     0,    69,    99,    68,    40,     5,   102,    40,    39,
      39,    10,    11,    93,    13,    14,    15,    16,    17,    18,
      19,   140,    68,    12,    93,    24,    25,    26,    40,    39,
      29,    30,    93,    32,    33,    34,   103,    36,    37,    38,
      93,    92,    68,    40,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,     5,
     103,    40,    68,     5,    10,    93,    39,    68,    14,    39,
     140,    17,    18,   139,    97,   102,   140,     1,    24,    55,
      26,   288,   345,    29,    30,   135,    32,    61,    34,   113,
     247,   267,   118,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    71,    72,    73,    74,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,    -1,
      -1,    -1,    89,    90,    91
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   160,     0,     5,    10,    11,    13,    14,    15,    16,
      17,    18,    19,    24,    25,    26,    29,    30,    32,    33,
      34,    36,    37,    38,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,   161,
     167,   174,   185,   186,   187,   190,   191,   192,   193,   194,
     195,   196,   197,    40,    39,    16,    40,    40,     3,    39,
      42,    40,    16,    99,   162,   163,   139,   170,    99,    39,
     188,   189,    14,   191,   197,    68,     3,    40,    99,    68,
      97,   103,   183,    20,    22,    23,   165,   166,   168,    39,
     171,    92,   137,    68,   104,    39,    40,    39,     4,    39,
      69,   167,   183,   184,   185,   200,   201,   203,   205,    40,
      40,    40,   164,   165,    24,    26,   177,   172,    40,    93,
      40,   189,    40,    41,    42,   103,   198,   221,    68,    68,
     204,    98,    39,   100,   102,   183,   185,   200,    99,    39,
      92,    95,    96,   100,   103,   139,   213,   214,   215,   216,
     218,   219,   221,   201,    68,   183,   178,   179,   140,   139,
      93,   138,   198,   199,   221,    40,    39,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    94,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   194,   195,   206,   207,   208,   209,
     210,   211,   212,    71,    72,    73,    74,    76,    81,    82,
      85,    89,    90,    91,    39,    77,    79,    92,    97,   101,
     106,    39,    40,   222,   107,    39,    92,    96,   215,   219,
      39,    39,   214,    68,    99,    40,   187,   187,   169,   173,
     102,    68,   102,   206,    39,    40,   220,   221,   222,    40,
      39,    39,    68,    77,    79,    97,    93,    77,    79,    39,
      39,    68,   102,   140,   139,   213,   214,    68,    12,   180,
     189,   171,   175,   177,   221,    97,    93,    93,    93,    77,
      79,    77,    79,   217,    40,    39,   202,   140,   213,    68,
      40,     5,    17,    18,    29,   181,   182,   189,    68,   140,
      39,   104,   215,    68,   102,    68,   140,    40,   182,   176,
      77,    79,    39,    40,    93,    39,   214,   177,    77,    79,
      68,   102,    68,    39,   139,   102,   213,   140
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:

/* Line 1806 of yacc.c  */
#line 217 "../src/cuda-sim/ptx.y"
    { set_symtab((yyvsp[(1) - (1)].ptr_value)); func_header(".skip"); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 217 "../src/cuda-sim/ptx.y"
    { end_function(); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 218 "../src/cuda-sim/ptx.y"
    { set_symtab((yyvsp[(1) - (1)].ptr_value)); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 218 "../src/cuda-sim/ptx.y"
    { func_header(".skip"); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 218 "../src/cuda-sim/ptx.y"
    { end_function(); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 221 "../src/cuda-sim/ptx.y"
    {func_header_info_int(".maxntid", (yyvsp[(2) - (6)].int_value));
										func_header_info_int(",", (yyvsp[(4) - (6)].int_value));
										func_header_info_int(",", (yyvsp[(6) - (6)].int_value)); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 224 "../src/cuda-sim/ptx.y"
    { func_header_info_int(".minnctapersm", (yyvsp[(2) - (2)].int_value)); printf("GPGPU-Sim: Warning: .minnctapersm ignored. \n"); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 225 "../src/cuda-sim/ptx.y"
    { func_header_info_int(".maxnctapersm", (yyvsp[(2) - (2)].int_value)); printf("GPGPU-Sim: Warning: .maxnctapersm ignored. \n"); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 232 "../src/cuda-sim/ptx.y"
    { start_function((yyvsp[(1) - (2)].int_value)); func_header_info("(");}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 232 "../src/cuda-sim/ptx.y"
    {func_header_info(")");}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 232 "../src/cuda-sim/ptx.y"
    { (yyval.ptr_value) = reset_symtab(); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 233 "../src/cuda-sim/ptx.y"
    { start_function((yyvsp[(1) - (1)].int_value)); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 233 "../src/cuda-sim/ptx.y"
    { (yyval.ptr_value) = reset_symtab(); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 234 "../src/cuda-sim/ptx.y"
    { start_function((yyvsp[(1) - (1)].int_value)); add_function_name(""); g_func_decl=0; (yyval.ptr_value) = reset_symtab(); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 237 "../src/cuda-sim/ptx.y"
    { add_function_name((yyvsp[(1) - (1)].string_value)); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 237 "../src/cuda-sim/ptx.y"
    {func_header_info("(");}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 237 "../src/cuda-sim/ptx.y"
    { g_func_decl=0; func_header_info(")"); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 238 "../src/cuda-sim/ptx.y"
    { add_function_name((yyvsp[(1) - (1)].string_value)); g_func_decl=0; }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 241 "../src/cuda-sim/ptx.y"
    { (yyval.int_value) = 1; g_func_decl=1; func_header(".entry"); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 242 "../src/cuda-sim/ptx.y"
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 243 "../src/cuda-sim/ptx.y"
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 244 "../src/cuda-sim/ptx.y"
    { (yyval.int_value) = 2; g_func_decl=1; func_header(".func"); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 248 "../src/cuda-sim/ptx.y"
    { add_directive(); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 249 "../src/cuda-sim/ptx.y"
    {func_header_info(",");}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 249 "../src/cuda-sim/ptx.y"
    { add_directive(); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 251 "../src/cuda-sim/ptx.y"
    { add_space_spec(param_space_unclassified,0); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 251 "../src/cuda-sim/ptx.y"
    { add_function_arg(); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 252 "../src/cuda-sim/ptx.y"
    { add_space_spec(reg_space,0); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 252 "../src/cuda-sim/ptx.y"
    { add_function_arg(); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 258 "../src/cuda-sim/ptx.y"
    { add_ptr_spec(global_space); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 259 "../src/cuda-sim/ptx.y"
    { add_ptr_spec(local_space); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 260 "../src/cuda-sim/ptx.y"
    { add_ptr_spec(shared_space); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 266 "../src/cuda-sim/ptx.y"
    { add_directive(); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 267 "../src/cuda-sim/ptx.y"
    { add_instruction(); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 268 "../src/cuda-sim/ptx.y"
    { add_directive(); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 269 "../src/cuda-sim/ptx.y"
    { add_instruction(); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 275 "../src/cuda-sim/ptx.y"
    { add_version_info((yyvsp[(2) - (2)].double_value), 0); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 276 "../src/cuda-sim/ptx.y"
    { add_version_info((yyvsp[(2) - (3)].double_value),1); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 277 "../src/cuda-sim/ptx.y"
    {/*Do nothing*/}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 278 "../src/cuda-sim/ptx.y"
    { target_header2((yyvsp[(2) - (4)].string_value),(yyvsp[(4) - (4)].string_value)); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 279 "../src/cuda-sim/ptx.y"
    { target_header3((yyvsp[(2) - (6)].string_value),(yyvsp[(4) - (6)].string_value),(yyvsp[(6) - (6)].string_value)); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 280 "../src/cuda-sim/ptx.y"
    { target_header((yyvsp[(2) - (2)].string_value)); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 281 "../src/cuda-sim/ptx.y"
    { add_file((yyvsp[(2) - (3)].int_value),(yyvsp[(3) - (3)].string_value)); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 283 "../src/cuda-sim/ptx.y"
    { add_pragma((yyvsp[(2) - (3)].string_value)); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 284 "../src/cuda-sim/ptx.y"
    {/*Do nothing*/}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 287 "../src/cuda-sim/ptx.y"
    { add_variables(); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 288 "../src/cuda-sim/ptx.y"
    { add_variables(); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 289 "../src/cuda-sim/ptx.y"
    { add_variables(); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 290 "../src/cuda-sim/ptx.y"
    { add_constptr((yyvsp[(2) - (6)].string_value), (yyvsp[(4) - (6)].string_value), (yyvsp[(6) - (6)].int_value)); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 293 "../src/cuda-sim/ptx.y"
    { set_variable_type(); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 298 "../src/cuda-sim/ptx.y"
    { add_identifier((yyvsp[(1) - (1)].string_value),0,NON_ARRAY_IDENTIFIER); func_header_info((yyvsp[(1) - (1)].string_value));}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 299 "../src/cuda-sim/ptx.y"
    { func_header_info((yyvsp[(1) - (4)].string_value)); func_header_info_int("<", (yyvsp[(3) - (4)].int_value)); func_header_info(">");
		int i,lbase,l;
		char *id = NULL;
		lbase = strlen((yyvsp[(1) - (4)].string_value));
		for( i=0; i < (yyvsp[(3) - (4)].int_value); i++ ) { 
			l = lbase + (int)log10(i+1)+10;
			id = (char*) malloc(l);
			snprintf(id,l,"%s%u",(yyvsp[(1) - (4)].string_value),i);
			add_identifier(id,0,NON_ARRAY_IDENTIFIER); 
		}
		free((yyvsp[(1) - (4)].string_value));
	}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 311 "../src/cuda-sim/ptx.y"
    { add_identifier((yyvsp[(1) - (3)].string_value),0,ARRAY_IDENTIFIER_NO_DIM); func_header_info((yyvsp[(1) - (3)].string_value)); func_header_info("["); func_header_info("]");}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 312 "../src/cuda-sim/ptx.y"
    { add_identifier((yyvsp[(1) - (4)].string_value),(yyvsp[(3) - (4)].int_value),ARRAY_IDENTIFIER); func_header_info((yyvsp[(1) - (4)].string_value)); func_header_info_int("[",(yyvsp[(3) - (4)].int_value)); func_header_info("]");}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 321 "../src/cuda-sim/ptx.y"
    { add_extern_spec(); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 324 "../src/cuda-sim/ptx.y"
    { add_alignment_spec((yyvsp[(2) - (2)].int_value)); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 326 "../src/cuda-sim/ptx.y"
    {  add_space_spec(reg_space,0); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 327 "../src/cuda-sim/ptx.y"
    {  add_space_spec(reg_space,0); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 331 "../src/cuda-sim/ptx.y"
    {  add_space_spec(const_space,(yyvsp[(1) - (1)].int_value)); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 332 "../src/cuda-sim/ptx.y"
    {  add_space_spec(global_space,0); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 333 "../src/cuda-sim/ptx.y"
    {  add_space_spec(local_space,0); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 334 "../src/cuda-sim/ptx.y"
    {  add_space_spec(param_space_unclassified,0); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 335 "../src/cuda-sim/ptx.y"
    {  add_space_spec(shared_space,0); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 336 "../src/cuda-sim/ptx.y"
    {  add_space_spec(surf_space,0); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 337 "../src/cuda-sim/ptx.y"
    {  add_space_spec(tex_space,0); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 344 "../src/cuda-sim/ptx.y"
    {  add_option(V2_TYPE); func_header_info(".v2");}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 345 "../src/cuda-sim/ptx.y"
    {  add_option(V3_TYPE); func_header_info(".v3");}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 346 "../src/cuda-sim/ptx.y"
    {  add_option(V4_TYPE); func_header_info(".v4");}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 349 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( S8_TYPE ); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 350 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( S16_TYPE ); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 351 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( S32_TYPE ); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 352 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( S64_TYPE ); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 353 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( U8_TYPE ); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 354 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( U16_TYPE ); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 355 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( U32_TYPE ); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 356 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( U64_TYPE ); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 357 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( F16_TYPE ); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 358 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( F32_TYPE ); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 359 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( F64_TYPE ); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 360 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( FF64_TYPE ); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 361 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( B8_TYPE );  }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 362 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( B16_TYPE ); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 363 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( B32_TYPE ); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 364 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( B64_TYPE ); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 365 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( BB64_TYPE ); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 366 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( BB128_TYPE ); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 367 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( PRED_TYPE ); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 368 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( TEXREF_TYPE ); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 369 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( SAMPLERREF_TYPE ); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 370 "../src/cuda-sim/ptx.y"
    { add_scalar_type_spec( SURFREF_TYPE ); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 373 "../src/cuda-sim/ptx.y"
    { add_array_initializer(); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 374 "../src/cuda-sim/ptx.y"
    { syntax_not_implemented(); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 380 "../src/cuda-sim/ptx.y"
    { add_label((yyvsp[(1) - (2)].string_value)); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 383 "../src/cuda-sim/ptx.y"
    { set_return(); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 390 "../src/cuda-sim/ptx.y"
    { add_opcode((yyvsp[(1) - (1)].int_value)); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 391 "../src/cuda-sim/ptx.y"
    { add_opcode((yyvsp[(1) - (1)].int_value)); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 393 "../src/cuda-sim/ptx.y"
    { add_pred((yyvsp[(2) - (2)].string_value),0, -1); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 394 "../src/cuda-sim/ptx.y"
    { add_pred((yyvsp[(3) - (3)].string_value),1, -1); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 395 "../src/cuda-sim/ptx.y"
    { add_pred((yyvsp[(2) - (3)].string_value),0,1); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 396 "../src/cuda-sim/ptx.y"
    { add_pred((yyvsp[(2) - (3)].string_value),0,2); }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 397 "../src/cuda-sim/ptx.y"
    { add_pred((yyvsp[(2) - (3)].string_value),0,3); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 398 "../src/cuda-sim/ptx.y"
    { add_pred((yyvsp[(2) - (3)].string_value),0,5); }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 399 "../src/cuda-sim/ptx.y"
    { add_pred((yyvsp[(2) - (3)].string_value),0,6); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 400 "../src/cuda-sim/ptx.y"
    { add_pred((yyvsp[(2) - (3)].string_value),0,10); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 401 "../src/cuda-sim/ptx.y"
    { add_pred((yyvsp[(2) - (3)].string_value),0,12); }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 402 "../src/cuda-sim/ptx.y"
    { add_pred((yyvsp[(2) - (3)].string_value),0,13); }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 403 "../src/cuda-sim/ptx.y"
    { add_pred((yyvsp[(2) - (3)].string_value),0,17); }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 404 "../src/cuda-sim/ptx.y"
    { add_pred((yyvsp[(2) - (3)].string_value),0,19); }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 405 "../src/cuda-sim/ptx.y"
    { add_pred((yyvsp[(2) - (3)].string_value),0,28); }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 415 "../src/cuda-sim/ptx.y"
    { add_option(SYNC_OPTION); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 416 "../src/cuda-sim/ptx.y"
    { add_option(ARRIVE_OPTION); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 417 "../src/cuda-sim/ptx.y"
    { add_option(RED_OPTION); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 418 "../src/cuda-sim/ptx.y"
    { add_option(UNI_OPTION); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 419 "../src/cuda-sim/ptx.y"
    { add_option(WIDE_OPTION); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 420 "../src/cuda-sim/ptx.y"
    { add_option(ANY_OPTION); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 421 "../src/cuda-sim/ptx.y"
    { add_option(ALL_OPTION); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 422 "../src/cuda-sim/ptx.y"
    { add_option(BALLOT_OPTION); }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 423 "../src/cuda-sim/ptx.y"
    { add_option(GLOBAL_OPTION); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 424 "../src/cuda-sim/ptx.y"
    { add_option(CTA_OPTION); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 425 "../src/cuda-sim/ptx.y"
    { add_option(SYS_OPTION); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 426 "../src/cuda-sim/ptx.y"
    { add_option(GEOM_MODIFIER_1D); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 427 "../src/cuda-sim/ptx.y"
    { add_option(GEOM_MODIFIER_2D); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 428 "../src/cuda-sim/ptx.y"
    { add_option(GEOM_MODIFIER_3D); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 429 "../src/cuda-sim/ptx.y"
    { add_option(SAT_OPTION); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 430 "../src/cuda-sim/ptx.y"
    { add_option(FTZ_OPTION); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 431 "../src/cuda-sim/ptx.y"
    { add_option(NEG_OPTION); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 432 "../src/cuda-sim/ptx.y"
    { add_option(APPROX_OPTION); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 433 "../src/cuda-sim/ptx.y"
    { add_option(FULL_OPTION); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 434 "../src/cuda-sim/ptx.y"
    { add_option(EXIT_OPTION); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 435 "../src/cuda-sim/ptx.y"
    { add_option(ABS_OPTION); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 437 "../src/cuda-sim/ptx.y"
    { add_option(TO_OPTION); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 438 "../src/cuda-sim/ptx.y"
    { add_option(HALF_OPTION); }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 439 "../src/cuda-sim/ptx.y"
    { add_option(CA_OPTION); }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 440 "../src/cuda-sim/ptx.y"
    { add_option(CG_OPTION); }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 441 "../src/cuda-sim/ptx.y"
    { add_option(CS_OPTION); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 442 "../src/cuda-sim/ptx.y"
    { add_option(LU_OPTION); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 443 "../src/cuda-sim/ptx.y"
    { add_option(CV_OPTION); }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 444 "../src/cuda-sim/ptx.y"
    { add_option(WB_OPTION); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 445 "../src/cuda-sim/ptx.y"
    { add_option(WT_OPTION); }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 448 "../src/cuda-sim/ptx.y"
    { add_option(ATOMIC_AND); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 449 "../src/cuda-sim/ptx.y"
    { add_option(ATOMIC_POPC); }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 450 "../src/cuda-sim/ptx.y"
    { add_option(ATOMIC_OR); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 451 "../src/cuda-sim/ptx.y"
    { add_option(ATOMIC_XOR); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 452 "../src/cuda-sim/ptx.y"
    { add_option(ATOMIC_CAS); }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 453 "../src/cuda-sim/ptx.y"
    { add_option(ATOMIC_EXCH); }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 454 "../src/cuda-sim/ptx.y"
    { add_option(ATOMIC_ADD); }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 455 "../src/cuda-sim/ptx.y"
    { add_option(ATOMIC_INC); }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 456 "../src/cuda-sim/ptx.y"
    { add_option(ATOMIC_DEC); }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 457 "../src/cuda-sim/ptx.y"
    { add_option(ATOMIC_MIN); }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 458 "../src/cuda-sim/ptx.y"
    { add_option(ATOMIC_MAX); }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 464 "../src/cuda-sim/ptx.y"
    { add_option(RN_OPTION); }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 465 "../src/cuda-sim/ptx.y"
    { add_option(RZ_OPTION); }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 466 "../src/cuda-sim/ptx.y"
    { add_option(RM_OPTION); }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 467 "../src/cuda-sim/ptx.y"
    { add_option(RP_OPTION); }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 470 "../src/cuda-sim/ptx.y"
    { add_option(RNI_OPTION); }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 471 "../src/cuda-sim/ptx.y"
    { add_option(RZI_OPTION); }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 472 "../src/cuda-sim/ptx.y"
    { add_option(RMI_OPTION); }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 473 "../src/cuda-sim/ptx.y"
    { add_option(RPI_OPTION); }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 476 "../src/cuda-sim/ptx.y"
    { add_option(EQ_OPTION); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 477 "../src/cuda-sim/ptx.y"
    { add_option(NE_OPTION); }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 478 "../src/cuda-sim/ptx.y"
    { add_option(LT_OPTION); }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 479 "../src/cuda-sim/ptx.y"
    { add_option(LE_OPTION); }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 480 "../src/cuda-sim/ptx.y"
    { add_option(GT_OPTION); }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 481 "../src/cuda-sim/ptx.y"
    { add_option(GE_OPTION); }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 482 "../src/cuda-sim/ptx.y"
    { add_option(LO_OPTION); }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 483 "../src/cuda-sim/ptx.y"
    { add_option(LS_OPTION); }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 484 "../src/cuda-sim/ptx.y"
    { add_option(HI_OPTION); }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 485 "../src/cuda-sim/ptx.y"
    { add_option(HS_OPTION); }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 486 "../src/cuda-sim/ptx.y"
    { add_option(EQU_OPTION); }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 487 "../src/cuda-sim/ptx.y"
    { add_option(NEU_OPTION); }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 488 "../src/cuda-sim/ptx.y"
    { add_option(LTU_OPTION); }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 489 "../src/cuda-sim/ptx.y"
    { add_option(LEU_OPTION); }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 490 "../src/cuda-sim/ptx.y"
    { add_option(GTU_OPTION); }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 491 "../src/cuda-sim/ptx.y"
    { add_option(GEU_OPTION); }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 492 "../src/cuda-sim/ptx.y"
    { add_option(NUM_OPTION); }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 493 "../src/cuda-sim/ptx.y"
    { add_option(NAN_OPTION); }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 499 "../src/cuda-sim/ptx.y"
    { add_scalar_operand( (yyvsp[(1) - (1)].string_value) ); }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 500 "../src/cuda-sim/ptx.y"
    { add_neg_pred_operand( (yyvsp[(2) - (2)].string_value) ); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 501 "../src/cuda-sim/ptx.y"
    { add_scalar_operand( (yyvsp[(2) - (2)].string_value) ); change_operand_neg(); }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 506 "../src/cuda-sim/ptx.y"
    { change_operand_neg(); }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 508 "../src/cuda-sim/ptx.y"
    { add_address_operand((yyvsp[(1) - (3)].string_value),(yyvsp[(3) - (3)].int_value)); }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 509 "../src/cuda-sim/ptx.y"
    { add_scalar_operand( (yyvsp[(1) - (2)].string_value) ); change_operand_lohi(1);}
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 510 "../src/cuda-sim/ptx.y"
    { add_scalar_operand( (yyvsp[(2) - (3)].string_value) ); change_operand_lohi(1); change_operand_neg();}
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 511 "../src/cuda-sim/ptx.y"
    { add_scalar_operand( (yyvsp[(1) - (2)].string_value) ); change_operand_lohi(2);}
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 512 "../src/cuda-sim/ptx.y"
    { add_scalar_operand( (yyvsp[(2) - (3)].string_value) ); change_operand_lohi(2); change_operand_neg();}
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 513 "../src/cuda-sim/ptx.y"
    { add_2vector_operand((yyvsp[(1) - (3)].string_value),(yyvsp[(3) - (3)].string_value)); change_double_operand_type(-1);}
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 514 "../src/cuda-sim/ptx.y"
    { add_2vector_operand((yyvsp[(1) - (4)].string_value),(yyvsp[(3) - (4)].string_value)); change_double_operand_type(-1); change_operand_lohi(1);}
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 515 "../src/cuda-sim/ptx.y"
    { add_2vector_operand((yyvsp[(1) - (4)].string_value),(yyvsp[(3) - (4)].string_value)); change_double_operand_type(-1); change_operand_lohi(2);}
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 516 "../src/cuda-sim/ptx.y"
    { add_2vector_operand((yyvsp[(1) - (3)].string_value),(yyvsp[(3) - (3)].string_value)); change_double_operand_type(-3);}
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 517 "../src/cuda-sim/ptx.y"
    { add_2vector_operand((yyvsp[(1) - (4)].string_value),(yyvsp[(3) - (4)].string_value)); change_double_operand_type(-3); change_operand_lohi(1);}
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 518 "../src/cuda-sim/ptx.y"
    { add_2vector_operand((yyvsp[(1) - (4)].string_value),(yyvsp[(3) - (4)].string_value)); change_double_operand_type(-3); change_operand_lohi(2);}
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 521 "../src/cuda-sim/ptx.y"
    { add_2vector_operand((yyvsp[(2) - (5)].string_value),(yyvsp[(4) - (5)].string_value)); }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 522 "../src/cuda-sim/ptx.y"
    { add_3vector_operand((yyvsp[(2) - (7)].string_value),(yyvsp[(4) - (7)].string_value),(yyvsp[(6) - (7)].string_value)); }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 523 "../src/cuda-sim/ptx.y"
    { add_4vector_operand((yyvsp[(2) - (9)].string_value),(yyvsp[(4) - (9)].string_value),(yyvsp[(6) - (9)].string_value),(yyvsp[(8) - (9)].string_value)); }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 524 "../src/cuda-sim/ptx.y"
    { add_1vector_operand((yyvsp[(2) - (3)].string_value)); }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 527 "../src/cuda-sim/ptx.y"
    { add_scalar_operand((yyvsp[(2) - (3)].string_value)); }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 532 "../src/cuda-sim/ptx.y"
    { add_builtin_operand((yyvsp[(1) - (2)].int_value),(yyvsp[(2) - (2)].int_value)); }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 533 "../src/cuda-sim/ptx.y"
    { add_builtin_operand((yyvsp[(1) - (1)].int_value),-1); }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 536 "../src/cuda-sim/ptx.y"
    { add_memory_operand(); }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 537 "../src/cuda-sim/ptx.y"
    { add_memory_operand(); change_memory_addr_space((yyvsp[(1) - (4)].string_value)); }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 538 "../src/cuda-sim/ptx.y"
    { change_memory_addr_space((yyvsp[(1) - (4)].string_value)); }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 539 "../src/cuda-sim/ptx.y"
    { change_memory_addr_space((yyvsp[(1) - (4)].string_value)); add_memory_operand();}
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 540 "../src/cuda-sim/ptx.y"
    { change_operand_neg(); }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 543 "../src/cuda-sim/ptx.y"
    { add_double_operand((yyvsp[(1) - (3)].string_value),(yyvsp[(3) - (3)].string_value)); change_double_operand_type(1); }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 544 "../src/cuda-sim/ptx.y"
    { add_double_operand((yyvsp[(1) - (4)].string_value),(yyvsp[(3) - (4)].string_value)); change_double_operand_type(1); change_operand_lohi(1); }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 545 "../src/cuda-sim/ptx.y"
    { add_double_operand((yyvsp[(1) - (4)].string_value),(yyvsp[(3) - (4)].string_value)); change_double_operand_type(1); change_operand_lohi(2); }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 546 "../src/cuda-sim/ptx.y"
    { add_double_operand((yyvsp[(1) - (4)].string_value),(yyvsp[(4) - (4)].string_value)); change_double_operand_type(2); }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 547 "../src/cuda-sim/ptx.y"
    { add_double_operand((yyvsp[(1) - (5)].string_value),(yyvsp[(4) - (5)].string_value)); change_double_operand_type(2); change_operand_lohi(1); }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 548 "../src/cuda-sim/ptx.y"
    { add_double_operand((yyvsp[(1) - (5)].string_value),(yyvsp[(4) - (5)].string_value)); change_double_operand_type(2); change_operand_lohi(2); }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 549 "../src/cuda-sim/ptx.y"
    { add_address_operand((yyvsp[(1) - (4)].string_value),(yyvsp[(4) - (4)].int_value)); change_double_operand_type(3); }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 552 "../src/cuda-sim/ptx.y"
    { add_literal_int((yyvsp[(1) - (1)].int_value)); }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 553 "../src/cuda-sim/ptx.y"
    { add_literal_float((yyvsp[(1) - (1)].float_value)); }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 554 "../src/cuda-sim/ptx.y"
    { add_literal_double((yyvsp[(1) - (1)].double_value)); }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 557 "../src/cuda-sim/ptx.y"
    { add_address_operand((yyvsp[(1) - (1)].string_value),0); }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 558 "../src/cuda-sim/ptx.y"
    { add_address_operand((yyvsp[(1) - (2)].string_value),0); change_operand_lohi(1);}
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 559 "../src/cuda-sim/ptx.y"
    { add_address_operand((yyvsp[(1) - (2)].string_value),0); change_operand_lohi(2); }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 560 "../src/cuda-sim/ptx.y"
    { add_address_operand((yyvsp[(1) - (3)].string_value),(yyvsp[(3) - (3)].int_value)); }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 561 "../src/cuda-sim/ptx.y"
    { add_address_operand2((yyvsp[(1) - (1)].int_value)); }
    break;



/* Line 1806 of yacc.c  */
#line 3559 "ptx.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 564 "../src/cuda-sim/ptx.y"


extern int ptx_lineno;
extern const char *g_filename;

void syntax_not_implemented()
{
	printf("Parse error (%s:%u): this syntax is not (yet) implemented:\n",g_filename,ptx_lineno);
	ptx_error(NULL);
	abort();
}

