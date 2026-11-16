/* f_0x101e4470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101e4470(Guest* g)
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

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101e4570u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t5 = g->edx;
    t6 = rd32(rd32(t4) + 0x12cu);
    wr32(self + 0x5cu, t6);
    wr32(self + 0x34u, t6);
    wr8(self + 0x49u, 1u);
    cow_call_regs(g, COW_IMG(0x101f6700u), t6, self, t5, 0, 1, 0xau);
    t7 = g->ecx;
    t8 = g->edx;
    t9 = rd32(self + 0x70u);
    wr16(self + 0x26u, 0x12u);
    wr8(self + 0x2cu, 3u);
    wr8(self + 0x2du, 3u);
    wr8(self + 0x64u, 0u);
    if (t9 != 0u)
    {
        ecx = t7;
        edx = t8;
    }
    else
    {
        eax = t9;
        ecx = t7;
        edx = t8;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t10 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x144u, in_edi, in_esi);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(self + 0x70u, t10);
        ecx = t11;
        edx = t12;
    }
    if (rd32(self + 0x74u) != 0u)
    {
        eax = rd32(self + 0x74u);
    }
    else
    {
        eax = rd32(self + 0x74u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t13 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x144u, in_edi, in_esi);
        t14 = g->edx;
        wr32(self + 0x74u, t13);
        eax = t13;
        edx = t14;
    }
    t15 = rd32(sp0 + 4u);
    t16 = rd32(sp0 + 8u);
    t17 = rd32(sp0 + 4u);
    wr32(self + 0x68u, t15);
    wr32(self + 0x6cu, t16);
    wr8(self + 0x78u, 0u);
    if (t17 != 0u)
    {
        edi = t15;
        wr16(self + 0x16u, 4u);
        wr32(self + 0x30u, COW_IMG(0x1037f318u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t18 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f330u), 1u, 0u);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
    else
    {
        edi = t15;
        wr16(self + 0x16u, 3u);
        wr32(self + 0x30u, COW_IMG(0x1037f304u));
    }
    g->esi = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t20 = cow_thiscall(g, COW_IMG(0x101e35f0u), self, 0);
    t21 = g->edx;
    if (rd32(COW_IMG(0x1066352cu)) == 0u)
    {
        eax = t20;
        edx = t21;
    }
    else
    {
        eax = t20;
        ecx = rd32(COW_IMG(0x1066352cu));
        t22 = rd32(sp0 + 0xcu);
        g->eax = eax;
        g->edx = t22;
        g->esp = sp0 - 8u;
        t23 = cow_thiscall(g, COW_IMG(0x101e5b50u), ecx, 2, edi, t22);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    }
    wr32(sp0 + 0xcu, 0u);
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, COW_IMG(0x1037f344u));
    g->esp = sp0;
    g->esi = in_esi;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1015e350u), eax, COW_IMG(0x10621838u), edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e4470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e4470(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
