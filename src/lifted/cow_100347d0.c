/* f_0x100347d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_100347d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_44;
    uint32_t loc_48;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x4cu, in_ebx);
    wr32(sp0 - 0x50u, in_ebp);
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    if (rd32(self + 4u) == 0u) goto L_10034b69;
    t1 = rd16(rd32(COW_IMG(0x1045ec24u)) + 0x32u);
    wr32(sp0 - 0x44u, t1);
    if (rd32(sp0 + 8u) != 0u)
    {
        eax = rd32(COW_IMG(0x1045ec24u));
        ecx = rd32(sp0 + 8u);
        edi = t1;
        loc_44 = t1;
    }
    else
    {
        eax = rd32(COW_IMG(0x1045ec24u));
        edi = t1;
        loc_44 = t1;
        wr32(sp0 + 8u, edi - 1u);
        ecx = edi - 1u;
    }
    wr32(sp0 - 0x48u, eax + 0x34u);
    if (arg3 == 0u)
    {
        ebx = eax + 0x34u;
        loc_48 = eax + 0x34u;
        goto L_100349e3;
    }
    ebx = eax + 0x34u;
    loc_48 = eax + 0x34u;
    if (arg3 == 1u) goto L_100348d3;
    if (arg3 != 2u) goto L_10034b69;
    if ((int32_t)rd32(sp0 + 8u) < 0) goto L_10034b69;
    eax = rd32(sp0 + 8u);
    edx = in_edx;
    esi = 0u;
L_10034830: ;
    if (esi != 0u)
    {
        ecx = rd8(ebx);
        t3 = COW_IMG(0x1045f04cu) + esi * 0x34u;
        wr32(sp0 - 0x5cu, t3);
        t4 = COW_IMG(0x1045f058u) + ecx * 0x34u;
        wr32(sp0 - 0x60u, t4);
        t5 = COW_IMG(0x1045f058u) + esi * 0x34u;
        wr32(sp0 - 0x64u, t5);
        g->edx = t4;
        g->esp = sp0 - 0x58u;
        cow_cdecl(g, COW_IMG(0x10027340u), 3, t5, t4, t3);
        t6 = g->edx;
        edx = t6;
    }
    else
    {
        ecx = rd8(ebx);
        wr32(sp0 - 0x5cu, COW_IMG(0x1045f04cu));
        wr32(sp0 - 0x60u, COW_IMG(0x1045f058u));
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, COW_IMG(0x1045f058u), COW_IMG(0x1045f04cu));
        t2 = g->edx;
        edx = t2;
    }
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t7 = COW_IMG(0x1045f058u) + esi * 0x34u;
    wr32(sp0 - 0x5cu, t7);
    g->eax = t7;
    g->edx = esi * 0xdu;
    t8 = cow_thiscall(g, COW_IMG(0x10027b30u), sp0 - 0x40u, 1, t7);
    t9 = g->edx;
    wr32(sp0 - 0x5cu, sp0 - 0x40u);
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10027e90u), esi * 0x40u + rd32(COW_IMG(0x1045ec20u)), 1, sp0 - 0x40u);
    t11 = g->edx;
    g->edx = t11;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t12 = g->edx;
    if ((int32_t)(esi + 1u) <= (int32_t)rd32(sp0 + 8u))
    {
        eax = rd32(sp0 + 8u);
        edx = t12;
        ebx = ebx + 0x1eu;
        esi = esi + 1u;
        goto L_10034830;
    }
    g->ebx = rd32(sp0 - 0x4cu);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 0x50u);
    return;
L_100348d3: ;
    if (rd32(sp0 + 0x10u) != 0u)
    {
        eax = rd32(sp0 + 0x10u);
        esi = eax + 2u;
        edi = 0xfffffffeu - eax;
L_100348e5: ;
        if (rd8(esi) == 0xffu)
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
            t13 = rd32(COW_IMG(0x1045ec20u));
            wr32(COW_IMG(0x1045ec28u) + (uint32_t)(int8_t)eax * 4u, 1u);
            t14 = t13 + (uint32_t)(int8_t)rd8(esi - 2u) * 0x40u;
            wr32(sp0 - 0x5cu, t14);
            g->eax = t13;
            g->esp = sp0 - 0x58u;
            t15 = cow_thiscall(g, COW_IMG(0x100279f0u), t13 + (uint32_t)(int8_t)rd8(esi) * 0x40u, 1, t14);
            eax = t15;
        }
        if ((int32_t)(edi + esi + 1u) < 2)
        {
            esi = esi + 1u;
            goto L_100348e5;
        }
    }
    t16 = rd32(sp0 + 8u);
    wr32(sp0 + 0x10u, 0u);
    if ((int32_t)t16 < 0) goto L_10034b69;
    eax = 0u;
    ebp = 0u;
    edi = COW_IMG(0x1045f058u);
L_10034937: ;
    if (edi != COW_IMG(0x1045f058u))
    {
        esi = rd8(ebx);
        if (rd32(COW_IMG(0x1045ec28u) + eax * 4u) == 0u)
        {
            ecx = rd32(COW_IMG(0x1045ec28u) + eax * 4u);
            wr32(sp0 - 0x5cu, edi - 0xcu);
            t17 = COW_IMG(0x1045f058u) + esi * 0x34u;
            wr32(sp0 - 0x60u, t17);
            wr32(sp0 - 0x64u, edi);
            g->eax = edi - 0xcu;
            g->esp = sp0 - 0x58u;
            t18 = cow_cdecl(g, COW_IMG(0x10027340u), 3, edi, t17, edi - 0xcu);
            t19 = ebp + rd32(COW_IMG(0x1045ec20u));
            wr32(sp0 - 0x5cu, t19);
            cow_thiscall(g, COW_IMG(0x10032fe0u), edi - 0x28u, 1, t19);
            wr32(sp0 - 0x5cu, t17);
            wr32(sp0 - 0x60u, edi - 0x18u);
            t20 = ebp + rd32(COW_IMG(0x1045ec20u)) + 0x30u;
            wr32(sp0 - 0x64u, t20);
            g->edx = t20;
            cow_cdecl(g, COW_IMG(0x10027340u), 3, t20, edi - 0x18u, t17);
            t21 = g->edx;
            t22 = esi * 0x40u + rd32(COW_IMG(0x1045ec20u));
            wr32(sp0 - 0x5cu, t22);
            cow_thiscall(g, COW_IMG(0x10027d10u), ebp + rd32(COW_IMG(0x1045ec20u)), 1, t22);
            t23 = rd32(sp0 + 0x10u);
            t24 = rd32(sp0 - 0x48u);
            wr32(COW_IMG(0x1045ec28u) + t23 * 4u, 1u);
            eax = t23;
            ebx = t24;
        }
    }
    wr32(sp0 - 0x48u, ebx + 0x1eu);
    t25 = rd32(sp0 + 8u);
    wr32(sp0 + 0x10u, eax + 1u);
    if ((int32_t)(eax + 1u) <= (int32_t)t25)
    {
        eax = eax + 1u;
        ebp = ebp + 0x40u;
        edi = edi + 0x34u;
        loc_48 = ebx + 0x1eu;
        ebx = ebx + 0x1eu;
        goto L_10034937;
    }
    return;
L_100349e3: ;
    if (rd32(sp0 + 0x10u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(sp0 + 0x10u);
        ebp = 0xfffffffeu - eax;
        esi = eax + 2u;
L_100349f5: ;
        if (rd8(esi) == 0xffu)
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
            wr32(COW_IMG(0x1045ec28u) + (uint32_t)(int8_t)eax * 4u, 0u);
            t26 = COW_IMG(0x1045f04cu) + (uint32_t)(int8_t)rd8(esi) * 0x34u;
            wr32(sp0 - 0x5cu, t26);
            t27 = COW_IMG(0x1045f04cu) + (uint32_t)(int8_t)rd8(esi - 2u) * 0x34u;
            wr32(sp0 - 0x60u, t27);
            g->eax = (uint32_t)(int8_t)rd8(esi - 2u) * 0xdu;
            g->ecx = t27;
            t28 = rd8(esi - 2u);
            g->esp = sp0 - 0x58u;
            t29 = cow_cdecl(g, COW_IMG(0x10027310u), 2, t27, t26);
            t30 = g->ecx;
            eax = t29;
            ecx = t30;
        }
        if ((int32_t)(ebp + esi + 1u) < 2)
        {
            esi = esi + 1u;
            goto L_100349f5;
        }
        edx = ebp + esi + 1u;
    }
    if ((int32_t)rd32(sp0 + 8u) < 0)
    {
        ebp = 0u;
        goto L_10034b54;
    }
    ebp = 0u;
L_10034a4b: ;
    if (ebp != 0u)
    {
        esi = rd8(ebx);
        if (rd32(COW_IMG(0x1045ec28u) + esi * 4u) == 0u)
        {
            wr32(COW_IMG(0x1045ec28u) + ebp * 4u, 0u);
        }
        else
        {
            t39 = COW_IMG(0x1045f058u) + esi * 0x34u;
            wr32(sp0 + 0x10u, t39);
            t40 = COW_IMG(0x1045f04cu) + ebp * 0x34u;
            wr32(sp0 - 0x5cu, t40);
            wr32(sp0 - 0x60u, t39);
            t41 = COW_IMG(0x1045f058u) + ebp * 0x34u;
            wr32(sp0 - 0x64u, t41);
            g->eax = t41;
            g->esp = sp0 - 0x58u;
            t42 = cow_cdecl(g, COW_IMG(0x10027340u), 3, t41, t39, t40);
            t43 = ebp * 0x40u + rd32(COW_IMG(0x1045ec20u));
            wr32(sp0 - 0x5cu, t43);
            cow_thiscall(g, COW_IMG(0x10032fe0u), COW_IMG(0x1045f030u) + ebp * 0x34u, 1, t43);
            t44 = rd32(sp0 + 0x10u);
            wr32(sp0 - 0x5cu, t44);
            t45 = COW_IMG(0x1045f040u) + ebp * 0x34u;
            wr32(sp0 - 0x60u, t45);
            t46 = ebp * 0x40u + rd32(COW_IMG(0x1045ec20u)) + 0x30u;
            wr32(sp0 - 0x64u, t46);
            g->edx = rd32(COW_IMG(0x1045ec20u));
            t47 = rd32(COW_IMG(0x1045ec20u));
            cow_cdecl(g, COW_IMG(0x10027340u), 3, t46, t45, t44);
            t48 = g->edx;
            t49 = esi * 0x40u + rd32(COW_IMG(0x1045ec20u));
            wr32(sp0 - 0x5cu, t49);
            g->edx = t48;
            t50 = rd32(COW_IMG(0x1045ec20u));
            cow_thiscall(g, COW_IMG(0x10027d10u), ebp * 0x40u + t50, 1, t49);
            t51 = g->ecx;
            t52 = g->edx;
            ecx = t51;
            edx = t52;
            ebx = rd32(sp0 - 0x48u);
            edi = rd32(sp0 - 0x44u);
        }
    }
    else
    {
        eax = rd8(ebx);
        wr32(sp0 - 0x5cu, COW_IMG(0x1045f04cu));
        wr32(sp0 - 0x60u, COW_IMG(0x1045f058u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t31 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, COW_IMG(0x1045f058u), COW_IMG(0x1045f04cu));
        t32 = g->edx;
        wr32(sp0 - 0x5cu, rd32(COW_IMG(0x1045ec20u)));
        g->edx = t32;
        t33 = cow_thiscall(g, COW_IMG(0x10032fe0u), COW_IMG(0x1045f030u), 1, rd32(COW_IMG(0x1045ec20u)));
        t34 = g->edx;
        wr32(sp0 - 0x5cu, COW_IMG(0x1045f040u));
        t35 = cow_thiscall(g, COW_IMG(0x10027cf0u), rd32(COW_IMG(0x1045ec20u)), 1, COW_IMG(0x1045f040u));
        wr32(sp0 - 0x5cu, arg1);
        g->edx = arg1;
        t36 = rd32(COW_IMG(0x1045ec20u));
        cow_thiscall(g, COW_IMG(0x10027d10u), t36, 1, arg1);
        t37 = g->ecx;
        t38 = g->edx;
        ecx = t37;
        edx = t38;
    }
    wr32(sp0 - 0x48u, ebx + 0x1eu);
    if ((int32_t)(ebp + 1u) <= (int32_t)rd32(sp0 + 8u))
    {
        ebp = ebp + 1u;
        loc_48 = ebx + 0x1eu;
        ebx = ebx + 0x1eu;
        goto L_10034a4b;
    }
    ebp = ebp + 1u;
L_10034b54: ;
    if ((int32_t)ebp < (int32_t)edi)
    {
        t53 = COW_IMG(0x1045ec28u) + ebp * 4u;
        edi = t53;
        eax = 0u;
        ecx = edi - ebp;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
L_10034b69: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100347d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100347d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
