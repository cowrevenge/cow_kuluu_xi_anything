/* f_0x10278810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10278810(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_104;
    uint32_t loc_108;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 316u);

    wr32(sp0 - 0x10cu, in_esi);
    if (rd8(arg1 + 0xa8u) & 1u) goto L_10278855;
    wr32(sp0 - 0x110u, 0x2bfu);
    wr32(sp0 - 0x114u, COW_IMG(0x103b37ecu));
    wr32(sp0 - 0x118u, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x110u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x11cu, COW_IMG(0x103b3b44u));
    wr32(sp0 - 0x120u, COW_IMG(0x103b3b14u));
    g->esp = sp0 - 0x118u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3b14u), COW_IMG(0x103b3b44u));
    return;
L_10278855: ;
    wr32(sp0 - 0x110u, in_ebx);
    wr32(sp0 - 0x114u, in_ebp);
    wr32(sp0 - 0x118u, in_edi);
    t4 = rd32(arg1 + 0xa4u);
    wr32(sp0 - 0x104u, t4);
    if ((int32_t)rd32(arg1 + 0xa4u) < (int32_t)rd32(arg1 + 0x5cu))
    {
        loc_104 = t4;
    }
    else
    {
        eax = t4;
        ecx = rd32(arg1 + 0x5cu);
        loc_104 = t4;
        wr32(sp0 - 0x11cu, 0x2c8u);
        wr32(sp0 - 0x120u, COW_IMG(0x103b37ecu));
        t5 = eax * 4u + 4u;
        wr32(sp0 - 0x124u, t5);
        t6 = rd32(arg1 + 0x9cu);
        wr32(sp0 - 0x128u, t6);
        g->eax = t6;
        g->edx = in_edx;
        g->esp = sp0 - 0x104u;
        t7 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), ecx, 9, t6, t5, COW_IMG(0x103b37ecu), 0x2c8u, in_edi, in_ebp, in_ebx, in_esi, rd32(sp0 - 0x108u));
        t8 = g->edx;
        wr32(sp0 - 0x12cu, 0x2cau);
        wr32(sp0 - 0x130u, COW_IMG(0x103b37ecu));
        wr32(sp0 - 0x134u, t5);
        t9 = rd32(arg1 + 0xa0u);
        wr32(sp0 - 0x138u, t9);
        wr32(arg1 + 0x9cu, t7);
        g->esp = sp0 - 0x114u;
        t10 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t9, 9, t9, t5, COW_IMG(0x103b37ecu), 0x2cau, rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), COW_IMG(0x103b37ecu), 0x2c8u, in_edi);
        wr32(arg1 + 0xa0u, t10);
    }
    wr32(sp0 - 0x11cu, arg4);
    t11 = rd32(arg2 * 4u + rd32(arg1 + 0x98u));
    wr32(sp0 - 0x120u, t11);
    wr32(sp0 - 0x124u, arg1);
    g->eax = rd32(arg1 + 0x98u);
    g->ecx = t11;
    t12 = rd32(arg1 + 0x98u);
    g->esp = sp0 - 0x11cu;
    t13 = cow_cdecl(g, COW_IMG(0x10279870u), 2, arg1, t11);
    t14 = g->ecx;
    wr32(sp0 - 0x120u, t13);
    t15 = rd32(arg2 * 4u + rd32(arg1 + 0x50u));
    wr32(sp0 - 0x124u, t15);
    wr32(sp0 - 0x128u, arg2);
    wr32(sp0 - 0x12cu, arg1);
    g->eax = t15;
    g->ecx = t14;
    g->edx = rd32(arg1 + 0x50u);
    t16 = rd32(arg1 + 0x50u);
    g->esp = sp0 - 0x124u;
    t17 = cow_cdecl(g, COW_IMG(0x102798b0u), 2, arg1, arg2);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x128u, t17);
    wr32(sp0 - 0x12cu, arg3);
    g->edx = t19;
    g->esp = sp0 - 0x100u;
    t20 = cow_cdecl(g, COW_IMG(0x1028ee00u), 11, arg3, t17, rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), arg4, in_edi, in_ebp, in_ebx, in_esi, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u));
    t21 = g->edx;
    if ((uint8_t)arg5 == 0u)
    {
        ebp = t20;
    }
    else
    {
        edx = t21;
        ebp = t20;
        if ((rd8(arg2 * 4u + rd32(arg1 + 0x54u)) & 0x40u) == 0u)
        {
            ecx = rd32(arg1 + 0x54u);
        }
        else
        {
            wr32(sp0 - 0x108u, 0u);
            if ((int32_t)rd32(arg3 + 0x34u) <= 0)
            {
                ecx = rd32(arg3 + 0x34u);
                goto L_10278930;
            }
            eax = 0u;
            ecx = rd32(arg3 + 0x34u);
            loc_108 = 0u;
L_10278915: ;
            wr32(sp0 - 0x11cu, ebp);
            wr32(sp0 - 0x120u, eax);
            wr32(sp0 - 0x124u, arg3);
            g->edx = edx;
            g->esp = sp0 - 0x108u;
            cow_cdecl(g, COW_IMG(0x1028f3e0u), 7, arg3, eax, ebp, rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu));
            t22 = g->edx;
            t23 = rd32(sp0 - 0x108u) + 1u;
            wr32(sp0 - 0x108u, t23);
            if ((int32_t)(rd32(sp0 - 0x108u) + 1u) < (int32_t)rd32(arg3 + 0x34u))
            {
                eax = t23;
                ecx = rd32(arg3 + 0x34u);
                edx = t22;
                loc_108 = t23;
                goto L_10278915;
            }
            ecx = rd32(arg3 + 0x34u);
        }
L_10278930: ;
        if ((rd32(arg2 * 4u + rd32(arg1 + 0x54u)) >> 8u & 0x40u) != 0u)
        {
            eax = rd32(arg2 * 4u + rd32(arg1 + 0x54u));
            edx = rd32(arg1 + 0x54u);
            wr32(sp0 - 0x11cu, arg2);
            wr32(sp0 - 0x120u, arg1);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x118u;
            t24 = cow_cdecl(g, COW_IMG(0x10279b60u), 2, arg1, arg2);
            t25 = g->ecx;
            t26 = g->edx;
            wr32(sp0 - 0x124u, t24);
            wr32(sp0 - 0x128u, COW_IMG(0x103b3b4cu));
            wr32(sp0 - 0x12cu, sp0 - 0x100u);
            g->ebx = arg3;
            g->eax = sp0 - 0x100u;
            t27 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x103b3b4cu), t24, arg1, arg2);
            wr32(sp0 - 0x130u, sp0 - 0x108u);
            wr32(sp0 - 0x134u, sp0 - 0x100u);
            wr32(sp0 - 0x138u, arg1);
            g->esp = sp0 - 0x12cu;
            t28 = cow_cdecl(g, COW_IMG(0x10279d70u), 3, arg1, sp0 - 0x100u, sp0 - 0x108u);
            wr32(t28 + 0x2cu, arg3);
        }
    }
    t29 = rd32(sp0 - 0x104u);
    wr32(rd32(arg1 + 0x9cu) + t29 * 4u, ebp);
    wr32(t29 * 4u + rd32(arg1 + 0xa0u), arg2);
    t30 = rd32(arg1 + 0xa4u) + 1u;
    t31 = rd32(arg1 + 0xa8u);
    t32 = rd32(sp0 - 0x114u);
    t33 = rd32(sp0 - 0x118u);
    wr32(arg1 + 0xa4u, t30);
    t34 = (t31 & 0xffffff00u) | (uint8_t)(t31 | 2u);
    wr32(arg1 + 0xa8u, t34);
    g->ebx = rd32(sp0 - 0x110u);
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = t33;
    g->ebp = t32;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10278810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10278810(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
