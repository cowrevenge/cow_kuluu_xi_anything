/* f_0x10137b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10137b80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x20u, t1);
    wr32(sp0 - 0x10u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t2 = cow_call_regs(g, COW_IMG(0x101388d0u), t1, self, g->edx, 0, 1, t1);
    t3 = g->edx;
    wr32(sp0 - 0xcu, t2);
    wr32(sp0 - 0x20u, sp0 - 8u);
    t4 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    cow_call_regs(g, COW_IMG(0x10118f70u), 0u, t4, g->edx, 0, 1, sp0 - 8u);
    t5 = g->ecx;
    if (rd8(self + 0x69u) == 0xbu)
    {
        ebx = in_ebx;
    }
    else
    {
        ebp = rd32(sp0 - 6u) - 9u;
        esi = rd32(sp0 - 8u);
        wr32(sp0 - 0x20u, in_ebx);
        wr32(sp0 + 4u, self + 0x69u);
        eax = self + 0x69u;
        ebx = in_ebx;
        edi = self;
L_10137be2: ;
        wr32(sp0 - 0x24u, 0u);
        t6 = rd8(eax);
        wr16(sp0 - 4u, (uint16_t)(rd16(sp0 - 4u) + (uint16_t)(esi - rd32(sp0 - 8u))));
        t7 = rd32(sp0 - 0xcu);
        wr16(sp0 - 2u, (uint16_t)(rd16(sp0 - 2u) + (uint16_t)(ebp - rd32(sp0 - 6u))));
        wr16(sp0 - 8u, (uint16_t)esi);
        wr16(sp0 - 6u, (uint16_t)ebp);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0x80808080u);
        wr32(sp0 - 0x30u, (uint32_t)(int16_t)ebp);
        wr32(sp0 - 0x34u, (uint32_t)(int16_t)esi);
        t8 = rd32(edi + t6 * 8u + (t7 == t6) * 4u + 0x80u);
        g->edx = t7 == t6;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x1011fb60u), t8, 5, (uint32_t)(int16_t)esi, (uint32_t)(int16_t)ebp, 0x80808080u, 0u, 0u);
        t9 = g->edx;
        if (t7 != t6)
        {
            ebx = (ebx & 0xffffff00u) | t7 == t6;
            esi = esi + 0x1eu;
        }
        else
        {
            edx = t9;
            ebx = (ebx & 0xffffff00u) | t7 == t6;
            edi = t8;
            esi = esi + ((edx & 0xffff0000u) | (uint16_t)(rd16(edi + 0x22u) - rd16(edi + 0x20u)));
        }
        t10 = rd32(sp0 + 4u) + 2u;
        wr32(sp0 + 4u, t10);
        if (rd8(t10) != 0xbu)
        {
            eax = t10;
            goto L_10137bde;
        }
        ebx = rd32(sp0 - 0x20u);
    }
    g->ebx = ebx;
    return;
L_10137bde: ;
    edi = rd32(sp0 - 0x10u);
    goto L_10137be2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10137b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10137b80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
