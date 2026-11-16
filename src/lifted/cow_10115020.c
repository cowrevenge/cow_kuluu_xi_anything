/* f_0x10115020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10115020(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104e1b6cu)) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x104e1b6cu));
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x10114320u), in_eax, ecx, in_edx, 1, 0);
        t1 = g->edx;
        edx = t1;
    }
    if (rd32(COW_IMG(0x104e1710u)) == 0u) goto L_10115166;
    eax = rd32(COW_IMG(0x104e1710u));
    if (rd16(COW_IMG(0x104e1716u)) != 0u) goto L_10115166;
    if (rd32(COW_IMG(0x104e1718u)) != 0u) goto L_10115074;
    if (rd16(COW_IMG(0x104e1720u)) != 0u) goto L_10115166;
L_10115074: ;
    if (rd32(COW_IMG(0x10662dccu)) == 0u) goto L_10115166;
    ecx = rd32(COW_IMG(0x10662dccu));
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x101c4a80u), ecx, 2, COW_IMG(0x1036c168u), 0u);
    if ((uint8_t)t2 != 0u) goto L_10115166;
    if (rd32(COW_IMG(0x104e1718u)) == rd32(COW_IMG(0x104e1710u)))
    {
        ecx = rd32(COW_IMG(0x104e1718u));
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1710u));
        ecx = rd32(COW_IMG(0x104e1718u));
        wr16(COW_IMG(0x104e171cu), 0u);
        wr16(COW_IMG(0x104e171eu), 0u);
        wr16(COW_IMG(0x104e1720u), 0u);
        wr32(COW_IMG(0x104e1718u), eax);
    }
    if (rd32(COW_IMG(0x1036c018u) + (uint16_t)rd32(COW_IMG(0x104e171cu)) * 4u) != 0u)
    {
        eax = (uint16_t)rd32(COW_IMG(0x104e171cu));
        edx = rd32(COW_IMG(0x1036c018u) + (uint16_t)rd32(COW_IMG(0x104e171cu)) * 4u);
        goto L_101150fe;
    }
    eax = (uint16_t)rd32(COW_IMG(0x104e171cu));
    edx = rd32(COW_IMG(0x1036c018u) + (uint16_t)rd32(COW_IMG(0x104e171cu)) * 4u);
    g->eax = eax;
    g->edx = edx;
    t3 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x101c4920u), t3, 5, COW_IMG(0x1036c158u), COW_IMG(0x104e1720u), 2u, 0u, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)t4 <= 0)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_101151c9;
    }
    wr32(COW_IMG(0x104e1718u), 0u);
    return;
L_101150fe: ;
    if (rd8(edx) != 0x2au) goto L_10115190;
    eax = (eax & 0xffffff00u) | rd8(edx);
    if (rd8(edx + 1u) != 0x48u) goto L_1011516a;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x104e1722u), COW_IMG(0x1036c138u), 0x7d3u, 1u, 0x11u);
    t7 = g->ecx;
    t8 = g->edx;
    edi = COW_IMG(0x104e1722u);
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0xcu < sp0 - 0x24u;
    pf = PARITY((uint8_t)(sp0 - 0xcu));
    af = (sp0 - 0x24u ^ 0x18u ^ sp0 - 0xcu) >> 4u & 1u;
    zf = sp0 == 0xcu;
    sf = (int32_t)(sp0 - 0xcu) < 0;
    of = ((sp0 - 0x24u ^ sp0 - 0xcu) & (sp0 - 0xcu ^ 0x18u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t9 = ~ecx - 1u;
    g->eax = eax;
    g->edx = t8;
    t10 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x101c48e0u), t10, 5, COW_IMG(0x1036c168u), COW_IMG(0x104e1722u), t9, 0u, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    if ((int32_t)t11 <= 0)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        goto L_101151c9;
    }
    esi = t9;
    wr16(COW_IMG(0x104e171cu), (uint16_t)(rd16(COW_IMG(0x104e171cu)) + 1u));
    wr16(COW_IMG(0x104e1720u), (uint16_t)esi);
L_10115166: ;
    return;
L_1011516a: ;
    if ((uint8_t)eax != 0x2au) goto L_10115190;
    if (rd8(edx + 1u) != 0x54u) goto L_10115190;
    edi = COW_IMG(0x104e1742u);
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t14 = ~ecx - 1u;
    esi = t14;
    loc_18 = t14;
    loc_1c = COW_IMG(0x104e1742u);
L_101151a3: ;
    g->eax = eax;
    g->edx = edx;
    t16 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall(g, COW_IMG(0x101c48e0u), t16, 5, COW_IMG(0x1036c168u), loc_1c, loc_18, 1u, 0u);
    t18 = g->ecx;
    t19 = g->edx;
    if ((int32_t)t17 <= 0)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_101151c9;
    }
    wr16(COW_IMG(0x104e1720u), (uint16_t)((uint16_t)esi + rd16(COW_IMG(0x104e1720u))));
    wr16(COW_IMG(0x104e171cu), (uint16_t)(rd16(COW_IMG(0x104e171cu)) + 1u));
    return;
L_10115190: ;
    edi = edx;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t15 = ~ecx - 1u;
    esi = t15;
    loc_18 = t15;
    loc_1c = edx;
    goto L_101151a3;
L_101151c9: ;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101133a0u), eax, ecx, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10115020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10115020(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
