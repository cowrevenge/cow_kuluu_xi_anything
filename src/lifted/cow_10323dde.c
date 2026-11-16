/* f_0x10323dde - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10323dde(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, in_ebp);
    if (rd32(sp0 + 4u) == 0u)
    {
        edx = in_edx;
        goto L_10323e0c;
    }
    eax = rd32(sp0 + 4u);
    wr8(sp0 + 7u, 0u);
    wr8(sp0 + 4u, (uint8_t)((uint8_t)eax + 0x40u));
    wr32(sp0 - 8u, sp0 + 4u);
    wr8(sp0 + 5u, 0x3au);
    wr8(sp0 + 6u, 0x5cu);
    g->eax = sp0 + 4u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329290u)), self, 1, sp0 + 4u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_10323e11;
    }
    eax = t1;
    edx = t2;
    if (eax == 1u) goto L_10323e11;
L_10323e0c: ;
    wr32(sp0 - 8u, 1u);
    g->edx = edx;
    return 1u;
L_10323e11: ;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10323dde(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10323dde(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
