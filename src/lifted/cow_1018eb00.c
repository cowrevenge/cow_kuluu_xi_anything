/* f_0x1018eb00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018eb00(Guest* g)
{
    uint32_t eax;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    t1 = rd32(self + 4u);
    wr32(self + 8u, 0u);
    wr32(self + 0x10u, 0u);
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x18u, 0u);
    if (t1 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        edi = t1;
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall(g, COW_IMG(0x1018e0e0u), edi, 0);
        t3 = g->ecx;
        t4 = g->edx;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t3, t4, 1, 1, edi);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(self + 4u, 0u);
        ecx = t5;
        edx = t6;
    }
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xe0u, in_edi, in_esi);
    t8 = g->edx;
    if (t7 == 0u)
    {
        edx = t8;
        eax = 0u;
    }
    else
    {
        eax = t7;
        edx = t8;
        t9 = rd32(self + 0x14u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t10 = cow_thiscall(g, COW_IMG(0x1018e0a0u), eax, 1, t9);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    wr32(self + 4u, eax);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, COW_IMG(0x1018e1a0u), eax, 0);
    t13 = g->edx;
    if (rd32(self + 0xcu) == 0u)
    {
        ecx = rd32(self + 0xcu);
        edx = t13;
    }
    else
    {
        eax = t12;
        ecx = rd32(self + 0xcu);
        g->edx = rd32(ecx);
        t14 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t14), ecx, 1, 1u);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(self + 0xcu, 0u);
        ecx = t15;
        edx = t16;
    }
    g->esp = sp0 - 4u;
    t17 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x64u, in_edi, in_esi);
    t18 = g->edx;
    if (t17 == 0u)
    {
        edx = t18;
        eax = 0u;
    }
    else
    {
        eax = t17;
        edx = t18;
        t19 = rd32(self + 0x14u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t20 = cow_thiscall(g, COW_IMG(0x1018e6f0u), eax, 1, t19);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    wr32(self + 0xcu, eax);
    if (rd32(COW_IMG(0x10578158u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578158u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t22 = cow_thiscall(g, COW_IMG(0x101271c0u), ecx, 0);
        t23 = g->edx;
        eax = t22;
        edx = t23;
    }
    if (rd32(COW_IMG(0x1057815cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057815cu));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t24 = cow_thiscall(g, COW_IMG(0x101271c0u), ecx, 0);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    }
    if (rd32(COW_IMG(0x10578160u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578160u));
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x10127f00u), ecx, 0);
    }
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018eb00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018eb00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
