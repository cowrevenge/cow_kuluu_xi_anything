/* f_0x10217c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10217c70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x344u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x101c68a0u), in_eax, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, 0u);
    t4 = g->edx;
    wr32(self + 0x344u, 0u);
    eax = t3;
    edx = t4;
    ebp = 0x20u;
    esi = self + 0x2c4u;
L_10217ca8: ;
    if (rd32(esi) != 0u)
    {
        ecx = rd32(esi);
        g->eax = rd32(ecx);
        g->edx = edx;
        t5 = rd32(ecx);
        g->esp = sp0 - 0x10u;
        t6 = cow_thiscall(g, rd32(t5 + 0xcu), ecx, 1, 1u);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    wr32(esi, 0u);
    if (ebp != 1u)
    {
        ebp = ebp - 1u;
        esi = esi + 4u;
        goto L_10217ca8;
    }
    if (rd32(COW_IMG(0x104e170cu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x104e170cu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x104e170cu));
        g->edx = rd32(ecx);
        t8 = rd32(ecx);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t8), ecx, 1, 1u);
        t9 = g->ecx;
        t10 = g->edx;
        ecx = t9;
        edx = t10;
    }
    wr32(COW_IMG(0x104e170cu), 0u);
    t11 = rd32(self + 0x378u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t11);
    t12 = g->edx;
    wr32(self + 0x378u, 0u);
    wr8(self + 0x2c0u, 0u);
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = t12;
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = t12;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t13 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 8u);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10217c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10217c70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
