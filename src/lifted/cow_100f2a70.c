/* f_0x100f2a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100f2a70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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

    if (rd32(self + 0x105cu) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x105cu);
        if (rd32(eax + rd16(self + 0x105au) * 4u) == 0u)
        {
            ecx = rd16(self + 0x105au);
            edx = in_edx;
        }
        else
        {
            eax = rd32(eax + rd16(self + 0x105au) * 4u);
            ecx = rd16(self + 0x105au);
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            cow_thiscall_cdecl(g, eax, ecx, 2, self, 2u);
            t1 = g->ecx;
            t2 = g->edx;
            wr32(self + 0x105cu, 0u);
            ecx = t1;
            edx = t2;
        }
    }
    if (rd32(self + 0x104cu) != 0u)
    {
        eax = rd32(self + 0x104cu);
        t3 = rd32(self + 0x1048u);
        g->edx = t3;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, eax, ecx, 4, t3, 0u, 1u, 0u);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    if (rd32(self + 0x1050u) != 0u)
    {
        eax = rd32(self + 0x1050u);
        t6 = rd32(self + 0x1048u);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, eax, t6, 5, t6, 0u, 1u, 0u, 0u);
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    }
    if (rd32(self + 0x1054u) != 0u)
    {
        eax = rd32(self + 0x1054u);
        t9 = rd32(self + 0x1048u);
        g->edx = t9;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, eax, ecx, 5, t9, 0u, 1u, 0u, 0u);
        t10 = g->ecx;
        t11 = g->edx;
        ecx = t10;
        edx = t11;
    }
    t12 = rd32(self + 0x9cu);
    wr16(self + 0x1058u, 0u);
    wr32(self + 0x104cu, 0u);
    wr32(self + 0x1050u, 0u);
    wr32(self + 0x1054u, 0u);
    wr32(self + 0x1048u, 0u);
    wr16(self + 0x105au, 0u);
    if (t12 != 0u)
    {
        eax = t12;
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, in_esi, in_ebx);
        t13 = g->ecx;
        t14 = g->edx;
        wr32(self + 0x9cu, 0u);
        wr32(self + 0xa0u, 0u);
        wr32(self + 0xa4u, 0u);
        ecx = t13;
        edx = t14;
    }
    if (rd32(self + 0xacu) != 0u)
    {
        eax = rd32(self + 0xacu);
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, in_esi, in_ebx);
        wr32(self + 0xacu, 0u);
        wr32(self + 0xb0u, 0u);
        wr32(self + 0xb4u, 0u);
    }
    wr32(self + 0xd0u, 0u);
    wr8(self + 0x68u, 0u);
    wr8(self + 0x78u, 0u);
    wr8(self + 0x88u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f2a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100f2a70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
