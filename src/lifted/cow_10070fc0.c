/* f_0x10070fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10070fc0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0x34u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x100741e0u), rd32(COW_IMG(0x1047d128u)), 1, t1);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        goto L_10070fe8;
    }
    edx = t3;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x10071060u), self + 0x34u, 0);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        goto L_10070fe8;
    }
    eax = t4;
    edx = t5;
    g->edx = edx;
    return eax;
L_10070fe8: ;
    t6 = rd32(self + 0x3cu);
    t7 = rd32(self + 0x34u);
    g->edx = t7;
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, rd32(self + 0x38u), t6, 2, t7, t6);
    t8 = g->edx;
    wr32(self + 0x3cu, 0u);
    g->eax = rd32(self);
    g->edx = t8;
    t9 = rd32(self);
    t10 = cow_thiscall(g, rd32(t9 + 0x18u), self, 1, 1u);
    t11 = g->edx;
    g->edx = t11;
    return (t10 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10070fc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10070fc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
