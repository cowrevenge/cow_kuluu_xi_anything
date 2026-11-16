/* f_0x10007ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10007ef0(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    if (rd32(COW_IMG(0x10456a7cu)) == 0u) goto L_10007f0e;
    eax = rd32(COW_IMG(0x10456a7cu));
    wr8(COW_IMG(0x1034f92cu), 0u);
    return (eax & 0xffffff00u) | 1u;
L_10007f0e: ;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, self + 0x8cu);
    wr32(sp0 - 0x28u, COW_IMG(0x10341dbcu));
    t1 = rd32(self + 0x84u);
    wr32(sp0 - 0x2cu, t1);
    g->eax = t1;
    t2 = rd32(rd32(self + 0x84u));
    g->esp = sp0 - 0x1cu;
    t3 = cow_thiscall(g, rd32(t2 + 0xcu), t2, 4, t1, COW_IMG(0x10341dbcu), self + 0x8cu, 0u);
    t4 = g->ecx;
    if ((int32_t)t3 >= 0)
    {
        ecx = t4;
        goto L_10007f35;
    }
    eax = t3;
    wr32(self + 0x8cu, 0u);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    return (eax & 0xffffff00u) | 1u;
L_10007f35: ;
    wr32(sp0 - 0x20u, COW_IMG(0x10349ef4u));
    t5 = rd32(self + 0x8cu);
    wr32(sp0 - 0x24u, t5);
    g->eax = t5;
    g->edx = rd32(t5);
    t6 = rd32(t5);
    g->esp = sp0 - 0x1cu;
    t7 = cow_thiscall(g, rd32(t6 + 0x2cu), ecx, 2, t5, COW_IMG(0x10349ef4u));
    t8 = g->edx;
    if ((int32_t)t7 >= 0)
    {
        eax = t7;
        edx = t8;
        goto L_10007f50;
    }
    eax = t7;
    wr32(self + 0x8cu, 0u);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    return (eax & 0xffffff00u) | 1u;
L_10007f50: ;
    if (rd32(COW_IMG(0x10456bf8u)) != 0u)
    {
        wr32(sp0 - 0x20u, 1u);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x10009780u), rd32(COW_IMG(0x1045666cu)), 1, 1u);
        t9 = g->edx;
        edx = t9;
    }
    t10 = rd32(COW_IMG(0x10456bf8u));
    wr8(COW_IMG(0x1034f92cu), 1u);
    if (t10 == 0u)
    {
        eax = rd32(self + 0x8cu);
        goto L_10007f91;
    }
    eax = rd32(self + 0x8cu);
    if (eax != 0u)
    {
        wr32(sp0 - 0x20u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t11 = cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        wr32(self + 0x8cu, 0u);
        eax = t11;
    }
    wr8(COW_IMG(0x1034f92cu), 0u);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    return (eax & 0xffffff00u) | 1u;
L_10007f91: ;
    wr32(sp0 - 0x14u, 0x14u);
    wr32(sp0 - 0x10u, 0x10u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x20u, sp0 - 0x14u);
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, eax);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(eax) + 0x18u), sp0 - 0x14u, 3, eax, 2u, sp0 - 0x14u);
    wr32(sp0 - 0x14u, 0x14u);
    wr32(sp0 - 0x10u, 0x10u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0x140u);
    wr32(sp0 - 0x20u, sp0 - 0x14u);
    wr32(sp0 - 0x24u, 1u);
    t12 = rd32(self + 0x8cu);
    wr32(sp0 - 0x28u, t12);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x8cu)) + 0x18u), sp0 - 0x14u, 3, t12, 1u, sp0 - 0x14u);
    wr32(sp0 - 0x20u, 6u);
    t13 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x24u, t13);
    t14 = rd32(self + 0x8cu);
    wr32(sp0 - 0x28u, t14);
    g->eax = t14;
    t15 = cow_thiscall(g, rd32(rd32(rd32(self + 0x8cu)) + 0x34u), t13, 3, t14, t13, 6u);
    t16 = g->ecx;
    if ((int32_t)t15 >= 0)
    {
        eax = t15;
        ecx = t16;
        goto L_10008009;
    }
    eax = t15;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    return eax & 0xffffff00u;
L_10008009: ;
    t17 = rd32(self + 0x8cu);
    wr32(sp0 - 0x20u, t17);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t18 = cow_thiscall(g, rd32(rd32(t17) + 0x1cu), ecx, 1, t17);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x1cu);
    return (t18 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10007ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10007ef0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
