/* f_0x10119200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10119200(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        ebx = 0u;
        loc_4 = t1;
        goto L_10119238;
    }
    edx = t3;
    loc_4 = t1;
L_1011921a: ;
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->ecx = self + 0x14u;
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd16(t4) == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_10119236;
    }
    ecx = t5;
    edx = t6;
    if (rd32(sp0 - 4u) != 0u) goto L_1011921a;
    ebx = 0u;
L_10119238: ;
    if ((uint8_t)arg1 == 0u)
    {
        t13 = rd32(COW_IMG(0x1057876cu));
        wr8(t13 + 0x74u, rd8(t13 + 0x74u) & 0xfeu);
        g->esp = sp0 - 0x10u;
        t14 = cow_call_regs(g, COW_IMG(0x1011a560u), t13, self, g->edx, 1, 0);
        eax = t14;
    }
    else
    {
        if ((uint8_t)arg1 != 1u)
        {
            eax = (uint8_t)arg1 - 1u;
        }
        else
        {
            if (ebx == 0u)
            {
                eax = (uint8_t)arg1 - 1u;
            }
            else
            {
                g->eax = (uint8_t)arg1 - 1u;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t7 = cow_thiscall(g, COW_IMG(0x10119390u), ebx, 0);
                t8 = g->edx;
                eax = t7;
                edx = t8;
            }
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1011a490u), self, 0);
            t9 = g->ecx;
            t10 = g->edx;
            t11 = rd32(COW_IMG(0x1057876cu));
            wr8(t11 + 0x74u, rd8(t11 + 0x74u) | 1u);
            g->edi = self;
            g->eax = t11;
            t12 = cow_thiscall(g, COW_IMG(0x101186a0u), self, 0);
            eax = t12;
        }
    }
    if (rd32(self + 0xcu) != 0u)
    {
        ecx = rd32(self + 0xcu);
        wr32(sp0 - 0x14u, arg1);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(ecx) + 0x24u), ecx, 1, arg1);
    }
    g->edi = in_edi;
    return;
L_10119236: ;
    ebx = eax;
    goto L_10119238;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10119200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10119200(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
