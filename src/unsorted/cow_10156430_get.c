/* f_10156430 - it reads the word at +0x08 of its object and returns it

   The whole original is `mov eax, dword ptr [ecx + 8] / ret`. The object is a `thiscall` self pointer in ecx; only this one field of it has been read in this build, and it is named in layout/structs.h with a COW_ASSERT_OFFSET.

   Name: `cow_read_word_08` (guess). vtable 0x103350a8 slot 56/87 - a virtual method
*/
#include "cow.h"

uint32_t cow_read_word_08(const CowWordObj_08* o);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov eax, dword ptr [ecx + 8] / ret`; its ret pops 0
   bytes above the return address and leaves eax that word. The readability gate skips this block. */
void cow_adapter_10156430(Guest* g)
{
    g->eax = cow_read_word_08(COW_AS(CowWordObj_08, g->ecx));
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
