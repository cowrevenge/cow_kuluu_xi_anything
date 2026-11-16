/* f_0x1013bbf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1013bbf0(Guest* g)
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
    uint32_t loc_28;
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
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x2cu, self);
    if (rd32(rd32(self + 0x1cu) + 0x151cu) == 0u)
    {
        eax = rd32(self + 0x1cu);
        ebx = in_ebx;
        edi = in_edi;
    }
    else
    {
        eax = rd32(self + 0x1cu);
        esi = rd32(rd32(self + 0x1cu) + 0x151cu);
        if (rd32(eax + 0x1528u) == 0u)
        {
            ebx = in_ebx;
            edi = in_edi;
        }
        else
        {
            ecx = rd32(eax + 0x1528u);
            if (rd32(eax + 0x1524u) == 0u)
            {
                eax = rd32(eax + 0x1524u);
                ebx = in_ebx;
                edi = in_edi;
            }
            else
            {
                eax = rd32(eax + 0x1524u);
                if (rd8(esi) == 0u)
                {
                    ebx = in_ebx;
                    edi = in_edi;
                }
                else
                {
                    edx = (in_edx & 0xffffff00u) | rd8(esi);
                    loc_28 = (rd32(sp0 - 0x28u) & 0xffffff00u) | rd8(esi);
                    wr32(sp0 - 0x38u, in_ebx);
                    wr32(sp0 - 0x3cu, in_edi);
                    wr32(sp0 - 0x24u, rd32(ecx));
                    g->ecx = ecx;
                    g->edx = edx;
                    t1 = rd16(eax);
                    t2 = rd32(ecx);
                    g->esp = sp0 - 0x3cu;
                    cow_stdcall(g, COW_IMG(0x101039e0u), 0);
                    t3 = g->ecx;
                    t4 = g->edx;
                    if (rd32(sp0 + 0xcu) == 0u)
                    {
                        ecx = t3;
                        edx = t4;
                        ebx = (in_ebx & 0xffff0000u) | t1;
                        esi = rd32(sp0 + 0xcu);
                        goto L_1013bcd4;
                    }
                    ecx = t3;
                    edx = t4;
                    ebx = (in_ebx & 0xffff0000u) | t1;
                    esi = rd32(sp0 + 0xcu);
                    wr32(sp0 - 0x40u, esi);
                    t5 = (ecx & 0xffff0000u) | rd16(self + 0x24u);
                    wr32(sp0 - 0x44u, t5);
                    g->ecx = t5;
                    g->edx = edx;
                    g->esp = sp0 - 0x3cu;
                    t6 = cow_cdecl(g, COW_IMG(0x100fecd0u), 2, t5, esi);
                    t7 = g->ecx;
                    t8 = g->edx;
                    wr32(sp0 - 0x48u, t6);
                    g->ecx = t7;
                    g->edx = t8;
                    g->esp = sp0 - 0x44u;
                    t9 = cow_cdecl(g, COW_IMG(0x10103a50u), 1, t6);
                    t10 = g->ecx;
                    t11 = g->edx;
                    if (arg2 == 0u)
                    {
                        ecx = t10;
                        edx = t11;
                        edi = t9;
                        goto L_1013bc98;
                    }
                    ecx = t10;
                    edx = t11;
                    edi = t9;
                    if (arg2 == 8u) goto L_1013bc98;
                    if (arg2 == 0xau) goto L_1013bc98;
                    if (arg2 == 0xbu) goto L_1013bc98;
                    if (arg2 == 0xcu) goto L_1013bc98;
                    if (arg2 == 0xdu) goto L_1013bc98;
                    if (arg2 == 0xeu) goto L_1013bc98;
                    if (arg2 == 0xfu) goto L_1013bc98;
                    if (arg2 != 0x10u)
                    {
                        ebp = self;
                        goto L_1013bcd6;
                    }
L_1013bc98: ;
                    if (rd8(self + 0x26u) == 0u)
                    {
                        ecx = (ecx & 0xffffff00u) | rd8(self + 0x26u);
                        ebp = self;
                        goto L_1013bcd6;
                    }
                    ecx = (ecx & 0xffffff00u) | rd8(self + 0x26u);
                    wr32(sp0 - 0x40u, arg2);
                    wr32(sp0 - 0x44u, ecx);
                    g->ebx = ebx;
                    t12 = rd32(COW_IMG(0x105781a8u));
                    g->esp = sp0 - 0x3cu;
                    t13 = cow_fastcall(g, COW_IMG(0x10131f10u), t12, edx, 2, ecx, arg2);
                    t14 = g->ecx;
                    t15 = g->edx;
                    if ((uint8_t)t13 == 0u)
                    {
                        ecx = t14;
                        edx = t15;
                        goto L_1013bcce;
                    }
                    eax = t13;
                    ecx = t14;
                    wr32(sp0 - 0x40u, esi);
                    t16 = (eax & 0xffff0000u) | rd16(rd32(sp0 - 0x2cu) + 0x24u);
                    wr32(sp0 - 0x44u, t16);
                    g->ecx = ecx;
                    g->edx = rd32(sp0 - 0x2cu);
                    t17 = rd32(sp0 - 0x2cu);
                    g->esp = sp0 - 0x3cu;
                    t18 = cow_cdecl(g, COW_IMG(0x100fed20u), 2, t16, esi);
                    t19 = g->ecx;
                    t20 = g->edx;
                    wr32(sp0 - 0x48u, t18);
                    g->ecx = t19;
                    g->edx = t20;
                    g->esp = sp0 - 0x44u;
                    t21 = cow_cdecl(g, COW_IMG(0x10103a50u), 1, t18);
                    t22 = g->ecx;
                    t23 = g->edx;
                    eax = t21;
                    ecx = t22;
                    edx = t23;
                    ebp = rd32(sp0 - 0x2cu);
L_1013bcdd: ;
                    if (edi < eax)
                    {
                        edi = eax;
                    }
                    if (rd8(sp0 - 0x28u) != 0xffu)
                    {
                        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x28u);
                        if (esi != 0u)
                        {
                            wr32(sp0 - 0x40u, esi);
                            t26 = (ecx & 0xffff0000u) | rd16(ebp + 0x24u);
                            wr32(sp0 - 0x44u, t26);
                            g->ecx = t26;
                            g->esp = sp0 - 0x3cu;
                            t27 = cow_cdecl(g, COW_IMG(0x100fed70u), 2, t26, esi);
                            t28 = g->ecx;
                            wr8(sp0 + 0xcu, (uint8_t)t27);
                            if ((uint8_t)t27 != 0u)
                            {
                                ecx = t28;
                            }
                            else
                            {
                                ecx = t28;
                                edi = 0u;
                            }
                        }
                        else
                        {
                            wr8(sp0 + 0xcu, (uint8_t)eax);
                        }
                        t29 = (uint8_t)rd32(sp0 - 0x28u);
                        wr32(sp0 - 0x40u, t29);
                        t30 = (uint8_t)rd32(sp0 + 0xcu);
                        wr32(sp0 - 0x44u, t30);
                        wr32(sp0 - 0x48u, COW_IMG(0x10357fbcu));
                        wr32(sp0 - 0x4cu, arg1);
                        g->ecx = ecx;
                        g->edx = t29;
                        g->esp = sp0 - 0x38u;
                        t31 = cow_cdecl(g, COW_IMG(0x10312031u), 5, arg1, COW_IMG(0x10357fbcu), t30, t29, rd32(sp0 - 0x3cu));
                        t32 = g->ecx;
                        t33 = g->edx;
                        if (rd8(sp0 + 0xcu) != 0u)
                        {
                            eax = (t31 & 0xffffff00u) | rd8(sp0 + 0xcu);
                            ecx = t32;
                            edx = t33;
                            if ((uint8_t)eax == rd8(sp0 - 0x28u))
                            {
                                t35 = rd32(sp0 - 0x2cu);
                                wr32(t35 + 0x338u, 0x80407090u);
                                edx = t35;
                            }
                        }
                        else
                        {
                            edx = t33;
                            t34 = rd32(sp0 - 0x2cu);
                            wr32(t34 + 0x338u, 0x80804020u);
                            ecx = t34;
                        }
                    }
                    else
                    {
                        wr32(sp0 - 0x40u, COW_IMG(0x1036fe70u));
                        wr32(sp0 - 0x44u, arg1);
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x30u;
                        cow_cdecl(g, COW_IMG(0x10312031u), 5, arg1, COW_IMG(0x1036fe70u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u));
                        t24 = g->ecx;
                        t25 = g->edx;
                        ecx = t24;
                        edx = t25;
                    }
                    wr32(sp0 - 0x40u, edi);
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x34u;
                    t36 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, edi, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
                    t37 = g->ecx;
                    t38 = g->edx;
                    wr32(sp0 - 0x44u, t36);
                    wr32(sp0 - 0x48u, COW_IMG(0x1036c010u));
                    wr32(sp0 - 0x4cu, sp0 - 0x20u);
                    g->ecx = t37;
                    g->esp = sp0 - 0x38u;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036c010u), t36, rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
                    t39 = g->ecx;
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
                    t40 = edi - ~ecx;
                    edi = arg1;
                    ecx = 0xffffffffu;
                    cf = 0u;
                    pf = PARITY(0xffu);
                    af = 0u;
                    zf = 0u;
                    sf = 1u;
                    of = 0u;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    esi = t40;
                    edi = edi - 1u;
                    ecx = ~ecx >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    t41 = rd32(sp0 - 0x24u);
                    wr32(sp0 - 0x50u, t41);
                    ecx = ~ecx & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    g->edx = ~ecx;
                    g->esp = sp0 - 0x44u;
                    t42 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, t41, sp0 - 0x20u, COW_IMG(0x1036c010u));
                    t43 = g->edx;
                    wr32(sp0 - 0x54u, t42);
                    wr32(sp0 - 0x58u, COW_IMG(0x1036fe68u));
                    wr32(sp0 - 0x5cu, sp0 - 0x20u);
                    g->ecx = sp0 - 0x20u;
                    g->esp = sp0 - 0x48u;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036fe68u), t42, rd32(sp0 - 0x50u), sp0 - 0x20u);
                    t44 = g->ecx;
                    edi = sp0 - 0x20u;
                    eax = 0u;
                    ecx = 0xffffffffu;
                    cf = 0u;
                    pf = PARITY((uint8_t)ebx);
                    af = 0u;
                    zf = (uint16_t)ebx == 0u;
                    sf = (int32_t)(uint16_t)ebx < 0;
                    of = 0u;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    wr32(sp0 - 0x60u, (uint16_t)ebx);
                    t45 = edi - ~ecx;
                    edi = arg1;
                    ecx = 0xffffffffu;
                    cf = 0u;
                    pf = PARITY(0xffu);
                    af = 0u;
                    zf = 0u;
                    sf = 1u;
                    of = 0u;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    esi = t45;
                    edi = edi - 1u;
                    ecx = ~ecx >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = ~ecx & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    g->ecx = ecx;
                    g->edx = ~ecx;
                    g->esp = sp0 - 0x54u;
                    t46 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, (uint16_t)ebx, sp0 - 0x20u, COW_IMG(0x1036fe68u));
                    t47 = g->ecx;
                    t48 = g->edx;
                    wr32(sp0 - 0x64u, t46);
                    wr32(sp0 - 0x68u, COW_IMG(0x1036fe60u));
                    wr32(sp0 - 0x6cu, sp0 - 0x20u);
                    g->ecx = t47;
                    g->esp = sp0 - 0x58u;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036fe60u), t46, rd32(sp0 - 0x60u), sp0 - 0x20u);
                    t49 = g->ecx;
                    edi = sp0 - 0x20u;
                    eax = 0u;
                    ecx = 0xffffffffu;
                    cf = sp0 - 0x3cu < sp0 - 0x6cu;
                    pf = PARITY((uint8_t)(sp0 - 0x3cu));
                    af = (sp0 - 0x6cu ^ 0x30u ^ sp0 - 0x3cu) >> 4u & 1u;
                    zf = sp0 == 0x3cu;
                    sf = (int32_t)(sp0 - 0x3cu) < 0;
                    of = ((sp0 - 0x6cu ^ sp0 - 0x3cu) & (sp0 - 0x3cu ^ 0x30u)) >> 0x1fu;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    t50 = edi - ~ecx;
                    edi = arg1;
                    ecx = 0xffffffffu;
                    cf = 0u;
                    pf = PARITY(0xffu);
                    af = 0u;
                    zf = 0u;
                    sf = 1u;
                    of = 0u;
                    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                    esi = t50;
                    edi = edi - 1u;
                    ecx = ~ecx >> 2u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ecx = ~ecx & 3u;
                    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                    ebx = rd32(sp0 - 0x38u);
                    edi = rd32(sp0 - 0x3cu);
                }
            }
        }
    }
    g->ebx = ebx;
    g->edi = edi;
    return eax;
L_1013bcce: ;
    ebp = rd32(sp0 - 0x2cu);
L_1013bcd6: ;
    eax = (uint16_t)ebx;
    goto L_1013bcdd;
L_1013bcd4: ;
    ebp = self;
    edi = 0u;
    goto L_1013bcd6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013bbf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013bbf0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
