/* f_0x1020c9a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020c9a0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_108;
    uint32_t loc_10c;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 292u);

    wr32(sp0 - 0x104u, in_esi);
    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1020cbe0;
    }
    ecx = rd32(COW_IMG(0x10664494u));
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1020cbe0;
    }
    if ((uint32_t)(int16_t)arg2 - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_1020cbd1;
    }
    t1 = rd32(COW_IMG(0x1020cbecu) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1020c9dfu: goto L_1020c9df;
    case 0x1020ca9du: goto L_1020ca9d;
    case 0x1020cac9u: goto L_1020cac9;
    case 0x1020cb0fu: goto L_1020cb0f;
    case 0x1020cb6bu: goto L_1020cb6b;
    default: rt_fatal(g, COW_IMG(0x1020c9d8u), "switch");
    }
    return 0;
L_1020c9df: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t30 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t31 = g->edx;
    if (t30 == 0u)
    {
        eax = t30;
        edx = t31;
    }
    else
    {
        eax = t30;
        edx = t31;
        if (rd32(self + 0x14u) != 0u)
        {
            if (rd32(COW_IMG(0x104dfd98u)) != 0u)
            {
                ecx = rd32(COW_IMG(0x104dfd98u));
                t45 = rd16(rd32(COW_IMG(0x10480af0u) + rd16(ecx + 0x40da8u) * 4u) + 0xfcu) >> 1u;
                wr32(sp0 - 0x108u, t45);
                t46 = (uint32_t)(int8_t)rd8(rd32(COW_IMG(0x10480af0u) + rd16(ecx + 0x40da8u) * 4u) + 0xefu);
                wr32(sp0 - 0x10cu, t46);
                wr32(sp0 - 0x110u, eax + 4u);
                g->edx = t45;
                g->esp = sp0 - 0x104u;
                t47 = cow_call_regs(g, COW_IMG(0x101ffc20u), eax + 4u, rd32(COW_IMG(0x10663ab8u)), g->edx, 0, 3, eax + 4u, t46, t45);
                t48 = g->edx;
                eax = t47;
                edx = t48;
            }
        }
        else
        {
            ecx = rd32(self + 0x14u);
            wr32(sp0 - 0x108u, in_ebx);
            wr32(sp0 - 0x10cu, in_edi);
            edi = eax + 8u;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            t32 = ~ecx - 1u;
            edi = COW_IMG(0x1036f9b0u);
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0xffu);
            af = 0u;
            zf = 0u;
            sf = 1u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            t33 = t32 + ~ecx + 3u;
            wr32(sp0 - 0x110u, t33);
            g->ecx = ~ecx - 1u;
            g->edx = t32;
            g->esp = sp0 - 0x104u;
            t34 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t33, in_edi, in_ebx);
            t35 = g->ecx;
            t36 = g->edx;
            wr32(sp0 - 0x114u, eax + 8u);
            wr32(sp0 - 0x118u, COW_IMG(0x1036f9b0u));
            wr32(sp0 - 0x11cu, COW_IMG(0x1036f9a8u));
            wr32(sp0 - 0x120u, t34);
            g->esp = sp0 - 0x10cu;
            t37 = cow_cdecl(g, COW_IMG(0x10312031u), 5, t34, COW_IMG(0x1036f9a8u), COW_IMG(0x1036f9b0u), eax + 8u, rd32(sp0 - 0x110u));
            wr32(sp0 - 0x110u, t34);
            g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
            t38 = rd32(COW_IMG(0x10662d40u));
            t39 = rd32(rd32(COW_IMG(0x10662d40u)));
            t40 = cow_thiscall(g, rd32(t39 + 0x24u), t38, 1, t34);
            t41 = g->ecx;
            t42 = g->edx;
            if (t34 == 0u)
            {
                eax = t40;
                edx = t42;
            }
            else
            {
                eax = t40;
                ecx = t41;
                edx = t42;
                esi = t34;
                wr32(sp0 - 0x108u, esi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x104u;
                t43 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
                t44 = g->edx;
                eax = t43;
                edx = t44;
            }
        }
    }
L_1020cbd1: ;
    wr32(sp0 - 0x108u, COW_IMG(0x10385a50u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x104u;
    t49 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a50u));
    t50 = g->edx;
    eax = t49;
    edx = t50;
L_1020cbe0: ;
    g->edx = edx;
    return eax;
L_1020ca9d: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t26 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t27 = g->edx;
    if (t26 == 0u)
    {
        eax = t26;
        edx = t27;
    }
    else
    {
        eax = t26;
        edx = t27;
        if (rd32(eax) == 0u)
        {
            wr32(sp0 - 0x108u, 0u);
            wr32(sp0 - 0x10cu, eax + 4u);
            g->edx = edx;
            g->esp = sp0 - 0x104u;
            t28 = cow_call_regs(g, COW_IMG(0x101ffa20u), eax + 4u, rd32(COW_IMG(0x10663ab8u)), g->edx, 0, 2, eax + 4u, 0u);
            t29 = g->edx;
            eax = t28;
            edx = t29;
        }
    }
    goto L_1020cbd1;
L_1020cac9: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t17 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0u)
    {
        eax = t17;
        edx = t19;
    }
    else
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        if (rd32(eax) == 0u)
        {
            if ((rd8(eax + 0x34u) & 8u) == 0u)
            {
                wr32(sp0 - 0x108u, 0u);
                wr32(sp0 - 0x10cu, 0u);
                t23 = rd32(eax + 0x1cu);
                wr32(sp0 - 0x110u, t23);
                g->edx = edx;
                g->esp = sp0 - 0x104u;
                t24 = cow_cdecl(g, COW_IMG(0x100e8fd0u), 3, t23, 0u, 0u);
                t25 = g->edx;
                eax = t24;
                edx = t25;
            }
            else
            {
                wr32(sp0 - 0x108u, 5u);
                wr32(sp0 - 0x10cu, 0u);
                t20 = rd32(eax + 0x1cu);
                wr32(sp0 - 0x110u, t20);
                g->edx = t20;
                g->esp = sp0 - 0x104u;
                t21 = cow_cdecl(g, COW_IMG(0x100e8fd0u), 3, t20, 0u, 5u);
                t22 = g->edx;
                eax = t21;
                edx = t22;
            }
        }
    }
    goto L_1020cbd1;
L_1020cb0f: ;
    if (rd32(self + 0x20u) == 0u) goto L_1020cb52;
    eax = rd32(self + 0x20u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_1020cbd1;
    }
    eax = eax - 1u;
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x10cu, 1u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x118u, 0x140u);
    wr32(sp0 - 0x11cu, 9u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x114u;
    t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x140u);
    t9 = g->edx;
    wr32(sp0 - 0x118u, t8);
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x120u, COW_IMG(0x1020cc00u));
    g->edx = t9;
    g->esp = sp0 - 0x104u;
    t10 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x1020cc00u), 0u, t8, 0u, 0u, 1u, 0u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
L_1020cb52: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t12 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t13 = g->edx;
    if (t12 == 0u)
    {
        eax = t12;
        edx = t13;
        goto L_1020cbd1;
    }
    eax = t12;
    edx = t13;
    if (rd32(eax) != 0u) goto L_1020cbd1;
    wr32(sp0 - 0x108u, eax + 8u);
    wr32(sp0 - 0x10cu, COW_IMG(0x1036f560u));
    loc_108 = eax + 8u;
    loc_10c = COW_IMG(0x1036f560u);
L_1020cbb8: ;
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    g->ecx = sp0 - 0x100u;
    g->esp = sp0 - 0xfcu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, loc_10c, loc_108, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u));
    t14 = g->ecx;
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x110u;
    t15 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x100u, 0u);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    goto L_1020cbd1;
L_1020cb6b: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t2 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_1020cbd1;
    }
    eax = t2;
    edx = t3;
    if (rd32(eax) != 0u) goto L_1020cbd1;
    if (rd32(self + 0x20u) == 0u) goto L_1020cbaf;
    ecx = rd32(self + 0x20u);
    if (ecx == 1u)
    {
        if (rd32(COW_IMG(0x10664494u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10664494u));
            wr32(sp0 - 0x108u, eax + 8u);
            g->esp = sp0 - 0x104u;
            cow_call_regs(g, COW_IMG(0x1020c410u), g->eax, g->ecx, edx, 0, 1, eax + 8u);
            t4 = g->edx;
            g->edx = t4;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x10664494u))) + 0x74u), rd32(COW_IMG(0x10664494u)), 0);
            t5 = g->edx;
            g->edx = t5;
            t6 = cow_thiscall(g, COW_IMG(0x1020c390u), rd32(COW_IMG(0x10664494u)), 0);
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
    }
    goto L_1020cbd1;
L_1020cbaf: ;
    wr32(sp0 - 0x108u, eax + 8u);
    wr32(sp0 - 0x10cu, COW_IMG(0x1036f980u));
    loc_108 = eax + 8u;
    loc_10c = COW_IMG(0x1036f980u);
    goto L_1020cbb8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020c9a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020c9a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
