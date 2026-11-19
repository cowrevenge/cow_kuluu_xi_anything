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
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a3acbu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3acb;
    case 0x100a3ae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3ae7;
    case 0x100a3aedu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3aed;
    case 0x100a3afdu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3afd;
    case 0x100a3b0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3b0e;
    case 0x100a3b15u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3b15;
    case 0x100a3b1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3b1c;
    case 0x100a3b2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3b2b;
    case 0x100a3b35u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3b35;
    case 0x100a3b40u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3b40;
    case 0x100a3b4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3b4b;
    case 0x100a3b64u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3b64;
    case 0x100a3b7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3b7c;
    case 0x100a3b83u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3b83;
    case 0x100a3ba4u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3ba4;
    case 0x100a3ba8u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3ba8;
    case 0x100a3bb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3bb5;
    case 0x100a3bc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3bc7;
    case 0x100a3bd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3bd9;
    case 0x100a3be0u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3be0;
    case 0x100a3be4u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3be4;
    case 0x100a3be8u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3be8;
    case 0x100a3beau: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3bea;
    case 0x100a3bf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3bf5;
    case 0x100a3c07u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3c07;
    case 0x100a3c0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3c0e;
    case 0x100a3c12u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3c12;
    case 0x100a3c1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3c1f;
    case 0x100a3c31u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3c31;
    case 0x100a3c37u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3c37;
    case 0x100a3c3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3c3c;
    case 0x100a3c4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3c4e;
    case 0x100a3c66u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3c66;
    case 0x100a3c78u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3c78;
    case 0x100a3c86u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100a3c86;
    default: break;
    }
#endif

    COW_AT(100a3ac0)
    if (rd8(arg3 + 6u) != 0xffu)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
    COW_AT(100a3acb)
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x3eu);
        t2 = g->edx;
        g->edx = t2;
        t3 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1035bb50u));
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
    }
    COW_AT(100a3ae7)
    if (rd8(arg3 + 6u) == 0xf5u)
    {
    COW_AT(100a3aed)
        g->edx = edx;
        t6 = rd32(COW_IMG(0x10578158u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10129e30u), t6, 1, 0xbau);
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    }
    COW_AT(100a3afd)
    if (rd8(arg3 + 4u) - 2u > 0xeu)
    {
        eax = rd8(arg3 + 4u) - 2u;
        goto L_100a3c86;
    }
    eax = rd8(arg3 + 4u) - 2u;
    COW_AT(100a3b0e)
    t9 = rd32(COW_IMG(0x100a3c8cu) + eax * 4u);
    switch (t9 - RD)
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
    COW_AT(100a3b15)
    if (rd8(arg3 + 6u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 6u);
        goto L_100a3b2b;
    }
    eax = (eax & 0xffffff00u) | rd8(arg3 + 6u);
    COW_AT(100a3b1c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t52 = cow_thiscall(g, COW_IMG(0x101da530u), rd32(COW_IMG(0x10663400u)), 0);
    t53 = g->edx;
    g->esi = in_esi;
    g->edx = t53;
    return (t52 & 0xffffff00u) | 1u;
L_100a3b2b: ;
    COW_AT(100a3b2b)
    if ((uint8_t)eax != 0xf6u)
    {
        ecx = rd32(COW_IMG(0x10578158u));
        goto L_100a3b40;
    }
    ecx = rd32(COW_IMG(0x10578158u));
    COW_AT(100a3b35)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t54 = cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0x2du);
    t55 = g->edx;
    g->esi = in_esi;
    g->edx = t55;
    return (t54 & 0xffffff00u) | 1u;
L_100a3b40: ;
    COW_AT(100a3b40)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t56 = cow_thiscall(g, COW_IMG(0x10129de0u), ecx, 1, 0x3eu);
    t57 = g->edx;
    g->esi = in_esi;
    g->edx = t57;
    return (t56 & 0xffffff00u) | 1u;
L_100a3b4b: ;
    COW_AT(100a3b4b)
    t48 = rd32(rd32(COW_IMG(0x10663400u)) + 8u);
    g->edx = edx;
    t49 = rd32(COW_IMG(0x10663400u));
    g->esp = sp0 - 4u;
    t50 = cow_call_regs(g, COW_IMG(0x1015e790u), t49, COW_IMG(0x10621838u), g->edx, 0, 2, t48, 1u);
    t51 = g->edx;
    g->esi = in_esi;
    g->edx = t51;
    return (t50 & 0xffffff00u) | 1u;
L_100a3b64: ;
    COW_AT(100a3b64)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t44 = cow_call_regs(g, COW_IMG(0x101d7bc0u), g->eax, g->ecx, edx, 1, 1, arg3);
    t45 = g->ecx;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t46 = cow_thiscall_cdecl(g, COW_IMG(0x100dfd40u), t45, 2, arg1, arg3);
    t47 = g->edx;
    g->esi = in_esi;
    g->edx = t47;
    return (t46 & 0xffffff00u) | 1u;
L_100a3b7c: ;
    COW_AT(100a3b7c)
    if (rd8(arg3 + 6u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 6u);
        goto L_100a3ba4;
    }
    eax = (eax & 0xffffff00u) | rd8(arg3 + 6u);
    COW_AT(100a3b83)
    g->edx = edx;
    t34 = rd32(COW_IMG(0x10663428u));
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101d8140u), eax, t34, g->edx, 0, 2, 1u, 0u);
    t35 = g->ecx;
    t36 = g->edx;
    g->eax = arg1;
    g->edx = t36;
    t37 = cow_cdecl(g, COW_IMG(0x100dfdc0u), 2, arg1, arg3);
    t38 = g->edx;
    g->esi = in_esi;
    g->edx = t38;
    return (t37 & 0xffffff00u) | 1u;
