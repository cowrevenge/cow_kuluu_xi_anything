/* f_0x1022a710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1022a710(Guest* g)
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
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    if ((int32_t)rd32(sp0 + 4u) < 0)
    {
        ebx = in_ebx;
    }
    else
    {
        edi = rd32(sp0 + 4u);
        wr32(sp0 - 0x34u, in_ebx);
        wr32(sp0 - 0x38u, edi);
        g->esp = sp0 - 0x38u;
        t1 = cow_call_regs(g, COW_IMG(0x10153ff0u), in_eax, self, in_edx, 1, 0);
        t2 = g->edx;
        g->edx = t2;
        g->esp = sp0 - 0x34u;
        t3 = cow_thiscall(g, COW_IMG(0x10154550u), t1, 1, rd32(sp0 - 0x38u));
        t4 = g->ecx;
        t5 = g->edx;
        wr32(sp0 + 4u, t3);
        if (edi == rd32(self + 0x70u))
        {
            edx = t5;
        }
        else
        {
            eax = rd32(self + 0x70u);
            ecx = t4;
            edx = t5;
            wr32(sp0 - 0x38u, self + 0x64u);
            wr32(sp0 - 0x3cu, edi);
            g->esp = sp0 - 0x3cu;
            t6 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, ecx, edx, 1, 0);
            t7 = g->edx;
            g->edx = t7;
            g->esp = sp0 - 0x34u;
            t8 = cow_thiscall(g, COW_IMG(0x10154a00u), t6, 2, rd32(sp0 - 0x3cu), self + 0x64u);
            t9 = g->edx;
            if ((uint8_t)t8 != 0u)
            {
                edx = t9;
                wr32(self + 0x70u, edi);
            }
            else
            {
                eax = t8;
                edx = t9;
                g->edx = edx;
                g->esp = sp0 - 0x34u;
                cow_thiscall(g, COW_IMG(0x1018d3d0u), self + 0x64u, 0);
                t10 = g->edx;
                wr32(self + 0x70u, 0xffffffffu);
                edx = t10;
            }
        }
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, 0x10u);
        wr32(sp0 - 0x40u, 0x32u);
        wr32(sp0 - 0x44u, 0x28u);
        wr32(sp0 - 0x48u, 0x14u);
        wr32(sp0 - 0x4cu, 0x20u);
        t11 = rd32(self + 8u) + 0xc4u;
        wr32(sp0 - 0x50u, t11);
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        cow_thiscall(g, COW_IMG(0x10233130u), sp0 - 0x28u, 7, t11, 0x20u, 0x14u, 0x28u, 0x32u, 0x10u, 0u);
        t12 = g->edx;
        wr32(sp0 - 0x38u, 0u);
        g->edx = t12;
        g->esp = sp0 - 0x38u;
        t13 = cow_thiscall(g, COW_IMG(0x1018d470u), self + 0x64u, 0);
        t14 = g->edx;
        wr32(sp0 - 0x3cu, t13);
        t15 = rd32(sp0 + 4u);
        wr32(sp0 - 0x40u, t15);
        g->edx = t14;
        g->esp = sp0 - 0x34u;
        t16 = cow_thiscall(g, COW_IMG(0x10233190u), sp0 - 0x28u, 3, t15, t13, 0u);
        t17 = g->edx;
        cow_thiscall(g, COW_IMG(0x10233120u), sp0 - 0x28u, 0);
        ebx = rd32(sp0 - 0x34u);
    }
    g->ebx = ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022a710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022a710(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
