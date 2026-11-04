/* f_10087110 - it reads one global byte and returns it in al

   The whole original is `mov al, byte ptr [0x10487ef5] / ret`. The mov writes only al, so the top three
   bytes of eax are exactly what the caller left - the body takes eax and re-joins them the way the
   instruction does. The address is named in layout/addresses.h (COW_ADDR_UNK_10487EF5); the byte holds 1
   in the shipped image, a flag whose meaning is not yet established, so the name says unk.

   Name: `cow_read_global_byte_10487ef5` (placeholder). Called from 0x10002d80 - see cow/names.csv.
*/
#include "cow.h"

uint32_t cow_read_global_byte_10487ef5(uint32_t eax)
{
    return (eax & ~0xffu) | rd8(COW_ADDR_UNK_10487EF5);
}

/* COW_ADAPTER BEGIN - cdecl: no arguments. The original is `mov al, byte ptr [0x10487ef5] / ret`; its ret
   pops 0 bytes above the return address and leaves eax with al replaced by the byte. The readability gate
   skips this block. */
void cow_adapter_10087110(Guest* g)
{
    g->eax = cow_read_global_byte_10487ef5(g->eax);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