L_100a3ba4: ;
    COW_AT(100a3ba4)
    if ((uint8_t)eax == 0xf6u)
    {
    COW_AT(100a3ba8)
        g->edx = edx;
        t39 = rd32(COW_IMG(0x10578158u));
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10129de0u), t39, 1, 0x2du);
        t40 = g->ecx;
        t41 = g->edx;
        ecx = t40;
        edx = t41;
    }
    COW_AT(100a3bb5)
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t42 = cow_cdecl(g, COW_IMG(0x100dfdc0u), 2, arg1, arg3);
    t43 = g->edx;
    g->esi = in_esi;
    g->edx = t43;
    return (t42 & 0xffffff00u) | 1u;
L_100a3bc7: ;
    COW_AT(100a3bc7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t32 = cow_thiscall_cdecl(g, COW_IMG(0x100dfde0u), arg1, 2, arg1, arg3);
    t33 = g->edx;
    g->esi = in_esi;
    g->edx = t33;
    return (t32 & 0xffffff00u) | 1u;
L_100a3bd9: ;
    COW_AT(100a3bd9)
    if (rd8(arg3 + 6u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 6u);
        goto L_100a3be4;
    }
    eax = (eax & 0xffffff00u) | rd8(arg3 + 6u);
    COW_AT(100a3be0)
    loc_8 = 0x36u;
L_100a3bea: ;
    COW_AT(100a3bea)
    g->eax = eax;
    t27 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 4u;
    t28 = cow_thiscall(g, COW_IMG(0x10129de0u), t27, 1, loc_8);
    t29 = g->ecx;
    eax = t28;
    ecx = t29;
L_100a3bf5: ;
    COW_AT(100a3bf5)
    g->eax = eax;
    g->edx = arg1;
    g->esp = sp0 - 4u;
    t30 = cow_thiscall_cdecl(g, COW_IMG(0x100dff20u), ecx, 2, arg1, arg3);
    t31 = g->edx;
    g->esi = in_esi;
    g->edx = t31;
    return (t30 & 0xffffff00u) | 1u;
L_100a3be4: ;
    COW_AT(100a3be4)
    if ((uint8_t)eax == 2u) goto L_100a3bf5;
    COW_AT(100a3be8)
    loc_8 = 0x37u;
    goto L_100a3bea;
L_100a3c07: ;
    COW_AT(100a3c07)
    if (rd8(arg3 + 6u) == 0xe4u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 6u);
        goto L_100a3c12;
    }
    eax = (eax & 0xffffff00u) | rd8(arg3 + 6u);
    COW_AT(100a3c0e)
    if ((uint8_t)eax != 0xe5u) goto L_100a3c1f;
L_100a3c12: ;
    COW_AT(100a3c12)
    g->edx = edx;
    t22 = rd32(COW_IMG(0x10578158u));
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129e30u), t22, 1, 0x6fu);
    t23 = g->ecx;
    t24 = g->edx;
    ecx = t23;
    edx = t24;
L_100a3c1f: ;
    COW_AT(100a3c1f)
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t25 = cow_thiscall_cdecl(g, COW_IMG(0x100dff50u), ecx, 2, arg1, arg3);
    t26 = g->edx;
    g->esi = in_esi;
    g->edx = t26;
    return (t25 & 0xffffff00u) | 1u;
L_100a3c31: ;
    COW_AT(100a3c31)
    if (rd8(arg3 + 6u) == 0xf6u)
    {
    COW_AT(100a3c37)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t18 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
    COW_AT(100a3c3c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t20 = cow_thiscall_cdecl(g, COW_IMG(0x100dff80u), arg1, 2, arg1, arg3);
    t21 = g->edx;
    g->esi = in_esi;
    g->edx = t21;
    return (t20 & 0xffffff00u) | 1u;
L_100a3c4e: ;
    COW_AT(100a3c4e)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t14 = cow_cdecl(g, COW_IMG(0x101d79e0u), 1, arg3);
    t15 = g->ecx;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t16 = cow_thiscall_cdecl(g, COW_IMG(0x100dffb0u), t15, 2, arg1, arg3);
    t17 = g->edx;
    g->esi = in_esi;
    g->edx = t17;
    return (t16 & 0xffffff00u) | 1u;
L_100a3c66: ;
    COW_AT(100a3c66)
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall_cdecl(g, COW_IMG(0x100dffe0u), ecx, 2, arg1, arg3);
    t13 = g->edx;
    g->esi = in_esi;
    g->edx = t13;
    return (t12 & 0xffffff00u) | 1u;
L_100a3c78: ;
    COW_AT(100a3c78)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x100e0010u), arg1, 2, arg1, arg3);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_100a3c86: ;
    COW_AT(100a3c86)
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a3ac0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a3acbu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3ae7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3aedu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3afdu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3b0eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3b15u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3b1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a3b2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a3b35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a3b40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a3b4bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100a3b64u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3b7cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3b83u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3ba4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3ba8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3bb5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3bc7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3bd9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3be0u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3be4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3be8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3beau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3bf5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3c07u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3c0eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3c12u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3c1fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3c31u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3c37u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3c3cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3c4eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3c66u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3c78u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100a3c86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a3ac0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a3ac0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
