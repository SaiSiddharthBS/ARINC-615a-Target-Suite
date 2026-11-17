/* ctors and dtors arrays -- to be used by runtime system */
/*   to call static constructors and destructors          */
/*                                                        */
/* NOTE: Use a C compiler to compile this file. If you    */
/*       are using GNU C++, be sure to use compile this   */
/*       file using a GNU compiler with the               */
/*       -fdollars-in-identifiers flag.                   */

char __dso_handle = 0;
extern void __cxa_finalize(void *);
static void _STD__cxa_finalize()
{
	__cxa_finalize(&__dso_handle);
}

#if defined(_HAVE_TOOL_XTORS)
#include <vxWorks.h>
#define _WRS_NEED_EH_FRAME
#define _WRS_NEED_CALL_CXA_FINALIZE
#include TOOL_HEADER (toolXtors.h)
#else

#if defined(__GNUC__)

extern void __register_frame_info (const void *, void *);
extern void *__deregister_frame_info (const void *);
extern const unsigned __EH_FRAME_BEGIN__[];
static void _STI__15_ctors ()
{
  /* This structure must approximately match that in unwind-dw2-fde.h.
     In particular it must be no smaller, and no less aligned.  */
  static struct object {
    void *pc_begin; void *tbase; void *dbase; void *u;
    unsigned long b; void *fde_end; struct object *next;
  } object;
  __register_frame_info (__EH_FRAME_BEGIN__, &object);
}

static void _STD__15_dtors ()
{
  __deregister_frame_info (__EH_FRAME_BEGIN__);
}
#else
static void _STI__15_ctors ()
{
}

static void _STD__15_dtors ()
{
}
#endif


extern void (*_ctors[])();
void (*_ctors[])() =
    {
    _STI__15_ctors,
    0
    };

void _STD__15_dtors();

extern void (*_dtors[])();
void (*_dtors[])() =
    {
    _STD__15_dtors,
    _STD__cxa_finalize,
    0
    };
#endif /* _HAVE_TOOL_XTORS */

/* build variables */
#ifdef __GNUC__
__asm("	.section \".wrs_build_vars\",\"a\"");
#endif
__asm(" .ascii \"tag SMP 1\"");
__asm(" .byte 0");
__asm("	.ascii \"end\"");
__asm("	.byte 0");
__asm("	.previous");
