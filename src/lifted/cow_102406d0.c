/* f_0x102406d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102406d0(Guest* g)
{
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10240703u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10240703;
    case 0x10240708u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10240708;
    case 0x1024072eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1024072e;
    case 0x1024073fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1024073f;
    case 0x10240745u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10240745;
    case 0x10240757u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10240757;
    case 0x1024075cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1024075c;
    case 0x10240776u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10240776;
    case 0x10240784u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10240784;
    case 0x102407f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102407f5;
    case 0x10240803u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10240803;
    case 0x1024082eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1024082e;
    case 0x1024083au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1024083a;
    case 0x1024083fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1024083f;
    case 0x10240849u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10240849;
    default: break;
    }
#endif

    COW_AT(102406d0)
    t1 = rd32(COW_IMG(0x10669078u));
    wr32(t1 + 0x14u, 2u);
    g->eax = t1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10669050u));
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x1023ffd0u), t2, 0);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    cow_stdcall(g, COW_IMG(0x1023dbb0u), 0);
    t6 = g->edx;
    wr32(rd32(COW_IMG(0x10669050u)) + 0x1cu, 0u);
    if (rd32(COW_IMG(0x10669054u)) != 1u)
    {
        eax = rd32(COW_IMG(0x10669054u));
        edx = t6;
        goto L_10240708;
    }
    COW_AT(10240703)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return 0u;
L_10240708: ;
    COW_AT(10240708)
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103886d4u), 1u, 0u);
    t8 = g->edx;
    g->ebx = 0u;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103886c0u), 1u, 0u);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    esi = 0u;
L_1024072e: ;
    COW_AT(1024072e)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t12 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, 0u, in_esi, in_ebx);
    t13 = g->ecx;
    t14 = g->edx;
    if ((int32_t)t12 < 0)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_10240803;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    COW_AT(1024073f)
    if ((int32_t)(esi + 1u) < 10)
    {
        esi = esi + 1u;
        goto L_1024072e;
    }
    COW_AT(10240745)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_stdcall(g, COW_IMG(0x1023e510u), 0);
    t16 = g->ecx;
    t17 = g->edx;
    g->ecx = t16;
    g->edx = t17;
    t18 = cow_stdcall(g, COW_IMG(0x1023e4c0u), 0);
    t19 = g->ecx;
    t20 = g->edx;
    if ((int32_t)t18 < 0)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        goto L_102407f5;
    }
    eax = t18;
    ecx = t19;
    COW_AT(10240757)
L_1024075c: ;
    COW_AT(1024075c)
    t21 = rd32(COW_IMG(0x10669050u)) + 0x1cu;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t21;
    g->esp = sp0;
    t22 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, t21, in_esi, in_ebx);
    t23 = g->ecx;
    t24 = g->edx;
    if ((int32_t)t22 < 0)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        goto L_10240803;
    }
    ecx = t23;
    edx = t24;
    COW_AT(10240776)
    if (rd32(rd32(COW_IMG(0x10669050u)) + 0x18u) != 4u)
    {
        eax = rd32(COW_IMG(0x10669050u));
        goto L_1024082e;
    }
    eax = rd32(COW_IMG(0x10669050u));
    COW_AT(10240784)
    t25 = rd32(eax + 8u);
    wr8(t25 + 0x5du, 1u);
    g->eax = t25;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_thiscall(g, COW_IMG(0x1019d8b0u), rd32(COW_IMG(0x10662784u)), 0);
    t27 = g->edx;
    g->ebx = 0u;
    g->edx = t27;
    t28 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103886acu), 1u, 0u);
    t29 = g->edx;
    t30 = rd32(COW_IMG(0x10662784u)) + 0x20u;
    g->edx = t29;
    g->esp = sp0;
    t31 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, t30, in_esi, in_ebx);
    t32 = g->edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103886acu));
    t33 = rd32(COW_IMG(0x10669050u));
    wr32(t33 + 0x1cu, 0u);
    t34 = rd32(COW_IMG(0x10669050u));
    wr8(rd32(t34 + 8u) + 0x5du, 0u);
    g->eax = t34;
    g->edx = t33;
    t35 = rd32(COW_IMG(0x10669050u));
    t36 = cow_thiscall(g, COW_IMG(0x1023ffd0u), t35, 0);
    t37 = g->ecx;
    t38 = g->edx;
    g->ecx = t37;
    g->edx = t38;
    t39 = cow_stdcall(g, COW_IMG(0x1023e4c0u), 0);
    t40 = g->ecx;
    t41 = g->edx;
    if ((int32_t)t39 >= 0)
    {
        eax = t39;
        ecx = t40;
        goto L_1024075c;
    }
    eax = t39;
    ecx = t40;
    edx = t41;
L_102407f5: ;
    COW_AT(102407f5)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t49 = cow_stdcall(g, COW_IMG(0x1023e4c0u), 0);
    t50 = g->ecx;
    t51 = g->edx;
    g->ecx = t50;
    g->edx = t51;
    t52 = cow_cdecl(g, COW_IMG(0x1023e4a0u), 1, t49);
    t53 = g->ecx;
    t54 = g->edx;
    eax = t52;
    ecx = t53;
    edx = t54;
L_10240803: ;
    COW_AT(10240803)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t55 = cow_stdcall(g, COW_IMG(0x1023e570u), 0);
    t56 = g->edx;
    g->edx = t56;
    t57 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103886c0u));
    t58 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103886d4u));
    g->ebx = in_ebx;
    g->esi = in_esi;
    return 0xfffffffeu;
L_1024082e: ;
    COW_AT(1024082e)
    if (rd32(COW_IMG(0x10456aa4u)) != 0u)
    {
        esi = rd32(eax + 0x18u);
        eax = rd32(COW_IMG(0x10456aa4u));
    }
    else
    {
        esi = rd32(eax + 0x18u);
        eax = rd32(COW_IMG(0x10456aa4u));
    COW_AT(1024083a)
        if (esi == 1u)
        {
    COW_AT(1024083f)
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t42 = cow_call_regs(g, COW_IMG(0x10037a70u), eax, g->ecx, g->edx, 1, 1, 0x1eu);
            t43 = g->ecx;
            t44 = g->edx;
            eax = t42;
            ecx = t43;
            edx = t44;
        }
    }
    COW_AT(10240849)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t45 = cow_stdcall(g, COW_IMG(0x1023e570u), 0);
    t46 = g->edx;
    g->edx = t46;
    t47 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103886c0u));
    t48 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103886d4u));
    g->ebx = in_ebx;
    g->esi = in_esi;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102406d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10240703u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10240708u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024072eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024073fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10240745u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10240757u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024075cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        g->esi = 4u;
        (void)sp0;
        return 1;
    }
    case 0x10240776u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        g->esi = 4u;
        (void)sp0;
        return 1;
    }
    case 0x10240784u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        g->esi = 4u;
        (void)sp0;
        return 1;
    }
    case 0x102407f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10240803u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1024082eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1024083au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1024083fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10240849u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102406d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102406d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
