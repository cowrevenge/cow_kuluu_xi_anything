/* f_0x101c3a90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101c3a90(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 328u);

    wr32(sp0 - 0x128u, in_ebx);
    wr32(sp0 - 0x12cu, in_esi);
    wr32(sp0 - 0x130u, in_edi);
    if (rd32(self + 4u) == 0u) goto L_101c3ba8;
    eax = rd32(self + 4u);
    if (eax == 1u) goto L_101c3b02;
    eax = eax - 1u;
    if (eax != 1u)
    {
        edx = in_edx;
        goto L_101c3ce8;
    }
    if ((int32_t)arg1 < (int32_t)rd32(self + 0xc8u)) goto L_101c3ad0;
    eax = rd32(self + 0xc8u);
    g->edx = arg1;
    return 0xffffffffu;
L_101c3ad0: ;
    t1 = cow_divu(g, rd16(arg1 * 2u + rd32(self + 0xc4u)), 0x1eu);
    t2 = cow_modu(g, rd16(arg1 * 2u + rd32(self + 0xc4u)), 0x1eu);
    wr32(sp0 - 0x134u, t2);
    wr32(sp0 - 0x138u, t1);
    wr32(sp0 - 0x13cu, COW_IMG(0x1037cd10u));
    wr32(sp0 - 0x140u, sp0 - 0x100u);
    g->ecx = 0x1eu;
    g->esp = sp0 - 0x12cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cd10u), t1, t2, in_edi);
    t3 = g->ecx;
    ecx = t3;
    esi = sp0 - 0x100u;
L_101c3cd3: ;
    eax = esi;
    edx = arg2 - esi;
L_101c3cde: ;
    t21 = rd8(eax);
    wr8(eax + edx, (uint8_t)t21);
    if ((uint8_t)t21 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t21;
        goto L_101c3cde;
    }
L_101c3ce8: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return 1u;
L_101c3b02: ;
    if ((int32_t)arg1 < (int32_t)rd32(self + 0xc8u)) goto L_101c3b22;
    eax = rd32(self + 0xc8u);
    g->edx = arg1;
    return 0xffffffffu;
L_101c3b22: ;
    t4 = rd16(arg1 * 2u + rd32(self + 0xc4u));
    t5 = rd32(self + 0xbcu);
    t6 = rd8(arg1 + rd32(self + 0xbcu));
    wr8(sp0 - 0x124u, (uint8_t)t6);
    if ((uint8_t)t6 != 0u)
    {
        eax = t4;
        ecx = (t5 & 0xffffff00u) | t6;
        goto L_101c3b4e;
    }
    eax = t4;
    g->edx = arg1;
    return 0xffffffffu;
L_101c3b4e: ;
    if ((uint8_t)ecx != 1u)
    {
        wr32(sp0 - 0x134u, eax & 0x7fu);
        wr32(sp0 - 0x138u, eax >> 7u);
        t8 = (uint8_t)rd32(sp0 - 0x124u);
        wr32(sp0 - 0x13cu, t8);
        wr32(sp0 - 0x140u, COW_IMG(0x1037ccecu));
        wr32(sp0 - 0x144u, sp0 - 0x100u);
        g->ecx = eax & 0x7fu;
        g->esp = sp0 - 0x130u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037ccecu), t8, eax >> 7u, eax & 0x7fu);
        t9 = g->ecx;
        ecx = t9;
        esi = sp0 - 0x100u;
    }
    else
    {
        wr32(sp0 - 0x134u, eax & 0x7fu);
        wr32(sp0 - 0x138u, eax >> 7u);
        wr32(sp0 - 0x13cu, COW_IMG(0x1037cd00u));
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        g->ecx = ecx;
        g->esp = sp0 - 0x12cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cd00u), eax >> 7u, eax & 0x7fu, in_edi);
        t7 = g->ecx;
        ecx = t7;
        esi = sp0 - 0x100u;
    }
    goto L_101c3cd3;
L_101c3ba8: ;
    t10 = rd32(self + 0x80u);
    wr8(sp0 - 0x124u, 0u);
    wr32(sp0 - 0x134u, in_ebp);
    if (t10 == 0u)
    {
        eax = rd32(sp0 - 0x124u);
        edx = in_edx;
        ebx = in_ebx & 0xffffff00u;
        esi = 0u;
        edi = t10;
    }
    else
    {
        eax = rd32(sp0 - 0x124u);
        edi = t10;
        edx = in_edx;
        ebx = in_ebx & 0xffffff00u;
        esi = 0u;
L_101c3bc5: ;
        if ((uint8_t)ebx != 0u) goto L_101c3bfb;
        if (rd32(self + 0x44u) > arg1)
        {
            if (rd32(self + (uint8_t)eax * 4u + 0xcu) != 0u)
            {
                eax = rd32(self + (uint8_t)eax * 4u + 0xcu);
                if (rd32(arg1 * 8u + eax) != 0u)
                {
                    edx = rd32(arg1 * 8u + eax);
                    ebx = (ebx & 0xffffff00u) | 1u;
                    esi = eax + edx;
                }
            }
        }
        wr8(sp0 - 0x124u, (uint8_t)(rd8(sp0 - 0x124u) + 1u));
        t11 = rd32(sp0 - 0x124u);
        if ((uint8_t)t11 < edi)
        {
            eax = t11;
            edx = (uint8_t)t11;
            goto L_101c3bc5;
        }
        eax = t11;
        edx = (uint8_t)t11;
    }
L_101c3bfb: ;
    if ((uint8_t)eax != edi) goto L_101c3c18;
    eax = (uint8_t)eax;
    if ((uint8_t)ebx != 0u) goto L_101c3c18;
    g->edx = edx;
    return 0xffffffffu;
L_101c3c18: ;
    eax = 0u;
    ecx = self;
L_101c3c1a: ;
    t12 = rd8(COW_IMG(0x1037ccdcu) + eax);
    wr8(eax + sp0 - 0x120u, (uint8_t)t12);
    if ((uint8_t)t12 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t12;
        goto L_101c3c1a;
    }
    ecx = (ecx & 0xffffff00u) | t12;
    edi = esi;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u < 0xdu)
    {
        ecx = ~ecx - 1u;
        goto L_101c3ccf;
    }
    ecx = ~ecx - 1u;
    wr32(sp0 - 0x134u, 0x11u);
    wr32(sp0 - 0x138u, COW_IMG(0x1037ccc8u));
    wr32(sp0 - 0x13cu, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x128u;
    t13 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi, COW_IMG(0x1037ccc8u), 0x11u, in_edi, in_esi);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 != 0u)
    {
        eax = t13;
        edx = t15;
        goto L_101c3c9f;
    }
    ecx = t14;
    edx = t15;
    wr32(sp0 - 0x134u, esi + 0x11u);
    wr32(sp0 - 0x138u, COW_IMG(0x1037ccc0u));
    wr32(sp0 - 0x13cu, sp0 - 0x100u);
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0x128u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037ccc0u), esi + 0x11u, rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu));
    t16 = g->ecx;
    edi = sp0 - 0x100u;
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
        ecx = ~ecx - 1u;
        esi = sp0 - 0x100u;
        goto L_101c3cd3;
    }
    ecx = ~ecx - 1u;
    edx = 0u;
L_101c3c7e: ;
    if (rd8(edx + sp0 - 0x100u) == 0x2fu)
    {
        wr8(edx + sp0 - 0x100u, 0x5cu);
    }
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY((uint8_t)(edx + 1u));
    af = (edx ^ edx + 1u) >> 4u & 1u;
    zf = edx + 1u == 0u;
    sf = (int32_t)(edx + 1u) < 0;
    of = edx + 1u == 0x80000000u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (edx + 1u < ~ecx - 1u)
    {
        ecx = ~ecx - 1u;
        edx = edx + 1u;
        goto L_101c3c7e;
    }
    ecx = ~ecx - 1u;
    esi = sp0 - 0x100u;
    goto L_101c3cd3;
L_101c3c9f: ;
    wr32(sp0 - 0x134u, 0xdu);
    wr32(sp0 - 0x138u, sp0 - 0x120u);
    wr32(sp0 - 0x13cu, esi);
    g->eax = eax;
    g->ecx = sp0 - 0x120u;
    g->edx = edx;
    g->esp = sp0 - 0x128u;
    t17 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi, sp0 - 0x120u, 0xdu, rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu));
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 != 0u)
    {
        ecx = t18;
        edx = t19;
        goto L_101c3ccf;
    }
    eax = t17;
    ecx = t18;
    wr32(sp0 - 0x134u, esi + 0xdu);
    wr32(sp0 - 0x138u, COW_IMG(0x1037ccc0u));
    wr32(sp0 - 0x13cu, sp0 - 0x100u);
    g->ebx = ebx;
    g->ecx = ecx;
    g->esp = sp0 - 0x128u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037ccc0u), esi + 0xdu, rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu));
    t20 = g->ecx;
    ecx = t20;
    esi = sp0 - 0x100u;
    goto L_101c3cd3;
L_101c3ccf: ;
    if (esi == 0u) goto L_101c3ce8;
    goto L_101c3cd3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c3a90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c3a90(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
