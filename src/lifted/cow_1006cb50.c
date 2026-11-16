/* f_0x1006cb50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1006cb50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1006cce0u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(COW_IMG(0x1047cf78u)) == 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(COW_IMG(0x1047cf78u));
        ecx = t2;
        edx = t3;
        goto L_1006cbb3;
    }
    eax = (t1 & 0xffffff00u) | rd8(COW_IMG(0x1047cf78u));
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0xbb0u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        goto L_1006cc19;
    }
    ecx = t5;
    edx = t6;
    esi = t4;
    wr32(esi, COW_IMG(0x1032c434u));
    g->eax = esi + 0x810u;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10001070u), g->eax, g->ecx, edx, 0, 4, esi + 0x810u, 0x40u, 4u, COW_IMG(0x1006cc30u));
    t8 = g->edx;
    wr32(esi, COW_IMG(0x1032c368u));
    t9 = cow_call_regs(g, COW_IMG(0x1006ce70u), t7, esi, t8, 1, 0);
    t10 = g->edx;
    wr32(esi, COW_IMG(0x1032c298u));
    t11 = cow_call_regs(g, COW_IMG(0x1006ef70u), t9, esi, t10, 1, 0);
    wr32(COW_IMG(0x1047cf7cu), esi);
    return t11;
L_1006cbb3: ;
    if (rd8(COW_IMG(0x1047ce60u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ce60u));
        goto L_1006cbf1;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047ce60u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0xbb0u);
    t13 = g->edx;
    if (t12 == 0u)
    {
        eax = t12;
        goto L_1006cc19;
    }
    eax = t12;
    edx = t13;
    esi = t12;
    wr32(esi, COW_IMG(0x1032c368u));
    g->esp = sp0 - 4u;
    t14 = cow_call_regs(g, COW_IMG(0x1006ce70u), eax, esi, edx, 1, 0);
    t15 = g->edx;
    wr32(esi, COW_IMG(0x1032c1c8u));
    t16 = cow_call_regs(g, COW_IMG(0x100700e0u), t14, esi, t15, 1, 0);
    wr32(COW_IMG(0x1047cf7cu), esi);
    return t16;
L_1006cbf1: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0xaa0u);
    t18 = g->edx;
    if (t17 == 0u)
    {
        eax = t17;
        goto L_1006cc19;
    }
    eax = t17;
    edx = t18;
    esi = t17;
    wr32(esi, COW_IMG(0x1032c368u));
    g->esp = sp0 - 4u;
    t19 = cow_call_regs(g, COW_IMG(0x1006ce70u), eax, esi, edx, 1, 0);
    wr32(COW_IMG(0x1047cf7cu), esi);
    return t19;
L_1006cc19: ;
    wr32(COW_IMG(0x1047cf7cu), 0u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006cb50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006cb50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
