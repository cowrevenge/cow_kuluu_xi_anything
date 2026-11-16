/* f_0x10159e10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10159e10(Guest* g)
{
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_10159e1b;
    return in_eax & 0xffffff00u;
L_10159e1b: ;
    if (rd32(COW_IMG(0x10480af0u) + rd32(arg1) * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + rd32(arg1) * 4u);
        goto L_10159e2b;
    }
    eax = rd32(COW_IMG(0x10480af0u) + rd32(arg1) * 4u);
    return eax & 0xffffff00u;
L_10159e2b: ;
    if (rd32(eax + 0x120u) >> 9u & 1u) goto L_10159e3c;
    return eax & 0xffffff00u;
L_10159e3c: ;
    return (rd32(eax + 0x78u) & 0xffffff00u) | rd32(eax + 0x78u) == rd32(arg1 + 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159e10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10159e10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
