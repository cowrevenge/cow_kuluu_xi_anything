/* f_0x101446f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101446f0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd32(self + 0x14u) == 0u) goto L_10144752;
    eax = rd32(self + 0x14u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_101447be;
    }
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 8u, 0x10u);
    wr32(sp0 - 4u, 0x30u);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
    wr32(sp0 - 0x10u, 0x30u);
    wr32(sp0 - 0x14u, 0x10u);
    g->edx = 0x10u;
    cow_call_regs(g, COW_IMG(0x10119110u), t1, rd32(self + 8u), g->edx, 0, 2, 0x10u, 0x30u);
    t2 = g->edx;
    if (rd32(COW_IMG(0x105783e8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105783e8u));
        edx = t2;
    }
    else
    {
        eax = rd32(COW_IMG(0x105783e8u));
        edx = t2;
        wr8(eax + 0x1cu, 2u);
    }
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, COW_IMG(0x10371518u));
    loc_18 = COW_IMG(0x10371518u);
L_101447b4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, loc_18, 1u, 0u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_101447be: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_call_regs(g, COW_IMG(0x10144d40u), eax, self, g->edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x10u, 2u);
    g->edx = t11;
    t12 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t13 = g->edx;
    t14 = rd32(rd32(t12) + 0x6b8u);
    t15 = rd32(t12);
    wr32(self + 0x24u, t14);
    g->edx = t13;
    return t15;
L_10144752: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 8u, 0x10u);
    wr32(sp0 - 4u, 0x10u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
    wr32(sp0 - 0x10u, 0x10u);
    wr32(sp0 - 0x14u, 0x10u);
    g->edx = 0x10u;
    cow_call_regs(g, COW_IMG(0x10119110u), t3, rd32(self + 8u), g->edx, 0, 2, 0x10u, 0x10u);
    t4 = g->edx;
    wr8(rd32(self + 8u) + 0x38u, rd8(rd32(self + 8u) + 0x38u) | 0x20u);
    if (rd32(COW_IMG(0x105783e8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105783e8u));
        edx = t4;
    }
    else
    {
        eax = rd32(COW_IMG(0x105783e8u));
        edx = t4;
        wr8(eax + 0x1cu, 1u);
    }
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, COW_IMG(0x10371518u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371518u), 1u, 0u);
    t6 = g->edx;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, COW_IMG(0x103715acu));
    eax = t5;
    edx = t6;
    loc_18 = COW_IMG(0x103715acu);
    goto L_101447b4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101446f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101446f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
