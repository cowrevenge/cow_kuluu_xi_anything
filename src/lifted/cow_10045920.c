/* f_0x10045920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10045920(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x1cu, in_esi);
    if (rd8(self + 0x179u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x179u);
        goto L_10045a28;
    }
    if (rd32(self + 0xfcu) == 0u)
    {
        eax = rd32(self + 0xfcu);
        goto L_10045a28;
    }
    eax = rd32(self + 0xfcu);
    if (rd32(eax) == 0u) goto L_10045a28;
    if (eax == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax);
    }
    if ((int8_t)rd8(eax + 0xdeu) < 0) goto L_10045a28;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    if (!(rd32(self + 0x10cu) >> 0x12u & 1u))
    {
        eax = rd32(self + 0x10cu) >> 0x12u;
        goto L_10045a28;
    }
    eax = rd32(self + 0x10cu) >> 0x12u;
    ecx = t1;
    edx = t2;
    if (!(rd8(COW_IMG(0x1047bbf4u)) & 1u))
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bbf4u));
        wr32(sp0 - 0x20u, COW_IMG(0x10045a30u));
        wr32(COW_IMG(0x1047bc10u), 0u);
        wr8(COW_IMG(0x1047bbf4u), (uint8_t)(eax | 1u));
        wr32(COW_IMG(0x1047bc14u), 0u);
        wr32(COW_IMG(0x1047bc18u), 0u);
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10045a30u));
    }
    t3 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc4u);
    wr32(sp0 - 0x18u, t3);
    t4 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc0u);
    wr32(sp0 - 0x14u, t4);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
    t5 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x20u, t5);
    t6 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x24u, t6);
    t7 = rd32(COW_IMG(0x1047bfa8u)) + 0xb10u;
    wr32(sp0 - 0x28u, t7);
    wr32(sp0 - 0x2cu, self + 0xa0u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, COW_IMG(0x1047bc10u));
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x8cu), rd32(COW_IMG(0x1047cf7cu)), 7, sp0 - 0x10u, COW_IMG(0x1047bc10u), 1u, self + 0xa0u, t7, t6, t5);
    if (rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa94u) != 0u)
    {
        eax = rd32(COW_IMG(0x1047cf7cu));
        goto L_10045a28;
    }
    eax = rd32(COW_IMG(0x1047cf7cu));
    g->esi = rd32(sp0 - 0x1cu);
    return eax & 0xffffff00u;
L_10045a28: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10045920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10045920(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
