/* f_0x102e143e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102e143e(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_3c;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_c;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 140u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x70u, in_ebx);
    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x78u, in_edi);
    wr32(sp0 - 0x10u, self);
    if (rd32(self) != 0u)
    {
        g->esp = sp0 - 0x78u;
        cow_fastcall(g, COW_IMG(0x102e100bu), self, in_edx, 0);
    }
    wr32(sp0 - 0x7cu, sp0 - 0x6cu);
    wr32(sp0 - 0x80u, arg2);
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, rd32(rd32(arg2) + 0x20u), rd32(arg2), 2, arg2, sp0 - 0x6cu);
    if (rd32(sp0 + 0x10u) == 0u) goto L_102e14e6;
    esi = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x7cu, 6u);
    edi = sp0 - 0x34u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(sp0 - 0x2cu) > rd32(sp0 - 0x58u)) goto L_102e151e;
    ecx = rd32(sp0 - 0x2cu);
    if (rd32(sp0 - 0x34u) > ecx) goto L_102e151e;
    if (rd32(sp0 - 0x28u) > rd32(sp0 - 0x54u)) goto L_102e151e;
    eax = rd32(sp0 - 0x28u);
    if (rd32(sp0 - 0x30u) > eax) goto L_102e151e;
    if (rd32(sp0 - 0x20u) > rd32(sp0 - 0x50u)) goto L_102e151e;
    ebx = rd32(sp0 - 0x20u);
    if (rd32(sp0 - 0x24u) > ebx) goto L_102e151e;
    if (rd32(sp0 - 0x34u) != 0u) goto L_102e14cb;
    if (ecx != rd32(sp0 - 0x58u)) goto L_102e14cb;
    if (rd32(sp0 - 0x30u) != 0u) goto L_102e14cb;
    if (eax != rd32(sp0 - 0x54u)) goto L_102e14cb;
    if (rd32(sp0 - 0x24u) != 0u) goto L_102e14cb;
    t1 = rd32(sp0 - 0x50u);
    wr32(sp0 + 0x10u, 0u);
    if (ebx == t1) goto L_102e14d2;
L_102e14cb: ;
    wr32(sp0 + 0x10u, 1u);
L_102e14d2: ;
    if (arg6 & 1u) goto L_102e14e2;
    if (rd32(sp0 + 0x10u) != 0u) goto L_102e14e2;
    eax = 1u;
    loc_2c = rd32(sp0 - 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_24 = rd32(sp0 - 0x24u);
L_102e150f: ;
    if (rd32(sp0 - 0x60u) != 0u) goto L_102e1528;
    if ((rd32(sp0 - 0x64u) & 0x200u) != 0u) goto L_102e1528;
L_102e151e: ;
    eax = 0x8876086cu;
L_102e1792: ;
    g->ebx = rd32(sp0 - 0x70u);
    g->esi = rd32(sp0 - 0x74u);
    g->edi = rd32(sp0 - 0x78u);
    g->ebp = rd32(sp0 - 4u);
    return eax;
L_102e14e2: ;
    eax = 0u;
    loc_2c = rd32(sp0 - 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_24 = rd32(sp0 - 0x24u);
    goto L_102e150f;
L_102e14e6: ;
    t2 = rd32(sp0 - 0x58u);
    t3 = rd32(sp0 - 0x50u);
    wr32(sp0 + 0x10u, 0u);
    wr32(sp0 - 0x2cu, t2);
    t4 = rd32(sp0 - 0x54u);
    wr32(sp0 - 0x28u, t4);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x20u, t3);
    eax = ~arg6 & 1u;
    ebx = t3;
    loc_2c = t2;
    loc_28 = t4;
    loc_34 = 0u;
    loc_30 = 0u;
    loc_24 = 0u;
    goto L_102e150f;
L_102e1528: ;
    t5 = ((arg6 & 1u) | 0x80u) << 4u;
    wr32(sp0 - 0xcu, t5);
    if (eax == 0u)
    {
        esi = t5;
        loc_c = t5;
        goto L_102e15a6;
    }
    esi = t5;
    loc_c = t5;
    if ((rd32(sp0 - 0x64u) & 0x200u) == 0u) goto L_102e15a6;
    if ((arg6 >> 0x10u & 2u) == 0u) goto L_102e1557;
    esi = esi | 0x2000u;
L_102e16e4: ;
    wr32(sp0 - 0x7cu, esi);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x84u, sp0 - 0x1cu);
    wr32(sp0 - 0x88u, arg2);
    g->eax = arg2;
    g->esp = sp0 - 0x78u;
    t32 = cow_thiscall(g, rd32(rd32(arg2) + 0x24u), rd32(arg2), 4, arg2, sp0 - 0x1cu, 0u, esi);
    if ((int32_t)t32 >= 0) goto L_102e1733;
    eax = t32;
    goto L_102e1792;
L_102e1557: ;
    wr32(sp0 - 0x7cu, 1u);
    g->esp = sp0 - 0x78u;
    cow_call_regs(g, COW_IMG(0x102daf63u), g->eax, 0x200u, 0u, 1, 1, 1u);
    wr32(sp0 - 0x7cu, sp0 - 8u);
    wr32(sp0 - 0x80u, COW_IMG(0x103428ecu));
    wr32(sp0 - 0x84u, arg2);
    g->eax = arg2;
    g->edx = sp0 - 8u;
    t6 = rd32(arg2);
    t7 = cow_thiscall(g, rd32(t6 + 0x1cu), t6, 3, arg2, COW_IMG(0x103428ecu), sp0 - 8u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)t7 < 0)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        loc_c = rd32(sp0 - 0xcu);
    }
    else
    {
        edx = t9;
        t10 = rd32(sp0 - 8u);
        wr32(sp0 - 0x7cu, t10);
        g->eax = t10;
        g->edx = edx;
        t11 = rd32(rd32(sp0 - 8u));
        g->esp = sp0 - 0x78u;
        t12 = cow_thiscall(g, rd32(t11 + 0x34u), t11, 1, t10);
        t13 = g->ecx;
        t14 = g->edx;
        if (t12 != 1u)
        {
            ecx = t13;
            edx = t14;
            loc_c = rd32(sp0 - 0xcu);
        }
        else
        {
            ecx = t13;
            edx = t14;
            wr32(sp0 - 0xcu, esi | 0x2000u);
            wr32(sp0 + 0x10u, 0u);
            loc_c = esi | 0x2000u;
            esi = esi | 0x2000u;
        }
        if (rd32(sp0 - 8u) == 0u)
        {
            eax = rd32(sp0 - 8u);
        }
        else
        {
            eax = rd32(sp0 - 8u);
            wr32(sp0 - 0x7cu, eax);
            g->eax = eax;
            g->edx = edx;
            t15 = rd32(eax);
            g->esp = sp0 - 0x78u;
            t16 = cow_thiscall(g, rd32(t15 + 8u), t15, 1, eax);
            t17 = g->ecx;
            t18 = g->edx;
            wr32(sp0 - 8u, 0u);
            eax = t16;
            ecx = t17;
            edx = t18;
            loc_c = rd32(sp0 - 0xcu);
        }
    }
    wr32(sp0 - 0x7cu, 0u);
    g->esp = sp0 - 0x78u;
    cow_call_regs(g, COW_IMG(0x102daf63u), g->eax, ecx, edx, 1, 1, 0u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_c = rd32(sp0 - 0xcu);
L_102e15a6: ;
    if (rd32(sp0 + 0x10u) == 0u) goto L_102e16e4;
    if (rd32(sp0 - 0x6cu) == 0x31545844u) goto L_102e1671;
    eax = rd32(sp0 - 0x6cu);
    if (eax == 0x32545844u) goto L_102e1671;
    if (eax == 0x32595559u) goto L_102e1607;
    if (eax == 0x33545844u) goto L_102e1671;
    if (eax == 0x34545844u) goto L_102e1671;
    if (eax == 0x35545844u) goto L_102e1671;
    if (eax == 0x59565955u) goto L_102e1607;
    wr32(sp0 - 0x7cu, 6u);
    esi = sp0 - 0x34u;
    edi = sp0 - 0x4cu;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    loc_4c = rd32(sp0 - 0x4cu);
    loc_48 = rd32(sp0 - 0x48u);
    loc_3c = rd32(sp0 - 0x3cu);
L_102e16db: ;
    if (rd32(sp0 + 0x10u) != 0u) goto L_102e16fd;
L_102e16e1: ;
    esi = loc_c;
    goto L_102e16e4;
L_102e1607: ;
    wr32(sp0 - 0x40u, loc_28);
    wr32(sp0 - 0x4cu, loc_34 & 0xfffffffeu);
    t19 = loc_2c + 1u & 0xfffffffeu;
    wr32(sp0 - 0x44u, t19);
    wr32(sp0 - 0x48u, loc_30);
    wr32(sp0 - 0x3cu, loc_24);
    wr32(sp0 - 0x38u, ebx);
    if ((loc_2c + 1u & 0xfffffffeu) <= rd32(sp0 - 0x58u))
    {
        eax = t19;
        ecx = loc_34 & 0xfffffffeu;
        edx = loc_30;
        edi = loc_24;
        loc_4c = loc_34 & 0xfffffffeu;
        loc_48 = loc_30;
        loc_3c = loc_24;
    }
    else
    {
        ecx = loc_34 & 0xfffffffeu;
        edx = loc_30;
        edi = loc_24;
        loc_4c = loc_34 & 0xfffffffeu;
        loc_48 = loc_30;
        loc_3c = loc_24;
        t20 = rd32(sp0 - 0x58u);
        wr32(sp0 - 0x44u, t20);
        eax = t20;
    }
    if (ecx != 0u) goto L_102e1700;
    if (eax != rd32(sp0 - 0x58u)) goto L_102e1700;
    if (edx != 0u) goto L_102e1700;
    if (loc_28 != rd32(sp0 - 0x54u)) goto L_102e1700;
    if (edi != 0u) goto L_102e1700;
    if (ebx == rd32(sp0 - 0x50u)) goto L_102e16e4;
L_102e1700: ;
    wr32(sp0 - 0x7cu, esi);
    wr32(sp0 - 0x80u, sp0 - 0x4cu);
    wr32(sp0 - 0x84u, sp0 - 0x1cu);
    wr32(sp0 - 0x88u, arg2);
    g->eax = arg2;
    g->esp = sp0 - 0x78u;
    t25 = cow_thiscall(g, rd32(rd32(arg2) + 0x24u), rd32(arg2), 4, arg2, sp0 - 0x1cu, sp0 - 0x4cu, esi);
    if ((int32_t)t25 < 0)
    {
        eax = t25;
        goto L_102e1792;
    }
    t26 = rd32(sp0 - 0x34u) - rd32(sp0 - 0x4cu);
    wr32(sp0 - 0x34u, t26);
    t27 = rd32(sp0 - 0x2cu) - rd32(sp0 - 0x4cu);
    wr32(sp0 - 0x2cu, t27);
    t28 = rd32(sp0 - 0x30u) - rd32(sp0 - 0x48u);
    wr32(sp0 - 0x30u, t28);
    t29 = rd32(sp0 - 0x28u) - rd32(sp0 - 0x48u);
    wr32(sp0 - 0x28u, t29);
    t30 = rd32(sp0 - 0x24u) - rd32(sp0 - 0x3cu);
    wr32(sp0 - 0x24u, t30);
    t31 = ebx - rd32(sp0 - 0x3cu);
    wr32(sp0 - 0x20u, t31);
L_102e1733: ;
    t33 = rd32(sp0 - 0x14u);
    t34 = rd32(sp0 - 0x58u);
    wr32(arg1, t33);
    t35 = rd32(sp0 - 0x6cu);
    wr32(arg1 + 4u, t35);
    t36 = rd32(sp0 - 0x1cu);
    wr32(arg1 + 8u, t36);
    t37 = rd32(sp0 - 0x18u);
    wr32(arg1 + 0xcu, t37);
    wr32(arg1 + 0x10u, 0u);
    wr32(arg1 + 0x14u, 0u);
    wr32(arg1 + 0x20u, 0u);
    t38 = rd32(sp0 - 0x50u);
    wr32(arg1 + 0x24u, t38);
    wr32(sp0 - 0x7cu, 6u);
    esi = sp0 - 0x34u;
    edi = arg1 + 0x28u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(arg1 + 0x44u, arg5);
    wr32(arg1 + 0x18u, t34);
    t39 = rd32(sp0 - 0x54u);
    wr32(arg1 + 0x48u, arg3);
    t40 = rd32(sp0 - 0x10u);
    wr32(arg1 + 0x1cu, t39);
    wr32(arg1 + 0x40u, 1u);
    wr32(t40, arg2);
    eax = 0u;
    goto L_102e1792;
L_102e1671: ;
    wr32(sp0 - 0x7cu, 0xfffffffcu);
    wr32(sp0 - 0x4cu, loc_34 & 0xfffffffcu);
    t21 = loc_2c + 3u & 0xfffffffcu;
    wr32(sp0 - 0x44u, t21);
    wr32(sp0 - 0x48u, loc_30 & 0xfffffffcu);
    t22 = loc_28 + 3u & 0xfffffffcu;
    wr32(sp0 - 0x40u, t22);
    wr32(sp0 - 0x3cu, loc_24);
    wr32(sp0 - 0x38u, ebx);
    if ((loc_2c + 3u & 0xfffffffcu) <= rd32(sp0 - 0x58u))
    {
        eax = t21;
        ecx = t22;
        edx = loc_34 & 0xfffffffcu;
        esi = loc_30 & 0xfffffffcu;
        edi = loc_24;
        loc_4c = loc_34 & 0xfffffffcu;
        loc_48 = loc_30 & 0xfffffffcu;
        loc_3c = loc_24;
    }
    else
    {
        ecx = t22;
        edx = loc_34 & 0xfffffffcu;
        esi = loc_30 & 0xfffffffcu;
        edi = loc_24;
        loc_4c = loc_34 & 0xfffffffcu;
        loc_48 = loc_30 & 0xfffffffcu;
        loc_3c = loc_24;
        t23 = rd32(sp0 - 0x58u);
        wr32(sp0 - 0x44u, t23);
        eax = t23;
    }
    if (ecx > rd32(sp0 - 0x54u))
    {
        t24 = rd32(sp0 - 0x54u);
        wr32(sp0 - 0x40u, t24);
        ecx = t24;
    }
    if (edx != 0u) goto L_102e16d4;
    if (eax != rd32(sp0 - 0x58u)) goto L_102e16d4;
    if (esi != 0u) goto L_102e16d4;
    if (ecx != rd32(sp0 - 0x54u)) goto L_102e16d4;
    if (edi != 0u) goto L_102e16d4;
    if (ebx == rd32(sp0 - 0x50u)) goto L_102e16e1;
L_102e16d4: ;
    wr32(sp0 + 0x10u, 1u);
    goto L_102e16db;
L_102e16fd: ;
    esi = loc_c;
    goto L_102e1700;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e143e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e143e(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
