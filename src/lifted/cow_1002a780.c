/* f_0x1002a780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1002a780(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 96u);

    wr32(sp0 - 0x50u, in_esi);
    wr32(sp0 - 0x54u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t1 = g->edx;
    wr32(sp0 - 0x58u, arg1);
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x100351f0u), self + 8u, 1, arg1);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        eax = t2;
        edx = t3;
        esi = t2;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x54u;
        t4 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
        t5 = g->edx;
        t6 = rd32(esi + 2u);
        wr32(sp0 - 0x58u, t6);
        t7 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x40u, 1, t6);
        t8 = rd32(esi + 6u);
        wr32(sp0 - 0x58u, t8);
        g->edx = t8;
        cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t8);
        t9 = g->edx;
        t10 = rd32(esi + 0xau);
        wr32(sp0 - 0x58u, t10);
        g->eax = t10;
        g->edx = t9;
        t11 = cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x40u, 1, t10);
        t12 = g->edx;
        wr32(sp0 - 0x58u, sp0 - 0x4cu);
        wr32(sp0 - 0x5cu, esi);
        t13 = cow_stdcall(g, COW_IMG(0x1002a890u), 2, esi, sp0 - 0x4cu);
        wr32(sp0 - 0x58u, sp0 - 0x4cu);
        cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x40u, 1, sp0 - 0x4cu);
        t14 = (uint32_t)(int16_t)rd16(esi) * 0x40u + rd32(self + 0x14u);
        wr32(sp0 - 0x58u, t14);
        g->eax = t14;
        g->edx = rd32(self + 0x14u);
        t15 = rd32(self + 0x14u);
        t16 = cow_thiscall(g, COW_IMG(0x10027d10u), sp0 - 0x40u, 1, t14);
        t17 = g->edx;
        wr32(sp0 - 0x58u, arg2);
        g->edx = t17;
        t18 = cow_thiscall(g, COW_IMG(0x10028140u), sp0 - 0x40u, 1, arg2);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
    g->esp = sp0 - 0x54u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002a780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1002a780(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
