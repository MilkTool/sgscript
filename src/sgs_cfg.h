
#ifndef SGS_CFG_H_INCLUDED
#define SGS_CFG_H_INCLUDED

/* global debug switch */
#ifndef SGS_DEBUG
#  ifdef _DEBUG
#    define SGS_DEBUG 1
#  else
#    define SGS_DEBUG 0
#  endif
#endif

/* stage output dumps */
#ifndef SGS_DEBUG_DATA
#  define SGS_DEBUG_DATA 0
#endif

/* function entry/exit tagging */
#ifndef SGS_DEBUG_FLOW
#  define SGS_DEBUG_FLOW 0
#endif

/* instruction logging */
#ifndef SGS_DEBUG_INSTR
#  define SGS_DEBUG_INSTR 0
#endif

/* stack dump before execution of each instruction */
#ifndef SGS_DEBUG_STATE
#  define SGS_DEBUG_STATE 0
#endif

#ifndef SGS_DEBUG_PERF
#  define SGS_DEBUG_PERF 0
#endif

/* break-if */
#ifndef SGS_DEBUG_VALIDATE
#  define SGS_DEBUG_VALIDATE 1
#endif

/* extensive buffer overflow tests */
#ifndef SGS_DEBUG_EXTRA
#  define SGS_DEBUG_EXTRA 0
#endif


/* profiling */
#ifndef SGS_PROFILE_BYTECODE
#  define SGS_PROFILE_BYTECODE 0
#endif


/*	Tokenizer settings	*/
#define SGS_TOKENLIST_PREALLOC 1024

/*	Function tree settings	*/

/*	Interpreter settings	*/

#define SGS_MAX_CALL_STACK_SIZE 1024

/*	Context settings		*/

#define SGS_OUTPUT_STACKBUF_SIZE 128


#endif /* SGS_CFG_H_INCLUDED */
