/* f_0x1001b2e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1001b2e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    if (rd32(self + 4u) == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
    }
    else
    {
        esi = rd32(self + 4u);
        wr32(sp0 - 0xcu, in_ebx);
        wr32(sp0 - 0x10u, in_edi);
        eax = in_eax;
        edx = in_edx;
L_1001b2f1: ;
        g->edx = edx;
        t1 = rd32(esi + 4u);
        g->esp = sp0 - 0x10u;
        t2 = cow_call_regs(g, COW_IMG(0x1001b5d0u), eax, esi, g->edx, 1, 0);
        t3 = g->edx;
        if (t2 != 0u)
        {
            edi = t1;
            wr32(sp0 - 0x14u, sp0 + 4u);
            g->eax = sp0 + 4u;
            g->edx = rd32(esi);
            t9 = rd32(esi);
            g->esp = sp0 - 0x10u;
            t10 = cow_thiscall(g, rd32(t9 + 0x24u), esi, 1, sp0 + 4u);
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
        else
        {
            eax = t2;
            edx = t3;
            edi = t1;
            if (edi != 0u) goto L_1001b31c;
            if ((int32_t)arg2 >= 3) goto L_1001b31c;
            if (arg1 != 0u)
            {
                wr32(sp0 - 0x14u, 1u);
                g->eax = rd32(arg1);
                g->edx = edx;
                t4 = rd32(arg1);
                g->esp = sp0 - 0x10u;
                t5 = cow_thiscall(g, rd32(t4 + 0x1fcu), arg1, 1, 1u);
                t6 = g->edx;
                eax = t5;
                edx = t6;
            }
        }
L_1001b332: ;
        if (edi != 0u)
        {
            esi = edi;
            goto L_1001b2f1;
        }
        ebx = rd32(sp0 - 0xcu);
        edi = rd32(sp0 - 0x10u);
    }
    g->ebx = ebx;
    g->edi = edi;
    return;
L_1001b31c: ;
    wr32(sp0 - 0x14u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x1001b0f0u), self, 1, esi);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    goto L_1001b332;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001b2e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001b2e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
