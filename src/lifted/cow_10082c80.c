/* f_0x10082c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10082c80(Guest* g)
{
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_1c_f;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x1cu, 0x42100000u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x28u, t1 + 0x44u);
    wr32(sp0 - 0x2cu, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0xcu, t1 + 0x44u);
    t5 = g->edx;
    if (rd32(COW_IMG(0x1047d578u)) == 0u)
    {
        eax = t4;
        edx = t5;
        edi = 0u;
        goto L_10082d2d;
    }
    eax = t4;
    edx = t5;
    esi = rd32(COW_IMG(0x1047d578u));
    edi = 0u;
L_10082caf: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t6 = cow_thiscall(g, COW_IMG(0x10085490u), esi, 0);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        edx = t7;
    }
    else
    {
        eax = t6;
        g->eax = eax;
        g->edx = rd32(esi);
        t8 = rd32(esi);
        g->esp = sp0 - 0x24u;
        t9 = cow_thiscall(g, rd32(t8 + 0x20u), esi, 0);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t11 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t12 = g->edx;
    if (t11 == esi)
    {
        eax = t11;
        edx = t12;
    }
    else
    {
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        g->eax = sp0 - 0xcu;
        g->edx = rd32(esi);
        t13 = rd32(esi);
        g->esp = sp0 - 0x24u;
        t14 = cow_thiscall_cdecl(g, rd32(t13 + 0x1bcu), esi, 1, sp0 - 0xcu);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(sp0 - 0x2cu, t14);
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        g->eax = sp0 - 0x18u;
        g->edx = t16;
        t17 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x18u, t14, sp0 - 0xcu);
        t18 = g->edx;
        d19 = (double)rdf32(sp0 - 0x10u);
        d20 = (double)rdf32(sp0 - 0x18u);
        d21 = fr(g, fr(g, d19 * d19) + fr(g, d20 * d20));
        d22 = (double)rdf32(sp0 - 0x1cu);
        if (!(d21 < d22))
        {
            eax = (t17 & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, d22, 1u);
            edx = t18;
            x0 = d21;
            goto L_10082d24;
        }
        eax = (t17 & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, d22, 1u);
        edx = t18;
        x0 = d21;
        d23 = (double)rdf32(esi + 0x8cu);
        if (!(d23 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            goto L_10082d24;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        wrf32(sp0 - 0x1cu, (float)(double)(float)x0);
        edi = esi;
        loc_1c_f = (double)(float)x0;
    }
L_10082d26: ;
    if (rd32(esi + 0x54u) != 0u)
    {
        esi = rd32(esi + 0x54u);
        goto L_10082caf;
    }
L_10082d2d: ;
    if (rd32(COW_IMG(0x1047d578u)) == 0u) goto L_10082d50;
    esi = rd32(COW_IMG(0x1047d578u));
L_10082d37: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t24 = cow_thiscall(g, COW_IMG(0x10085490u), esi, 0);
    t25 = g->edx;
    if ((uint8_t)t24 == 0u)
    {
        eax = t24;
        edx = t25;
    }
    else
    {
        eax = t24;
        g->eax = eax;
        g->edx = rd32(esi);
        t26 = rd32(esi);
        g->esp = sp0 - 0x24u;
        t27 = cow_thiscall(g, rd32(t26 + 0x20u), esi, 0);
        t28 = g->edx;
        eax = t27;
        edx = t28;
    }
    if (rd32(esi + 0x54u) != 0u)
    {
        esi = rd32(esi + 0x54u);
        goto L_10082d37;
    }
L_10082d50: ;
    if (edi != 0u)
    {
        if (rd16(edi + 0xb2u) != 0u)
        {
            wr8(edi + 0xb2u, rd8(edi + 0xb2u) & 0xfeu);
        }
    }
    g->edx = edx;
    return eax;
L_10082d24: ;
    goto L_10082d26;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10082c80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10082c80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
