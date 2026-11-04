/* f_10161880 - it reads the byte at +0x5a of its object into al

   The whole original is `mov al, byte ptr [ecx + 0x5a] / ret`. Only the low byte of eax is written, so the body takes eax as well: the top three bytes come back as the caller left them.

   Name: `cow_read_byte_5a` (guess). vtable 0x10335410 slot 18/72 - a virtual method;vtable named font from the vocabulary its slots cite: font x1, usgaiji x1
*/
#include "cow.h"

uint32_t cow_read_byte_5a(const CowByteObj_5a* o, uint32_t eax);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov al, byte ptr [ecx + 0x5a] / ret`; its ret pops 0
   bytes above the return address and leaves eax al = that byte, the rest untouched. The readability gate skips this block. */
void cow_adapter_10161880(Guest* g)
{
    g->eax = cow_read_byte_5a(COW_AS(CowByteObj_5a, g->ecx), g->eax);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
