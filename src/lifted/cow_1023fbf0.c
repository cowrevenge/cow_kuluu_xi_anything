/* f_0x1023fbf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1023fbf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023fbf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023fbf9;
    case 0x1023fc12u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023fc12;
    case 0x1023fc1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023fc1e;
    case 0x1023fc77u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023fc77;
    case 0x1023fc84u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1023fc84;
    case 0x1023fc8du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023fc8d;
    case 0x1023fc92u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023fc92;
    case 0x1023fca8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023fca8;
    case 0x1023fd33u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023fd33;
    case 0x1023fd9au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023fd9a;
    case 0x1023fda9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1023fda9;
    default: break;
    }
#endif

    COW_AT(1023fbf0)
    if (arg1 != 0u)
    {
    COW_AT(1023fc12)
        esi = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
    }
    else
    {
    COW_AT(1023fbf9)
        esi = rd32(rd32(COW_IMG(0x10669080u)) + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x64u);
    }
    COW_AT(1023fc1e)
    t1 = rd32(COW_IMG(0x10669078u));
    wr32(t1 + 0x14u, 2u);
    t2 = rd32(COW_IMG(0x10669078u));
    wr32(t2 + 0x2cu, 0u);
    g->eax = t2;
    g->edx = t1;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10388510u), 1u, 0u);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103883f0u));
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->edx = t7;
    t8 = cow_stdcall(g, COW_IMG(0x1023e510u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    g->ecx = t9;
    g->edx = t10;
    t11 = cow_cdecl(g, COW_IMG(0x1023b550u), 5, 0u, 1u, 0u, 1u, esi);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    esi = t11;
    edi = 0xau;
L_1023fc77: ;
    COW_AT(1023fc77)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t14 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, 0u, in_edi, in_esi);
    t15 = g->ecx;
    t16 = g->edx;
    if (edi != 1u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        edi = edi - 1u;
        goto L_1023fc77;
    }
    eax = t14;
    edx = t16;
    COW_AT(1023fc84)
    if ((int32_t)esi >= 0) goto L_1023fd33;
    COW_AT(1023fc8d)
    if (esi == 0xfffffffeu) goto L_1023fca8;
    COW_AT(1023fc92)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x100db130u), rd32(COW_IMG(0x103601bcu)), 0);
    t18 = g->edx;
    if (t17 != 0x14bu)
    {
        eax = t17;
        edx = t18;
        goto L_1023fd33;
    }
    eax = t17;
    edx = t18;
L_1023fca8: ;
    COW_AT(1023fca8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t19 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103884fcu));
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103884e8u));
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103884d8u));
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103884c8u));
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103884b4u));
    t28 = g->edx;
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103883f0u));
    t30 = g->ecx;
    t31 = g->edx;
    g->ecx = t30;
    g->edx = t31;
    t32 = cow_stdcall(g, COW_IMG(0x1023fde0u), 0);
    t33 = g->ecx;
    t34 = g->edx;
    g->edx = t34;
    t35 = cow_stdcall(g, COW_IMG(0x1023e570u), 0);
    t36 = g->edx;
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388510u));
    t38 = g->ecx;
    t39 = g->edx;
    g->ecx = t38;
    g->edx = t39;
    t40 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 1, 0u);
    t41 = g->ecx;
    t42 = g->edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, 0u, 0u, in_esi);
    g->esi = in_esi;
    g->edi = in_edi;
    return 0xfffffffeu;
L_1023fd33: ;
    COW_AT(1023fd33)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t43 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103883f0u), 1u, 0u);
    t44 = g->edx;
    g->edx = t44;
    t45 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103884fcu));
    t46 = g->edx;
    g->edx = t46;
    t47 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103884e8u));
    t48 = g->edx;
    g->edx = t48;
    t49 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103884d8u));
    t50 = g->edx;
    g->edx = t50;
    t51 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103884c8u));
    t52 = g->edx;
    g->edx = t52;
    t53 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103884b4u));
    t54 = g->ecx;
    t55 = g->edx;
    g->ecx = t54;
    g->edx = t55;
    t56 = cow_stdcall(g, COW_IMG(0x1023fde0u), 0);
    t57 = g->ecx;
    t58 = g->edx;
    if ((int32_t)esi < 0)
    {
        eax = t56;
        ecx = t57;
        edx = t58;
    }
    else
    {
        eax = t56;
        edx = t58;
    COW_AT(1023fd9a)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t59 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103883f0u));
        t60 = g->ecx;
        t61 = g->edx;
        eax = t59;
        ecx = t60;
        edx = t61;
    }
    COW_AT(1023fda9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t62 = cow_stdcall(g, COW_IMG(0x1023e570u), 0);
    t63 = g->edx;
    g->edx = t63;
    t64 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10388510u));
    t65 = g->ecx;
    t66 = g->edx;
    g->ecx = t65;
    g->edx = t66;
    t67 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 1, 0u);
    t68 = g->ecx;
    t69 = g->edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, 0u, 0u, in_esi);
    g->esi = in_esi;
    g->edi = in_edi;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023fbf0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023fbf9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1023fc12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1023fc1eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1023fc77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1023fc84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1023fc8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1023fc92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1023fca8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1023fd33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1023fd9au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1023fda9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
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
void cow_adapter_1023fbf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023fbf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
