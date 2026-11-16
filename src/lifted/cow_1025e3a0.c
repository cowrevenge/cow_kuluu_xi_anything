/* f_0x1025e3a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1025e3a0(Guest* g)
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
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x103275d0u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x10u, self);
    wr32(self, COW_IMG(0x10340478u));
    wr32(self + 0xcu, COW_IMG(0x1034043cu));
    wr32(self + 0x10u, COW_IMG(0x10340428u));
    wr32(sp0 - 4u, 6u);
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x1025f660u), self, in_edx, 0);
    t2 = g->edx;
    cow_fastcall(g, COW_IMG(0x1025f310u), self, t2, 0);
    t3 = g->edx;
    if (rd32(self + 0x50u) == 0u)
    {
        eax = rd32(self + 0x50u);
        edx = t3;
    }
    else
    {
        eax = rd32(self + 0x50u);
        edx = t3;
        wr32(sp0 - 0x1cu, 1u);
        g->eax = rd32(eax + 8u);
        g->edx = edx;
        t4 = rd32(eax + 8u);
        g->esp = sp0 - 0x18u;
        t5 = cow_thiscall(g, rd32(t4 + 0xcu), eax + 8u, 1, 1u);
        t6 = g->edx;
        wr32(self + 0x50u, 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(self + 0x78u) == 0u)
    {
        ecx = rd32(self + 0x78u);
    }
    else
    {
        ecx = rd32(self + 0x78u);
        wr32(sp0 - 0x1cu, 1u);
        g->edx = rd32(ecx);
        t7 = rd32(ecx);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(t7 + 0xcu), ecx, 1, 1u);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(self + 0x78u, 0u);
        ecx = t8;
        edx = t9;
    }
    wr32(sp0 - 0x1cu, self + 0xc4u);
    g->eax = self + 0xc4u;
    g->edx = edx;
    t10 = rd32(COW_IMG(0x103292f4u));
    g->esp = sp0 - 0x18u;
    t11 = cow_thiscall(g, t10, ecx, 1, self + 0xc4u);
    t12 = g->edx;
    wr32(sp0 - 0x1cu, self + 0x94u);
    t13 = cow_thiscall(g, t10, self + 0x94u, 1, self + 0x94u);
    t14 = g->ecx;
    wr32(sp0 - 0x1cu, self + 0x7cu);
    g->edx = self + 0x7cu;
    t15 = cow_thiscall(g, t10, t14, 1, self + 0x7cu);
    t16 = g->edx;
    t17 = cow_fastcall(g, COW_IMG(0x10265bb0u), self + 0x5cu, t16, 0);
    t18 = g->edx;
    t19 = cow_fastcall(g, COW_IMG(0x10265bb0u), self + 0x58u, t18, 0);
    t20 = g->edx;
    t21 = cow_fastcall(g, COW_IMG(0x10265bb0u), self + 0x54u, t20, 0);
    t22 = g->edx;
    wr32(sp0 - 4u, 0xffffffffu);
    cow_fastcall(g, COW_IMG(0x102612f0u), self, t22, 0);
    t23 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t23);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025e3a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025e3a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
