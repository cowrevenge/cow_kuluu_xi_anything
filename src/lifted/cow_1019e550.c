/* f_0x1019e550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1019e550(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d11;
    double d21;
    double d25;
    double d39;
    double d44;
    double d48;
    double d53;
    double d56;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t loc_c;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t54;
    uint32_t t55;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(self + 4u) == 0u) goto L_1019e691;
    t1 = rd32(sp0 + 4u);
    edi = arg5;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t2 = ~ecx - 1u;
    wr32(sp0 - 8u, t2);
    if ((int32_t)(~ecx - 1u) < 0) goto L_1019e7f1;
    eax = t2;
    edx = in_edx;
    ebx = t1;
    loc_8 = t2;
L_1019e582: ;
    t3 = (edx & 0xffffff00u) | rd8(arg5 + eax);
    wr32(sp0 - 0x20u, t3);
    g->ecx = self;
    g->edx = t3;
    g->esp = sp0 - 0x1cu;
    t4 = cow_call_regs(g, COW_IMG(0x1019e040u), eax, g->ecx, g->edx, 0, 1, t3);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)t4 < 0)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        if (eax != 0xfffffffeu)
        {
            if ((uint8_t)edx == 0x20u)
            {
                g->edx = edx;
                d25 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10337188u)));
                fpush(g, d25);
                g->esp = sp0 - 0x1cu;
                t26 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t27 = g->edx;
                edx = t27;
                ebx = ebx + t26;
            }
        }
        else
        {
            edi = self + 8u;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            if ((int32_t)(~ecx - 1u) <= 32)
            {
                ecx = ~ecx - 1u;
            }
            else
            {
                wr8(self + 0x27u, (uint8_t)eax);
                ecx = 0x1fu;
            }
            if ((int32_t)ecx < 0) goto L_1019e678;
            edi = ecx;
L_1019e606: ;
            t14 = (edx & 0xffffff00u) | rd8(edi + self + 8u);
            wr32(sp0 - 0x20u, t14);
            g->edx = t14;
            g->esp = sp0 - 0x1cu;
            t15 = cow_call_regs(g, COW_IMG(0x1019e040u), eax, g->ecx, g->edx, 0, 1, t14);
            t16 = g->edx;
            if ((int32_t)t15 < 0)
            {
                eax = t15;
                edx = t16;
            }
            else
            {
                eax = t15;
                t17 = (uint32_t)(int16_t)rd16(rd32(eax * 4u + rd32(rd32(self + 4u))) + 0x22u) - (uint32_t)(int16_t)rd16(rd32(eax * 4u + rd32(rd32(self + 4u))) + 0x20u);
                t18 = rd16(rd32(eax * 4u + rd32(rd32(self + 4u))) + 0x20u);
                t19 = rd32(rd32(self + 4u));
                t20 = rd32(eax * 4u + rd32(rd32(self + 4u)));
                wr32(sp0 + 4u, t17);
                d21 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 + 0xcu));
                fpush(g, d21);
                g->esp = sp0 - 0x1cu;
                t22 = cow_call_regs(g, COW_IMG(0x10311c6cu), t17, g->ecx, g->edx, 1, 0);
                wr32(sp0 - 0x20u, 0u);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, arg6);
                wr32(sp0 - 0x30u, arg4);
                wr32(sp0 - 0x34u, arg3);
                wr32(sp0 - 0x38u, arg2);
                wr32(sp0 - 0x3cu, ebx - t22);
                g->eax = arg4;
                g->edx = arg2;
                t23 = cow_thiscall(g, COW_IMG(0x1011fc80u), t20, 8, ebx - t22, arg2, arg3, arg4, arg6, 0u, 0u, 0u);
                t24 = g->edx;
                eax = t23;
                edx = t24;
                ebx = ebx - t22;
            }
            if ((int32_t)(edi - 1u) >= 0)
            {
                edi = edi - 1u;
                goto L_1019e606;
            }
        }
    }
    else
    {
        eax = t4;
        t7 = (uint32_t)(int16_t)rd16(rd32(eax * 4u + rd32(rd32(self + 4u))) + 0x22u) - (uint32_t)(int16_t)rd16(rd32(eax * 4u + rd32(rd32(self + 4u))) + 0x20u);
        t8 = rd16(rd32(eax * 4u + rd32(rd32(self + 4u))) + 0x20u);
        t9 = rd32(rd32(self + 4u));
        t10 = rd32(eax * 4u + rd32(rd32(self + 4u)));
        wr32(sp0 + 4u, t7);
        d11 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 + 0xcu));
        fpush(g, d11);
        g->esp = sp0 - 0x1cu;
        t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)(int16_t)t8, g->ecx, g->edx, 1, 0);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, arg6);
        wr32(sp0 - 0x30u, arg4);
        wr32(sp0 - 0x34u, arg3);
        wr32(sp0 - 0x38u, arg2);
        wr32(sp0 - 0x3cu, ebx - t12);
        g->edx = arg4;
        cow_thiscall(g, COW_IMG(0x1011fc80u), t10, 8, ebx - t12, arg2, arg3, arg4, arg6, 0u, 0u, 0u);
        t13 = g->edx;
        edx = t13;
        ebx = ebx - t12;
    }
L_1019e678: ;
    t28 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t28);
    if ((int32_t)(rd32(sp0 - 8u) - 1u) >= 0)
    {
        eax = t28;
        loc_8 = t28;
        goto L_1019e582;
    }
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_1019e691: ;
    t29 = rd32(sp0 + 4u);
    edi = arg5;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t30 = ~ecx - 1u;
    t31 = rd32(sp0 - 0xcu);
    wr32(sp0 + 4u, t29);
    wr32(sp0 - 8u, t30);
    if ((int32_t)(~ecx - 1u) < 0) goto L_1019e7f1;
    eax = t30;
    edx = in_edx;
    esi = t29;
    loc_c = t31 & 0xff00ffffu;
    loc_8 = t30;
L_1019e6b1: ;
    t32 = (edx & 0xffffff00u) | rd8(arg5 + eax);
    wr32(sp0 - 0x20u, t32);
    g->ecx = self;
    g->edx = t32;
    g->esp = sp0 - 0x1cu;
    t33 = cow_call_regs(g, COW_IMG(0x1019e150u), eax, g->ecx, g->edx, 0, 1, t32);
    t34 = g->ecx;
    t35 = g->edx;
    if ((uint16_t)t33 != 0xfffeu)
    {
        eax = t33;
        ecx = t34;
        edx = t35;
        if ((uint16_t)eax == 0xffffu)
        {
            if ((uint8_t)edx == 0x20u)
            {
                g->edx = edx;
                d56 = fr(g, (double)rdf32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10337188u)));
                fpush(g, d56);
                g->esp = sp0 - 0x1cu;
                t57 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t58 = g->edx;
                wr32(sp0 + 4u, esi + t57);
                edx = t58;
                esi = esi + t57;
            }
        }
        else
        {
            d48 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
            wrf32(sp0 - 4u, (float)d48);
            wr32(sp0 - 0x20u, sp0 - 0xcu);
            g->eax = sp0 - 0xcu;
            g->ecx = ecx;
            g->edx = (uint8_t)(eax >> 8u);
            t49 = rd32(sp0 - 0xcu);
            g->esp = sp0 - 0x1cu;
            t50 = cow_cdecl(g, COW_IMG(0x10129ee0u), 1, sp0 - 0xcu);
            t51 = g->ecx;
            t52 = g->edx;
            wr32(sp0 + 4u, t50);
            d53 = fr(g, (double)rdf32(sp0 - 4u) - fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 + 0xcu)));
            fpush(g, d53);
            g->esp = sp0 - 0x20u;
            t54 = cow_call_regs(g, COW_IMG(0x10311c6cu), t50, g->ecx, g->edx, 1, 0);
            wr32(sp0 - 0x24u, arg4);
            wr32(sp0 - 0x28u, arg3);
            wr32(sp0 - 0x2cu, arg6);
            wr32(sp0 - 0x30u, 0u);
            wr32(sp0 - 0x34u, sp0 - 0xcu);
            wr32(sp0 - 0x38u, arg2);
            wr32(sp0 - 0x3cu, t54);
            wr32(sp0 + 4u, t54);
            g->edx = arg2;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x10129f40u), 11, t54, arg2, sp0 - 0xcu, 0u, arg6, arg3, arg4, sp0 - 0xcu, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
            t55 = g->edx;
            edx = t55;
            esi = t54;
        }
    }
    else
    {
        ecx = t34;
        edx = t35;
        edi = self + 8u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if ((int32_t)(~ecx - 1u) <= 32)
        {
            ecx = ~ecx - 1u;
        }
        else
        {
            wr8(self + 0x27u, (uint8_t)eax);
            ecx = 0x1fu;
        }
        if ((int32_t)ecx < 0) goto L_1019e7e2;
        edi = ecx;
L_1019e6f0: ;
        t36 = (edx & 0xffffff00u) | rd8(edi + self + 8u);
        wr32(sp0 - 0x20u, t36);
        g->edx = t36;
        g->esp = sp0 - 0x1cu;
        t37 = cow_call_regs(g, COW_IMG(0x1019e150u), eax, g->ecx, g->edx, 0, 1, t36);
        t38 = g->edx;
        if ((uint16_t)t37 == 0xffffu)
        {
            eax = t37;
            edx = t38;
        }
        else
        {
            eax = t37;
            wr32(sp0 - 0x20u, sp0 - 0xcu);
            d39 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
            wrf32(sp0 - 4u, (float)d39);
            g->eax = eax;
            g->ecx = (uint8_t)(eax >> 8u);
            g->edx = sp0 - 0xcu;
            t40 = rd32(sp0 - 0xcu);
            g->esp = sp0 - 0x1cu;
            t41 = cow_cdecl(g, COW_IMG(0x10129ee0u), 1, sp0 - 0xcu);
            t42 = g->ecx;
            t43 = g->edx;
            wr32(sp0 + 4u, t41);
            d44 = fr(g, (double)rdf32(sp0 - 4u) - fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(sp0 + 0xcu)));
            fpush(g, d44);
            g->esp = sp0 - 0x20u;
            t45 = cow_call_regs(g, COW_IMG(0x10311c6cu), t41, g->ecx, g->edx, 1, 0);
            wr32(sp0 - 0x24u, arg4);
            wr32(sp0 - 0x28u, arg3);
            wr32(sp0 - 0x2cu, arg6);
            wr32(sp0 - 0x30u, 0u);
            wr32(sp0 - 0x34u, sp0 - 0xcu);
            wr32(sp0 - 0x38u, arg2);
            wr32(sp0 - 0x3cu, t45);
            wr32(sp0 + 4u, t45);
            g->eax = sp0 - 0xcu;
            g->edx = arg6;
            g->esp = sp0 - 0x10u;
            t46 = cow_cdecl(g, COW_IMG(0x10129f40u), 11, t45, arg2, sp0 - 0xcu, 0u, arg6, arg3, arg4, sp0 - 0xcu, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
            t47 = g->edx;
            eax = t46;
            edx = t47;
            esi = t45;
        }
        if ((int32_t)(edi - 1u) >= 0)
        {
            edi = edi - 1u;
            goto L_1019e6f0;
        }
    }
L_1019e7e2: ;
    t59 = rd32(sp0 - 8u) - 1u;
    wr32(sp0 - 8u, t59);
    if ((int32_t)(rd32(sp0 - 8u) - 1u) >= 0)
    {
        eax = t59;
        loc_8 = t59;
        goto L_1019e6b1;
    }
L_1019e7f1: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019e550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019e550(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
