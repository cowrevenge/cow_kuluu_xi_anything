/* f_0x1026d32b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1026d32b(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    edi = sp0 - 0x48u;
    eax = 0xccccccccu;
    ecx = 0x11u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x48u, 4u);
    if (rd32(arg1) != 0u)
    {
        wr32(sp0 - 0x54u, 0u);
        t1 = rd32(arg2 + 4u);
        wr32(sp0 - 0x58u, t1);
        wr32(sp0 - 0x5cu, 0u);
        wr32(sp0 - 0x60u, arg1 + 4u);
        wr32(sp0 - 0x64u, rd32(arg1));
        g->eax = arg1 + 4u;
        g->edx = rd32(arg1);
        t2 = rd32(arg1);
        g->esp = sp0 - 0x50u;
        t3 = cow_thiscall(g, rd32(COW_IMG(0x10329430u)), arg1, 5, t2, arg1 + 4u, 0u, t1, 0u);
        t4 = g->ecx;
        t5 = g->edx;
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->ecx = t4;
        g->edx = t5;
        t6 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp0 - 0xcu, t6);
        wr32(arg3 + 0x1cu, 0u);
        if (t6 != 0xffffffffu)
        {
            ecx = t7;
            edx = t8;
            loc_c = t6;
            if (1u) goto L_1026d3ae;
            if (loc_c != 0x102u) goto L_1026d555;
L_1026d3ae: ;
            wr32(sp0 - 0x3cu, 0u);
            loc_3c = 0u;
L_1026d3c0: ;
            if (loc_3c >= rd32(arg1)) goto L_1026d54e;
            t9 = rd32(arg1 + loc_3c * 4u + 0x4b4u);
            wr32(sp0 - 0x44u, t9);
            wr32(t9 + 0x10054u, 0u);
            if (rd32(t9 + 0x10u) != 0xffffffffu)
            {
                loc_44 = t9;
                goto L_1026d412;
            }
            edx = t9;
            loc_44 = t9;
            t10 = rd32(loc_44 + 0x1004cu);
            wr32(sp0 - 0x54u, t10);
            g->eax = loc_44;
            g->edx = edx;
            g->esp = sp0 - 0x50u;
            t11 = cow_thiscall(g, rd32(COW_IMG(0x10329434u)), t10, 1, t10);
            t12 = g->ecx;
            t13 = g->edx;
            g->cf = 0u;
            g->pf = PARITY(0u);
            g->af = 0u;
            g->zf = 1u;
            g->sf = 0u;
            g->of = 0u;
            cow_stdcall(g, COW_IMG(0x10316dabu), 0);
L_1026d549: ;
            t38 = rd32(sp0 - 0x3cu) + 1u;
            wr32(sp0 - 0x3cu, t38);
            ecx = t38;
            loc_3c = t38;
            goto L_1026d3c0;
        }
        else
        {
            ecx = t7;
            edx = t8;
            eax = 0xffffffffu;
        }
    }
    else
    {
        eax = 0xffffffffu;
        edx = in_edx;
    }
L_1026d558: ;
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    return;
L_1026d412: ;
    wr32(sp0 - 0x54u, sp0 - 0x38u);
    t14 = rd32(loc_44 + 0x1004cu);
    wr32(sp0 - 0x58u, t14);
    t15 = rd32(loc_44 + 0x10u);
    wr32(sp0 - 0x5cu, t15);
    g->eax = t15;
    g->edx = loc_44;
    g->esp = sp0 - 0x50u;
    t16 = cow_thiscall(g, rd32(COW_IMG(0x10329438u)), t14, 3, t15, t14, sp0 - 0x38u);
    t17 = g->ecx;
    t18 = g->edx;
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->ecx = t17;
    t19 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t20 = g->ecx;
    wr32(sp0 - 0xcu, t19);
    if (t19 == 0xffffffffu)
    {
        ecx = t20;
        goto L_1026d52a;
    }
    t21 = rd32(sp0 - 0x38u);
    wr32(rd32(sp0 - 0x44u) + 0x10050u, t21);
    wr32(sp0 - 0x40u, 0u);
    loc_40 = 0u;
L_1026d461: ;
    if (loc_40 >= 0xau) goto L_1026d494;
    cf = loc_40 < 0xau;
    pf = PARITY((uint8_t)(loc_40 - 0xau));
    zf = loc_40 == 0xau;
    sf = (int32_t)(loc_40 - 0xau) < 0;
    of = ((loc_40 ^ 0xau) & (loc_40 ^ loc_40 - 0xau)) >> 0x1fu;
    if ((rd32(rd32(sp0 - 0x44u) + 0x10050u) & 1u << (loc_40 & 0x1fu)) == 0u) goto L_1026d492;
    t22 = rd32(loc_40 * 4u + sp0 - 0x34u);
    wr32(rd32(sp0 - 0x44u) + 0x10054u, t22);
L_1026d494: ;
    if ((rd32(rd32(sp0 - 0x44u) + 0x10050u) & 0x20u) != 0u)
    {
        t23 = rd32(rd32(sp0 - 0x44u) + 0x10050u) | 1u;
        wr32(rd32(sp0 - 0x44u) + 0x10050u, t23);
    }
    wr32(sp0 - 0x54u, sp0 - 0x48u);
    wr32(sp0 - 0x58u, sp0 - 8u);
    wr32(sp0 - 0x5cu, 0x1007u);
    wr32(sp0 - 0x60u, 0xffffu);
    t24 = rd32(rd32(sp0 - 0x44u) + 0x10u);
    wr32(sp0 - 0x64u, t24);
    g->eax = rd32(sp0 - 0x44u);
    g->edx = sp0 - 8u;
    t25 = rd32(sp0 - 0x44u);
    g->esp = sp0 - 0x50u;
    t26 = cow_thiscall(g, rd32(COW_IMG(0x10329460u)), t24, 5, t24, 0xffffu, 0x1007u, sp0 - 8u, sp0 - 0x48u);
    t27 = g->ecx;
    t28 = g->edx;
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->ecx = t27;
    g->edx = t28;
    t29 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    t30 = g->ecx;
    t31 = g->edx;
    if ((int32_t)t29 >= 0)
    {
        eax = t29;
        ecx = t30;
        edx = t31;
    }
    else
    {
        t32 = (rd32(rd32(sp0 - 0x44u) + 0x10054u) & 0xffffff00u) | (uint8_t)(rd32(rd32(sp0 - 0x44u) + 0x10054u) | 1u);
        t33 = rd32(sp0 - 0x44u);
        wr32(t33 + 0x10054u, t32);
        eax = t32;
        ecx = t33;
        edx = t33;
    }
    if (rd32(sp0 - 8u) != 0u)
    {
        wr32(sp0 - 0x54u, COW_IMG(0x103b0fccu));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t34 = cow_thiscall(g, rd32(COW_IMG(0x103291f0u)), ecx, 1, COW_IMG(0x103b0fccu));
        t35 = g->ecx;
        t36 = g->edx;
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    }
    t37 = rd32(rd32(sp0 - 0x44u) + 0x10054u) | rd32(sp0 - 8u);
    wr32(rd32(sp0 - 0x44u) + 0x10054u, t37);
    goto L_1026d549;
L_1026d458: ;
    wr32(sp0 - 0x40u, loc_40 + 1u);
    loc_40 = loc_40 + 1u;
    goto L_1026d461;
L_1026d492: ;
    goto L_1026d458;
L_1026d52a: ;
    t39 = rd32(sp0 - 0x44u);
    wr32(t39 + 0x10050u, 0u);
    t40 = rd32(sp0 - 0x44u);
    wr32(t40 + 0x10054u, 0u);
    eax = 0xffffffffu;
    edx = t39;
    goto L_1026d558;
L_1026d54e: ;
    eax = 1u;
    edx = arg1;
    goto L_1026d558;
L_1026d555: ;
    eax = 0xffffffffu;
    goto L_1026d558;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026d32b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026d32b(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
