/* f_0x100805f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100805f0(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 556u);

    wr32(sp0 - 0x210u, in_ebx);
    wr32(sp0 - 0x214u, in_esi);
    wr32(sp0 - 0x218u, in_edi);
    g->esp = sp0 - 0x218u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    wr32(sp0 - 0x21cu, 1u);
    wr32(sp0 - 0x220u, sp0 - 0x20cu);
    wr32(sp0 - 0x224u, sp0 - 0x208u);
    wr32(sp0 - 0x228u, sp0 - 0x204u);
    g->edx = sp0 - 0x204u;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 0x208u, 4, sp0 - 0x204u, sp0 - 0x208u, sp0 - 0x20cu, 1u);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        edx = t3;
        goto L_100807af;
    }
    edx = t3;
    esi = t1;
    if (esi == 0u) goto L_100807af;
    if (!(rd32(esi + 0x124u) >> 0x1bu & 1u)) goto L_100807af;
    eax = rd32(esi + 0x124u) >> 0x1bu;
    if (rd32(COW_IMG(0x1047d490u)) != 1u)
    {
        edx = rd32(COW_IMG(0x1047d490u));
        goto L_1008066c;
    }
    wr32(sp0 - 0x21cu, 0u);
    t4 = rd32(sp0 - 0x208u);
    wr32(sp0 - 0x220u, t4);
    t5 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x224u, t5);
    wr32(sp0 - 0x228u, 1u);
    g->edx = t5;
    g->esp = sp0 - 0x214u;
    cow_cdecl(g, COW_IMG(0x100eaab0u), 5, 1u, t5, t4, 0u, in_edi);
    t6 = g->edx;
    g->edx = t6;
    return arg3;
L_1008066c: ;
    if ((int32_t)edx < 2) goto L_100807bc;
    t7 = rd32(COW_IMG(0x103551e0u));
    esi = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    edi = COW_IMG(0x10358144u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = t7;
        goto L_1008072e;
    }
    eax = t7;
    if (edx != 2u) goto L_100806bb;
    t8 = rd32(sp0 - 0x208u);
    wr32(sp0 - 0x21cu, t8);
    t9 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x220u, t9);
    wr32(sp0 - 0x224u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x218u;
    cow_cdecl(g, COW_IMG(0x100eabc0u), 3, 1u, t9, t8);
    t10 = g->edx;
    g->edx = t10;
    return arg3;
L_100806bb: ;
    t11 = rd32(eax + 8u);
    esi = t11;
    edi = COW_IMG(0x10358140u);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        eax = t11;
        goto L_100806d4;
    }
    eax = 0u;
L_10080708: ;
    wr32(sp0 - 0x21cu, eax);
    t12 = rd32(sp0 - 0x208u);
    wr32(sp0 - 0x220u, t12);
    t13 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x224u, t13);
    wr32(sp0 - 0x228u, 1u);
    g->edx = t13;
    g->esp = sp0 - 0x218u;
    cow_cdecl(g, COW_IMG(0x100ead60u), 4, 1u, t13, t12, eax);
    t14 = g->edx;
    g->edx = t14;
    return arg3;
L_100806d4: ;
    esi = eax;
    edi = COW_IMG(0x1035813cu);
    ecx = 3u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_100806ed;
    eax = 1u;
    goto L_10080708;
L_100806ed: ;
    esi = eax;
    edi = COW_IMG(0x103580c8u);
    ecx = 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = 0u;
        goto L_100807bc;
    }
    eax = 2u;
    goto L_10080708;
L_1008072e: ;
    t15 = rd32(eax + 4u);
    esi = t15;
    edi = COW_IMG(0x10357d98u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        edx = 0u;
        ebx = COW_IMG(0x103d3c84u);
    }
    else
    {
        eax = t15;
        esi = eax;
        edi = COW_IMG(0x103580bcu);
        ecx = 4u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (rd32(zf * 4u + rd32(COW_IMG(0x103551e4u)) + 4u) == 0u)
        {
            edx = rd32(zf * 4u + rd32(COW_IMG(0x103551e4u)) + 4u);
            ebx = COW_IMG(0x103d3c84u);
        }
        else
        {
            ecx = rd32(COW_IMG(0x103551e4u));
            edx = rd32(zf * 4u + rd32(COW_IMG(0x103551e4u)) + 4u);
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
            if (~ecx == 1u)
            {
                ebx = COW_IMG(0x103d3c84u);
            }
            else
            {
                ecx = ~ecx - 1u;
                wr32(sp0 - 0x21cu, edx);
                wr32(sp0 - 0x220u, sp0 - 0x200u);
                g->edx = sp0 - 0x200u;
                g->esp = sp0 - 0x204u;
                cow_thiscall_cdecl(g, COW_IMG(0x1018fb30u), ecx, 7, sp0 - 0x200u, edx, in_edi, in_esi, in_ebx, rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u));
                t16 = g->edx;
                edx = t16;
                ebx = sp0 - 0x200u;
            }
        }
    }
    wr32(sp0 - 0x21cu, ebx);
    t17 = rd32(sp0 - 0x208u);
    wr32(sp0 - 0x220u, t17);
    t18 = rd32(sp0 - 0x20cu);
    wr32(sp0 - 0x224u, t18);
    wr32(sp0 - 0x228u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x218u;
    cow_call_regs(g, COW_IMG(0x100eace0u), t17, g->ecx, g->edx, 1, 4, 1u, t18, t17, ebx);
    t19 = g->edx;
    g->edx = t19;
    return arg3;
L_100807af: ;
    wr32(sp0 - 0x21cu, 0x71u);
    g->edx = edx;
    g->esp = sp0 - 0x218u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x71u);
    t20 = g->edx;
    edx = t20;
L_100807bc: ;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100805f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100805f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
