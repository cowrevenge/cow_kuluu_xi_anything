/* f_0x10212050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10212050(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, rd32(t1 + 8u), self, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        goto L_102120ec;
    }
    eax = t2;
    edx = t3;
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, arg2);
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x28u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t4 = cow_thiscall(g, COW_IMG(0x102173e0u), self + 0x10u, 3, eax, arg1, arg2);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
    }
    else
    {
        eax = t4;
        edx = t5;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t6 = cow_thiscall(g, COW_IMG(0x10216c20u), sp0 - 0x10u, 0);
        t7 = g->edx;
        t8 = rd16(self + 0x12u);
        t9 = rd16(self + 0x10u);
        wr16(sp0 - 0xeu, (uint16_t)t8);
        t10 = rd8(self + 0x28u);
        wr16(sp0 - 0xcu, 0xfff0u);
        wr16(sp0 - 0xau, 0u);
        wr16(sp0 - 0x10u, (uint16_t)((uint16_t)t9 - 0x10u));
        if (!(t10 & 1u))
        {
            eax = (((t6 & 0xffff0000u) | t8) & 0xffffff00u) | t10;
        }
        else
        {
            eax = (((t6 & 0xffff0000u) | t8) & 0xffffff00u) | t10;
            edx = ((t7 | t9) & 0xffff0000u) | (uint16_t)((uint16_t)t9 - 0x10u);
            wr32(sp0 - 0x20u, arg1);
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, sp0 - 0x10u);
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t11 = cow_thiscall(g, COW_IMG(0x102167d0u), rd32(COW_IMG(0x10664530u)), 4, sp0 - 0x10u, 0u, 1u, arg1);
            eax = t11;
        }
        if ((rd8(self + 0x28u) & 2u) != 0u)
        {
            wr32(sp0 - 0x20u, arg1);
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, 1u);
            wr32(sp0 - 0x2cu, sp0 - 0x10u);
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t12 = cow_thiscall(g, COW_IMG(0x102167d0u), rd32(COW_IMG(0x10664530u)), 4, sp0 - 0x10u, 1u, 0u, arg1);
            eax = t12;
        }
    }
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return (eax & 0xffffff00u) | 1u;
L_102120ec: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10212050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10212050(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
