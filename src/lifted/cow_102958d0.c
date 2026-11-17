/* f_0x102958d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102958d0(Guest* g)
{
    uint32_t al_m10;
    uint32_t al_m18;
    uint32_t al_m1c;
    uint32_t al_m20;
    uint32_t al_mc;
    double d22;
    double d39;
    double d43;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x18u, in_ebx);
    wr32(sp1 - 0x1cu, in_esi);
    wr32(sp1 - 0x20u, in_edi);
    wr32(sp1 - 0x24u, arg3);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp1 - 0x18u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp1 - 0x28u, arg1);
    wr32(sp1 - 0x2cu, COW_IMG(0x103bb9e8u));
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp1 - 0x24u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb9e8u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)arg2 < 1)
    {
        eax = t4;
        edx = t6;
        loc_4 = in_ebp;
        al_m18 = in_ebx;
        al_m1c = in_esi;
        al_m20 = in_edi;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        wr32(sp1 - 0x24u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x18u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp1 - 0x28u, rd32(arg1));
        wr32(sp1 - 0x2cu, COW_IMG(0x103b41dcu));
        g->ebx = arg2;
        g->eax = rd32(arg1);
        g->ecx = t7;
        g->edx = t8;
        t9 = rd32(arg1);
        g->esp = sp1 - 0x24u;
        t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b41dcu), t9);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(sp1 - 0x30u, arg3 + 1u);
        g->edx = t12;
        t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b41dcu), rd32(sp1 - 0x28u));
        t14 = g->edx;
        t15 = rd32(arg1 + 0x1cu);
        wr32(sp1 - 0x34u, t15);
        wr32(sp1 - 0x38u, COW_IMG(0x103bb3d8u));
        g->ebx = arg2;
        g->ecx = t15;
        g->edx = t14;
        g->esp = sp1 - 0x30u;
        t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb3d8u), t15);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(sp1 - 0x3cu, arg3 + 1u);
        g->ecx = t17;
        g->edx = t18;
        t19 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb3d8u), rd32(sp1 - 0x34u));
        t20 = g->ecx;
        t21 = g->edx;
        d22 = (double)rdf32(arg1 + 0x20u);
        wrf64(sp1 - 0x28u, d22);
        wr32(sp1 - 0x2cu, COW_IMG(0x103bb3c8u));
        g->ebx = arg2;
        g->ecx = t20;
        g->edx = t21;
        g->esp = sp1 - 0x24u;
        t23 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb3c8u), cow_dlo(d22));
        t24 = g->ecx;
        t25 = g->edx;
        wr32(sp1 - 0x30u, arg3 + 1u);
        g->ecx = t24;
        t26 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb3c8u), rd32(sp1 - 0x28u));
        t27 = g->ecx;
        t28 = rd32(arg1 + 0x28u);
        wr32(sp1 - 0x34u, t28);
        wr32(sp1 - 0x38u, COW_IMG(0x103bb9dcu));
        g->ebx = arg2;
        g->ecx = t27;
        g->edx = t28;
        g->esp = sp1 - 0x30u;
        t29 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb9dcu), t28);
        t30 = g->ecx;
        t31 = g->edx;
        wr32(sp1 - 0x3cu, arg3 + 1u);
        g->ecx = t30;
        g->edx = t31;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bb9dcu), rd32(sp1 - 0x34u));
        t32 = g->ecx;
        t33 = g->edx;
        if (rd32(arg1 + 0x24u) != 1u)
        {
            eax = rd32(arg1 + 0x24u);
            ecx = t32;
            edx = t33;
            if (eax == 2u)
            {
                eax = COW_IMG(0x103bb398u);
            }
            else
            {
                eax = COW_IMG(0x103bb390u);
            }
        }
        else
        {
            ecx = t32;
            edx = t33;
            eax = COW_IMG(0x103bb3a0u);
        }
        wr32(sp1 - 0x24u, eax);
        wr32(sp1 - 0x28u, COW_IMG(0x103bb37cu));
        g->ebx = arg2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x20u;
        t34 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb37cu), eax);
        t35 = g->ecx;
        t36 = g->edx;
        if ((int32_t)arg2 < 2)
        {
            eax = t34;
            edx = t36;
            loc_4 = rd32(sp0 - 4u);
            al_m18 = rd32(sp1 - 0x18u);
            al_m1c = rd32(sp1 - 0x1cu);
            al_m20 = rd32(sp1 - 0x20u);
        }
        else
        {
            ecx = t35;
            edx = t36;
            wr32(sp1 - 0x10u, 0u);
            if ((int32_t)rd32(arg1 + 0x28u) <= 0)
            {
                eax = rd32(arg1 + 0x28u);
                ebx = 0u;
            }
            else
            {
                wr32(sp1 - 0xcu, arg3 + 2u);
                eax = arg3 + 2u;
                ebx = 0u;
                al_m10 = 0u;
                al_mc = arg3 + 2u;
L_102959ac: ;
                wr32(sp1 - 0x24u, al_mc);
                g->eax = eax;
                g->ecx = al_mc;
                g->esp = sp1 - 0x18u;
                t37 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, al_mc, rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu));
                t38 = g->ecx;
                wr32(sp1 - 0x28u, t38);
                d39 = (double)rdf32(ebx * 4u + rd32(arg1 + 0x2cu));
                wrf64(sp1 - 0x28u, d39);
                wr32(sp1 - 0x2cu, ebx);
                wr32(sp1 - 0x30u, COW_IMG(0x103bb9ccu));
                g->ebx = ebx;
                g->ecx = t38;
                g->edx = rd32(arg1 + 0x2cu);
                t40 = rd32(arg1 + 0x2cu);
                g->esp = sp1 - 0x28u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb9ccu), ebx);
                t41 = g->ecx;
                t42 = g->edx;
                if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
                {
                    eax = rd32(arg1 + 0x1cu);
                    ecx = t41;
                    edx = t42;
                    goto L_10295a09;
                }
                edi = 0u;
L_102959d7: ;
                d43 = (double)rdf32(rd32(arg1 + 0x30u) + rd32(sp1 - 0x10u) * 4u);
                wrf64(sp1 - 8u, d43);
                t44 = rd32(sp1 - 0x10u) + 1u;
                wr32(sp1 - 0x10u, t44);
                wr32(sp1 - 0x24u, cow_dhi(d43));
                wr32(sp1 - 0x28u, cow_dlo(d43));
                wr32(sp1 - 0x2cu, COW_IMG(0x103bb5c8u));
                g->ebx = ebx;
                g->ecx = rd32(arg1 + 0x30u);
                g->edx = cow_dhi(d43);
                t45 = rd32(arg1 + 0x30u);
                g->esp = sp1 - 0x24u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb5c8u), cow_dlo(d43));
                t46 = g->ecx;
                t47 = g->edx;
                if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x1cu))
                {
                    edi = edi + 1u;
                    goto L_102959d7;
                }
                eax = rd32(arg1 + 0x1cu);
                ecx = t46;
                edx = t47;
L_10295a09: ;
                wr32(sp1 - 0x24u, COW_IMG(0x103bb5c4u));
                g->ebx = ebx;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp1 - 0x1cu;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb5c4u), rd32(sp1 - 0x20u));
                t48 = g->ecx;
                t49 = g->edx;
                if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x28u))
                {
                    eax = rd32(arg1 + 0x28u);
                    edx = t49;
                    ebx = ebx + 1u;
                    al_m10 = rd32(sp1 - 0x10u);
                    al_mc = rd32(sp1 - 0xcu);
                    goto L_102959ac;
                }
                eax = rd32(arg1 + 0x28u);
                ecx = t48;
                edx = t49;
                ebx = ebx + 1u;
            }
            wr32(sp1 - 0x24u, COW_IMG(0x10350e4cu));
            g->ebx = ebx;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp1 - 0x1cu;
            t50 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10350e4cu), rd32(sp1 - 0x20u));
            t51 = g->edx;
            eax = t50;
            edx = t51;
            loc_4 = rd32(sp0 - 4u);
            al_m18 = rd32(sp1 - 0x18u);
            al_m1c = rd32(sp1 - 0x1cu);
            al_m20 = rd32(sp1 - 0x20u);
        }
    }
    g->ebx = al_m18;
    g->esi = al_m1c;
    g->edi = al_m20;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102958d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102958d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
