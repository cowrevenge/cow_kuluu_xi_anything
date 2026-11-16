/* f_0x10064910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10064910(Guest* g)
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
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_110;
    uint32_t loc_124;
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
    cow_frame(g, sp0, 300u);

    wr32(sp0 - 0x114u, in_ebx);
    wr32(sp0 - 0x118u, in_ebp);
    wr32(sp0 - 0x11cu, in_esi);
    wr32(sp0 - 0x120u, in_edi);
    wr32(sp0 - 0x10cu, self);
    wr32(sp0 - 0x110u, 0u);
    if (rd32(self + 0x22cu) == 0u)
    {
        eax = rd32(self + 0x22cu);
        edx = in_edx;
        goto L_10064960;
    }
    eax = rd32(self + 0x22cu);
    edx = in_edx;
L_10064930: ;
    t1 = rd32(eax * 4u + self + 0x22cu);
    wr32(sp0 - 0x104u, t1);
    if (rd32(eax * 4u + self + 0x22cu) == 0u) goto L_10064960;
    esi = t1;
    loc_104 = t1;
    wr32(sp0 - 0x124u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t2 = cow_thiscall(g, COW_IMG(0x1006b850u), esi, 1, 0u);
    t3 = g->edx;
    if (t2 != 0u)
    {
        edx = t3;
        goto L_1006496e;
    }
    eax = t2;
    edx = t3;
    g->ebx = 0u;
    g->esp = sp0 - 0x120u;
    cow_fastcall(g, COW_IMG(0x10064870u), self, edx, 0);
    t4 = g->edx;
    wr32(sp0 - 0x110u, 0u);
    if (rd32(self + 0x22cu) != 0u)
    {
        eax = rd32(self + 0x22cu);
        edx = t4;
        goto L_10064930;
    }
    eax = rd32(self + 0x22cu);
    edx = t4;
L_10064960: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return 0xffffffffu;
L_1006496e: ;
    t5 = rd32(esi + 4u);
    wr32(sp0 - 0x124u, t5);
    g->eax = t5;
    g->esp = sp0 - 0x120u;
    t6 = cow_fastcall(g, COW_IMG(0x10067e70u), self + 0x330u, edx, 1, t5);
    t7 = g->edx;
    wr32(sp0 - 0x108u, t6);
    if (t6 != 0u)
    {
        eax = t6;
        edx = t7;
        loc_108 = t6;
        goto L_10064997;
    }
    edx = t7;
L_10064987: ;
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    g->edx = edx;
    return 1u;
L_10064997: ;
    if ((int32_t)eax <= 0) goto L_10064c16;
    ebx = 0u;
    ebp = self + 0x330u;
    edi = self;
L_100649a9: ;
    wr32(sp0 - 0x124u, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t8 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
    t9 = g->edx;
    if (rd8(t8) != 0x2fu)
    {
        edx = t9;
        goto L_10064a4f;
    }
    edx = t9;
    wr32(sp0 - 0x124u, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t10 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
    t11 = g->edx;
    if (rd8(t10 + 1u) == 0x2fu)
    {
        edx = t11;
        goto L_10064987;
    }
    edx = t11;
    wr32(sp0 - 0x124u, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t12 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
    t13 = g->ecx;
    t14 = g->edx;
    if (rd8(t12 + 1u) != 0x2au)
    {
        edx = t14;
        goto L_10064a4f;
    }
    ecx = t13;
    edx = t14;
    if (rd8(rd32(esi + 4u)) == 0u)
    {
        eax = rd32(esi + 4u);
        ecx = (ecx & 0xffffff00u) | rd8(rd32(esi + 4u));
        goto L_100649f7;
    }
    eax = rd32(esi + 4u);
    ecx = (ecx & 0xffffff00u) | rd8(rd32(esi + 4u));
L_100649df: ;
    if ((uint8_t)ecx != 0x2fu) goto L_100649ea;
    if (rd8(eax + 1u) == 0x2au) goto L_100649f4;
L_100649ea: ;
    if (rd8(eax + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        eax = eax + 1u;
        goto L_100649df;
    }
L_100649fd: ;
    wr32(sp0 - 0x124u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t15 = cow_thiscall(g, COW_IMG(0x1006b850u), esi, 1, 0u);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 != 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        goto L_100649f7;
    }
    ecx = t16;
    edx = t17;
    wr32(sp0 - 0x124u, COW_IMG(0x10353b54u));
    g->ebx = ebx;
    g->esp = sp0 - 0x11cu;
    t18 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353b54u), rd32(sp0 - 0x120u));
    t19 = g->edx;
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    g->edx = t19;
    return 0xffffffffu;
L_100649a1: ;
    esi = rd32(sp0 - 0x104u);
    edi = rd32(sp0 - 0x10cu);
    goto L_100649a9;
L_100649f4: ;
    eax = eax + 2u;
L_100649f7: ;
    if (rd8(eax) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        goto L_10064a25;
    }
    goto L_100649fd;
L_10064a25: ;
    if ((uint8_t)ecx != 0x2au) goto L_10064a30;
    if (rd8(eax + 1u) == 0x2fu) goto L_10064a33;
L_10064a30: ;
    eax = eax + 1u;
    goto L_100649f7;
L_10064a33: ;
    wr32(sp0 - 0x124u, eax + 2u);
    g->eax = eax + 2u;
    g->esp = sp0 - 0x120u;
    t20 = cow_fastcall(g, COW_IMG(0x10067e70u), edi + 0x330u, edx, 1, eax + 2u);
    t21 = g->edx;
    wr32(sp0 - 0x108u, t20);
    edx = t21;
    ebx = 0u;
    ebp = edi + 0x330u;
    loc_108 = t20;
L_10064b1b: ;
    if ((int32_t)(ebx + 1u) < (int32_t)loc_108)
    {
        ebx = ebx + 1u;
        goto L_100649a1;
    }
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    g->edx = edx;
    return 0u;
L_10064a4f: ;
    wr32(sp0 - 0x124u, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t22 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x124u, ebx);
    if (rd8(t22) == 0x23u)
    {
        ecx = ebp;
        edx = t24;
        loc_124 = ebx;
        goto L_10064b35;
    }
    ecx = ebp;
    edx = t24;
    loc_124 = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t25 = cow_thiscall(g, COW_IMG(0x10068050u), ecx, 1, loc_124);
    t26 = g->edx;
    esi = t25;
    edi = COW_IMG(0x10353b4cu);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = t26;
    }
    else
    {
        edx = t26;
        wr32(sp0 - 0x110u, 1u);
        loc_110 = 1u;
    }
    if (loc_110 == 1u)
    {
        ecx = ebp;
        wr32(sp0 - 0x124u, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x120u;
        t39 = cow_thiscall(g, COW_IMG(0x10068050u), ecx, 1, ebx);
        t40 = g->edx;
        if (rd8(t39) == 0u)
        {
            edx = t40;
            goto L_10064b1b;
        }
        edx = t40;
        esi = 0u;
L_10064af4: ;
        wr32(sp0 - 0x124u, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x120u;
        t41 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
        t42 = g->edx;
        if (rd8(esi + t41) == 0x7bu)
        {
            edx = t42;
            goto L_10064b13;
        }
        edx = t42;
        wr32(sp0 - 0x124u, ebx);
        g->edx = edx;
        g->esp = sp0 - 0x120u;
        t43 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
        t44 = g->edx;
        if (rd8(esi + t43 + 1u) != 0u)
        {
            edx = t44;
            esi = esi + 1u;
            goto L_10064af4;
        }
        edx = t44;
    }
    else
    {
        eax = loc_110 - 1u;
        ecx = ebp;
        if (eax == 1u)
        {
            wr32(sp0 - 0x124u, ebx);
            g->edx = edx;
            g->esp = sp0 - 0x120u;
            t33 = cow_thiscall(g, COW_IMG(0x10068050u), ecx, 1, ebx);
            t34 = g->edx;
            if (rd8(t33) == 0u)
            {
                edx = t34;
                goto L_10064b1b;
            }
            edx = t34;
            esi = 0u;
L_10064abe: ;
            wr32(sp0 - 0x124u, ebx);
            g->edx = edx;
            g->esp = sp0 - 0x120u;
            t35 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
            t36 = g->edx;
            if (rd8(esi + t35) == 0x7du)
            {
                edx = t36;
                goto L_10064add;
            }
            edx = t36;
            wr32(sp0 - 0x124u, ebx);
            g->edx = edx;
            g->esp = sp0 - 0x120u;
            t37 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx);
            t38 = g->edx;
            if (rd8(esi + t37 + 1u) != 0u)
            {
                edx = t38;
                esi = esi + 1u;
                goto L_10064abe;
            }
            edx = t38;
        }
        else
        {
            wr32(sp0 - 0x124u, 0u);
            g->edx = edx;
            g->esp = sp0 - 0x120u;
            t27 = cow_thiscall(g, COW_IMG(0x10068050u), ecx, 1, 0u);
            t28 = g->edx;
            wr32(sp0 - 0x124u, t27);
            t29 = rd32(sp0 - 0x10cu);
            t30 = cow_thiscall(g, COW_IMG(0x10065a10u), t29, 1, t27);
            t31 = g->ecx;
            eax = t30;
            ecx = t31;
            edx = sp0 - 0x100u;
L_10064aa5: ;
            t32 = rd8(eax);
            wr8(edx, (uint8_t)t32);
            if ((uint8_t)t32 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t32;
                edx = edx + 1u;
                goto L_10064aa5;
            }
            edx = edx + 1u;
        }
    }
    goto L_10064b1b;
L_10064add: ;
    wr32(sp0 - 0x110u, 0u);
    loc_110 = 0u;
    goto L_10064b1b;
L_10064b13: ;
    wr32(sp0 - 0x110u, 2u);
    loc_110 = 2u;
    goto L_10064b1b;
L_10064b35: ;
    g->esp = sp0 - 0x120u;
    t45 = cow_thiscall(g, COW_IMG(0x10068050u), ecx, 1, loc_124);
    esi = t45 + 1u;
    edi = COW_IMG(0x10353b44u);
    ecx = 8u;
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
        goto L_10064987;
    }
    eax = t45;
    g->edx = 0u;
    g->esp = sp0 - 0x120u;
    cow_thiscall(g, COW_IMG(0x1006b4e0u), sp0 - 0x100u, 0);
    t46 = g->edx;
    wr32(sp0 - 0x124u, ebx + 1u);
    g->edx = t46;
    t47 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, ebx + 1u);
    t48 = g->edx;
    if (rd8(t47) == 0x2fu)
    {
        edx = t48;
        esi = ebx + 1u;
        goto L_10064bb6;
    }
    edx = t48;
    esi = ebx + 1u;
    wr32(sp0 - 0x124u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t49 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, esi);
    t50 = g->edx;
    if (rd8(t49) == 0x5cu)
    {
        edx = t50;
        goto L_10064bb6;
    }
    edx = t50;
    wr32(sp0 - 0x124u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t51 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, esi);
    t52 = g->edx;
    if (rd8(t51 + 1u) == 0x3au)
    {
        edx = t52;
        goto L_10064bb6;
    }
    edx = t52;
    t53 = rd32(sp0 - 0x10cu) + 0x12cu;
    wr32(sp0 - 0x124u, t53);
    t54 = rd32(sp0 - 0x10cu);
    g->esp = sp0 - 0x120u;
    cow_fastcall(g, COW_IMG(0x1006b520u), sp0 - 0x100u, edx, 1, t53);
    t55 = g->edx;
    g->edx = t55;
    cow_thiscall(g, COW_IMG(0x1006b650u), sp0 - 0x100u, 0);
    t56 = g->edx;
    wr32(sp0 - 0x124u, esi);
    g->edx = t56;
    t57 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, esi);
    t58 = g->edx;
    wr32(sp0 - 0x124u, t57);
    g->edx = t58;
    cow_thiscall(g, COW_IMG(0x1006b6b0u), sp0 - 0x100u, 1, t57);
    t59 = g->edx;
    edx = t59;
    edi = t54;
L_10064bcc: ;
    wr32(sp0 - 0x124u, sp0 - 0x100u);
    g->ebx = ebx;
    g->esp = sp0 - 0x120u;
    t63 = cow_fastcall(g, COW_IMG(0x100647c0u), edi, edx, 1, sp0 - 0x100u);
    t64 = g->ecx;
    t65 = g->edx;
    if ((uint8_t)t63 == 0u)
    {
        ecx = t64;
        goto L_10064bfb;
    }
    edx = t65;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t66 = cow_thiscall(g, COW_IMG(0x10064910u), edi, 0);
    t67 = g->edx;
    g->edx = t67;
    cow_stdcall(g, COW_IMG(0x1006b4f0u), 0);
    t68 = g->edx;
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    g->edx = t68;
    return t66;
L_10064bb6: ;
    wr32(sp0 - 0x124u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t60 = cow_thiscall(g, COW_IMG(0x10068050u), ebp, 1, esi);
    t61 = g->edx;
    wr32(sp0 - 0x124u, t60);
    cow_fastcall(g, COW_IMG(0x1006b520u), sp0 - 0x100u, t61, 1, t60);
    t62 = g->edx;
    edx = t62;
    edi = rd32(sp0 - 0x10cu);
    goto L_10064bcc;
L_10064bfb: ;
    wr32(sp0 - 0x124u, sp0 - 0x100u);
    wr32(sp0 - 0x128u, COW_IMG(0x10353b28u));
    g->ebx = ebx;
    g->esp = sp0 - 0x120u;
    t69 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, sp0 - 0x100u, 1, 2, COW_IMG(0x10353b28u), sp0 - 0x100u);
    t70 = g->edx;
    g->edx = t70;
    cow_stdcall(g, COW_IMG(0x1006b4f0u), 0);
    t71 = g->edx;
    edx = t71;
L_10064c16: ;
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10064910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10064910(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
