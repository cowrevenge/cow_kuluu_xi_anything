/* f_0x10061730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10061730(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(self, COW_IMG(0x1032bdc0u));
    wr32(self + 0x34u, COW_IMG(0x1032bda4u));
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10061720u), self, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->eax = eax;
        t3 = rd32(self + 0x78u);
        g->esp = sp0 - 0x10u;
        t4 = cow_thiscall(g, COW_IMG(0x10061720u), self, 0);
        wr32(sp0 - 0x14u, sp0 - 4u);
        g->edx = rd32(t4);
        t5 = rd32(t4);
        t6 = cow_thiscall(g, rd32(t5 + 0x408u), t4, 1, sp0 - 4u);
        t7 = g->ecx;
        t8 = g->edx;
        if (rd32(t6) != t3)
        {
            eax = t6;
            edx = t8;
        }
        else
        {
            ecx = t7;
            edx = t8;
            wr32(sp0 - 0x14u, ecx);
            wr32(sp0 - 0x14u, 0u);
            g->eax = sp0 - 0x14u;
            g->esp = sp0 - 0x10u;
            t9 = cow_thiscall_cdecl(g, COW_IMG(0x10061720u), self, 1, 0u);
            g->edx = rd32(t9);
            t10 = rd32(t9);
            g->esp = sp0 - 0x14u;
            t11 = cow_thiscall(g, rd32(t10 + 0x64u), t9, 0);
            t12 = g->edx;
            t13 = cow_thiscall(g, COW_IMG(0x10061720u), self, 0);
            wr32(sp0 - 0x18u, 1u);
            g->edx = rd32(t13);
            t14 = rd32(t13);
            g->esp = sp0 - 0x10u;
            t15 = cow_thiscall(g, rd32(t14 + 0x50u), t13, 2, 1u, 0u);
            t16 = g->edx;
            eax = t15;
            edx = t16;
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t18 = g->edx;
    cow_fastcall(g, COW_IMG(0x100747c0u), self, t18, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10061730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10061730(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
