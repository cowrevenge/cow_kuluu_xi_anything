/* f_0x1014aab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1014aab0(Guest* g)
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
    uint32_t t20;
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

    if (rd32(self + 0x58u) == 0u)
    {
        eax = rd32(self + 0x58u);
        goto L_1014aac8;
    }
    eax = rd32(self + 0x58u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1014aad5;
    }
    t1 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    eax = t1;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1014b530u), self, 0);
    t3 = g->edx;
    if (rd8(sp0 + 4u) == 0u)
    {
        eax = (t2 & 0xffffff00u) | rd8(sp0 + 4u);
        edx = t3;
        goto L_1014aa9d;
    }
    edx = t3;
    esi = t2;
    t4 = rd32(COW_IMG(0x106636a0u));
    wr16(t4 + 0x2au, 0xcu);
    if ((int32_t)esi < 0)
    {
        eax = t4;
        goto L_1014aa92;
    }
    eax = t4;
    if ((int32_t)esi >= 256) goto L_1014aa92;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10161500u), rd32(COW_IMG(0x10621900u)), 1, esi);
    t6 = g->edx;
    g->edx = t6;
    cow_call_regs(g, COW_IMG(0x101ec330u), t5, rd32(COW_IMG(0x106636a0u)), g->edx, 0, 1, t5);
    t7 = g->edx;
    t8 = rd32(COW_IMG(0x106636a0u));
    wr32(t8 + 0x38u, esi);
    wr32(t8 + 0x30u, COW_IMG(0x1014b060u));
    g->edx = t7;
    return t8;
L_1014a9d0: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x1014b530u), self, 0);
    t13 = g->edx;
    if (rd8(sp0 + 4u) == 0u)
    {
        eax = (t12 & 0xffffff00u) | rd8(sp0 + 4u);
        edx = t13;
    }
    else
    {
        edx = t13;
        esi = t12;
        t14 = rd32(COW_IMG(0x106636a0u));
        wr16(t14 + 0x2au, 0xcu);
        if ((int32_t)esi <= 0)
        {
            eax = t14;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t19 = cow_call_regs(g, COW_IMG(0x101ec3c0u), eax, rd32(COW_IMG(0x106636a0u)), g->edx, 1, 0);
            t20 = g->edx;
            eax = t19;
            edx = t20;
        }
        else
        {
            eax = t14;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t15 = cow_thiscall(g, COW_IMG(0x10161270u), rd32(COW_IMG(0x10578428u)), 1, esi);
            t16 = g->edx;
            g->edx = t16;
            cow_call_regs(g, COW_IMG(0x101ec330u), t15, rd32(COW_IMG(0x106636a0u)), g->edx, 0, 1, t15);
            t17 = g->edx;
            t18 = rd32(COW_IMG(0x106636a0u));
            wr32(t18 + 0x30u, COW_IMG(0x1014b060u));
            wr32(t18 + 0x38u, esi);
            eax = t18;
            edx = t17;
        }
        if (rd8(COW_IMG(0x1057844cu)) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1057844cu));
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1057844cu));
            wr8(COW_IMG(0x1057844cu), (uint8_t)((uint8_t)eax - 1u));
            eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 1u);
        }
    }
    g->edx = edx;
    return eax;
L_1014aa92: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_call_regs(g, COW_IMG(0x101ec3c0u), eax, rd32(COW_IMG(0x106636a0u)), g->edx, 1, 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_1014aa9d: ;
    g->edx = edx;
    return eax;
L_1014aac8: ;
    t11 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t11);
    edx = t11;
    goto L_1014a9d0;
L_1014aad5: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014aab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014aab0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
