/* f_0x10111a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10111a60(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, 0x5cu);
    wr32(sp0 - 4u, 0u);
    g->ecx = self;
    g->esp = sp0 - 0x18u;
    t1 = cow_call_regs(g, COW_IMG(0x101085e0u), g->eax, g->ecx, in_edx, 1, 1, 0x5cu);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = 0u;
        edi = 0u;
    }
    else
    {
        edx = t3;
        edi = t1;
        t4 = rd32(self + 0x20u) + 1u;
        wr32(self + 0x20u, t4);
        g->eax = t4;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t5 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0xcu, 0);
        t6 = g->edx;
        wr32(sp0 - 0x1cu, t5);
        t7 = rd32(self + 0x20u);
        wr32(sp0 - 0x20u, t7);
        g->eax = t7;
        g->edx = t6;
        t8 = cow_thiscall(g, COW_IMG(0x10110680u), edi, 2, t7, t5);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
        ebx = 1u;
        edi = t8;
    }
    if (ebx & 1u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t11 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0xcu, 0);
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
    }
    if (edi != 0u)
    {
        wr32(sp0 - 0x1cu, 0xcu);
        g->eax = eax;
        g->esp = sp0 - 0x18u;
        t14 = cow_call_regs(g, COW_IMG(0x101085e0u), g->eax, g->ecx, edx, 1, 1, 0xcu);
        if (t14 == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = t14;
            wr32(eax, edi);
            wr32(eax + 8u, 0u);
            wr32(eax + 4u, 0u);
        }
        t15 = rd32(self + 0x3cu);
        wr32(eax + 8u, self + 0x38u);
        wr32(eax + 4u, t15);
        if (t15 == 0u)
        {
            edx = t15;
        }
        else
        {
            ecx = t15;
            edx = t15;
            wr32(ecx + 8u, eax);
        }
        if (rd32(eax + 8u) != 0u)
        {
            ecx = rd32(eax + 8u);
            wr32(ecx + 4u, eax);
        }
        wr16(self + 0x2au, (uint16_t)(rd16(self + 0x2au) + 1u));
    }
    g->edx = edx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10111a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10111a60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
