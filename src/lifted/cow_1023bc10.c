/* f_0x1023bc10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1023bc10(Guest* g)
{
    double d17;
    double d24;
    double d39;
    double d46;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023bc5au: ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1023bc5a;
    case 0x1023bc86u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1023bc86;
    case 0x1023bc90u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1023bc90;
    case 0x1023bcc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1023bcc5;
    case 0x1023bcd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1023bcd0;
    case 0x1023bd01u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1023bd01;
    case 0x1023bd06u: ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1023bd06;
    case 0x1023bd32u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1023bd32;
    case 0x1023bd3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1023bd3c;
    case 0x1023bd6du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1023bd6d;
    case 0x1023bd74u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1023bd74;
    case 0x1023bda6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1023bda6;
    case 0x1023bdacu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023bdac;
    case 0x1023bdb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023bdb9;
    case 0x1023bddbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1023bddb;
    default: break;
    }
#endif

    COW_AT(1023bc10)
    t1 = rd32(COW_IMG(0x10669058u));
    wr8(t1 + 0x14u, 0u);
    wr32(rd32(COW_IMG(0x1066905cu)) + 0x14u, 0u);
    g->eax = t1;
    g->edx = in_edx;
    t2 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388354u), 1u, 0u);
    t3 = g->edx;
    g->edx = t3;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388340u), 1u, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if (arg1 != 0u)
    {
        ecx = t4;
        edx = t5;
        goto L_1023bd06;
    }
    ecx = t4;
    edx = t5;
    COW_AT(1023bc5a)
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_stdcall(g, COW_IMG(0x1023e4d0u), 0);
    t7 = g->edx;
    t8 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0;
    t9 = cow_fastcall(g, COW_IMG(0x100db170u), t8, t7, 2, 0x12u, 0u);
    t10 = g->ecx;
    t11 = g->edx;
    g->ecx = t10;
    t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x47u);
    t13 = g->ecx;
    eax = t12;
    ecx = t13;
    edx = rd32(COW_IMG(0x10669058u)) + 0x14u;
L_1023bc86: ;
    COW_AT(1023bc86)
    t14 = rd8(eax);
    wr8(edx, (uint8_t)t14);
    if ((uint8_t)t14 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t14;
        edx = edx + 1u;
        goto L_1023bc86;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t14;
    edx = edx + 1u;
    COW_AT(1023bc90)
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1023e4d0u), 1, 0u);
    t15 = g->edx;
    t16 = rd32(COW_IMG(0x103601bcu));
    d17 = fr(g, (double)(int32_t)rd32(rd32(COW_IMG(0x103601bcu)) + 0xcu) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(rd32(COW_IMG(0x1066905cu)) + 0x14u, (float)d17);
    g->eax = t16;
    g->edx = t15;
    t18 = rd32(COW_IMG(0x103601bcu));
    t19 = cow_thiscall(g, COW_IMG(0x100db140u), t18, 0);
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 == 0x12u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        goto L_1023bda6;
    }
    eax = t19;
    ecx = t20;
    edx = t21;
L_1023bcc5: ;
    COW_AT(1023bcc5)
    if ((int32_t)eax > 200) goto L_1023bddb;
    COW_AT(1023bcd0)
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1023e4d0u), 1, 0u);
    t22 = rd32(COW_IMG(0x1066905cu));
    t23 = rd32(COW_IMG(0x103601bcu));
    d24 = fr(g, (double)(int32_t)rd32(rd32(COW_IMG(0x103601bcu)) + 0xcu) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(t22 + 0x14u, (float)d24);
    g->eax = t22;
    g->edx = t23;
    t25 = rd32(COW_IMG(0x103601bcu));
    t26 = cow_thiscall(g, COW_IMG(0x100db140u), t25, 0);
    t27 = g->ecx;
    t28 = g->edx;
    if (t26 != 0x12u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        goto L_1023bcc5;
    }
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(1023bd01)
L_1023bda6: ;
    COW_AT(1023bda6)
    esi = 0xau;
L_1023bdac: ;
    COW_AT(1023bdac)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t61 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 1, 0u);
    t62 = g->ecx;
    t63 = g->edx;
    if (esi != 1u)
    {
        eax = t61;
        ecx = t62;
        edx = t63;
        esi = esi - 1u;
        goto L_1023bdac;
    }
    eax = t61;
    edx = t63;
    COW_AT(1023bdb9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t64 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388354u));
    t65 = g->edx;
    g->edx = t65;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388340u));
    t66 = g->edx;
    g->esi = in_esi;
    g->edx = t66;
    return 0u;
L_1023bd06: ;
    COW_AT(1023bd06)
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t29 = cow_stdcall(g, COW_IMG(0x1023e4d0u), 0);
    t30 = g->edx;
    t31 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0;
    t32 = cow_fastcall(g, COW_IMG(0x100db170u), t31, t30, 2, 0x11u, 0u);
    t33 = g->ecx;
    t34 = g->edx;
    t35 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x48u);
    eax = t35;
    ecx = rd32(COW_IMG(0x10669058u));
    edx = rd32(COW_IMG(0x10669058u)) + 0x14u;
L_1023bd32: ;
    COW_AT(1023bd32)
    t36 = rd8(eax);
    wr8(edx, (uint8_t)t36);
    if ((uint8_t)t36 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t36;
        edx = edx + 1u;
        goto L_1023bd32;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t36;
    edx = edx + 1u;
    COW_AT(1023bd3c)
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1023e4d0u), 1, 0u);
    t37 = rd32(COW_IMG(0x1066905cu));
    t38 = rd32(COW_IMG(0x103601bcu));
    d39 = fr(g, (double)(int32_t)rd32(rd32(COW_IMG(0x103601bcu)) + 0xcu) * (double)rdf32(COW_IMG(0x10329ce4u)));
    wrf32(t37 + 0x14u, (float)d39);
    g->eax = t37;
    g->edx = t38;
    t40 = rd32(COW_IMG(0x103601bcu));
    t41 = cow_thiscall(g, COW_IMG(0x100db140u), t40, 0);
    t42 = g->ecx;
    t43 = g->edx;
    if (t41 == 0x11u)
    {
        eax = t41;
        ecx = t42;
        edx = t43;
        goto L_1023bda6;
    }
    eax = t41;
    ecx = t42;
    edx = t43;
L_1023bd6d: ;
    COW_AT(1023bd6d)
    if ((int32_t)eax > 200) goto L_1023bddb;
    COW_AT(1023bd74)
    g->eax = eax;
    g->esp = sp0;
    t44 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 1, 0u);
    t45 = rd32(COW_IMG(0x1066905cu));
    d46 = fr(g, (double)(int32_t)rd32(rd32(COW_IMG(0x103601bcu)) + 0xcu) * (double)rdf32(COW_IMG(0x10329ce4u)));
    wrf32(t45 + 0x14u, (float)d46);
    g->edx = t45;
    t47 = rd32(COW_IMG(0x103601bcu));
    t48 = cow_thiscall(g, COW_IMG(0x100db140u), t47, 0);
    t49 = g->ecx;
    t50 = g->edx;
    if (t48 != 0x11u)
    {
        eax = t48;
        ecx = t49;
        edx = t50;
        goto L_1023bd6d;
    }
    eax = t48;
    ecx = t49;
    edx = t50;
    goto L_1023bda6;
L_1023bddb: ;
    COW_AT(1023bddb)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t51 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388354u));
    t52 = g->edx;
    g->edx = t52;
    t53 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388340u));
    t54 = g->edx;
    g->edx = t54;
    t55 = rd32(COW_IMG(0x103601bcu));
    t56 = cow_thiscall(g, COW_IMG(0x100db130u), t55, 0);
    t57 = g->ecx;
    t58 = g->edx;
    g->edx = t58;
    t59 = cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, t56);
    t60 = g->edx;
    g->esi = in_esi;
    g->edx = t60;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023bc10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023bc5au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1023bc86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023bc90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023bcc5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023bcd0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023bd01u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023bd06u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1023bd32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023bd3cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023bd6du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023bd74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023bda6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023bdacu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1023bdb9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1023bddbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1023bc10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023bc10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
