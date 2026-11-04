/* f_101bc9a0 - it reads the word at +0x04 of its object and returns it

   The whole original is `mov eax, dword ptr [ecx + 4] / ret`. The object is a `thiscall` self pointer in ecx; only this one field of it has been read in this build, and it is named in layout/structs.h with a COW_ASSERT_OFFSET.

   Name: `cow_read_word_04` (guess). vtable 0x10337b4c slot 4/7 - a virtual method;vtable named category from the vocabulary its slots cite: category x2, word x2, completion x2, sorted x1
*/
#include "cow.h"

uint32_t cow_read_word_04(const CowWordObj_04* o);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov eax, dword ptr [ecx + 4] / ret`; its ret pops 0
   bytes above the return address and leaves eax that word. The readability gate skips this block. */
void cow_adapter_101bc9a0(Guest* g)
{
    g->eax = cow_read_word_04(COW_AS(CowWordObj_04, g->ecx));
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
