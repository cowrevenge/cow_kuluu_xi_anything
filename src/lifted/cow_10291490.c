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
    uint32_t edi;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029149du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_1029149d;
    case 0x102914acu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_102914ac;
    case 0x102914bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_102914bb;
    case 0x102914c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_102914c4;
    case 0x102914ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102914ce;
    case 0x102914dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102914db;
    case 0x102914e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102914e1;
    case 0x102914ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102914eb;
    case 0x102914f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102914f7;
    case 0x102914fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102914fd;
    case 0x10291507u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10291507;
    case 0x10291513u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10291513;
    case 0x10291519u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10291519;
    case 0x10291523u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10291523;
    case 0x1029152fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029152f;
    case 0x10291538u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10291538;
    case 0x10291557u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10291557;
    case 0x1029155du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029155d;
    case 0x10291573u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10291573;
    case 0x10291579u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10291579;
    case 0x1029158fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1029158f;
    case 0x10291595u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_10291595;
    case 0x102915a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102915a3;
    case 0x102915acu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102915ac;
    case 0x102915b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102915b1;
    case 0x102915bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102915bc;
    case 0x102915bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102915bf;
    default: break;
    }
#endif

    COW_AT(10291490)
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
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1029149d)
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, COW_IMG(0x103baf24u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baf24u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(102914ac)
    if (arg2 == 0u)
    {
        edi = in_edi;
    }
    else
    {
    COW_AT(102914bb)
        if (arg2 == 3u)
        {
            edi = in_edi;
        }
        else
        {
    COW_AT(102914c4)
            wr32(sp0 - 0x10u, in_edi);
            wr32(sp0 - 0x14u, arg3 + 1u);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_edi, rd32(sp0 - 0xcu));
            t7 = g->ecx;
            t8 = g->edx;
            ecx = t7;
            edx = t8;
    COW_AT(102914ce)
            wr32(sp0 - 0x18u, rd32(arg1));
            wr32(sp0 - 0x1cu, COW_IMG(0x103b41dcu));
            g->ebx = arg2;
            g->eax = rd32(arg1);
            g->ecx = ecx;
            g->edx = edx;
            t9 = rd32(arg1);
            g->esp = sp0 - 0x14u;
            t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b41dcu), t9);
            t11 = g->ecx;
            t12 = g->edx;
            eax = t10;
            ecx = t11;
            edx = t12;
    COW_AT(102914db)
            wr32(sp0 - 0x20u, arg3 + 1u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t13 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103b41dcu), rd32(sp0 - 0x18u));
            t14 = g->ecx;
            t15 = g->edx;
            eax = t13;
            ecx = t14;
            edx = t15;
    COW_AT(102914e1)
            wr32(sp0 - 0x24u, COW_IMG(0x103baf14u));
            g->ebx = arg2;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t16 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baf14u), rd32(sp0 - 0x20u));
            t17 = g->edx;
            eax = t16;
            edx = t17;
    COW_AT(102914eb)
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x2cu, arg2);
            wr32(sp0 - 0x30u, arg1 + 0x5cu);
            g->eax = eax;
            g->ecx = arg1 + 0x5cu;
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t18 = cow_cdecl(g, COW_IMG(0x10274ad0u), 3, arg1 + 0x5cu, arg2, 0u);
            t19 = g->ecx;
            t20 = g->edx;
            eax = t18;
            ecx = t19;
            edx = t20;
    COW_AT(102914f7)
            wr32(sp0 - 0x34u, arg3 + 1u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t21 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
            t22 = g->ecx;
            t23 = g->edx;
            eax = t21;
            ecx = t22;
            edx = t23;
    COW_AT(102914fd)
            wr32(sp0 - 0x38u, COW_IMG(0x103baf08u));
            g->ebx = arg2;
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 0x30u;
            t24 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baf08u), rd32(sp0 - 0x34u));
            t25 = g->ecx;
            eax = t24;
            ecx = t25;
    COW_AT(10291507)
            wr32(sp0 - 0x3cu, 0u);
            wr32(sp0 - 0x40u, arg2);
            wr32(sp0 - 0x44u, arg1 + 0x68u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = arg1 + 0x68u;
            g->esp = sp0 - 0x38u;
            t26 = cow_cdecl(g, COW_IMG(0x1027b4a0u), 3, arg1 + 0x68u, arg2, 0u);
            t27 = g->ecx;
            t28 = g->edx;
            eax = t26;
            ecx = t27;
            edx = t28;
    COW_AT(10291513)
            wr32(sp0 - 0x48u, arg3 + 1u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x3cu;
            t29 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
            t30 = g->ecx;
            t31 = g->edx;
            eax = t29;
            ecx = t30;
            edx = t31;
    COW_AT(10291519)
            wr32(sp0 - 0x4cu, COW_IMG(0x103baefcu));
            g->ebx = arg2;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x44u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baefcu), rd32(sp0 - 0x48u));
            t32 = g->ecx;
            t33 = g->edx;
            ecx = t32;
            edx = t33;
    COW_AT(10291523)
            wr32(sp0 - 0x50u, 0u);
            wr32(sp0 - 0x54u, arg2);
            wr32(sp0 - 0x58u, arg1 + 0x78u);
            g->eax = arg1 + 0x78u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x4cu;
            t34 = cow_cdecl(g, COW_IMG(0x10274ad0u), 3, arg1 + 0x78u, arg2, 0u);
            t35 = g->ecx;
            t36 = g->edx;
            eax = t34;
            ecx = t35;
            edx = t36;
    COW_AT(1029152f)
            wr32(sp0 - 0x14u, arg3 + 1u);
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    COW_AT(10291538)
            t37 = rd32(arg1 + 0x8cu);
            wr32(sp0 - 0x18u, t37);
            t38 = rd32(arg1 + 0x88u);
            wr32(sp0 - 0x1cu, t38);
            t39 = rd32(arg1 + 0x84u);
            wr32(sp0 - 0x20u, t39);
            wr32(sp0 - 0x24u, COW_IMG(0x103baeecu));
            g->ebx = arg2;
            g->eax = t39;
            g->ecx = t37;
            g->edx = t38;
            g->esp = sp0 - 0x1cu;
            t40 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baeecu), t39);
            t41 = g->ecx;
            t42 = g->edx;
            eax = t40;
            ecx = t41;
            edx = t42;
    COW_AT(10291557)
            wr32(sp0 - 0x28u, arg3 + 1u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t43 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103baeecu), rd32(sp0 - 0x20u));
            t44 = g->ecx;
            t45 = g->edx;
            eax = t43;
            ecx = t44;
            edx = t45;
    COW_AT(1029155d)
            d46 = (double)rdf32(arg1 + 0x94u);
            wrf64(sp0 - 0x18u, d46);
            wr32(sp0 - 0x1cu, COW_IMG(0x103baee0u));
            g->ebx = arg2;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t47 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baee0u), cow_dlo(d46));
            t48 = g->ecx;
            t49 = g->edx;
            eax = t47;
            ecx = t48;
            edx = t49;
    COW_AT(10291573)
            wr32(sp0 - 0x20u, arg3 + 1u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t50 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103baee0u), rd32(sp0 - 0x18u));
            t51 = g->ecx;
            t52 = g->edx;
            eax = t50;
            ecx = t51;
            edx = t52;
    COW_AT(10291579)
            d53 = (double)rdf32(arg1 + 0x98u);
            wrf64(sp0 - 0x18u, d53);
            wr32(sp0 - 0x1cu, COW_IMG(0x103baed0u));
            g->ebx = arg2;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t54 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baed0u), cow_dlo(d53));
            t55 = g->ecx;
            t56 = g->edx;
            eax = t54;
            ecx = t55;
            edx = t56;
    COW_AT(1029158f)
            wr32(sp0 - 0x20u, arg3 + 1u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t57 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103baed0u), rd32(sp0 - 0x18u));
            t58 = g->ecx;
            t59 = g->edx;
            eax = t57;
            ecx = t58;
            edx = t59;
    COW_AT(10291595)
            wr32(sp0 - 0x24u, arg1 + 0x1cu);
            wr32(sp0 - 0x28u, COW_IMG(0x103baec0u));
            g->ebx = arg2;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t60 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103baec0u), arg1 + 0x1cu);
            t61 = g->ecx;
            t62 = g->edx;
            eax = t60;
            ecx = t61;
            edx = t62;
    COW_AT(102915a3)
            if (arg2 == 1u)
            {
                edi = rd32(sp0 - 0x10u);
            }
            else
            {
                edi = rd32(sp0 - 0x10u);
    COW_AT(102915ac)
                if (arg2 != 4u)
                {
    COW_AT(102915b1)
                    wr32(sp0 - 0x10u, arg3 + 2u);
                    wr32(sp0 - 0x14u, arg2);
                    wr32(sp0 - 0x18u, arg1 + 0x1cu);
                    g->esp = sp0 - 0xcu;
                    cow_cdecl(g, COW_IMG(0x10280d30u), 3, arg1 + 0x1cu, arg2, arg3 + 2u);
    COW_AT(102915bc)
                }
            }
        }
    }
    COW_AT(102915bf)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = edi;
    g->ebp = rd32(sp0 - 8u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10291490(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029149du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102914acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = arg3;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102914bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102914c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102914ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102914dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp0 - 0x1cu, COW_IMG(0x103b41dcu));
        (void)sp0;
        return 1;
    }
    case 0x102914e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x20u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102914ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x24u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102914f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x30u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102914fdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x34u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x10291507u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x38u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x10291513u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x44u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x10291519u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x48u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x10291523u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029152fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x58u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x10291538u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x10291557u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x24u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp0 - 0x24u, COW_IMG(0x103baeecu));
        (void)sp0;
        return 1;
    }
    case 0x1029155du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x28u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x10291573u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp0 - 0x1cu, COW_IMG(0x103baee0u));
        (void)sp0;
        return 1;
    }
    case 0x10291579u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x20u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x1029158fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp0 - 0x1cu, COW_IMG(0x103baed0u));
        (void)sp0;
        return 1;
    }
    case 0x10291595u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102915a3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1 + 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102915acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1 + 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102915b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->ebp = arg3;
        g->esi = arg1 + 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102915bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102915bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10291490(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10291490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
