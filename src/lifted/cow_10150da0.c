/* f_0x10150da0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10150da0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x30u, in_edi);
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        edx = in_edx;
        esi = in_esi;
    }
    else
    {
        wr32(sp0 - 0x34u, in_esi);
        wr32(sp0 - 0x38u, sp0 - 0x2cu);
        g->ecx = sp0 - 0x2cu;
        t1 = rd16(self + 0x14u);
        g->esp = sp0 - 0x34u;
        t2 = cow_cdecl(g, COW_IMG(0x100f1a60u), 1, sp0 - 0x2cu);
        t3 = g->ecx;
        if ((int32_t)t2 < 0)
        {
            ecx = t3;
        }
        else
        {
            eax = t2;
            ecx = t3;
            esi = (uint32_t)(int16_t)t1 + 4u;
            wr32(sp0 - 0x38u, 0x80808080u);
            wr32(sp0 - 0x3cu, sp0 - 0x2cu);
            t4 = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 5u);
            wr32(sp0 - 0x40u, t4);
            wr32(sp0 - 0x44u, esi);
            t5 = ((ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) - (uint16_t)esi)) - 2u;
            wr32(sp0 - 0x48u, t5);
            g->ecx = t5;
            g->esp = sp0 - 0x34u;
            cow_cdecl(g, COW_IMG(0x101c9d50u), 5, t5, esi, t4, sp0 - 0x2cu, 0x80808080u);
            t6 = g->ecx;
            ecx = t6;
        }
        wr32(sp0 - 0x38u, sp0 - 0x1cu);
        g->ecx = ecx;
        g->edx = sp0 - 0x1cu;
        g->esp = sp0 - 0x34u;
        t7 = cow_cdecl(g, COW_IMG(0x100f1ac0u), 1, sp0 - 0x1cu);
        t8 = g->ecx;
        t9 = g->edx;
        if ((int32_t)t7 < 0)
        {
            eax = t7;
            edx = t9;
            esi = rd32(sp0 - 0x34u);
        }
        else
        {
            ecx = t8;
            edx = t9;
            esi = rd32(sp0 - 0x34u);
            wr32(sp0 - 0x34u, 0x80808080u);
            wr32(sp0 - 0x38u, sp0 - 0x1cu);
            t10 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x11u);
            wr32(sp0 - 0x3cu, t10);
            t11 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 0x14u);
            wr32(sp0 - 0x40u, t11);
            g->eax = sp0 - 0x1cu;
            g->edx = t11;
            g->esp = sp0 - 0x1cu;
            t12 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t11, t10, sp0 - 0x1cu, 0x80808080u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            t13 = g->edx;
            eax = t12;
            edx = t13;
        }
    }
    g->esi = esi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10150da0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10150da0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
