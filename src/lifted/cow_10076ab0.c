/* f_0x10076ab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10076ab0(Guest* g)
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
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
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

    if (arg1 != 0u)
    {
        loc_8 = (rd32(sp0 - 8u) & 0xffffff00u) | 1u;
        goto L_10076ace;
    }
    return 0u;
L_10076ace: ;
    if (arg2 != 0u) goto L_10076ae0;
    return 0u;
L_10076ae0: ;
    if ((int32_t)arg3 > 0) goto L_10076af2;
    return 0u;
L_10076af2: ;
    g->ebx = arg3 - 1u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_call_regs(g, COW_IMG(0x10077b40u), in_eax, g->ecx, g->edx, 1, 2, COW_IMG(0x10355408u), arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        if (!(rd16(eax + 0x16u) >> 8u & 1u))
        {
            eax = (eax & 0xffff0000u) | rd16(eax + 0x16u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(eax + 0x16u);
            loc_8 = loc_8 & 0xffffff00u;
        }
        wr8(COW_IMG(0x1047d495u), eax >> 3u & 1u);
        eax = (eax & 0xffffff00u) | (eax >> 3u & 1u);
    }
    if ((int32_t)(arg3 - 1u) <= 0)
    {
        edi = arg2;
        goto L_10076deb;
    }
    ebx = arg3 - 1u;
    esi = arg1;
    edi = arg2;
    loc_10 = arg2;
    loc_14 = rd32(sp0 - 0x14u);
L_10076b29: ;
    if (rd8(esi) == 0u) goto L_10076deb;
    eax = (eax & 0xffffff00u) | rd8(esi);
    loc_14 = (loc_14 & 0xffffffu) | rd8(esi) << 0x18u;
    if ((uint8_t)eax != 0x3cu) goto L_10076d9a;
    if (rd8(esi + 1u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        ecx = esi + 1u;
        edx = edx & 0xffffff00u;
        ebp = esi + 1u;
        loc_4 = esi + 1u;
        goto L_10076b9c;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + 1u);
    ecx = esi + 1u;
    edx = edx & 0xffffff00u;
    ebp = esi + 1u;
    loc_4 = esi + 1u;
L_10076b51: ;
    if ((uint8_t)eax != 0x20u)
    {
        ebp = ebp + 1u;
        goto L_10076b6d;
    }
    ebp = ebp + 1u;
    if ((uint8_t)edx != 0u) goto L_10076b95;
L_10076b5a: ;
    wr8(edi, loc_14 >> 0x18u);
    eax = (eax & 0xffffff00u) | loc_14 >> 0x18u;
    ebx = ebx - 1u;
    esi = ecx;
    loc_10 = edi + 1u;
    edi = edi + 1u;
L_10076d36: ;
    if ((int32_t)ebx > 0) goto L_10076b29;
    wr8(edi, 0u);
    g->ebx = in_ebx;
    return edi - arg2;
L_10076b6d: ;
    if ((uint8_t)eax != 0x22u) goto L_10076b78;
    edx = (edx & 0xffffff00u) | (uint8_t)edx == 0u;
L_10076b95: ;
    if (rd8(ebp) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebp);
        goto L_10076b51;
    }
    eax = (eax & 0xffffff00u) | rd8(ebp);
L_10076b9c: ;
    if ((uint8_t)eax != 0x3eu) goto L_10076b5a;
    ebp = ebp + 1u;
L_10076ba1: ;
    t4 = rd8(ebp);
    wr8(ebp, 0u);
    edi = COW_IMG(0x10357f88u);
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t5 = ~ecx - 1u;
    g->eax = eax;
    g->ecx = t5;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t6 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi, COW_IMG(0x10357f88u), t5, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 0u)
    {
        ecx = t7;
        edx = t8;
        loc_14 = (loc_14 & 0xffffffu) | t4 << 0x18u;
        goto L_10076be2;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    loc_14 = (loc_14 & 0xffffffu) | t4 << 0x18u;
    wr8(COW_IMG(0x1047d494u), 3u);
    loc_c = 0x7fu;
L_10076cb3: ;
    if ((uint8_t)loc_8 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)loc_8;
        goto L_10076cc8;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)loc_8;
    if (rd8(COW_IMG(0x1047d495u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d495u));
        goto L_10076d51;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047d495u));
L_10076cc8: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t25 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x20000u);
    t26 = g->ecx;
    t27 = g->edx;
    if ((uint8_t)t25 != 0u)
    {
        eax = t25;
        edx = t27;
        goto L_10076e44;
    }
    eax = t25;
    ecx = t26;
    edx = t27;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t28 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, 0u);
    t29 = g->ecx;
    t30 = g->edx;
    if ((uint8_t)t28 != 0u)
    {
        eax = t28;
        edx = t30;
        goto L_10076e62;
    }
    eax = t28;
    ecx = t29;
    edx = t30;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t31 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint8_t)t31 != 0u)
    {
        eax = t31;
        edx = t33;
        goto L_10076e80;
    }
    eax = t31;
    ecx = t32;
    edx = t33;
    if (arg3 - ebx == 1u) goto L_10076d19;
    edi = arg3 - ebx - 1u;
    if (rd8(arg1) == 0x2fu) goto L_10076e9e;
    ecx = arg1;
L_10076d19: ;
    wr8(ebp, loc_14 >> 0x18u);
    t71 = rd8(esi);
    wr8(loc_10, (uint8_t)t71);
    eax = loc_10;
    ecx = (ecx & 0xffffff00u) | t71;
    edx = (edx & 0xffffff00u) | loc_14 >> 0x18u;
L_10076d28: ;
    ebx = ebx - 1u;
    esi = loc_4;
    loc_10 = eax + 1u;
    eax = eax + 1u;
L_10076d32: ;
    edi = loc_10;
    goto L_10076d36;
L_10076b78: ;
    if ((uint8_t)eax == 0x3cu) goto L_10076b5a;
    if ((uint8_t)eax != 0xfdu) goto L_10076b91;
    eax = 0u;
L_10076b82: ;
    if (rd8(ebp) == 0u) goto L_10076b95;
    if ((int32_t)(eax + 1u) < 5)
    {
        eax = eax + 1u;
        ebp = ebp + 1u;
        goto L_10076b82;
    }
    eax = eax + 1u;
    ebp = ebp + 1u;
    goto L_10076b95;
L_10076b91: ;
    if ((uint8_t)eax == 0x3eu) goto L_10076ba1;
    goto L_10076b95;
L_10076be2: ;
    edi = COW_IMG(0x10357f80u);
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t9 = ~ecx - 1u;
    g->eax = eax;
    g->ecx = t9;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t10 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi, COW_IMG(0x10357f80u), t9, in_edi, in_esi);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        ecx = t11;
        edx = t12;
        goto L_10076c18;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    wr8(COW_IMG(0x1047d494u), 4u);
    loc_c = 0x1du;
    goto L_10076cb3;
L_10076c18: ;
    edi = COW_IMG(0x10357f78u);
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t13 = ~ecx - 1u;
    g->eax = eax;
    g->ecx = t13;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t14 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi, COW_IMG(0x10357f78u), t13, in_edi, in_esi);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 != 0u)
    {
        ecx = t15;
        edx = t16;
        goto L_10076c4b;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    wr8(COW_IMG(0x1047d494u), 5u);
    loc_c = 0xa0u;
    goto L_10076cb3;
L_10076c4b: ;
    edi = COW_IMG(0x10357f70u);
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t17 = ~ecx - 1u;
    g->eax = eax;
    g->ecx = t17;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t18 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi, COW_IMG(0x10357f70u), t17, in_edi, in_esi);
    t19 = g->ecx;
    t20 = g->edx;
    if (t18 != 0u)
    {
        ecx = t19;
        edx = t20;
        goto L_10076c7e;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    wr8(COW_IMG(0x1047d494u), 6u);
    loc_c = 5u;
    goto L_10076cb3;
L_10076c7e: ;
    edi = COW_IMG(0x10357f68u);
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t21 = ~ecx - 1u;
    g->eax = eax;
    g->ecx = t21;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t22 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi, COW_IMG(0x10357f68u), t21, in_edi, in_esi);
    t23 = g->ecx;
    t24 = g->edx;
    if (t22 != 0u)
    {
        eax = t22;
        ecx = t23;
        goto L_10076d51;
    }
    eax = t22;
    ecx = t23;
    edx = t24;
    wr8(COW_IMG(0x1047d494u), 7u);
    loc_c = 0xdu;
    goto L_10076cb3;
L_10076d51: ;
    g->esp = sp0 - 0x24u;
    t72 = cow_call_regs(g, COW_IMG(0x10076ff0u), eax, ecx, loc_8, 1, 2, esi, loc_8);
    t73 = g->ecx;
    t74 = g->edx;
    if (t72 == 0u)
    {
        ecx = t73;
        edx = t74;
        goto L_10076d89;
    }
    eax = t72;
    ecx = t73;
    edx = t74;
    if ((int32_t)ebx <= 0) goto L_10076d7e;
L_10076d67: ;
    if (rd8(eax) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        eax = eax + 1u;
        goto L_10076d7e;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    eax = eax + 1u;
    wr8(loc_10, (uint8_t)ecx);
    if ((int32_t)(ebx - 1u) > 0)
    {
        edx = loc_10 + 1u;
        ebx = ebx - 1u;
        loc_10 = loc_10 + 1u;
        goto L_10076d67;
    }
    edx = loc_10 + 1u;
    ebx = ebx - 1u;
    loc_10 = loc_10 + 1u;
L_10076d7e: ;
    wr8(ebp, loc_14 >> 0x18u);
    eax = (eax & 0xffffff00u) | loc_14 >> 0x18u;
    esi = ebp;
    goto L_10076d32;
L_10076d89: ;
    wr8(ebp, loc_14 >> 0x18u);
    t75 = rd8(esi);
    wr8(loc_10, (uint8_t)t75);
    eax = loc_10;
    ecx = (ecx & 0xffffff00u) | loc_14 >> 0x18u;
    edx = (edx & 0xffffff00u) | t75;
    goto L_10076d28;
L_10076d9a: ;
    if ((uint8_t)eax != 0x22u) goto L_10076dfe;
    wr8(edi, (uint8_t)eax);
    if ((int32_t)(ebx - 1u) <= 0)
    {
        edi = edi + 1u;
        goto L_10076deb;
    }
    eax = 1u;
    ebx = ebx - 1u;
    esi = esi + 1u;
    loc_10 = edi + 1u;
    edi = edi + 1u;
L_10076db0: ;
    if (rd8(esi) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi);
        loc_14 = (loc_14 & 0xffffffu) | rd8(esi) << 0x18u;
        goto L_10076de3;
    }
    ecx = (ecx & 0xffffff00u) | rd8(esi);
    loc_14 = (loc_14 & 0xffffffu) | rd8(esi) << 0x18u;
    if ((uint8_t)ecx == 0x3cu) goto L_10076de3;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    t76 = cow_call_regs(g, COW_IMG(0x100769f0u), g->eax, g->ecx, edx, 1, 7, edi, esi, ebx, in_edi, in_esi, in_ebp, in_ebx);
    t77 = g->ecx;
    t78 = g->edx;
    if (t76 == 0u)
    {
        edi = edi + t76;
        goto L_10076deb;
    }
    eax = t76;
    ecx = t77;
    edx = t78;
    ebx = ebx - t76;
    esi = esi + t76;
    loc_10 = edi + t76;
    edi = edi + t76;
    if (loc_14 >> 0x18u == 0x22u) goto L_10076de3;
    if ((int32_t)ebx > 0) goto L_10076db0;
L_10076de3: ;
    if (eax != 0u) goto L_10076d36;
L_10076deb: ;
    wr8(edi, 0u);
    g->ebx = in_ebx;
    return edi - arg2;
L_10076dfe: ;
    if ((int32_t)ebx <= 0) goto L_10076deb;
L_10076e02: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    t79 = cow_call_regs(g, COW_IMG(0x100769f0u), g->eax, g->ecx, edx, 1, 7, edi, esi, ebx, in_edi, in_esi, in_ebp, in_ebx);
    t80 = g->ecx;
    t81 = g->edx;
    if (t79 == 0u)
    {
        edi = edi + t79;
        goto L_10076deb;
    }
    eax = t79;
    ecx = t80;
    edx = t81;
    ebx = ebx - t79;
    esi = esi + t79;
    loc_10 = edi + t79;
    edi = edi + t79;
    if (rd8(esi) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_10076d36;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    if ((uint8_t)eax == 0x3cu) goto L_10076d36;
    if ((int32_t)ebx > 0) goto L_10076e02;
    wr8(edi, 0u);
    g->ebx = in_ebx;
    return edi - arg2;
L_10076e44: ;
    g->ebx = ebx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 3u);
    wr8(arg2, 0u);
    g->ebx = in_ebx;
    return 0u;
L_10076e62: ;
    g->ebx = ebx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 2u);
    wr8(arg2, 0u);
    g->ebx = in_ebx;
    return 0u;
L_10076e80: ;
    g->ebx = ebx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 1u);
    wr8(arg2, 0u);
    g->ebx = in_ebx;
    return 0u;
L_10076e9e: ;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t34 = cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, COW_IMG(0x103551e8u), arg2, edi);
    t35 = g->ecx;
    t36 = g->edx;
    t37 = rd8(COW_IMG(0x1047d494u));
    t38 = rd8(COW_IMG(0x1047d497u));
    wr8(COW_IMG(0x103551e8u) + edi, 0u);
    wr8(COW_IMG(0x1047d496u), (uint8_t)t38);
    if ((uint8_t)t37 != 6u)
    {
        eax = (t34 & 0xffffff00u) | t37;
        ecx = (t35 & 0xffffff00u) | t38;
        edx = t36;
        goto L_10076f1c;
    }
    ecx = (t35 & 0xffffff00u) | t38;
    edx = t36;
    if (rd32(COW_IMG(0x106643a8u)) == 0u) goto L_10076fdf;
    eax = rd32(COW_IMG(0x106643a8u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t39 = cow_cdecl(g, COW_IMG(0x10202d30u), 7, COW_IMG(0x10077a20u), 0u, 0u, 0u, 0u, 2u, in_edi);
    t40 = g->ecx;
    t41 = g->edx;
    g->edx = t41;
    g->esp = sp0 - 0x3cu;
    t42 = cow_call_regs(g, COW_IMG(0x10081440u), t39, g->ecx, g->edx, 1, 1, 1u);
    t43 = g->edx;
    g->edx = t43;
    t44 = rd32(COW_IMG(0x106643a8u));
    g->esp = sp0 - 0x24u;
    t45 = cow_thiscall(g, COW_IMG(0x10202fe0u), t44, 1, 1u);
    t46 = g->ecx;
    t47 = g->edx;
    cow_call_regs(g, COW_IMG(0x10081440u), t45, g->ecx, g->edx, 1, 1, 0u);
    wr8(arg2, 0u);
    g->ebx = in_ebx;
    return 0u;
L_10076f1c: ;
    if ((uint8_t)eax != 7u) goto L_10076f6f;
    if (rd32(COW_IMG(0x106643a8u)) == 0u) goto L_10076fdf;
    eax = rd32(COW_IMG(0x106643a8u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t48 = cow_cdecl(g, COW_IMG(0x10202d30u), 7, COW_IMG(0x10077a20u), 0u, 0u, 0u, 0u, 3u, in_edi);
    t49 = g->ecx;
    t50 = g->edx;
    g->edx = t50;
    g->esp = sp0 - 0x3cu;
    t51 = cow_call_regs(g, COW_IMG(0x10081440u), t48, g->ecx, g->edx, 1, 1, 1u);
    t52 = g->edx;
    g->edx = t52;
    t53 = rd32(COW_IMG(0x106643a8u));
    g->esp = sp0 - 0x24u;
    t54 = cow_thiscall(g, COW_IMG(0x10202fe0u), t53, 1, 1u);
    t55 = g->ecx;
    t56 = g->edx;
    cow_call_regs(g, COW_IMG(0x10081440u), t54, g->ecx, g->edx, 1, 1, 0u);
    wr8(arg2, 0u);
    g->ebx = in_ebx;
    return 0u;
L_10076f6f: ;
    g->ebx = ebx;
    g->eax = eax;
    g->edx = loc_c;
    t57 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0x24u;
    t58 = cow_thiscall(g, COW_IMG(0x10159440u), t57, 2, COW_IMG(0x10077950u), loc_c);
    t59 = g->ecx;
    t60 = g->edx;
    if ((uint8_t)t58 == 0u)
    {
        eax = t58;
        ecx = t59;
        edx = t60;
        goto L_10076fc6;
    }
    eax = t58;
    ecx = t59;
    edx = t60;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t61 = cow_call_regs(g, COW_IMG(0x10081440u), eax, g->ecx, g->edx, 1, 1, 1u);
    t62 = g->edx;
    g->edx = t62;
    t63 = rd32(COW_IMG(0x1057876cu));
    t64 = cow_thiscall(g, COW_IMG(0x10158db0u), t63, 1, 1u);
    t65 = g->ecx;
    t66 = g->edx;
    g->edx = t66;
    t67 = cow_call_regs(g, COW_IMG(0x10081440u), t64, g->ecx, g->edx, 1, 1, 0u);
    t68 = g->edx;
    cow_thiscall(g, COW_IMG(0x101594e0u), rd32(COW_IMG(0x1057876cu)), 1, COW_IMG(0x10077a00u));
    wr8(arg2, 0u);
    g->ebx = in_ebx;
    return 0u;
L_10076fc6: ;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t69 = cow_call_regs(g, COW_IMG(0x10077a00u), eax, g->ecx, g->edx, 1, 0);
    t70 = g->edx;
    g->ebx = ebx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 4u);
L_10076fdf: ;
    wr8(arg2, 0u);
    g->ebx = in_ebx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10076ab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10076ab0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
