/* f_101578a0 - it reads the byte at +0x77 of its object into al

   The whole original is `mov al, byte ptr [ecx + 0x77] / ret`. Only the low byte of eax is written, so the body takes eax as well: the top three bytes come back as the caller left them.

   Name: `cow_read_byte_77` (guess). called from 1 code site(s): 0x1015834f
*/
#include "cow.h"

uint32_t cow_read_byte_77(const CowByteObj_77* o, uint32_t eax);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov al, byte ptr [ecx + 0x77] / ret`; its ret pops 0
   bytes above the return address and leaves eax al = that byte, the rest untouched. The readability gate skips this block. */
void cow_adapter_101578a0(Guest* g)
{
    g->eax = cow_read_byte_77(COW_AS(CowByteObj_77, g->ecx), g->eax);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
