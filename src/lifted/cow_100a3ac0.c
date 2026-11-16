/* f_0x100a3ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a3ac0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg3 + 6u) != 0xffu)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x3eu);
        t2 = g->edx;
        g->edx = t2;
        cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1035bb50u));
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
    }
    if (rd8(arg3 + 6u) == 0xf5u)
    {
        g->edx = edx;
        t5 = rd32(COW_IMG(0x10578158u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10129e30u), t5, 1, 0xbau);
        t6 = g->ecx;
        t7 = g->edx;
        ecx = t6;
        edx = t7;
    }
    if (rd8(arg3 + 4u) - 2u > 0xeu)
    {
        eax = rd8(arg3 + 4u) - 2u;
        goto L_100a3c86;
    }
    eax = rd8(arg3 + 4u) - 2u;
    t8 = rd32(COW_IMG(0x100a3c8cu) + eax * 4u);
    switch (t8 - RD)
    {
    case 0x100a3b15u: goto L_100a3b15;
    case 0x100a3b4bu: goto L_100a3b4b;
    case 0x100a3b64u: goto L_100a3b64;
    case 0x100a3b7cu: goto L_100a3b7c;
    case 0x100a3bc7u: goto L_100a3bc7;
    case 0x100a3bd9u: goto L_100a3bd9;
    case 0x100a3c07u: goto L_100a3c07;
    case 0x100a3c31u: goto L_100a3c31;
    case 0x100a3c4eu: goto L_100a3c4e;
    case 0x100a3c66u: goto L_100a3c66;
    case 0x100a3c78u: goto L_100a3c78;
    case 0x100a3c86u: goto L_100a3c86;
    default: rt_fatal(g, COW_IMG(0x100a3b0eu), "switch");
    }
    return 0;
L_100a3b15: ;
    if (rd8(arg3 + 6u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 6u);
        goto L_100a3b2b;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t47 = cow_thiscall(g, COW_IMG(0x101da530u), rd32(COW_IMG(0x10663400u)), 0);
    t48 = g->edx;
    g->edx = t48;
    return (t47 & 0xffffff00u) | 1u;
L_100a3b2b: ;
    if ((uint8_t)eax != 0xf6u)
    {
        ecx = rd32(COW_IMG(0x10578158u));
        goto L_100a3b40;
    }
    ecx = rd32(COW_IMG(0x10578158u));
    g->edx = edx;
    g->esp = sp0 - 4u;
    t49 = cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0x2du);
    t50 = g->edx;
    g->edx = t50;
    return (t49 & 0xffffff00u) | 1u;
L_100a3b40: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t51 = cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0x3eu);
    t52 = g->edx;
    g->edx = t52;
    return (t51 & 0xffffff00u) | 1u;
L_100a3b4b: ;
    t43 = rd32(rd32(COW_IMG(0x10663400u)) + 8u);
    g->edx = edx;
    t44 = rd32(COW_IMG(0x10663400u));
    g->esp = sp0 - 4u;
    t45 = cow_call_regs(g, COW_IMG(0x1015e790u), t44, COW_IMG(0x10621838u), g->edx, 0, 2, t43, 1u);
    t46 = g->edx;
    g->edx = t46;
    return (t45 & 0xffffff00u) | 1u;
L_100a3b64: ;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101d7bc0u), g->eax, g->ecx, edx, 1, 1, arg3);
    t40 = g->ecx;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t41 = cow_thiscall_cdecl(g, COW_IMG(0x100dfd40u), t40, 2, arg1, arg3);
    t42 = g->edx;
    g->edx = t42;
    return (t41 & 0xffffff00u) | 1u;
L_100a3b7c: ;
    if (rd8(arg3 + 6u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 6u);
        goto L_100a3ba4;
    }
    eax = (eax & 0xffffff00u) | rd8(arg3 + 6u);
    g->edx = edx;
    t30 = rd32(COW_IMG(0x10663428u));
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101d8140u), eax, t30, g->edx, 0, 2, 1u, 0u);
    t31 = g->ecx;
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_cdecl(g, COW_IMG(0x100dfdc0u), 2, arg1, arg3);
    t34 = g->edx;
    g->edx = t34;
    return (t33 & 0xffffff00u) | 1u;
L_100a3ba4: ;
    if ((uint8_t)eax == 0xf6u)
    {
        g->edx = edx;
        t35 = rd32(COW_IMG(0x10578158u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10129de0u), t35, 1, 0x2du);
        t36 = g->ecx;
        t37 = g->edx;
        ecx = t36;
        edx = t37;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t38 = cow_cdecl(g, COW_IMG(0x100dfdc0u), 2, arg1, arg3);
    t39 = g->edx;
    g->edx = t39;
    return (t38 & 0xffffff00u) | 1u;
L_100a3bc7: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t28 = cow_thiscall_cdecl(g, COW_IMG(0x100dfde0u), arg1, 2, arg1, arg3);
    t29 = g->edx;
    g->edx = t29;
    return (t28 & 0xffffff00u) | 1u;
L_100a3bd9: ;
    if (rd8(arg3 + 6u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 6u);
        goto L_100a3be4;
    }
    loc_8 = 0x36u;
L_100a3bea: ;
    t24 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129de0u), t24, 1, loc_8);
    t25 = g->ecx;
    ecx = t25;
L_100a3bf5: ;
    g->edx = arg1;
    g->esp = sp0 - 4u;
    t26 = cow_thiscall_cdecl(g, COW_IMG(0x100dff20u), ecx, 2, arg1, arg3);
    t27 = g->edx;
    g->edx = t27;
    return (t26 & 0xffffff00u) | 1u;
L_100a3be4: ;
    if ((uint8_t)eax == 2u) goto L_100a3bf5;
    loc_8 = 0x37u;
    goto L_100a3bea;
L_100a3c07: ;
    if (rd8(arg3 + 6u) == 0xe4u) goto L_100a3c12;
    eax = (eax & 0xffffff00u) | rd8(arg3 + 6u);
    if ((uint8_t)eax != 0xe5u) goto L_100a3c1f;
L_100a3c12: ;
    g->edx = edx;
    t19 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129e30u), t19, 1, 0x6fu);
    t20 = g->ecx;
    t21 = g->edx;
    ecx = t20;
    edx = t21;
L_100a3c1f: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t22 = cow_thiscall_cdecl(g, COW_IMG(0x100dff50u), ecx, 2, arg1, arg3);
    t23 = g->edx;
    g->edx = t23;
    return (t22 & 0xffffff00u) | 1u;
L_100a3c31: ;
    if (rd8(arg3 + 6u) == 0xf6u)
    {
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
        t16 = g->edx;
        edx = t16;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall_cdecl(g, COW_IMG(0x100dff80u), arg1, 2, arg1, arg3);
    t18 = g->edx;
    g->edx = t18;
    return (t17 & 0xffffff00u) | 1u;
L_100a3c4e: ;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x101d79e0u), 1, arg3);
    t13 = g->ecx;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall_cdecl(g, COW_IMG(0x100dffb0u), t13, 2, arg1, arg3);
    t15 = g->edx;
    g->edx = t15;
    return (t14 & 0xffffff00u) | 1u;
L_100a3c66: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x100dffe0u), ecx, 2, arg1, arg3);
    t12 = g->edx;
    g->edx = t12;
    return (t11 & 0xffffff00u) | 1u;
L_100a3c78: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x100e0010u), arg1, 2, arg1, arg3);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_100a3c86: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a3ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a3ac0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
