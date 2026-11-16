/* f_0x102c3e9e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102c3e9e(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(sp0 + 4u) == 0u) goto L_102c41ad;
    esi = rd32(sp0 + 4u);
    if (rd32(esi + 0x1cu) == 0u) goto L_102c41ad;
    if (rd32(esi) == 0u) goto L_102c41ad;
    t1 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, 0xfffffffbu);
    if (t1 == 4u)
    {
        edx = in_edx;
        ebx = 0xfffffffbu;
    }
    else
    {
        wr32(sp0 + 8u, 0u);
        edx = in_edx;
        ebx = 0xfffffffbu;
    }
L_102c3ed1: ;
L_102c3ed4: ;
    if (rd32(rd32(esi + 0x1cu)) > 0xdu) goto L_102c41ad;
    eax = rd32(esi + 0x1cu);
    ecx = rd32(rd32(esi + 0x1cu));
    t2 = rd32(COW_IMG(0x102c41c7u) + ecx * 4u);
    switch (t2 - RD)
    {
    case 0x102c3ee8u: goto L_102c3ee8;
    case 0x102c3f49u: goto L_102c3f49;
    case 0x102c3fb4u: goto L_102c3fb4;
    case 0x102c4019u: goto L_102c4019;
    case 0x102c4047u: goto L_102c4047;
    case 0x102c4075u: goto L_102c4075;
    case 0x102c409fu: goto L_102c409f;
    case 0x102c40eau: goto L_102c40ea;
    case 0x102c4114u: goto L_102c4114;
    case 0x102c413eu: goto L_102c413e;
    case 0x102c4168u: goto L_102c4168;
    case 0x102c419au: goto L_102c419a;
    case 0x102c41beu: goto L_102c41be;
    case 0x102c41c3u: goto L_102c41c3;
    default: rt_fatal(g, COW_IMG(0x102c3ee1u), "switch");
    }
    return 0;
L_102c3ee8: ;
    if (rd32(esi + 4u) == 0u) goto L_102c40da;
    ecx = rd32(esi + 4u);
    wr32(esi + 8u, rd32(esi + 8u) + 1u);
    wr32(esi + 4u, ecx - 1u);
    t24 = rd32(sp0 + 8u);
    wr32(eax + 4u, rd8(rd32(esi)));
    t25 = rd32(esi + 0x1cu);
    t26 = rd32(rd32(esi + 0x1cu) + 4u);
    wr32(esi, rd32(esi) + 1u);
    if ((t26 & 0xfu) == 8u)
    {
        eax = t25;
        ebx = t24;
        goto L_102c3f2a;
    }
    eax = t25;
    ebx = t24;
    wr32(eax, 0xdu);
    wr32(esi + 0x18u, COW_IMG(0x103c8648u));
L_102c3f1e: ;
    wr32(rd32(esi + 0x1cu) + 4u, 5u);
    goto L_102c3ed4;
L_102c3f2a: ;
    if ((rd32(eax + 4u) >> 4u) + 8u <= rd32(eax + 0x10u)) goto L_102c3f43;
    wr32(eax, 0xdu);
    wr32(esi + 0x18u, COW_IMG(0x103c8634u));
    goto L_102c3f1e;
L_102c3f43: ;
    wr32(eax, 1u);
L_102c3f49: ;
    if (rd32(esi + 4u) == 0u) goto L_102c40da;
    eax = rd32(esi + 4u);
    t27 = rd32(sp0 + 8u);
    wr32(esi + 8u, rd32(esi + 8u) + 1u);
    wr32(esi + 4u, eax - 1u);
    t28 = rd32(esi);
    wr32(sp0 + 4u, t27);
    t29 = rd32(esi + 0x1cu);
    t30 = rd8(t28);
    wr32(esi, t28 + 1u);
    t31 = cow_divu(g, t30 + rd32(t29 + 4u) * 0x100u, 0x1fu);
    t32 = cow_modu(g, t30 + rd32(t29 + 4u) * 0x100u, 0x1fu);
    if (t32 == 0u)
    {
        ecx = t29;
        edx = t32;
        ebx = t30;
        goto L_102c3f9d;
    }
    ecx = t29;
    edx = t32;
    t33 = rd32(sp0 + 4u);
    wr32(ecx, 0xdu);
    t34 = rd32(esi + 0x1cu);
    wr32(esi + 0x18u, COW_IMG(0x103c861cu));
    wr32(t34 + 4u, 5u);
    ebx = t33;
    goto L_102c3ed4;
L_102c3f9d: ;
    if ((ebx & 0x20u) != 0u)
    {
        ebx = rd32(sp0 + 4u);
        goto L_102c40e1;
    }
    ebx = rd32(sp0 + 4u);
    wr32(ecx, 7u);
    goto L_102c3ed1;
L_102c3fb4: ;
    t4 = rd32(eax + 0x14u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x102c71e6u), g->eax, g->ecx, edx, 1, 4, t4, esi, ebx, in_edi);
    t6 = g->edx;
    if (t5 != 0xfffffffdu)
    {
        edx = t6;
        ebx = t5;
        goto L_102c3fd9;
    }
    edx = t6;
    ebx = t5;
    wr32(rd32(esi + 0x1cu), 0xdu);
    wr32(rd32(esi + 0x1cu) + 4u, 0u);
    goto L_102c3ed4;
L_102c3fd9: ;
    if (ebx == 0u)
    {
        ebx = rd32(sp0 + 8u);
    }
    if (ebx != 1u) goto L_102c40da;
    t7 = rd32(esi + 0x1cu) + 4u;
    t8 = rd32(rd32(esi + 0x1cu) + 0x14u);
    t9 = rd32(sp0 + 8u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102c70f0u), g->eax, t7, edx, 1, 5, t8, esi, t7, in_edi, in_esi);
    t10 = g->edx;
    if (rd32(rd32(esi + 0x1cu) + 0xcu) == 0u)
    {
        eax = rd32(esi + 0x1cu);
        edx = t10;
        ebx = t9;
        goto L_102c4013;
    }
    eax = rd32(esi + 0x1cu);
    edx = t10;
    ebx = t9;
    wr32(eax, 0xcu);
    goto L_102c3ed4;
L_102c4013: ;
    wr32(eax, 8u);
L_102c4019: ;
    if (rd32(esi + 4u) == 0u) goto L_102c40da;
    eax = rd32(esi + 4u);
    wr32(esi + 8u, rd32(esi + 8u) + 1u);
    t11 = rd32(esi + 0x1cu);
    wr32(esi + 4u, eax - 1u);
    t12 = rd8(rd32(esi)) << 0x18u;
    t13 = rd32(sp0 + 8u);
    wr32(t11 + 8u, t12);
    t14 = rd32(esi + 0x1cu);
    wr32(esi, rd32(esi) + 1u);
    wr32(t14, 9u);
    ebx = t13;
L_102c4047: ;
    if (rd32(esi + 4u) == 0u) goto L_102c40da;
    eax = rd32(esi + 4u);
    t15 = rd32(esi);
    wr32(esi + 8u, rd32(esi + 8u) + 1u);
    wr32(esi + 4u, eax - 1u);
    t16 = rd32(sp0 + 8u);
    wr32(rd32(esi + 0x1cu) + 8u, (rd8(t15) << 0x10u) + rd32(rd32(esi + 0x1cu) + 8u));
    t17 = rd32(esi + 0x1cu);
    wr32(esi, rd32(esi) + 1u);
    wr32(t17, 0xau);
    ebx = t16;
L_102c4075: ;
    if (rd32(esi + 4u) == 0u) goto L_102c40da;
    eax = rd32(esi + 4u);
    t18 = rd32(esi);
    wr32(esi + 8u, rd32(esi + 8u) + 1u);
    wr32(esi + 4u, eax - 1u);
    t19 = rd32(sp0 + 8u);
    wr32(rd32(esi + 0x1cu) + 8u, rd8(t18) * 0x100u + rd32(rd32(esi + 0x1cu) + 8u));
    t20 = rd32(esi + 0x1cu);
    wr32(esi, rd32(esi) + 1u);
    wr32(t20, 0xbu);
    ebx = t19;
L_102c409f: ;
    if (rd32(esi + 4u) == 0u) goto L_102c40da;
    eax = rd32(esi + 4u);
    t21 = rd32(esi);
    wr32(esi + 8u, rd32(esi + 8u) + 1u);
    wr32(esi + 4u, eax - 1u);
    t22 = rd32(sp0 + 8u);
    wr32(rd32(esi + 0x1cu) + 8u, rd8(t21) + rd32(rd32(esi + 0x1cu) + 8u));
    t23 = rd32(esi + 0x1cu);
    wr32(esi, rd32(esi) + 1u);
    if (rd32(t23 + 4u) == rd32(t23 + 8u)) goto L_102c41b5;
    eax = t23;
    ebx = t22;
    wr32(eax, 0xdu);
    wr32(esi + 0x18u, COW_IMG(0x103c8604u));
    goto L_102c3f1e;
L_102c40da: ;
    eax = ebx;
L_102c41b0: ;
    return eax;
L_102c40e1: ;
    wr32(rd32(esi + 0x1cu), 2u);
L_102c40ea: ;
    if (rd32(esi + 4u) == 0u) goto L_102c40da;
    eax = rd32(esi + 4u);
    wr32(esi + 8u, rd32(esi + 8u) + 1u);
    t35 = rd32(esi + 0x1cu);
    wr32(esi + 4u, eax - 1u);
    t36 = rd8(rd32(esi)) << 0x18u;
    t37 = rd32(sp0 + 8u);
    wr32(t35 + 8u, t36);
    t38 = rd32(esi + 0x1cu);
    wr32(esi, rd32(esi) + 1u);
    wr32(t38, 3u);
    ebx = t37;
L_102c4114: ;
    if (rd32(esi + 4u) == 0u) goto L_102c40da;
    eax = rd32(esi + 4u);
    t39 = rd32(esi);
    wr32(esi + 8u, rd32(esi + 8u) + 1u);
    wr32(esi + 4u, eax - 1u);
    t40 = rd32(sp0 + 8u);
    wr32(rd32(esi + 0x1cu) + 8u, (rd8(t39) << 0x10u) + rd32(rd32(esi + 0x1cu) + 8u));
    t41 = rd32(esi + 0x1cu);
    wr32(esi, rd32(esi) + 1u);
    wr32(t41, 4u);
    ebx = t40;
L_102c413e: ;
    if (rd32(esi + 4u) == 0u) goto L_102c40da;
    eax = rd32(esi + 4u);
    t42 = rd32(esi);
    wr32(esi + 8u, rd32(esi + 8u) + 1u);
    wr32(esi + 4u, eax - 1u);
    t43 = rd32(sp0 + 8u);
    wr32(rd32(esi + 0x1cu) + 8u, rd8(t42) * 0x100u + rd32(rd32(esi + 0x1cu) + 8u));
    t44 = rd32(esi + 0x1cu);
    wr32(esi, rd32(esi) + 1u);
    wr32(t44, 5u);
    ebx = t43;
L_102c4168: ;
    if (rd32(esi + 4u) == 0u) goto L_102c40da;
    eax = rd32(esi + 4u);
    t45 = rd32(esi);
    wr32(esi + 8u, rd32(esi + 8u) + 1u);
    wr32(esi + 4u, eax - 1u);
    wr32(rd32(esi + 0x1cu) + 8u, rd8(t45) + rd32(rd32(esi + 0x1cu) + 8u));
    t46 = rd32(esi + 0x1cu);
    wr32(esi, rd32(esi) + 1u);
    t47 = rd32(t46 + 8u);
    wr32(esi + 0x30u, t47);
    wr32(t46, 6u);
    loc_14 = 2u;
L_102c41af: ;
    eax = loc_14;
    goto L_102c41b0;
L_102c419a: ;
    wr32(rd32(esi + 0x1cu), 0xdu);
    t3 = rd32(esi + 0x1cu);
    wr32(esi + 0x18u, COW_IMG(0x103c85f4u));
    wr32(t3 + 4u, 0u);
L_102c41ad: ;
    loc_14 = 0xfffffffeu;
    goto L_102c41af;
L_102c41b5: ;
    wr32(rd32(esi + 0x1cu), 0xcu);
L_102c41be: ;
    eax = 1u;
    goto L_102c41b0;
L_102c41c3: ;
    loc_14 = 0xfffffffdu;
    goto L_102c41af;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c3e9e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c3e9e(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
