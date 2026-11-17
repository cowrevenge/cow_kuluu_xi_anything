/* f_0x1023f9c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023f9c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    if (rd32(self + 0x34u) == 0u)
    {
        eax = in_eax;
        ecx = rd32(self + 0x34u);
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 0x34u);
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(t1 + 0xcu), ecx, 1, 1u);
        t3 = g->ecx;
        t4 = g->edx;
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    g->eax = eax;
    g->esp = sp0;
    t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x6b4u, in_esi, in_ebx);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = t5;
        edx = t6;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t7 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 6u, 0xfu, self, COW_IMG(0x1023f940u), self + 0x14u, 0x14au, 0xfu, 0x114u);
        eax = t7;
    }
    t8 = rd32(self + 8u);
    wr32(self + 0x34u, eax);
    wr8(t8 + 0x5du, 0u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), t8, 1, 0);
    t9 = g->edx;
    t10 = rd32(self + 0x34u);
    cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t10);
    wr8(rd32(self + 8u) + 0x85u, 0u);
    t11 = rd32(self + 8u);
    wr8(t11 + 0x86u, 0u);
    t12 = rd32(self + 8u);
    wr8(t12 + 0x84u, 0u);
    t13 = rd32(self + 0x24u);
    wr32(self + 0x30u, t13);
    g->edx = t11;
    return t12;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023f9c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023f9c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
