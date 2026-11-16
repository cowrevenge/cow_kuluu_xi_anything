/* f_0x101cd900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101cd900(Guest* g)
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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
    const uint32_t in_edi = g->edi;

    wr32(self, COW_IMG(0x10337e08u));
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cda30u), in_eax, self, g->edx, 1, 0);
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
        g->edx = edx;
        g->esp = sp0 - 8u;
        t3 = cow_call_regs(g, COW_IMG(0x101cda30u), eax, self, g->edx, 1, 0);
        t4 = g->ecx;
        t5 = g->edx;
        g->edi = 0u;
        g->edx = t5;
        t6 = cow_cdecl(g, COW_IMG(0x100ab550u), 1, t3);
        t7 = g->edx;
        wr16(self + 0x5au, 0u);
        eax = t6;
        edx = t7;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x101cd9d0u), eax, self, g->edx, 1, 0);
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
    }
    else
    {
        eax = t8;
        edx = t9;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t10 = cow_call_regs(g, COW_IMG(0x101cd9d0u), eax, self, g->edx, 1, 0);
        t11 = g->ecx;
        t12 = g->edx;
        g->edi = 0u;
        g->edx = t12;
        t13 = cow_cdecl(g, COW_IMG(0x100c3e70u), 1, t10);
        t14 = g->edx;
        wr16(self + 0x54u, 0u);
        eax = t13;
        edx = t14;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_call_regs(g, COW_IMG(0x101cda00u), eax, self, g->edx, 1, 0);
    t16 = g->edx;
    if (t15 == 0u)
    {
        eax = t15;
        edx = t16;
    }
    else
    {
        eax = t15;
        edx = t16;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t17 = cow_call_regs(g, COW_IMG(0x101cda00u), eax, self, g->edx, 1, 0);
        t18 = g->ecx;
        t19 = g->edx;
        g->edi = 0u;
        g->edx = t19;
        t20 = cow_cdecl(g, COW_IMG(0x100ab320u), 1, t17);
        t21 = g->edx;
        wr16(self + 0x56u, 0u);
        eax = t20;
        edx = t21;
    }
    t22 = rd32(self + 0x64u);
    wr16(self + 0x58u, 0u);
    if (t22 != 0u)
    {
        ecx = t22;
        g->eax = rd32(ecx);
        t23 = rd32(ecx);
        g->esp = sp0 - 8u;
        t24 = cow_thiscall(g, rd32(t23 + 0x18u), ecx, 1, 1u);
        wr32(self + 0x64u, 0u);
        eax = t24;
    }
    if (rd32(self + 0x68u) != 0u)
    {
        ecx = rd32(self + 0x68u);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
        wr32(self + 0x68u, 0u);
    }
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cd900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cd900(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
