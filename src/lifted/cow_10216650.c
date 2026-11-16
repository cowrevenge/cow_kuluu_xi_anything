/* f_0x10216650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10216650(Guest* g)
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

    wr8(self + 0x32u, 1u);
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x1d0u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        eax = 0u;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, COW_IMG(0x102121b0u), eax, 1, self);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    wr32(self + 0x14u, eax);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037d46cu));
    t6 = g->ecx;
    t7 = g->edx;
    wr32(self + 0x18u, t5);
    if (t5 == 0u)
    {
        ecx = t6;
        edx = t7;
        eax = 0u;
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        eax = rd32(rd32(eax));
    }
    wr32(self + 0x1cu, eax);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, 0u);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, t8);
    t11 = g->edx;
    if (t10 == 0u)
    {
        edx = t11;
        eax = 0u;
    }
    else
    {
        eax = t10;
        edx = t11;
        eax = rd32(rd32(eax) + 0x8cu);
    }
    wr32(self + 0x20u, eax);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036ffb4u));
    t13 = g->edx;
    if (t12 == 0u)
    {
        edx = t13;
        eax = 0u;
    }
    else
    {
        eax = t12;
        edx = rd32(eax);
        eax = rd32(rd32(eax) + 0x12cu);
    }
    t14 = rd32(self + 8u);
    wr32(self + 0x24u, eax);
    wr32(self + 0x28u, 0u);
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x10118530u), t14, edx, 2, 0x64u, 0xffffffffu);
    t15 = g->edx;
    wr16(self + 0x2eu, 0xffffu);
    wr16(self + 0x30u, 0xffffu);
    if (rd32(COW_IMG(0x10664530u)) == 0u)
    {
        eax = 0xffffu;
        edx = t15;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10664530u));
        edx = t15;
        g->eax = 0xffffu;
        g->edx = edx;
        g->esp = sp0;
        t16 = cow_thiscall(g, COW_IMG(0x102169e0u), ecx, 1, 0x19u);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10216650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10216650(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
