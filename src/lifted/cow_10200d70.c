/* f_0x10200d70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10200d70(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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

    if (rd8(COW_IMG(0x10663ac8u)) == 0u) goto L_10200d8f;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x7au);
    t2 = g->edx;
    eax = t1;
    edx = t2;
L_10200d89: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_10200d8f: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10200610u), self, 0);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
        goto L_10200d89;
    }
    eax = t3;
    edx = t4;
    if (rd32(eax + 0x48u) == 0u) goto L_10200d89;
    t5 = rd32(eax + 0xcu);
    t6 = rd32(eax + 8u);
    t7 = rd32(eax + 4u);
    g->edx = rd32(eax);
    t8 = rd32(eax);
    g->esp = sp0 - 4u;
    t9 = cow_cdecl(g, COW_IMG(0x100f75f0u), 6, t8, t7, t6, t5, COW_IMG(0x10200de0u), self);
    t10 = g->edx;
    if (t9 != 0u)
    {
        eax = t9;
        edx = t10;
        goto L_10200d89;
    }
    edx = t10;
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, COW_IMG(0x10221270u), eax + 0x20u, 1, 0x10u);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    wr8(COW_IMG(0x10663ac8u), 1u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10200d70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10200d70(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
