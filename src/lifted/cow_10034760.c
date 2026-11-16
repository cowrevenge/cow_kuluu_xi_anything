/* f_0x10034760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10034760(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0x14u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x10u, 0);
    t1 = g->edx;
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        edx = t1;
    }
    else
    {
        if ((int32_t)rd16(rd32(COW_IMG(0x1045ec24u)) + 0x32u) <= 0)
        {
            eax = rd32(COW_IMG(0x1045ec24u));
            edx = rd16(rd32(COW_IMG(0x1045ec24u)) + 0x32u);
        }
        else
        {
            eax = rd32(COW_IMG(0x1045ec24u));
            edx = rd16(rd32(COW_IMG(0x1045ec24u)) + 0x32u);
            eax = eax + 0x3au;
            ecx = COW_IMG(0x1045f034u);
L_1003478d: ;
            t2 = rd32(eax - 4u);
            wr32(ecx - 4u, t2);
            wr32(ecx, rd32(eax));
            t3 = rd32(eax + 4u);
            wr32(ecx + 4u, t3);
            t4 = rd32(eax + 8u);
            wr32(ecx + 8u, t4);
            t5 = rd32(eax + 0xcu);
            wr32(ecx + 0xcu, t5);
            t6 = rd32(eax + 0x10u);
            wr32(ecx + 0x10u, t6);
            t7 = rd32(eax + 0x14u);
            wr32(ecx + 0x14u, t7);
            if (edx != 1u)
            {
                eax = eax + 0x1eu;
                ecx = ecx + 0x34u;
                edx = edx - 1u;
                goto L_1003478d;
            }
            eax = eax + 0x1eu;
            edx = edx - 1u;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t8 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t9 = g->edx;
    g->edx = t9;
    return t8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10034760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10034760(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
