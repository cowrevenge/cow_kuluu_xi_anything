/* f_101f1bf0 - the whole original is `mov eax, 0x80806040 / ret`: it returns the constant 2155896896 (mov eax, 0x80806040 is the whole function)

   The body is shared (src/util/cow_return.c) because a lot of entries compile to exactly this;  what is per-entry is the adapter below, and what makes it done is cowdiff against this
   entry's generated original plus tools/cow/gate.ps1 - which refuses a trivial body unless the ledger
   can say who calls it.

   Name: `cow_menu_vf8` (guess). vtable 0x1033a498 slot 8/25 - a virtual method;vtable named menu from the vocabulary its slots cite: menu x4, itmsort2 x2, itmsortw x2
*/
#include "cow.h"

uint32_t cow_return_value(uint32_t v);

/* COW_ADAPTER BEGIN - the original is `mov eax, 0x80806040 / ret`; its ret pops 0 bytes above the return address and
   leaves eax the constant 2155896896. The readability gate skips this block. */
void cow_adapter_101f1bf0(Guest* g)
{
    g->eax = cow_return_value(2155896896u);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
