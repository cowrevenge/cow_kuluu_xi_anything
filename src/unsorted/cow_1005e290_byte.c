/* f_1005e290 - it reads the byte at +0x01 of its object into al

   The whole original is `mov al, byte ptr [ecx + 1] / ret`. Only the low byte of eax is written, so the body takes eax as well: the top three bytes come back as the caller left them.

   Name: `cow_read_byte_01` (guess). called from 1 code site(s): 0x1005bf92
*/
#include "cow.h"

uint32_t cow_read_byte_01(const CowByteObj_01* o, uint32_t eax);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov al, byte ptr [ecx + 1] / ret`; its ret pops 0
   bytes above the return address and leaves eax al = that byte, the rest untouched. The readability gate skips this block. */
void cow_adapter_1005e290(Guest* g)
{
    g->eax = cow_read_byte_01(COW_AS(CowByteObj_01, g->ecx), g->eax);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
