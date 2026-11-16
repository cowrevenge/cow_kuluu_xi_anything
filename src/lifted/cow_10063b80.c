/* f_0x10063b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10063b80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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

    if (rd32(self + 4u) != 0u)
    {
        edx = in_edx;
        loc_4 = self;
    }
    else
    {
        eax = rd32(self + 4u);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x28u);
        t2 = g->edx;
        if (t1 == 0u)
        {
            edx = t2;
            eax = 0u;
        }
        else
        {
            eax = t1;
            edx = t2;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t3 = cow_thiscall(g, COW_IMG(0x10063460u), eax, 0);
            t4 = g->edx;
            eax = t3;
            edx = t4;
        }
        t5 = rd32(self);
        wr32(self + 4u, eax);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x100634b0u), eax, 4, t5, 7u, 0u, 0u);
        t6 = g->edx;
        t7 = rd32(rd32(self + 4u) + 0x14u) + 4u;
        if ((int32_t)rd32(self) <= 0)
        {
            eax = rd32(self);
            edx = t6;
            loc_4 = t7;
            goto L_10063c1a;
        }
        edx = t6;
        ebx = rd32(rd32(self + 4u) + 0xcu) + 4u;
        ebp = rd32(rd32(self + 4u) + 0x10u) + 4u;
        edi = 0u;
        loc_4 = t7;
L_10063bdf: ;
        g->esp = sp0 - 0x14u;
        t8 = cow_thiscall(g, COW_IMG(0x10063b50u), self, 1, edi);
        t9 = g->ecx;
        t10 = rd32(t8);
        wr32(ebx, t10);
        g->edx = t10;
        t11 = cow_thiscall(g, COW_IMG(0x10063b50u), t9, 1, edi);
        t12 = g->ecx;
        t13 = g->edx;
        t14 = rd32(t11 + 4u);
        wr32(ebp, t14);
        g->edx = t13;
        t15 = cow_thiscall(g, COW_IMG(0x10063b50u), t12, 1, edi);
        t16 = g->edx;
        t17 = rd32(t15 + 8u);
        wr32(loc_4, t17);
        if ((int32_t)(edi + 1u) < (int32_t)rd32(self))
        {
            edx = t16;
            ebx = ebx + 4u;
            ebp = ebp + 4u;
            edi = edi + 1u;
            loc_4 = loc_4 + 4u;
            goto L_10063bdf;
        }
        eax = rd32(self);
        edx = t16;
        loc_4 = loc_4 + 4u;
L_10063c1a: ;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x100635b0u), rd32(self + 4u), 0);
        t18 = g->edx;
        edx = t18;
    }
    g->edx = edx;
    return rd32(self + 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10063b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10063b80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
