/* f_0x10150b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10150b40(Guest* g)
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
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x28u, in_esi);
    if ((uint32_t)(int16_t)rd16(self + 0x448u) == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x448u);
        goto L_10150c02;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x448u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        edi = in_edi;
        goto L_10150c44;
    }
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        edx = in_edx;
        edi = in_edi;
        goto L_10150c44;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, 0x80808080u);
    wr32(sp0 - 0x34u, COW_IMG(0x10371d54u));
    t1 = (self & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 3u);
    wr32(sp0 - 0x38u, t1);
    t2 = (in_edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 4u);
    wr32(sp0 - 0x3cu, t2);
    g->eax = eax;
    g->ecx = t1;
    g->edx = t2;
    g->esp = sp0 - 0x18u;
    t3 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t2, t1, COW_IMG(0x10371d54u), 0x80808080u, in_edi, in_esi, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x40u, sp0 - 0x24u);
    g->edx = t5;
    g->esp = sp0 - 0x3cu;
    t6 = cow_cdecl(g, COW_IMG(0x100f1a60u), 1, sp0 - 0x24u);
    t7 = g->edx;
    if ((int32_t)t6 < 0)
    {
        edx = t7;
    }
    else
    {
        eax = t6;
        edx = t7;
        edi = t3;
        wr32(sp0 - 0x30u, 0x80808080u);
        wr32(sp0 - 0x34u, sp0 - 0x24u);
        t8 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 3u);
        wr32(sp0 - 0x38u, t8);
        wr32(sp0 - 0x3cu, edi);
        t9 = ((eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) - (uint16_t)edi)) - 2u;
        wr32(sp0 - 0x40u, t9);
        g->edx = t8;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x101c9d50u), 5, t9, edi, t8, sp0 - 0x24u, 0x80808080u);
        t10 = g->edx;
        edx = t10;
    }
    wr32(sp0 - 0x30u, sp0 - 0x14u);
    g->ecx = sp0 - 0x14u;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t11 = cow_cdecl(g, COW_IMG(0x100f1ac0u), 1, sp0 - 0x14u);
    t12 = g->ecx;
    t13 = g->edx;
    if ((int32_t)t11 < 0)
    {
        eax = t11;
        edx = t13;
        edi = rd32(sp0 - 0x2cu);
        goto L_10150c44;
    }
    eax = t11;
    ecx = t12;
    edi = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x2cu, 0x80808080u);
    wr32(sp0 - 0x30u, sp0 - 0x14u);
    t14 = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0xfu);
    wr32(sp0 - 0x34u, t14);
    t15 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 4u);
    wr32(sp0 - 0x38u, t15);
    g->eax = t14;
    g->edx = sp0 - 0x14u;
    g->esp = sp0 - 0x14u;
    t16 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, t15, t14, sp0 - 0x14u, 0x80808080u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t17 = g->edx;
    g->esi = rd32(sp0 - 0x28u);
    g->edi = edi;
    g->edx = t17;
    return t16;
L_10150c02: ;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x1011bdc0u), g->eax, g->ecx, in_edx, 1, 0);
    t18 = g->edx;
    g->edx = t18;
    cow_thiscall(g, COW_IMG(0x1011bae0u), rd32(COW_IMG(0x104e1b90u)), 0);
    t19 = g->edx;
    t20 = rd32(COW_IMG(0x104e1b90u));
    wr32(t20 + 0x64u, 0x80808080u);
    wr32(t20 + 0x48u, 0x80808080u);
    wr32(t20 + 0x2cu, 0x80808080u);
    wr32(t20 + 0x10u, 0x80808080u);
    g->eax = t20;
    g->edx = t19;
    t21 = cow_thiscall(g, COW_IMG(0x102214d0u), self + 0xa4u, 0);
    t22 = g->edx;
    eax = t21;
    edx = t22;
    edi = in_edi;
L_10150c44: ;
    g->edi = edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10150b40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10150b40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
