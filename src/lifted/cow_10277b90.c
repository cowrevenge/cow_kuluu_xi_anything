/* f_0x10277b90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10277b90(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1027a270u), 1, arg1);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(arg1 + 0x24u) != 0u)
    {
        eax = rd32(arg1 + 0x24u);
        edx = t2;
        goto L_10277bb2;
    }
    eax = rd32(arg1 + 0x24u);
    ecx = t1;
    edx = t2;
    if (rd32(arg1 + 0x28u) == 0u) goto L_10277c47;
L_10277bb2: ;
    if ((rd32(arg1 + 0xa8u) & 0x200u) == 0u)
    {
        ecx = rd32(arg1 + 0xa8u);
        goto L_10277c04;
    }
    ecx = rd32(arg1 + 0xa8u);
    if ((int32_t)eax <= 0) goto L_10277c3e;
    ebp = 0u;
L_10277bc8: ;
    if ((int32_t)rd32(rd32(ebp * 4u + rd32(arg1 + 0x1cu)) + 0x14u) < 0)
    {
        eax = rd32(rd32(ebp * 4u + rd32(arg1 + 0x1cu)) + 0x14u);
        ebx = rd32(ebp * 4u + rd32(arg1 + 0x1cu));
    }
    else
    {
        eax = rd32(rd32(ebp * 4u + rd32(arg1 + 0x1cu)) + 0x14u);
        ebx = rd32(ebp * 4u + rd32(arg1 + 0x1cu));
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t3 = cow_call_regs(g, COW_IMG(0x10281a90u), g->eax, ecx, edx, 1, 1, eax);
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
    }
    if ((int32_t)rd32(ebx + 0x18u) >= 0)
    {
        ebx = rd32(ebx + 0x18u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x102819e0u), 1, ebx);
        t6 = g->ecx;
        t7 = g->edx;
        ecx = t6;
        edx = t7;
    }
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x24u))
    {
        ebp = ebp + 1u;
        goto L_10277bc8;
    }
    wr32(arg1 + 0x28u, 0u);
    wr32(arg1 + 0x24u, 0u);
L_10277c4c: ;
    if (rd32(arg1 + 0x34u) != 0u) goto L_10277c56;
    if (rd32(arg1 + 0x38u) == 0u) goto L_10277c9e;
L_10277c56: ;
    if ((rd32(arg1 + 0xa8u) & 0x200u) == 0u)
    {
        if (rd32(arg1 + 0x2cu) != 0u)
        {
            eax = rd32(arg1 + 0x2cu);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0xe6u);
            t12 = g->ecx;
            t13 = g->edx;
            wr32(arg1 + 0x2cu, 0u);
            ecx = t12;
            edx = t13;
        }
        if (rd32(arg1 + 0x30u) != 0u)
        {
            eax = rd32(arg1 + 0x30u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0xe7u);
            t14 = g->ecx;
            t15 = g->edx;
            wr32(arg1 + 0x30u, 0u);
            ecx = t14;
            edx = t15;
        }
    }
    wr32(arg1 + 0x38u, 0u);
    wr32(arg1 + 0x34u, 0u);
L_10277c9e: ;
    if (rd32(arg1 + 0x58u) != 0u)
    {
        eax = rd32(arg1 + 0x58u);
        goto L_10277cae;
    }
    eax = rd32(arg1 + 0x58u);
    if (rd32(arg1 + 0x5cu) == 0u) goto L_10277d56;
L_10277cae: ;
    if ((rd32(arg1 + 0xa8u) & 0x200u) == 0u)
    {
        if ((int32_t)eax <= 0) goto L_10277cf4;
        ebx = 0u;
L_10277cc0: ;
        if ((rd8(ebx * 4u + rd32(arg1 + 0x54u)) & 0x20u) == 0u)
        {
            ecx = rd32(arg1 + 0x54u);
        }
        else
        {
            ecx = rd32(arg1 + 0x54u);
            if (rd32(ebx * 4u + rd32(arg1 + 0x50u)) == 0u)
            {
                edx = rd32(arg1 + 0x50u);
            }
            else
            {
                eax = rd32(ebx * 4u + rd32(arg1 + 0x50u));
                edx = rd32(arg1 + 0x50u);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0xf1u);
                t16 = g->ecx;
                t17 = g->edx;
                wr32(ebx * 4u + rd32(arg1 + 0x50u), 0u);
                ecx = t16;
                edx = t17;
            }
        }
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x58u))
        {
            ebx = ebx + 1u;
            goto L_10277cc0;
        }
L_10277cf4: ;
        if (rd32(arg1 + 0x4cu) != 0u)
        {
            eax = rd32(arg1 + 0x4cu);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0xf4u);
            t18 = g->ecx;
            t19 = g->edx;
            wr32(arg1 + 0x4cu, 0u);
            ecx = t18;
            edx = t19;
        }
        if (rd32(arg1 + 0x50u) != 0u)
        {
            eax = rd32(arg1 + 0x50u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0xf5u);
            t20 = g->ecx;
            t21 = g->edx;
            wr32(arg1 + 0x50u, 0u);
            ecx = t20;
            edx = t21;
        }
        if (rd32(arg1 + 0x54u) != 0u)
        {
            eax = rd32(arg1 + 0x54u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0xf6u);
            t22 = g->ecx;
            t23 = g->edx;
            wr32(arg1 + 0x54u, 0u);
            ecx = t22;
            edx = t23;
        }
    }
    wr32(arg1 + 0x5cu, 0u);
    wr32(arg1 + 0x58u, 0u);
L_10277d56: ;
    if (rd32(arg1 + 0x44u) != 0u) goto L_10277d60;
    if (rd32(arg1 + 0x48u) == 0u) goto L_10277da8;
L_10277d60: ;
    if ((rd32(arg1 + 0xa8u) & 0x200u) == 0u)
    {
        if (rd32(arg1 + 0x3cu) != 0u)
        {
            eax = rd32(arg1 + 0x3cu);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0xfeu);
            t24 = g->ecx;
            t25 = g->edx;
            wr32(arg1 + 0x3cu, 0u);
            ecx = t24;
            edx = t25;
        }
        if (rd32(arg1 + 0x40u) != 0u)
        {
            eax = rd32(arg1 + 0x40u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0xffu);
            t26 = g->ecx;
            t27 = g->edx;
            wr32(arg1 + 0x40u, 0u);
            ecx = t26;
            edx = t27;
        }
    }
    wr32(arg1 + 0x48u, 0u);
    wr32(arg1 + 0x44u, 0u);
L_10277da8: ;
    if (rd32(arg1 + 0x68u) != 0u) goto L_10277db2;
    if (rd32(arg1 + 0x6cu) == 0u) goto L_10277dfa;
L_10277db2: ;
    if ((rd32(arg1 + 0xa8u) & 0x200u) == 0u)
    {
        if (rd32(arg1 + 0x60u) != 0u)
        {
            eax = rd32(arg1 + 0x60u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0x107u);
            t28 = g->ecx;
            t29 = g->edx;
            wr32(arg1 + 0x60u, 0u);
            ecx = t28;
            edx = t29;
        }
        if (rd32(arg1 + 0x64u) != 0u)
        {
            eax = rd32(arg1 + 0x64u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0x108u);
            t30 = g->ecx;
            t31 = g->edx;
            wr32(arg1 + 0x64u, 0u);
            ecx = t30;
            edx = t31;
        }
    }
    wr32(arg1 + 0x6cu, 0u);
    wr32(arg1 + 0x68u, 0u);
L_10277dfa: ;
    if (rd32(arg1 + 0x7cu) != 0u)
    {
        eax = rd32(arg1 + 0x7cu);
        goto L_10277e0d;
    }
    eax = rd32(arg1 + 0x7cu);
    if (rd32(arg1 + 0x80u) == 0u) goto L_10277eaf;
L_10277e0d: ;
    if ((rd32(arg1 + 0xa8u) & 0x200u) == 0u)
    {
        if ((int32_t)eax <= 0) goto L_10277e4a;
        ebx = 0u;
L_10277e1f: ;
        if (rd32(ebx * 4u + rd32(arg1 + 0x70u)) == 0u)
        {
            ecx = rd32(arg1 + 0x70u);
        }
        else
        {
            eax = rd32(ebx * 4u + rd32(arg1 + 0x70u));
            ecx = rd32(arg1 + 0x70u);
            g->ecx = ecx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0x111u);
            t32 = g->ecx;
            t33 = rd32(arg1 + 0x70u);
            wr32(ebx * 4u + t33, 0u);
            ecx = t32;
            edx = t33;
        }
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x7cu))
        {
            ebx = ebx + 1u;
            goto L_10277e1f;
        }
L_10277e4a: ;
        if (rd32(arg1 + 0x70u) != 0u)
        {
            eax = rd32(arg1 + 0x70u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0x113u);
            t34 = g->ecx;
            t35 = g->edx;
            wr32(arg1 + 0x70u, 0u);
            ecx = t34;
            edx = t35;
        }
        if (rd32(arg1 + 0x74u) != 0u)
        {
            eax = rd32(arg1 + 0x74u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0x114u);
            t36 = g->ecx;
            t37 = g->edx;
            wr32(arg1 + 0x74u, 0u);
            ecx = t36;
            edx = t37;
        }
        if (rd32(arg1 + 0x78u) != 0u)
        {
            eax = rd32(arg1 + 0x78u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0x115u);
            t38 = g->ecx;
            t39 = g->edx;
            wr32(arg1 + 0x78u, 0u);
            ecx = t38;
            edx = t39;
        }
    }
    wr32(arg1 + 0x80u, 0u);
    wr32(arg1 + 0x7cu, 0u);
L_10277eaf: ;
    if (rd32(arg1 + 0x90u) != 0u)
    {
        eax = rd32(arg1 + 0x90u);
        goto L_10277ec5;
    }
    eax = rd32(arg1 + 0x90u);
    if (rd32(arg1 + 0x94u) == 0u) goto L_10277f85;
L_10277ec5: ;
    if ((rd32(arg1 + 0xa8u) & 0x200u) == 0u)
    {
        if ((int32_t)eax <= 0) goto L_10277f0b;
        ebx = 0u;
L_10277ed7: ;
        if (rd32(ebx * 4u + rd32(arg1 + 0x84u)) != 0u)
        {
            eax = rd32(ebx * 4u + rd32(arg1 + 0x84u));
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0x11eu);
            t40 = g->edx;
            t41 = rd32(arg1 + 0x84u);
            wr32(ebx * 4u + t41, 0u);
            ecx = t41;
            edx = t40;
        }
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x90u))
        {
            ebx = ebx + 1u;
            goto L_10277ed7;
        }
L_10277f0b: ;
        if (rd32(arg1 + 0x84u) != 0u)
        {
            eax = rd32(arg1 + 0x84u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0x120u);
            t42 = g->ecx;
            t43 = g->edx;
            wr32(arg1 + 0x84u, 0u);
            ecx = t42;
            edx = t43;
        }
        if (rd32(arg1 + 0x88u) != 0u)
        {
            eax = rd32(arg1 + 0x88u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0x121u);
            t44 = g->ecx;
            t45 = g->edx;
            wr32(arg1 + 0x88u, 0u);
            ecx = t44;
            edx = t45;
        }
        if (rd32(arg1 + 0x8cu) != 0u)
        {
            eax = rd32(arg1 + 0x8cu);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0x122u);
            t46 = g->ecx;
            t47 = g->edx;
            wr32(arg1 + 0x8cu, 0u);
            ecx = t46;
            edx = t47;
        }
    }
    wr32(arg1 + 0x94u, 0u);
    wr32(arg1 + 0x90u, 0u);
L_10277f85: ;
    if ((rd32(arg1 + 0xa8u) & 0x200u) == 0u)
    {
        if (rd32(arg1 + 0x98u) != 0u)
        {
            eax = rd32(arg1 + 0x98u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0x129u);
            t48 = g->ecx;
            t49 = g->edx;
            wr32(arg1 + 0x98u, 0u);
            ecx = t48;
            edx = t49;
        }
        if (rd32(arg1 + 0x9cu) != 0u)
        {
            eax = rd32(arg1 + 0x9cu);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0x12au);
            t50 = g->ecx;
            t51 = g->edx;
            wr32(arg1 + 0x9cu, 0u);
            ecx = t50;
            edx = t51;
        }
        if (rd32(arg1 + 0xa0u) != 0u)
        {
            eax = rd32(arg1 + 0xa0u);
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0x12bu);
            wr32(arg1 + 0xa0u, 0u);
        }
    }
    t52 = rd32(arg1 + 0xa8u);
    wr32(arg1 + 0xa4u, 0u);
    wr32(arg1 + 0xa8u, t52 & 0x200u);
    return;
L_10277c04: ;
    if (rd32(arg1 + 0x1cu) != 0u)
    {
        eax = rd32(arg1 + 0x1cu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0xddu);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(arg1 + 0x1cu, 0u);
        ecx = t8;
        edx = t9;
    }
    if (rd32(arg1 + 0x20u) != 0u)
    {
        eax = rd32(arg1 + 0x20u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0xdeu);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(arg1 + 0x20u, 0u);
        ecx = t10;
        edx = t11;
    }
L_10277c3e: ;
    wr32(arg1 + 0x28u, 0u);
    wr32(arg1 + 0x24u, 0u);
    goto L_10277c4c;
L_10277c47: ;
    goto L_10277c4c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10277b90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10277b90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
