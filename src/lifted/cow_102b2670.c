/* f_0x102b2670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102b2670(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d54;
    double d61;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_258;
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
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
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
    cow_frame(g, sp0, 668u);

    wr32(sp0 - 0x260u, in_ebx);
    wr32(sp0 - 0x264u, in_ebp);
    wr32(sp0 - 0x268u, in_esi);
    wr32(sp0 - 0x26cu, in_edi);
    if (arg1 == 0u) goto L_102b2806;
    if (arg2 != 0u) goto L_102b26bf;
    wr32(sp0 - 0x270u, 0x3a3u);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x278u, COW_IMG(0x103b379cu));
    g->eax = arg1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x270u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x27cu, COW_IMG(0x103b4368u));
    g->esp = sp0 - 0x274u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4368u), COW_IMG(0x103b379cu));
    return 0u;
L_102b26bf: ;
    wr32(sp0 - 0x270u, arg2);
    wr32(sp0 - 0x274u, 1u);
    wr32(sp0 - 0x278u, 4u);
    wr32(sp0 - 0x27cu, sp0 - 0x254u);
    g->edx = in_edx;
    g->esp = sp0 - 0x250u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 - 0x254u, 4u, 1u, arg2, in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x25cu), rd32(sp0 - 0x258u), rd32(sp0 - 0x254u));
    t4 = g->edx;
    wr32(sp0 - 0x280u, arg2);
    wr32(sp0 - 0x284u, 0x50u);
    wr32(sp0 - 0x288u, 1u);
    wr32(sp0 - 0x28cu, sp0 - 0x50u);
    g->ecx = sp0 - 0x50u;
    g->esp = sp0 - 0x260u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 - 0x50u, 1u, 0x50u, arg2, sp0 - 0x254u, 4u, 1u, arg2, in_edi, in_esi, in_ebp);
    t5 = g->ecx;
    wr32(sp0 - 0x290u, arg2);
    wr32(sp0 - 0x294u, 0x200u);
    wr32(sp0 - 0x298u, sp0 - 0x250u);
    g->ecx = t5;
    g->esp = sp0 - 0x288u;
    t6 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, sp0 - 0x250u, 1, 4, sp0 - 0x250u, 0x200u, arg2, sp0 - 0x50u);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u) goto L_102b2806;
    ecx = t7;
    edx = t8;
    ebx = in_ebx;
L_102b26fb: ;
    edi = sp0 - 0x250u;
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
        goto L_102b2795;
    }
    ecx = ~ecx - 1u;
    if (rd8(sp0 - 0x250u) == 0xau) goto L_102b2795;
    eax = (eax & 0xffffff00u) | rd8(sp0 - 0x250u);
    if ((uint8_t)eax == 0x23u) goto L_102b2795;
    wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x274u, sp0 - 0x250u);
    g->ebx = ebx;
    g->esp = sp0 - 0x264u;
    t9 = cow_cdecl(g, COW_IMG(0x103129b8u), 4, sp0 - 0x250u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    esi = t9;
    edi = COW_IMG(0x103bfc74u);
    ecx = 0xcu;
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
        goto L_102b2795;
    }
    wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x274u, 0u);
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = 0u;
    g->esp = sp0 - 0x264u;
    t10 = cow_cdecl(g, COW_IMG(0x103129b8u), 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x278u, t10);
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x274u;
    t13 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, t10);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int32_t)t13 < 1)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_102b27bb;
    }
    ecx = t14;
    edx = t15;
    ebx = t13;
    wr32(sp0 - 0x270u, arg2);
    wr32(sp0 - 0x274u, 0x200u);
    wr32(sp0 - 0x278u, sp0 - 0x250u);
    g->ecx = ecx;
    g->esp = sp0 - 0x268u;
    t16 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x250u, 0x200u, arg2, rd32(sp0 - 0x26cu));
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 == 0u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        goto L_102b27db;
    }
    edx = t18;
    wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x274u, sp0 - 0x250u);
    g->ebx = ebx;
    g->esp = sp0 - 0x264u;
    t19 = cow_cdecl(g, COW_IMG(0x103129b8u), 4, sp0 - 0x250u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    esi = t19;
    edi = COW_IMG(0x103bfb84u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf) goto L_102b2813;
    edx = 0u;
L_102b2795: ;
    wr32(sp0 - 0x270u, arg2);
    wr32(sp0 - 0x274u, 0x200u);
    wr32(sp0 - 0x278u, sp0 - 0x250u);
    g->ecx = ecx;
    g->esp = sp0 - 0x268u;
    t73 = cow_call_regs(g, COW_IMG(0x10313fa8u), g->eax, g->ecx, edx, 1, 4, sp0 - 0x250u, 0x200u, arg2, rd32(sp0 - 0x26cu));
    t74 = g->ecx;
    t75 = g->edx;
    if (t73 != 0u)
    {
        ecx = t74;
        edx = t75;
        goto L_102b26fb;
    }
    eax = t73;
    g->ebx = rd32(sp0 - 0x260u);
    g->esi = rd32(sp0 - 0x268u);
    g->edi = rd32(sp0 - 0x26cu);
    g->ebp = rd32(sp0 - 0x264u);
    return eax;
L_102b27bb: ;
    wr32(sp0 - 0x270u, 0x3b6u);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x278u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x270u;
    t71 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t72 = g->edx;
    wr32(sp0 - 0x27cu, COW_IMG(0x103bfc5cu));
    wr32(sp0 - 0x280u, sp0 - 0x250u);
    eax = t71;
    ecx = sp0 - 0x250u;
    edx = t72;
L_102b27f9: ;
    wr32(sp0 - 0x284u, COW_IMG(0x103bfc3cu));
    g->esp = sp0 - 0x27cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bfc3cu), sp0 - 0x250u);
L_102b2806: ;
    g->ebx = in_ebx;
    return 0u;
L_102b27db: ;
    wr32(sp0 - 0x270u, 0x3b9u);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x278u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x270u;
    t69 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t70 = g->ecx;
    wr32(sp0 - 0x27cu, COW_IMG(0x103bfc4cu));
    wr32(sp0 - 0x280u, sp0 - 0x250u);
    eax = t69;
    ecx = t70;
    edx = sp0 - 0x250u;
    goto L_102b27f9;
L_102b2813: ;
    wr32(sp0 - 0x270u, 0x3bcu);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x278u, ebx * 4u);
    wr32(sp0 - 0x27cu, 1u);
    g->ecx = ecx;
    g->edx = 0u;
    g->esp = sp0 - 0x258u;
    t20 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, ebx * 4u, COW_IMG(0x103bf904u), 0x3bcu, rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u), rd32(sp0 - 0x264u), rd32(sp0 - 0x260u), rd32(sp0 - 0x25cu));
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0x280u, 0x3bdu);
    wr32(sp0 - 0x284u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x288u, ebx * 4u);
    wr32(sp0 - 0x28cu, 1u);
    g->ecx = t21;
    g->edx = t22;
    g->esp = sp0 - 0x268u;
    t23 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, ebx * 4u, COW_IMG(0x103bf904u), 0x3bdu, 1u, rd32(sp0 - 0x278u), COW_IMG(0x103bf904u), 0x3bcu, rd32(sp0 - 0x26cu));
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x25cu, t23);
    wr32(sp0 - 0x290u, 0x200u);
    wr32(sp0 - 0x294u, arg2);
    g->edx = t25;
    g->esp = sp0 - 0x284u;
    t26 = cow_thiscall_cdecl(g, COW_IMG(0x102b1fd0u), t24, 4, arg2, 0x200u, 1u, rd32(sp0 - 0x288u));
    t27 = g->ecx;
    t28 = g->edx;
    if (t26 != 0u)
    {
        ecx = t27;
        edx = t28;
        ebp = t20;
        edi = t26;
        goto L_102b2882;
    }
    eax = t26;
    ecx = t27;
    edx = t28;
    wr32(sp0 - 0x270u, 0x3bfu);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x278u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x270u;
    t29 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t30 = g->edx;
    wr32(sp0 - 0x27cu, COW_IMG(0x103bfc4cu));
    wr32(sp0 - 0x280u, sp0 - 0x250u);
    eax = t29;
    ecx = sp0 - 0x250u;
    edx = t30;
    goto L_102b27f9;
L_102b2882: ;
    wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x274u, edi);
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x264u;
    t31 = cow_cdecl(g, COW_IMG(0x103129b8u), 4, edi, COW_IMG(0x103bfba0u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0x278u, t31);
    g->ecx = t32;
    g->edx = t33;
    g->esp = sp0 - 0x274u;
    t34 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, t31);
    t35 = g->ecx;
    t36 = g->edx;
    wr32(ebp, t34);
    if ((int32_t)ebx <= 1)
    {
        ecx = t35;
        edx = t36;
        goto L_102b28c0;
    }
    ecx = t35;
    edx = t36;
    esi = 1u;
L_102b28a2: ;
    wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x274u, 0u);
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x264u;
    t37 = cow_cdecl(g, COW_IMG(0x103129b8u), 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t38 = g->ecx;
    t39 = g->edx;
    wr32(sp0 - 0x278u, t37);
    g->ecx = t38;
    g->edx = t39;
    g->esp = sp0 - 0x274u;
    t40 = cow_cdecl(g, COW_IMG(0x103128b2u), 1, t37);
    t41 = g->ecx;
    t42 = g->edx;
    wr32(ebp + esi * 4u, t40);
    if ((int32_t)(esi + 1u) < (int32_t)ebx)
    {
        ecx = t41;
        edx = t42;
        esi = esi + 1u;
        goto L_102b28a2;
    }
    ecx = t41;
    edx = t42;
L_102b28c0: ;
    wr32(sp0 - 0x270u, 0x3c3u);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x278u, edi);
    g->ecx = ecx;
    g->esp = sp0 - 0x26cu;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103bf904u), 0x3c3u);
    t43 = g->ecx;
    wr32(sp0 - 0x27cu, 0x200u);
    wr32(sp0 - 0x280u, arg2);
    g->edx = arg2;
    g->esp = sp0 - 0x270u;
    t44 = cow_thiscall_cdecl(g, COW_IMG(0x102b1fd0u), t43, 4, arg2, 0x200u, rd32(sp0 - 0x278u), COW_IMG(0x103bf904u));
    t45 = g->ecx;
    t46 = g->edx;
    wr32(sp0 - 0x258u, t44);
    if (t44 != 0u)
    {
        eax = t44;
        ecx = t45;
        edx = t46;
        loc_258 = t44;
        goto L_102b2910;
    }
    eax = t44;
    ecx = t45;
    edx = t46;
    wr32(sp0 - 0x270u, 0x3c6u);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    wr32(sp0 - 0x278u, COW_IMG(0x103b379cu));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x270u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bf904u));
    t47 = g->ecx;
    t48 = g->edx;
    wr32(sp0 - 0x27cu, COW_IMG(0x103bfc4cu));
    wr32(sp0 - 0x280u, sp0 - 0x250u);
    eax = sp0 - 0x250u;
    ecx = t47;
    edx = t48;
    goto L_102b27f9;
L_102b2910: ;
    wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x274u, eax);
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x264u;
    t49 = cow_cdecl(g, COW_IMG(0x103129b8u), 4, eax, COW_IMG(0x103bfba0u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t50 = g->ecx;
    t51 = g->edx;
    wr32(sp0 - 0x278u, t49);
    g->ecx = t50;
    g->edx = t51;
    g->esp = sp0 - 0x26cu;
    cow_cdecl(g, COW_IMG(0x10313922u), 3, t49, rd32(sp0 - 0x274u), COW_IMG(0x103bfba0u));
    t52 = g->ecx;
    t53 = g->edx;
    d54 = cow_take_float(g);
    t55 = rd32(sp0 - 0x25cu);
    wrf32(t55, (float)d54);
    if ((int32_t)ebx <= 1)
    {
        edx = t53;
        edi = t55;
        goto L_102b2950;
    }
    ecx = t52;
    edx = t53;
    esi = 1u;
    edi = t55;
L_102b2933: ;
    wr32(sp0 - 0x270u, COW_IMG(0x103bfba0u));
    wr32(sp0 - 0x274u, 0u);
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x264u;
    t56 = cow_cdecl(g, COW_IMG(0x103129b8u), 4, 0u, COW_IMG(0x103bfba0u), rd32(sp0 - 0x26cu), rd32(sp0 - 0x268u));
    t57 = g->ecx;
    t58 = g->edx;
    wr32(sp0 - 0x278u, t56);
    g->ecx = t57;
    g->edx = t58;
    g->esp = sp0 - 0x26cu;
    cow_cdecl(g, COW_IMG(0x10313922u), 3, t56, 0u, COW_IMG(0x103bfba0u));
    t59 = g->ecx;
    t60 = g->edx;
    d61 = cow_take_float(g);
    wrf32(edi + esi * 4u, (float)d61);
    if ((int32_t)(esi + 1u) < (int32_t)ebx)
    {
        ecx = t59;
        edx = t60;
        esi = esi + 1u;
        goto L_102b2933;
    }
    edx = t60;
L_102b2950: ;
    wr32(sp0 - 0x270u, 0x3cau);
    wr32(sp0 - 0x274u, COW_IMG(0x103bf904u));
    t62 = rd32(sp0 - 0x258u);
    wr32(sp0 - 0x278u, t62);
    g->ecx = t62;
    g->edx = edx;
    g->esp = sp0 - 0x26cu;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t62, COW_IMG(0x103bf904u), 0x3cau);
    t63 = g->ecx;
    t64 = g->edx;
    t65 = cow_stdcall(g, COW_IMG(0x102af560u), 0);
    wr32(t65 + 0x38u, edi);
    wr32(t65 + 0x9cu, arg1);
    t66 = rd32(sp0 - 0x26cu);
    wr32(t65 + 0x30u, ebp);
    t67 = rd32(sp0 - 0x268u);
    wr32(t65 + 0x50u, ebx);
    t68 = rd32(sp0 - 0x264u);
    wr32(t65 + 0x3cu, 0u);
    wr32(t65 + 0x58u, arg1 + 0x24u);
    g->ebx = rd32(sp0 - 0x260u);
    g->esi = t67;
    g->edi = t66;
    g->ebp = t68;
    return t65;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b2670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b2670(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
