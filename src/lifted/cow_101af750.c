/* f_0x101af750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101af750(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(sp0 + 4u) >= (int32_t)arg2)
    {
        loc_4 = self;
    }
    else
    {
        eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        edi = rd32(sp0 + 4u);
        t1 = rd32(sp0 + 0xcu);
        wr32(sp0 + 4u, t1);
        ebx = 0u;
        loc_4 = (uint32_t)(int16_t)eax;
L_101af77a: ;
        t2 = rd32(rd32(sp0 + 4u));
        t3 = rd32(t2 * 4u + rd32(rd32(self + 0x18u)));
        t4 = rd32(rd32(self + 0x18u));
        wr32(sp0 + 0xcu, t3);
        g->esp = sp0 - 0x10u;
        t5 = cow_stdcall(g, COW_IMG(0x101aec30u), 1, t2);
        if ((uint8_t)t5 == 0u)
        {
            ecx = loc_4;
            eax = ebx + rd32(self + 0x30u);
            loc_14 = 0x80808080u;
        }
        else
        {
            ecx = loc_4;
            eax = ebx + rd32(self + 0x30u);
            loc_14 = 0x40402810u;
        }
        t6 = (ecx & 0xffffff00u) | ecx == edi;
        t7 = rd32(sp0 + 0xcu);
        t8 = (t6 & 0xffff0000u) | rd16(eax + 2u);
        t9 = (t7 & 0xffff0000u) | rd16(eax);
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x101af6f0u), eax, g->ecx, g->edx, 0, 5, t9, t8, t7, t6, loc_14);
        t10 = rd32(sp0 + 4u) + 4u;
        wr32(sp0 + 4u, t10);
        if ((int32_t)(edi + 1u) < (int32_t)arg2)
        {
            ebx = ebx + 8u;
            edi = edi + 1u;
            goto L_101af77a;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101af750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101af750(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
