/* f_0x10007860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10007860(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t20;
    uint32_t t21;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 284u);

    wr32(sp0 - 0x108u, in_ebx);
    wr32(sp0 - 0x10cu, in_esi);
    wr32(sp0 - 0x110u, in_edi);
    wr32(sp0 - 0x114u, arg1);
    t1 = rd32(COW_IMG(0x10662d40u));
    g->esp = sp0 - 0x110u;
    cow_call_regs(g, COW_IMG(0x101b36f0u), in_eax, t1, in_edx, 0, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(COW_IMG(0x10578490u)) == 0u) goto L_10007ad2;
    ecx = t2;
    edx = t3;
    if (rd32(COW_IMG(0x1062193cu)) == 0u) goto L_10007ad2;
    eax = rd32(COW_IMG(0x1062193cu));
    wr32(sp0 - 0x114u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x108u;
    t4 = cow_call_regs(g, COW_IMG(0x10312c1bu), g->eax, ecx, edx, 1, 3, arg1, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        ecx = t5;
        goto L_10007a18;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    if (arg1 == 8u) goto L_1000790a;
    if (arg1 == 0xdu) goto L_100078d8;
    if (arg1 != 0x1bu) goto L_10007a0c;
L_100078ba: ;
    edi = rd32(COW_IMG(0x10578490u)) + 0x14u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->ebx = rd32(sp0 - 0x108u);
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    return;
L_100078d8: ;
    wr32(sp0 - 0x114u, 0xdu);
    g->esp = sp0 - 0x110u;
    cow_thiscall(g, COW_IMG(0x1015dd70u), COW_IMG(0x10621838u), 1, 0xdu);
    t7 = g->ecx;
    t8 = rd32(COW_IMG(0x10578490u)) + 0x14u;
    edi = t8;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u) goto L_10007ad2;
    ecx = ~ecx - 1u;
    edx = t8;
    wr32(sp0 - 0x114u, eax);
    wr32(sp0 - 0x118u, edx);
    g->esp = sp0 - 0x110u;
    cow_cdecl(g, COW_IMG(0x10080dc0u), 2, edx, eax);
    goto L_100078ba;
L_1000790a: ;
    if (rd8(rd32(COW_IMG(0x10578490u)) + 0x114u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x10578490u)) + 0x114u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x10578490u)) + 0x114u);
        esi = rd32(COW_IMG(0x10578490u));
        t9 = (uint32_t)(int8_t)rd8(esi + (uint8_t)eax + 0x12u);
        wr32(sp0 - 0x114u, t9);
        g->eax = t9;
        g->edx = edx;
        g->esp = sp0 - 0x100u;
        t10 = cow_thiscall_cdecl(g, COW_IMG(0x10312b13u), ecx, 5, t9, rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u));
        t11 = g->ecx;
        t12 = g->edx;
        if (t10 == 0u)
        {
            ecx = t11;
            goto L_10007998;
        }
        eax = t10;
        ecx = t11;
        edx = t12;
        if (rd8(esi + 0x114u) <= 1u)
        {
            eax = (eax & 0xffffff00u) | rd8(esi + 0x114u);
            goto L_100079f4;
        }
        eax = (eax & 0xffffff00u) | rd8(esi + 0x114u);
        wr8(esi + (uint8_t)eax + 0x12u, 0u);
        t13 = rd8(esi + 0x114u);
        edi = esi + rd8(esi + 0x114u) + 0x14u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if (~ecx == 1u)
        {
            edx = t13;
            goto L_1000798e;
        }
        ecx = ~ecx - 1u;
        edx = t13;
        ebx = 0u;
L_10007967: ;
        t14 = rd8(ebx + edx + esi + 0x14u);
        wr8(ebx + edx + esi + 0x12u, (uint8_t)t14);
        t15 = rd8(esi + 0x114u);
        edi = esi + rd8(esi + 0x114u) + 0x14u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if (ebx + 1u < ~ecx - 1u)
        {
            ecx = ~ecx - 1u;
            edx = t15;
            ebx = ebx + 1u;
            goto L_10007967;
        }
        edx = t15;
L_1000798e: ;
        eax = (eax & 0xffffff00u) | (uint8_t)(rd8(esi + 0x114u) + 0xfeu);
L_100079ee: ;
        wr8(esi + 0x114u, (uint8_t)eax);
    }
L_100079f4: ;
    wr32(sp0 - 0x114u, 8u);
    g->esp = sp0 - 0x110u;
    cow_thiscall(g, COW_IMG(0x1015dd70u), COW_IMG(0x10621838u), 1, 8u);
    g->ebx = rd32(sp0 - 0x108u);
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    return;
L_10007998: ;
    wr8(esi + rd8(esi + 0x114u) + 0x13u, 0u);
    t16 = rd8(esi + 0x114u);
    edi = esi + rd8(esi + 0x114u) + 0x14u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        edx = t16;
        goto L_100079e6;
    }
    ecx = ~ecx - 1u;
    edx = t16;
    ebx = 0u;
L_100079bf: ;
    t17 = rd8(ebx + edx + esi + 0x14u);
    wr8(ebx + edx + esi + 0x13u, (uint8_t)t17);
    t18 = rd8(esi + 0x114u);
    edi = esi + rd8(esi + 0x114u) + 0x14u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (ebx + 1u < ~ecx - 1u)
    {
        ecx = ~ecx - 1u;
        edx = t18;
        ebx = ebx + 1u;
        goto L_100079bf;
    }
    edx = t18;
L_100079e6: ;
    eax = (eax & 0xffffff00u) | (uint8_t)(rd8(esi + 0x114u) - 1u);
    goto L_100079ee;
L_10007a0c: ;
    if (arg1 < 0x80u) goto L_10007ad2;
L_10007a18: ;
    t19 = rd32(COW_IMG(0x10578490u));
    edi = rd32(COW_IMG(0x10578490u)) + 0x14u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if ((uint8_t)(~ecx - 1u) >= 0xffu)
    {
        edx = t19;
    }
    else
    {
        ecx = ~ecx - 1u;
        edx = t19;
        if ((uint8_t)ecx == rd8(edx + 0x114u))
        {
            eax = (eax & 0xffffff00u) | rd8(edx + 0x114u);
            ebx = (rd32(sp0 - 0x104u) & 0xffffff00u) | (uint8_t)((uint8_t)ecx - rd8(edx + 0x114u));
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(edx + 0x114u);
            ebx = (rd32(sp0 - 0x104u) & 0xffffff00u) | (uint8_t)((uint8_t)ecx - rd8(edx + 0x114u));
            wr32(sp0 - 0x114u, in_ebp);
            t20 = edx + (uint8_t)eax;
            wr32(sp0 - 0x104u, t20);
            esi = t20 + 0x14u;
            edi = sp0 - 0x100u;
            ecx = (uint8_t)ebx >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = ebx & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            esi = sp0 - 0x100u;
            edi = t20 + 0x15u;
            ecx = (uint8_t)ebx >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = ebx & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            eax = (uint8_t)ebx;
        }
        wr8(edx + rd8(edx + 0x114u) + 0x14u, (uint8_t)arg1);
        t21 = rd8(edx + 0x114u);
        wr8(edx + 0x114u, (uint8_t)(t21 + 1u));
        wr8(edx + (uint8_t)ebx + (uint8_t)(t21 + 1u) + 0x14u, 0u);
        eax = (uint8_t)(t21 + 1u);
        edx = edx + (uint8_t)(t21 + 1u);
    }
    wr32(sp0 - 0x114u, arg1);
    g->esp = sp0 - 0x110u;
    cow_thiscall(g, COW_IMG(0x1015dd50u), COW_IMG(0x10621838u), 1, arg1);
L_10007ad2: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10007860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10007860(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
