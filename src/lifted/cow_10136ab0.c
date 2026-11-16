/* f_0x10136ab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10136ab0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10136500u), self, 0);
    t1 = g->ecx;
    wr16(rd32(rd32(self + 0x64u) + 0x18u) + 0x18u, (uint16_t)(rd16(rd32(rd32(self + 0x64u) + 0x18u) + 0x18u) - rd16(self + 0x54u)));
    t2 = rd32(self + 0x50u);
    wr32(sp0 - 0x10u, t2);
    g->eax = rd32(self + 0x64u);
    g->edx = t2;
    t3 = rd32(self + 0x64u);
    t4 = cow_thiscall(g, COW_IMG(0x10129290u), rd32(t3 + 0x18u), 1, t2);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t7 = g->edx;
    wr32(sp0 - 4u, t6);
    if (t6 == 0u)
    {
        eax = t6;
        edx = t7;
        ebx = in_ebx;
        ebp = in_ebp;
        loc_4 = t6;
    }
    else
    {
        eax = t6;
        edx = t7;
        loc_4 = t6;
        wr32(sp0 - 0x10u, in_ebx);
        wr32(sp0 - 0x14u, in_ebp);
L_10136aeb: ;
        wr32(sp0 - 0x18u, sp0 - 4u);
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t8 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
        t9 = g->edx;
        wr32(sp0 - 0x18u, eax);
        g->edx = t9;
        t10 = cow_thiscall(g, COW_IMG(0x10126580u), self + 0x14u, 1, eax);
        t11 = g->edx;
        if (t8 == 0u)
        {
            edx = t11;
        }
        else
        {
            eax = t10;
            edx = t11;
            ebp = t8;
            g->eax = eax;
            g->ecx = ebp;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t12 = cow_stdcall(g, COW_IMG(0x10136940u), 0);
            t13 = g->ecx;
            t14 = g->edx;
            wr32(sp0 - 0x18u, ebp);
            g->edx = t14;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, ebp);
            t15 = g->edx;
            edx = t15;
        }
        if (rd32(sp0 - 4u) != 0u)
        {
            eax = rd32(sp0 - 4u);
            goto L_10136aeb;
        }
        eax = rd32(sp0 - 4u);
        ebx = rd32(sp0 - 0x10u);
        ebp = rd32(sp0 - 0x14u);
    }
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t16 = cow_thiscall(g, COW_IMG(0x101265d0u), self + 0x14u, 0);
    wr16(self + 0x54u, 0u);
    t17 = rd32(COW_IMG(0x104e1d4cu));
    wr8(t17 + 0x87u, 0u);
    g->ebx = ebx;
    g->ebp = ebp;
    g->edx = t17;
    return t16;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136ab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10136ab0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
