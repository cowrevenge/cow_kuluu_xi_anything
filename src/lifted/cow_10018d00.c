/* f_0x10018d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10018d00(Guest* g)
{
    double d21;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t edi;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if ((int32_t)rd32(self + 0x34u) >= 6)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
        t2 = g->ecx;
        t3 = g->edx;
        d4 = cow_take_float(g);
        g->edx = t3;
        d5 = fr(g, d4 + (double)(int32_t)rd32(self + 0x38u));
        fpush(g, d5);
        t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
        t7 = g->edx;
        wr32(self + 0x38u, t6);
        if ((int32_t)t6 <= 120) goto L_10018d70;
        edx = t7;
        if (rd32(self + rd32(self + 0x34u) * 4u + 4u) != 0u)
        {
            eax = rd32(self + rd32(self + 0x34u) * 4u + 4u);
            if (rd32(eax) != 0u)
            {
                g->eax = eax;
                g->esp = sp0 - 8u;
                t8 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
                g->edx = rd32(self + 0x34u);
                t9 = rd32(self + 0x34u);
                cow_thiscall(g, COW_IMG(0x10071050u), self + t9 * 4u + 4u, 0);
                t10 = g->edx;
                wr32(self + rd32(self + 0x34u) * 4u + 4u, 0u);
                edx = t10;
            }
        }
        t11 = rd32(self + 0x34u);
        wr32(self + 0x38u, 0u);
        wr32(self + 0x34u, t11 + 1u);
        if ((int32_t)(t11 + 1u) >= 6)
        {
            eax = t11 + 1u;
            goto L_10018e4b;
        }
L_10018d70: ;
        wr32(sp0 - 0xcu, in_edi);
        if (rd32(self + rd32(self + 0x34u) * 4u + 4u) == 0u)
        {
            eax = rd32(self + rd32(self + 0x34u) * 4u + 4u);
            edi = rd32(self + 0x34u);
            wr32(sp0 - 0x10u, edi + 0x9a6eu);
            wr32(sp0 - 0x14u, sp0 - 4u);
            g->eax = eax;
            g->edx = sp0 - 4u;
            g->esp = sp0 - 0xcu;
            t12 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 4u, edi + 0x9a6eu);
            t13 = g->edx;
            t14 = rd32(t12);
            wr32(edi * 4u + self + 4u, t14);
            if (t14 != 0u)
            {
                edx = t13;
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x10071e90u), rd32(self + 0x34u), rd32(rd32(self + rd32(self + 0x34u) * 4u + 4u)), g->edx, 1, 0);
                t15 = rd32(COW_IMG(0x10350f20u) + rd32(self + 0x34u) * 4u);
                wr32(sp0 - 0x10u, t15);
                g->eax = t15;
                t16 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, t15);
                wr32(self + rd32(self + 0x34u) * 4u + 0x1cu, t16);
            }
        }
        if (rd32(rd32(rd32(self + rd32(self + 0x34u) * 4u + 0x1cu))) == 0u)
        {
            eax = rd32(self + rd32(self + 0x34u) * 4u + 0x1cu);
            edx = rd32(self + 0x34u);
        }
        else
        {
            edx = rd32(self + 0x34u);
            esi = rd32(rd32(rd32(self + rd32(self + 0x34u) * 4u + 0x1cu)));
            wr32(sp0 - 0xcu, 0u);
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 0x14u, 0x80808080u);
            t17 = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) * 0x190u + ((uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) * 0x190u) >> 0x1fu) & 0x1ffu)) >> 9u);
            wr32(sp0 - 0x18u, t17);
            t18 = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - (uint32_t)((int32_t)(uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) >> 0x1fu)) >> 1u);
            wr32(sp0 - 4u, t18);
            t19 = (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u);
            wr32(sp0 - 4u, t19);
            g->edx = (uint32_t)(int16_t)rd16(esi + 0x20u);
            t20 = rd16(esi + 0x20u);
            d21 = fr(g, (double)(int32_t)t18 - fr(g, (double)(int32_t)t19 * (double)rdf32(COW_IMG(0x10329a08u))));
            fpush(g, d21);
            g->esp = sp0 - 0x18u;
            t22 = cow_call_regs(g, COW_IMG(0x10311c6cu), t18, g->ecx, g->edx, 1, 0);
            t23 = g->edx;
            wr32(sp0 - 0x1cu, t22);
            g->edx = t23;
            g->esp = sp0 - 8u;
            t24 = cow_thiscall(g, COW_IMG(0x1011fb60u), esi, 5, t22, rd32(sp0 - 0x18u), 0x80808080u, 0u, 0u);
            t25 = g->edx;
            eax = t24;
            edx = t25;
        }
    }
L_10018e4b: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10018d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10018d00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
