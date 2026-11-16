/* f_0x102f7138 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102f7138(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        edx = in_edx;
        goto L_102f7372;
    }
    if (rd32(arg1 + 0x1cu) == 0u)
    {
        edx = in_edx;
        goto L_102f7372;
    }
    eax = rd32(arg1 + 0x1cu);
    if (rd32(arg1) == 0u)
    {
        edx = in_edx;
        goto L_102f7372;
    }
    if (rd32(sp0 + 8u) != 4u)
    {
        ebx = 0u;
    }
    else
    {
        ebx = 0xfffffffbu;
    }
    wr32(sp0 + 8u, ebx);
    ecx = self;
    edx = in_edx;
    edi = 0xfffffffbu;
L_102f7368: ;
    if (rd32(eax) <= 0xdu)
    {
        eax = rd32(eax);
        goto L_102f7175;
    }
L_102f7372: ;
    loc_14 = 0xfffffffeu;
L_102f7374: ;
    eax = loc_14;
L_102f7375: ;
    g->edx = edx;
    return eax;
L_102f7175: ;
    t1 = rd32(COW_IMG(0x102f7467u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x102f717cu: goto L_102f717c;
    case 0x102f71dbu: goto L_102f71db;
    case 0x102f723du: goto L_102f723d;
    case 0x102f72a3u: goto L_102f72a3;
    case 0x102f72d0u: goto L_102f72d0;
    case 0x102f72fdu: goto L_102f72fd;
    case 0x102f7326u: goto L_102f7326;
    case 0x102f7387u: goto L_102f7387;
    case 0x102f73b0u: goto L_102f73b0;
    case 0x102f73d9u: goto L_102f73d9;
    case 0x102f7402u: goto L_102f7402;
    case 0x102f7437u: goto L_102f7437;
    case 0x102f7458u: goto L_102f7458;
    case 0x102f7460u: goto L_102f7460;
    default: rt_fatal(g, COW_IMG(0x102f7175u), "switch");
    }
    return 0;
L_102f717c: ;
    if (rd32(arg1 + 4u) == 0u) goto L_102f737a;
    eax = rd32(arg1 + 4u);
    t21 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 8u, rd32(arg1 + 8u) + 1u);
    wr32(arg1 + 4u, eax - 1u);
    wr32(t21 + 4u, rd8(rd32(arg1)));
    t22 = rd32(arg1 + 0x1cu);
    t23 = rd32(rd32(arg1 + 0x1cu) + 4u);
    wr32(arg1, rd32(arg1) + 1u);
    if ((t23 & 0xfu) == 8u)
    {
        eax = t22;
        edi = ebx;
        goto L_102f71b9;
    }
    eax = t22;
    ecx = (t23 & 0xffffff00u) | (t23 & 0xfu);
    edi = ebx;
    wr32(eax, 0xdu);
    wr32(arg1 + 0x18u, COW_IMG(0x103488dcu));
L_102f735b: ;
    wr32(rd32(arg1 + 0x1cu) + 4u, 5u);
L_102f7365: ;
    eax = rd32(arg1 + 0x1cu);
    goto L_102f7368;
L_102f71b9: ;
    if ((rd32(eax + 4u) >> 4u) + 8u <= rd32(eax + 0x10u)) goto L_102f71d5;
    ecx = (rd32(eax + 4u) >> 4u) + 8u;
    wr32(eax, 0xdu);
    wr32(arg1 + 0x18u, COW_IMG(0x103488c8u));
    goto L_102f735b;
L_102f71d5: ;
    wr32(eax, 1u);
L_102f71db: ;
    if (rd32(arg1 + 4u) == 0u) goto L_102f737a;
    eax = rd32(arg1 + 4u);
    t24 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 8u, rd32(arg1 + 8u) + 1u);
    wr32(arg1 + 4u, eax - 1u);
    t25 = rd32(arg1) + 1u;
    t26 = rd8(rd32(arg1));
    wr32(arg1, t25);
    t27 = cow_divu(g, t26 + rd32(t24 + 4u) * 0x100u, 0x1fu);
    t28 = cow_modu(g, t26 + rd32(t24 + 4u) * 0x100u, 0x1fu);
    if (t28 == 0u)
    {
        ecx = t24;
        edx = t28;
        edi = ebx;
        ebx = t26;
        goto L_102f7222;
    }
    ecx = t24;
    edx = t28;
    edi = ebx;
    t29 = rd32(sp0 + 8u);
    wr32(ecx, 0xdu);
    wr32(arg1 + 0x18u, COW_IMG(0x103488b0u));
    ebx = t29;
    goto L_102f735b;
L_102f7222: ;
    if ((ebx & 0x20u) != 0u)
    {
        ebx = rd32(sp0 + 8u);
        goto L_102f737e;
    }
    ebx = rd32(sp0 + 8u);
    wr32(ecx, 7u);
    goto L_102f7365;
L_102f723d: ;
    t3 = rd32(rd32(arg1 + 0x1cu) + 0x14u);
    g->eax = rd32(arg1 + 0x1cu);
    g->ecx = ecx;
    g->edx = edx;
    t4 = rd32(arg1 + 0x1cu);
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x103085d2u), 4, t3, arg1, edi, in_edi);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0xfffffffdu)
    {
        edx = t7;
        edi = t5;
        goto L_102f7265;
    }
    ecx = t6;
    edx = t7;
    edi = t5;
    wr32(rd32(arg1 + 0x1cu), 0xdu);
    wr32(rd32(arg1 + 0x1cu) + 4u, 0u);
    goto L_102f7365;
L_102f7265: ;
    if (edi == 0u)
    {
        edi = ebx;
    }
    if (edi != 1u) goto L_102f737a;
    t8 = rd32(arg1 + 0x1cu) + 4u;
    t9 = rd32(rd32(arg1 + 0x1cu) + 0x14u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x103084dau), g->eax, t8, edx, 1, 5, t9, arg1, t8, in_edi, in_esi);
    t10 = g->ecx;
    t11 = g->edx;
    if (rd32(rd32(arg1 + 0x1cu) + 0xcu) == 0u)
    {
        eax = rd32(arg1 + 0x1cu);
        edx = t11;
        edi = ebx;
        goto L_102f729d;
    }
    eax = rd32(arg1 + 0x1cu);
    ecx = t10;
    edx = t11;
    edi = ebx;
    wr32(eax, 0xcu);
    goto L_102f7365;
L_102f729d: ;
    wr32(eax, 8u);
L_102f72a3: ;
    if (rd32(arg1 + 4u) == 0u) goto L_102f737a;
    eax = rd32(arg1 + 4u);
    t12 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 8u, rd32(arg1 + 8u) + 1u);
    wr32(arg1 + 4u, eax - 1u);
    t13 = rd8(rd32(arg1)) << 0x18u;
    wr32(t12 + 8u, t13);
    t14 = rd32(arg1 + 0x1cu);
    wr32(arg1, rd32(arg1) + 1u);
    wr32(t14, 9u);
    edi = ebx;
L_102f72d0: ;
    if (rd32(arg1 + 4u) == 0u) goto L_102f737a;
    eax = rd32(arg1 + 4u);
    t15 = rd32(arg1);
    wr32(arg1 + 8u, rd32(arg1 + 8u) + 1u);
    wr32(arg1 + 4u, eax - 1u);
    wr32(rd32(arg1 + 0x1cu) + 8u, (rd8(t15) << 0x10u) + rd32(rd32(arg1 + 0x1cu) + 8u));
    t16 = rd32(arg1 + 0x1cu);
    wr32(arg1, rd32(arg1) + 1u);
    wr32(t16, 0xau);
    edi = ebx;
L_102f72fd: ;
    if (rd32(arg1 + 4u) == 0u) goto L_102f737a;
    eax = rd32(arg1 + 4u);
    t17 = rd32(arg1);
    wr32(arg1 + 8u, rd32(arg1 + 8u) + 1u);
    wr32(arg1 + 4u, eax - 1u);
    wr32(rd32(arg1 + 0x1cu) + 8u, rd8(t17) * 0x100u + rd32(rd32(arg1 + 0x1cu) + 8u));
    t18 = rd32(arg1 + 0x1cu);
    wr32(arg1, rd32(arg1) + 1u);
    wr32(t18, 0xbu);
    edi = ebx;
L_102f7326: ;
    if (rd32(arg1 + 4u) == 0u) goto L_102f737a;
    eax = rd32(arg1 + 4u);
    t19 = rd32(arg1);
    wr32(arg1 + 8u, rd32(arg1 + 8u) + 1u);
    wr32(arg1 + 4u, eax - 1u);
    wr32(rd32(arg1 + 0x1cu) + 8u, rd8(t19) + rd32(rd32(arg1 + 0x1cu) + 8u));
    t20 = rd32(arg1 + 0x1cu);
    wr32(arg1, rd32(arg1) + 1u);
    if (rd32(t20 + 4u) == rd32(t20 + 8u)) goto L_102f744f;
    eax = t20;
    ecx = rd32(t20 + 4u);
    edi = ebx;
    wr32(eax, 0xdu);
    wr32(arg1 + 0x18u, COW_IMG(0x10348898u));
    goto L_102f735b;
L_102f737a: ;
    eax = edi;
    goto L_102f7375;
L_102f737e: ;
    wr32(rd32(arg1 + 0x1cu), 2u);
L_102f7387: ;
    if (rd32(arg1 + 4u) == 0u) goto L_102f737a;
    eax = rd32(arg1 + 4u);
    t30 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 8u, rd32(arg1 + 8u) + 1u);
    wr32(arg1 + 4u, eax - 1u);
    t31 = rd8(rd32(arg1)) << 0x18u;
    wr32(t30 + 8u, t31);
    t32 = rd32(arg1 + 0x1cu);
    wr32(arg1, rd32(arg1) + 1u);
    wr32(t32, 3u);
    edi = ebx;
L_102f73b0: ;
    if (rd32(arg1 + 4u) == 0u) goto L_102f737a;
    eax = rd32(arg1 + 4u);
    t33 = rd32(arg1);
    wr32(arg1 + 8u, rd32(arg1 + 8u) + 1u);
    wr32(arg1 + 4u, eax - 1u);
    wr32(rd32(arg1 + 0x1cu) + 8u, (rd8(t33) << 0x10u) + rd32(rd32(arg1 + 0x1cu) + 8u));
    t34 = rd32(arg1 + 0x1cu);
    wr32(arg1, rd32(arg1) + 1u);
    wr32(t34, 4u);
    edi = ebx;
L_102f73d9: ;
    if (rd32(arg1 + 4u) == 0u) goto L_102f737a;
    eax = rd32(arg1 + 4u);
    t35 = rd32(arg1);
    wr32(arg1 + 8u, rd32(arg1 + 8u) + 1u);
    wr32(arg1 + 4u, eax - 1u);
    wr32(rd32(arg1 + 0x1cu) + 8u, rd8(t35) * 0x100u + rd32(rd32(arg1 + 0x1cu) + 8u));
    t36 = rd32(arg1 + 0x1cu);
    wr32(arg1, rd32(arg1) + 1u);
    wr32(t36, 5u);
    edi = ebx;
L_102f7402: ;
    if (rd32(arg1 + 4u) == 0u) goto L_102f737a;
    eax = rd32(arg1 + 4u);
    t37 = rd32(arg1);
    wr32(arg1 + 8u, rd32(arg1 + 8u) + 1u);
    wr32(arg1 + 4u, eax - 1u);
    wr32(rd32(arg1 + 0x1cu) + 8u, rd8(t37) + rd32(rd32(arg1 + 0x1cu) + 8u));
    t38 = rd32(arg1 + 0x1cu);
    wr32(arg1, rd32(arg1) + 1u);
    t39 = rd32(t38 + 8u);
    wr32(arg1 + 0x30u, t39);
    wr32(t38, 6u);
    loc_14 = 2u;
    goto L_102f7374;
L_102f7437: ;
    wr32(rd32(arg1 + 0x1cu), 0xdu);
    t2 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 0x18u, COW_IMG(0x10348888u));
    wr32(t2 + 4u, 0u);
    goto L_102f7372;
L_102f744f: ;
    wr32(rd32(arg1 + 0x1cu), 0xcu);
L_102f7458: ;
    eax = 1u;
    goto L_102f7375;
L_102f7460: ;
    loc_14 = 0xfffffffdu;
    goto L_102f7374;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f7138(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f7138(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
