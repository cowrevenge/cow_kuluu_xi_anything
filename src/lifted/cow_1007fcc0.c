/* f_0x1007fcc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007fcc0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    if ((uint8_t)((uint8_t)arg3 + 0x5eu) != 0x4au)
    {
        eax = rd32(COW_IMG(0x103551e0u));
        ebp = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
        esi = t1;
        edi = 0u;
        loc_10 = (rd32(sp0 - 0x10u) & 0xffff0000u) | (rd32(sp0 - 0x10u) & 0xfe00u) | (rd32(sp0 - 0x10u) & 0x5du) | 0x5du;
        loc_8 = (rd32(sp0 - 8u) & 0xff00ffffu) | (uint8_t)((uint8_t)arg3 + 0x5eu) << 0x10u;
        loc_4 = rd32(sp0 - 4u) & 0xffff0000u;
        loc_18 = t1;
        loc_14 = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x103551e0u));
        ebp = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
        esi = t1;
        loc_10 = (rd32(sp0 - 0x10u) & 0xffff0000u) | (rd32(sp0 - 0x10u) & 0xfe00u) | (rd32(sp0 - 0x10u) & 0x5du) | 0x5du;
        loc_8 = (rd32(sp0 - 8u) & 0xff00ffffu) | (uint8_t)((uint8_t)arg3 + 0x5eu) << 0x10u;
        loc_4 = rd32(sp0 - 4u) & 0xffff0000u;
        edi = esi;
        loc_18 = ebp;
        loc_14 = esi;
        esi = ebp;
        ebp = rd32(eax + 0xcu);
    }
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t2 = cow_cdecl(g, COW_IMG(0x1007ff30u), 1, esi);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        loc_8 = (loc_8 & 0xffffffu) | (uint8_t)t2 << 0x18u;
        goto L_1007fd5a;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    loc_8 = (loc_8 & 0xffffffu) | (uint8_t)t2 << 0x18u;
    if (esi == 0u) goto L_1007fd5a;
    edi = COW_IMG(0x10358118u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf) goto L_1007fd52;
    g->esp = sp0 - 0x28u;
    t5 = cow_call_regs(g, COW_IMG(0x1007a1c0u), loc_18, ecx, 0u, 1, 4, loc_18, 1u, 0u, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    esi = loc_18;
    edi = loc_14;
L_1007fd7e: ;
    if (eax != 0u) goto L_1007fd8d;
L_1007fd84: ;
    ebp = 0u;
    loc_8 = loc_8 & 0xffff0000u;
L_1007fdaa: ;
    if ((uint8_t)((uint8_t)arg3 + 0x5eu) != 0x2bu) goto L_1007fdbb;
    loc_4 = (loc_4 & 0xffff0000u) | 1u;
L_1007fedf: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t30 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x5du, 0u, 0u);
    t31 = g->edx;
    if (t30 == 0u)
    {
        edx = t31;
        goto L_1007fe35;
    }
    eax = t30;
    wr32(eax, loc_10);
    wr32(eax + 4u, ebp);
    wr32(eax + 8u, loc_8);
    wr32(eax + 0xcu, loc_4);
    g->edx = loc_4;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x10u, 0u);
    t32 = g->edx;
    g->edx = t32;
    return arg3;
L_1007fd52: ;
    edx = 0u;
    esi = loc_18;
    edi = loc_14;
L_1007fd5a: ;
    if (ebp == 0u) goto L_1007fd6f;
    g->esp = sp0 - 0x28u;
    t8 = cow_call_regs(g, COW_IMG(0x1007a1c0u), eax, ecx, edx, 1, 4, ebp, 1u, 0u, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    goto L_1007fd7e;
L_1007fd6f: ;
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1057876cu));
        goto L_1007fd84;
    }
    ecx = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0x28u;
    t11 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, edx, 1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    goto L_1007fd7e;
L_1007fd8d: ;
    if (rd32(eax) != (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
    {
        ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        edx = (edx & 0xffff0000u) | rd16(eax);
        ebp = rd32(eax + 4u);
        loc_8 = (loc_8 & 0xffff0000u) | rd16(eax);
    }
    else
    {
        ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        ebp = 0u;
        loc_8 = loc_8 & 0xffff0000u;
    }
    goto L_1007fdaa;
L_1007fdbb: ;
    if ((uint8_t)((uint8_t)arg3 + 0x5eu) != 0x41u) goto L_1007fdcc;
    loc_4 = (loc_4 & 0xffff0000u) | 2u;
    goto L_1007fedf;
L_1007fdcc: ;
    if ((uint8_t)((uint8_t)arg3 + 0x5eu) != 0x42u) goto L_1007fddd;
    loc_4 = (loc_4 & 0xffff0000u) | 3u;
    goto L_1007fedf;
L_1007fddd: ;
    if ((uint8_t)((uint8_t)arg3 + 0x5eu) != 0x43u) goto L_1007fdee;
    loc_4 = (loc_4 & 0xffff0000u) | 4u;
    goto L_1007fedf;
L_1007fdee: ;
    if ((uint8_t)((uint8_t)arg3 + 0x5eu) != 0x44u) goto L_1007fdff;
    loc_4 = (loc_4 & 0xffff0000u) | 5u;
    goto L_1007fedf;
L_1007fdff: ;
    if ((uint8_t)((uint8_t)arg3 + 0x5eu) != 0x49u) goto L_1007fe68;
    if (esi != 0u) goto L_1007fe0f;
    eax = 6u;
L_1007fe55: ;
    ebp = 0u;
    loc_8 = loc_8 & 0xff0000u;
    loc_4 = (loc_4 & 0xffff0000u) | (uint16_t)eax;
    goto L_1007fedf;
L_1007fe0f: ;
    ebx = 0u;
    ebp = COW_IMG(0x1032ca18u);
L_1007fe16: ;
    g->eax = rd32(ebp);
    t14 = rd32(ebp);
    g->esp = sp0 - 0x20u;
    t15 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, ecx, edx, 1, 4, t14, esi, in_edi, in_esi);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 == 0u)
    {
        ecx = t16;
        edx = t17;
        goto L_1007fe43;
    }
    ecx = t16;
    edx = t17;
    if (ebx + 8u < 0x198u)
    {
        ebx = ebx + 8u;
        ebp = ebp + 8u;
        goto L_1007fe16;
    }
L_1007fe35: ;
    g->edx = edx;
    return -arg3;
L_1007fe43: ;
    if ((int8_t)rd8(ebp + 4u) < 6) goto L_1007fe35;
    eax = (uint32_t)(int8_t)rd8(ebp + 4u);
    if ((int32_t)eax > 30) goto L_1007fe35;
    if (eax == 0u) goto L_1007fe35;
    goto L_1007fe55;
L_1007fe68: ;
    if ((uint8_t)((uint8_t)arg3 + 0x5eu) != 0x4au) goto L_1007fed3;
    if (edi == 0u) goto L_1007fe35;
    esi = 1u;
L_1007fe76: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t18 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 2u, esi);
    t19 = g->ecx;
    t20 = g->edx;
    g->esp = sp0 - 0x20u;
    t21 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, t19, t20, 1, 4, t18, edi, in_edi, in_esi);
    t22 = g->ecx;
    t23 = g->edx;
    if (t21 == 0u)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        goto L_1007febc;
    }
    eax = t21;
    ecx = t22;
    edx = t23;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t24 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x12u, esi);
    t25 = g->ecx;
    t26 = g->edx;
    g->esp = sp0 - 0x20u;
    t27 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, t25, t26, 1, 4, t24, edi, in_edi, in_esi);
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 == 0u)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        goto L_1007febc;
    }
    eax = t27;
    ecx = t28;
    edx = t29;
    if ((int32_t)(esi + 1u) < 24)
    {
        esi = esi + 1u;
        goto L_1007fe76;
    }
    g->edx = edx;
    return -arg3;
L_1007febc: ;
    if (esi + 0x1eu == 0u) goto L_1007fe35;
    esi = esi + 0x1eu;
    loc_8 = loc_8 & 0xffffffu;
    loc_4 = (loc_4 & 0xffff0000u) | (uint16_t)esi;
    goto L_1007fedf;
L_1007fed3: ;
    if ((uint8_t)((uint8_t)arg3 + 0x5eu) == 0x60u)
    {
        loc_4 = (loc_4 & 0xffff0000u) | 0x35u;
    }
    goto L_1007fedf;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007fcc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007fcc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
