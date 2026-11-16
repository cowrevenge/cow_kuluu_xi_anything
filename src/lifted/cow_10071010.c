/* f_0x10071010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10071010(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1) == 1u)
    {
        eax = rd32(arg1) - 1u;
        goto L_10071026;
    }
    eax = rd32(arg1) - 1u;
    if (eax == 3u)
    {
        eax = eax - 3u;
        goto L_10071026;
    }
    eax = eax - 3u;
    if (eax != 3u)
    {
        eax = eax - 3u;
        edx = in_edx;
        goto L_1007104b;
    }
    eax = eax - 3u;
L_10071026: ;
    if (rd8(self + 0x40u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x40u);
        t1 = rd32(self + 0x3cu);
        t2 = rd32(self + 0x34u);
        g->edx = t2;
        g->esp = sp0 - 4u;
        cow_thiscall_cdecl(g, rd32(self + 0x38u), t1, 2, t2, t1);
        t3 = g->edx;
        edx = t3;
    }
    wr32(self + 0x3cu, 0u);
    g->eax = rd32(self);
    g->edx = edx;
    t4 = rd32(self);
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, rd32(t4 + 0x18u), self, 1, 1u);
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_1007104b: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10071010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10071010(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
