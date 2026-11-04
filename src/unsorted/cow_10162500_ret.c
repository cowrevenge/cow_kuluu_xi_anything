/* f_10162500 - the whole original is `ret 8`: it returns, and nothing else

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this; what is
   per-entry is the adapter below, and what makes it done is cowdiff against this entry's generated
   original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger can say who calls it.

   Name: `cow_font_vf54` (guess). vtable 0x10335410 slot 54/72 - a virtual method;vtable named font from the vocabulary its slots cite: font x1, usgaiji x1
*/
#include "cow.h"

void cow_return_immediate(void);

/* COW_ADAPTER BEGIN - the original is `ret 8`; its ret pops 8 bytes above the return address and
   leaves eax exactly as it found it. The readability gate skips this block. */
void cow_adapter_10162500(Guest* g)
{
    cow_return_immediate();
    rt_return(g, g->eax, 8);
}
/* COW_ADAPTER END */
