/* f_100035a0 - the one-byte function: `ret` and nothing else.

     100035a0  ret

   It computes nothing, touches no memory and returns whatever eax already held. That is the whole
   job, so this is what a conversion looks like when the original genuinely has no logic - the gate
   allows the empty body because `cowdiff.py --count` says the generated body has two instruction
   sites (entry and the ret), not because we got bored.

   Why does the game have these? MSVC's /OPT:ICF folds identical thunks; a leaf that is pure
   `return;` compiles to a bare ret and gets its own entry, and table.c points at it.

   Name: unk_return_noop is a placeholder (cow/names.csv, confidence=placeholder) - nothing about a
   bare ret says what it is for. It stays in src/unsorted/ for the same reason.
*/
#include "cow.h"

void unk_return_noop(void)
{
    /* the original is a bare `ret`: there is nothing to say here */
}

/* COW_ADAPTER BEGIN - stdcall/cdecl agnostic: it pops only the return address, so argbytes is 0,
   and eax passes straight through. The readability gate skips this block. */
void cow_adapter_100035a0(Guest* g)
{
    unk_return_noop();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
