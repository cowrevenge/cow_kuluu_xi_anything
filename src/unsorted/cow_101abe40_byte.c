/* f_101abe40 - it reads the byte at +0x00 of its object into al

   The whole original is `mov al, byte ptr [ecx] / ret`. Only the low byte of eax is written, so the body takes eax as well: the top three bytes come back as the caller left them.

   Name: `cow_read_byte_00` (guess). called from 7 code site(s): 0x101b0350, 0x101b0a7a, 0x101b63ce, 0x101b64ab
*/
#include "cow.h"

uint32_t cow_read_byte_00(const CowByteObj_00* o, uint32_t eax);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov al, byte ptr [ecx] / ret`; its ret pops 0
   bytes above the return address and leaves eax al = that byte, the rest untouched. The readability gate skips this block. */
void cow_adapter_101abe40(Guest* g)
{
    g->eax = cow_read_byte_00(COW_AS(CowByteObj_00, g->ecx), g->eax);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
