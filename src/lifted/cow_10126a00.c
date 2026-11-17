/* f_0x10126a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10126a00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    if (rd32(self + 0x1cu) == 0u)
    {
        eax = rd32(self + 0x1cu);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x1cu);
        t1 = rd32(eax + 0x10u);
        wr32(sp0 - 0x10u, t1);
        g->edx = rd32(rd32(self + 0x30u) + 0x64u);
        t2 = rd32(rd32(self + 0x30u) + 0x64u);
        g->esp = sp0 - 0xcu;
        t3 = cow_call_regs(g, COW_IMG(0x10129290u), t1, rd32(t2 + 0x18u), g->edx, 0, 1, t1);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x10126500u), self, 0);
    t6 = g->edx;
    wr32(sp0 - 4u, t5);
    if (t5 == 0u)
    {
        eax = t5;
        edx = t6;
        ebp = in_ebp;
        edi = in_edi;
        loc_4 = t5;
    }
    else
    {
        eax = t5;
        edx = t6;
        loc_4 = t5;
        wr32(sp0 - 0x10u, in_ebp);
        wr32(sp0 - 0x14u, in_edi);
        loc_10 = in_ebp;
        loc_14 = in_edi;
L_10126a31: ;
        wr32(sp0 - 0x18u, sp0 - 4u);
        g->eax = sp0 - 4u;
        g->esp = sp0 - 0x14u;
        t7 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
        t8 = g->edx;
        wr32(sp0 - 0x18u, eax);
        g->edx = t8;
        t9 = cow_thiscall(g, COW_IMG(0x10126580u), self, 1, eax);
        t10 = g->edx;
        if (t7 == 0u)
        {
            edx = t10;
        }
        else
        {
            eax = t9;
            edx = t10;
            edi = t7;
            g->eax = eax;
            g->ecx = edi;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t11 = cow_stdcall(g, COW_IMG(0x10126330u), 0);
            t12 = g->ecx;
            t13 = g->edx;
            wr32(sp0 - 0x18u, edi);
            cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t12, t13, 1, 1, edi);
            t14 = g->edx;
            edx = t14;
        }
        if (rd32(sp0 - 4u) != 0u)
        {
            eax = rd32(sp0 - 4u);
            loc_4 = rd32(sp0 - 4u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
            goto L_10126a31;
        }
        eax = rd32(sp0 - 4u);
        ebp = rd32(sp0 - 0x10u);
        edi = rd32(sp0 - 0x14u);
        loc_4 = rd32(sp0 - 4u);
    }
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t15 = cow_fastcall(g, COW_IMG(0x101265d0u), self, edx, 0);
    t16 = rd32(self + 0x30u);
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x20u, 0u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x2cu, 0u);
    wr8(self + 0x34u, 1u);
    cow_thiscall(g, rd32(rd32(t16) + 0x4cu), t16, 0);
    wr8(COW_IMG(0x10488208u), 0u);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = edi;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10126a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10126a00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
