/* f_0x100cf100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100cf100(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    eax = in_eax;
    edx = in_edx;
    edi = 0u;
L_100cf106: ;
    if (rd16(self + 0xb2u) != 0u) goto L_100cf141;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t2 = g->edx;
    if (t1 != 1u)
    {
        eax = t1;
        edx = t2;
        goto L_100cf141;
    }
    edx = t2;
    g->eax = rd32(self);
    g->edx = edx;
    t3 = rd32(self);
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, rd32(t3 + 0x320u), self, 0);
    t5 = g->edx;
    if ((uint16_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_100cf141;
    }
    edx = t5;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x100d6240u), self, 1, edi);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        edx = t7;
        goto L_100cf141;
    }
    eax = t6;
    edx = t7;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x100d5fe0u), self, 1, edi);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_100cf149: ;
    if ((int32_t)(edi + 1u) < 10)
    {
        edi = edi + 1u;
        goto L_100cf106;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100cf141: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, COW_IMG(0x100d6180u), self, 1, edi);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    goto L_100cf149;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cf100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100cf100(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
