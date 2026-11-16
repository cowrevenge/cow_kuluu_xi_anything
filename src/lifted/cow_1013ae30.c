/* f_0x1013ae30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1013ae30(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    if (arg3 == 0u)
    {
        eax = in_eax;
        goto L_1013af82;
    }
    wr32(sp0 - 0x30u, (uint16_t)arg2);
    wr32(sp0 - 0x34u, 0x53u);
    wr32(sp0 - 0x38u, 0xau);
    g->eax = (uint16_t)arg2;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x53u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x34u, t1);
    wr32(sp0 - 0x38u, arg1);
    g->ebx = arg1;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x24u;
    t4 = cow_cdecl(g, COW_IMG(0x10312031u), 5, arg1, t1, (uint16_t)arg2, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    if (arg3 != 0x7ffffeu)
    {
        edx = t6;
        goto L_1013aead;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    wr32(sp0 - 0x30u, 0xe2u);
    wr32(sp0 - 0x34u, 9u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x2cu;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xe2u);
    t8 = g->ecx;
    edi = t7;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x2cu < sp0 - 0x34u;
    pf = PARITY((uint8_t)(sp0 - 0x2cu));
    af = (sp0 - 0x34u ^ sp0 - 0x2cu) >> 4u & 1u;
    zf = sp0 == 0x2cu;
    sf = (int32_t)(sp0 - 0x2cu) < 0;
    of = ((sp0 - 0x34u ^ sp0 - 0x2cu) & (sp0 - 0x2cu ^ 8u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t9 = edi - ~ecx;
    edi = arg1;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t9;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return eax;
L_1013aead: ;
    wr32(sp0 - 0x30u, in_ebp);
    ebp = 1u;
    cf = arg3 < 0x7ffffeu;
    pf = PARITY((uint8_t)(arg3 - 0x7ffffeu));
    zf = arg3 == 0x7ffffeu;
    sf = (int32_t)(arg3 - 0x7ffffeu) < 0;
    of = ((arg3 ^ 0x7ffffeu) & (arg3 ^ arg3 - 0x7ffffeu)) >> 0x1fu;
L_1013aeb3: ;
    if ((arg3 & 1u << (ebp & 0x1fu)) != 0u)
    {
        if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
        {
            eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            ecx = rd32(COW_IMG(0x10456a28u));
            edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
            goto L_1013aede;
        }
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        if (eax == 2u) goto L_1013aeff;
        if (eax == 3u) goto L_1013aeff;
L_1013aede: ;
        if (eax != 0u) goto L_1013aeff;
        wr32(sp0 - 0x34u, ebp);
        g->ecx = ecx;
        g->esp = sp0 - 0x28u;
        t10 = cow_cdecl(g, COW_IMG(0x10152f00u), 3, ebp, in_ebp, rd32(sp0 - 0x2cu));
        t11 = g->ecx;
        eax = t10;
        ecx = t11;
        edx = sp0 - 0x20u;
L_1013aeef: ;
        t12 = rd8(eax);
        wr8(edx, (uint8_t)t12);
        if ((uint8_t)t12 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t12;
            edx = edx + 1u;
            goto L_1013aeef;
        }
        ecx = (ecx & 0xffffff00u) | t12;
        loc_20 = (rd32(sp0 - 0x20u) & 0xff00ffffu) | (uint8_t)ecx << 0x10u;
L_1013af1a: ;
        edi = sp0 - 0x20u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t16 = edi - ~ecx;
        edi = arg1;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        esi = t16;
        edi = edi - 1u;
        ecx = ~ecx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ~ecx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        edx = ~ecx;
    }
    if ((int32_t)(ebp + 1u) < 24)
    {
        cf = ebp + 1u < 0x18u;
        pf = PARITY((uint8_t)(ebp - 0x17u));
        zf = ebp == 0x17u;
        sf = (int32_t)(ebp - 0x17u) < 0;
        of = ((ebp + 1u ^ 0x18u) & (ebp + 1u ^ ebp - 0x17u)) >> 0x1fu;
        ebp = ebp + 1u;
        goto L_1013aeb3;
    }
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        goto L_1013af6c;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    if (eax == 2u) goto L_1013af70;
    if (eax == 3u) goto L_1013af70;
L_1013af6c: ;
    if (eax == 0u) goto L_1013af82;
L_1013af70: ;
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if ((int32_t)(~ecx - 2u) >= 0)
    {
        ecx = ~ecx - 2u;
        wr8(arg1 + ecx, (uint8_t)eax);
    }
L_1013af82: ;
    g->ebx = in_ebx;
    return eax;
L_1013aeff: ;
    wr32(sp0 - 0x34u, ebp);
    wr32(sp0 - 0x38u, 2u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 2u, ebp);
    t14 = g->edx;
    wr32(sp0 - 0x3cu, t13);
    wr32(sp0 - 0x40u, COW_IMG(0x1036fdc0u));
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    g->ebx = arg1;
    g->ecx = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036fdc0u), t13, 2u, rd32(sp0 - 0x34u));
    t15 = g->ecx;
    ecx = t15;
    goto L_1013af1a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013ae30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013ae30(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
