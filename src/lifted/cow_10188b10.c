/* f_0x10188b10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10188b10(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t self = g->ecx;

    if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1b4u) == 0xb6u)
    {
        edx = rd32(COW_IMG(0x1065cb04u));
        goto L_10188b3c;
    }
    eax = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1b4u);
    edx = rd32(COW_IMG(0x1065cb04u));
    if (eax == 0x84u) goto L_10188b3c;
    if (rd32(self + 0x18u) == 0u) goto L_10188b39;
    eax = rd32(self + 0x18u);
    g->edx = edx;
    return ~rd8(eax) & 1u;
L_10188b39: ;
    g->edx = edx;
    return 0u;
L_10188b3c: ;
    if (rd32(self + 0x18u) == 0u)
    {
        eax = rd32(self + 0x18u);
        goto L_10188b60;
    }
    eax = rd32(self + 0x18u);
    if (rd8(eax) & 1u) goto L_10188b4f;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10188b4f: ;
    if (rd32(edx + 0x1c4u) == 0u)
    {
        eax = rd32(edx + 0x1c4u);
        goto L_10188b60;
    }
    eax = rd32(edx + 0x1c4u);
    if (self != eax) goto L_10188b60;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10188b60: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10188b10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10188b10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
