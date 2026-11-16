/* f_0x10291490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10291490(Guest* g)
{
    double d46;
    double d53;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, arg3);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_esi, in_ebp);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, COW_IMG(0x103baf24u));
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baf24u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if (arg2 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        if (arg2 != 3u)
        {
            wr32(sp0 - 0x10u, in_edi);
            wr32(sp0 - 0x14u, arg3 + 1u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
            t7 = g->ecx;
            t8 = g->edx;
            wr32(sp0 - 0x18u, rd32(arg1));
            wr32(sp0 - 0x1cu, COW_IMG(0x103b41dcu));
            g->eax = rd32(arg1);
            g->ecx = t7;
            g->edx = t8;
            t9 = rd32(arg1);
            g->esp = sp0 - 0x14u;
            t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b41dcu), t9);
            t11 = g->ecx;
            t12 = g->edx;
            wr32(sp0 - 0x20u, arg3 + 1u);
            g->ecx = t11;
            g->edx = t12;
            t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b41dcu), rd32(sp0 - 0x18u));
            t14 = g->ecx;
            t15 = g->edx;
            wr32(sp0 - 0x24u, COW_IMG(0x103baf14u));
            g->edx = t15;
            g->esp = sp0 - 0x1cu;
            t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baf14u), arg3 + 1u);
            t17 = g->edx;
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, arg2);
            wr32(sp0 - 0x30u, arg1 + 0x5cu);
            g->ecx = arg1 + 0x5cu;
            g->edx = t17;
            g->esp = sp0 - 0x24u;
            t18 = cow_cdecl(g, COW_IMG(0x10274ad0u), 3, arg1 + 0x5cu, arg2, 0u);
            t19 = g->ecx;
            t20 = g->edx;
            wr32(sp0 - 0x34u, arg3 + 1u);
            g->ecx = t19;
            g->edx = t20;
            g->esp = sp0 - 0x28u;
            t21 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, arg1 + 0x5cu, arg2);
            t22 = g->ecx;
            t23 = g->edx;
            wr32(sp0 - 0x38u, COW_IMG(0x103baf08u));
            g->ecx = t22;
            g->esp = sp0 - 0x30u;
            t24 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baf08u), arg3 + 1u);
            t25 = g->ecx;
            wr32(sp0 - 0x3cu, 0u);
            wr32(sp0 - 0x40u, arg2);
            wr32(sp0 - 0x44u, arg1 + 0x68u);
            g->ecx = t25;
            g->edx = arg1 + 0x68u;
            g->esp = sp0 - 0x38u;
            t26 = cow_cdecl(g, COW_IMG(0x1027b4a0u), 3, arg1 + 0x68u, arg2, 0u);
            t27 = g->ecx;
            t28 = g->edx;
            wr32(sp0 - 0x48u, arg3 + 1u);
            g->ecx = t27;
            g->edx = t28;
            g->esp = sp0 - 0x3cu;
            t29 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, arg1 + 0x68u, arg2);
            t30 = g->ecx;
            t31 = g->edx;
            wr32(sp0 - 0x4cu, COW_IMG(0x103baefcu));
            g->ecx = t30;
            g->edx = t31;
            g->esp = sp0 - 0x44u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baefcu), arg3 + 1u);
            t32 = g->ecx;
            t33 = g->edx;
            wr32(sp0 - 0x50u, 0u);
            wr32(sp0 - 0x54u, arg2);
            wr32(sp0 - 0x58u, arg1 + 0x78u);
            g->eax = arg1 + 0x78u;
            g->ecx = t32;
            g->edx = t33;
            g->esp = sp0 - 0x4cu;
            t34 = cow_cdecl(g, COW_IMG(0x10274ad0u), 3, arg1 + 0x78u, arg2, 0u);
            t35 = g->ecx;
            t36 = g->edx;
            wr32(sp0 - 0x14u, arg3 + 1u);
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, in_esi);
            t37 = rd32(arg1 + 0x8cu);
            wr32(sp0 - 0x18u, t37);
            t38 = rd32(arg1 + 0x88u);
            wr32(sp0 - 0x1cu, t38);
            t39 = rd32(arg1 + 0x84u);
            wr32(sp0 - 0x20u, t39);
            wr32(sp0 - 0x24u, COW_IMG(0x103baeecu));
            g->eax = t39;
            g->ecx = t37;
            g->edx = t38;
            g->esp = sp0 - 0x1cu;
            t40 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baeecu), t39);
            t41 = g->ecx;
            t42 = g->edx;
            wr32(sp0 - 0x28u, arg3 + 1u);
            g->ecx = t41;
            g->edx = t42;
            t43 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103baeecu), rd32(sp0 - 0x20u));
            t44 = g->ecx;
            t45 = g->edx;
            d46 = (double)rdf32(arg1 + 0x94u);
            wrf64(sp0 - 0x18u, d46);
            wr32(sp0 - 0x1cu, COW_IMG(0x103baee0u));
            g->ecx = t44;
            g->edx = t45;
            g->esp = sp0 - 0x14u;
            t47 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baee0u), cow_dlo(d46));
            t48 = g->ecx;
            t49 = g->edx;
            wr32(sp0 - 0x20u, arg3 + 1u);
            g->ecx = t48;
            g->edx = t49;
            t50 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103baee0u), rd32(sp0 - 0x18u));
            t51 = g->ecx;
            t52 = g->edx;
            d53 = (double)rdf32(arg1 + 0x98u);
            wrf64(sp0 - 0x18u, d53);
            wr32(sp0 - 0x1cu, COW_IMG(0x103baed0u));
            g->ecx = t51;
            g->edx = t52;
            t54 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baed0u), cow_dlo(d53));
            t55 = g->ecx;
            t56 = g->edx;
            wr32(sp0 - 0x20u, arg3 + 1u);
            g->ecx = t55;
            g->edx = t56;
            t57 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103baed0u), rd32(sp0 - 0x18u));
            t58 = g->ecx;
            t59 = g->edx;
            wr32(sp0 - 0x24u, arg1 + 0x1cu);
            wr32(sp0 - 0x28u, COW_IMG(0x103baec0u));
            g->ecx = t58;
            g->edx = t59;
            g->esp = sp0 - 0x20u;
            t60 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baec0u), arg1 + 0x1cu);
            t61 = g->ecx;
            t62 = g->edx;
            if (arg2 != 1u)
            {
                eax = t60;
                ecx = t61;
                edx = t62;
                if (arg2 != 4u)
                {
                    wr32(sp0 - 0x10u, arg3 + 2u);
                    wr32(sp0 - 0x14u, arg2);
                    wr32(sp0 - 0x18u, arg1 + 0x1cu);
                    g->esp = sp0 - 0xcu;
                    cow_cdecl(g, COW_IMG(0x10280d30u), 3, arg1 + 0x1cu, arg2, arg3 + 2u);
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10291490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10291490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
