/* f_0x1024cb00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1024cb00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1024cb24u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cb24;
    case 0x1024cb32u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cb32;
    case 0x1024cb6au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cb6a;
    case 0x1024cb7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cb7f;
    case 0x1024cb96u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cb96;
    case 0x1024cb98u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cb98;
    case 0x1024cb9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cb9c;
    case 0x1024cba1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cba1;
    case 0x1024cbbau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cbba;
    case 0x1024cbc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cbc1;
    case 0x1024cbf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cbf8;
    case 0x1024cc06u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cc06;
    case 0x1024cc14u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cc14;
    case 0x1024cc17u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cc17;
    case 0x1024cc19u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cc19;
    case 0x1024cc35u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1024cc35;
    default: break;
    }
#endif

    COW_AT(1024cb00)
    wr32(COW_IMG(0x10669130u), 0u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10062e20u), 5, 0x81a9u, 0x746f6666u, 0u, 0u, 0u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    edi = 0x2du;
L_1024cb24: ;
    COW_AT(1024cb24)
    g->eax = eax;
    g->edx = edx;
    t3 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x100daf30u), t3, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (edi != 1u)
    {
        eax = t4;
        edx = t6;
        edi = edi - 1u;
        goto L_1024cb24;
    }
    ecx = t5;
    edx = t6;
    COW_AT(1024cb32)
    t7 = rd32(COW_IMG(0x10456a28u));
    wr32(t7, 0xd0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_call_regs(g, COW_IMG(0x100f76d0u), t7, g->ecx, g->edx, 1, 1, 1u);
    t9 = g->ecx;
    t10 = g->edx;
    g->ecx = t9;
    t11 = cow_call_regs(g, COW_IMG(0x101151e0u), g->eax, g->ecx, t10, 1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    g->esi = 0u;
    g->edx = t13;
    t14 = cow_stdcall(g, COW_IMG(0x1024cc50u), 0);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103502e8u));
    t17 = g->ecx;
    t18 = g->edx;
    if (t14 != 0u)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        goto L_1024cc35;
    }
    eax = t16;
    edx = t18;
    esi = 0u;
L_1024cb6a: ;
    COW_AT(1024cb6a)
    g->eax = eax;
    g->edx = edx;
    t19 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 8u;
    t20 = cow_thiscall(g, COW_IMG(0x100daf30u), t19, 0);
    t21 = g->ecx;
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_stdcall(g, COW_IMG(0x1024ce00u), 0);
    t24 = g->edx;
    if (t23 != 2u)
    {
        eax = t23;
        edx = t24;
        goto L_1024cb98;
    }
    eax = t23;
    edx = t24;
    COW_AT(1024cb7f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t25 = cow_thiscall(g, COW_IMG(0x102517d0u), rd32(COW_IMG(0x106693fcu)), 2, 0x20u, 1u);
    t26 = g->edx;
    if ((int32_t)esi <= 30)
    {
        eax = t25;
        edx = t26;
        esi = esi + 1u;
        goto L_1024cb6a;
    }
    eax = t25;
    edx = t26;
    COW_AT(1024cb96)
L_1024cba1: ;
    COW_AT(1024cba1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385460u));
    t28 = g->edx;
    if (rd32(COW_IMG(0x10668fd8u)) == 0u)
    {
        eax = t27;
        edx = t28;
    }
    else
    {
        eax = t27;
        ecx = rd32(COW_IMG(0x10668fd8u));
        edx = t28;
    COW_AT(1024cbba)
        g->edx = edx;
        g->esp = sp0 - 8u;
        t29 = cow_call_regs(g, COW_IMG(0x10239480u), eax, ecx, g->edx, 0, 1, 2u);
        t30 = g->edx;
        eax = t29;
        edx = t30;
    }
    COW_AT(1024cbc1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t31 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103502e8u), 1u, 0u);
    t32 = g->ecx;
    t33 = g->edx;
    g->ecx = t32;
    t34 = cow_call_regs(g, COW_IMG(0x10036020u), g->eax, g->ecx, t33, 1, 1, 0u);
    t35 = g->ecx;
    t36 = g->edx;
    g->edx = t36;
    g->esp = sp0 - 0xcu;
    t37 = cow_cdecl(g, COW_IMG(0x10062e20u), 5, 0x81a9u, 0x746f6666u, 0u, 0u, 0u);
    t38 = g->edx;
    eax = t37;
    edx = t38;
    esi = 0x2du;
L_1024cbf8: ;
    COW_AT(1024cbf8)
    g->eax = eax;
    g->edx = edx;
    t39 = rd32(COW_IMG(0x103601bcu));
    g->esp = sp0 - 8u;
    t40 = cow_thiscall(g, COW_IMG(0x100daf30u), t39, 0);
    t41 = g->ecx;
    t42 = g->edx;
    if (esi != 1u)
    {
        eax = t40;
        edx = t42;
        esi = esi - 1u;
        goto L_1024cbf8;
    }
    eax = t40;
    ecx = t41;
    edx = t42;
    COW_AT(1024cc06)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t43 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0x17u);
    t44 = g->ecx;
    t45 = g->edx;
    if (t43 != 0u)
    {
        eax = t43;
        ecx = t44;
        edx = t45;
    COW_AT(1024cc17)
        loc_c = 1u;
    }
    else
    {
        eax = t43;
        ecx = t44;
        edx = t45;
    COW_AT(1024cc14)
        loc_c = eax;
    }
    COW_AT(1024cc19)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t46 = cow_cdecl(g, COW_IMG(0x10015360u), 1, loc_c);
    t47 = g->edx;
    g->edx = t47;
    t48 = rd32(COW_IMG(0x106693fcu));
    t49 = cow_thiscall(g, COW_IMG(0x102517d0u), t48, 2, 0x20u, 0u);
    t50 = g->ecx;
    t51 = g->edx;
    g->ecx = t50;
    g->edx = t51;
    t52 = cow_stdcall(g, COW_IMG(0x1024ce10u), 0);
    t53 = g->ecx;
    t54 = g->edx;
    eax = t52;
    ecx = t53;
    edx = t54;
L_1024cc35: ;
    COW_AT(1024cc35)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t55 = cow_stdcall(g, COW_IMG(0x10115200u), 0);
    t56 = g->ecx;
    t57 = g->edx;
    t58 = cow_stdcall(g, COW_IMG(0x100f76b0u), 0);
    t59 = rd32(COW_IMG(0x10456a28u));
    wr32(t59, 0xe0u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t59;
    return t58;
L_1024cb98: ;
    COW_AT(1024cb98)
    if (eax == 0u) goto L_1024cb6a;
    COW_AT(1024cb9c)
    if (eax == 1u) goto L_1024cb6a;
    goto L_1024cba1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1024cb00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1024cb24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024cb32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024cb6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1024cb7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1024cb96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1024cb98u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1024cb9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1024cba1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1024cbbau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1024cbc1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1024cbf8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1024cc06u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1024cc14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1024cc17u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1024cc19u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1024cc35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1024cb00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1024cb00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
