/* f_0x10293bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10293bc0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
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
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10293bdau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10293bda;
    case 0x10293bddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10293bdd;
    case 0x10293beau: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_ebp = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10293bea;
    case 0x10293c12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_10293c12;
    case 0x10293c13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_10293c13;
    case 0x10293c41u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10293c41;
    case 0x10293c48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10293c48;
    case 0x10293c4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10293c4d;
    case 0x10293c54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10293c54;
    case 0x10293c59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10293c59;
    case 0x10293c60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10293c60;
    case 0x10293c6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10293c6a;
    case 0x10293c6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10293c6f;
    case 0x10293ccdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10293ccd;
    case 0x10293cdeu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_ebp = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10293cde;
    case 0x10293d0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_10293d0e;
    default: break;
    }
#endif

    COW_AT(10293bc0)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, arg1);
    wr32(sp0 - 0x10u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10293d20u), 2, sp0 + 4u, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        ebx = t1;
        goto L_10293bdd;
    }
    eax = t1;
    COW_AT(10293bda)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax;
L_10293bdd: ;
    COW_AT(10293bdd)
    wr32(sp0 - 0xcu, in_ebp);
    if (arg1 == 0u) goto L_10293cde;
    COW_AT(10293bea)
    wr32(sp0 - 0x10u, 0x5aeu);
    wr32(sp0 - 0x14u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x18u, 4u);
    t4 = rd32(ebx + 0x1cu);
    wr32(sp0 - 0x1cu, t4);
    g->eax = arg1;
    g->ecx = t4;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t4, 4u, COW_IMG(0x103bb254u), 0x5aeu, in_ebp);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(ebx + 0x34u, t5);
    if ((int32_t)rd32(ebx + 0x1cu) <= 0)
    {
        eax = rd32(ebx + 0x1cu);
        ecx = t6;
        edx = t7;
        goto L_10293d0e;
    }
    eax = rd32(ebx + 0x1cu);
    ecx = t6;
    edx = t7;
    COW_AT(10293c12)
    wr32(sp0 - 0x10u, in_esi);
    ebp = 0u;
    loc_10 = in_esi;
L_10293c13: ;
    COW_AT(10293c13)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_stdcall(g, COW_IMG(0x10293ed0u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, t8 + 8u);
    g->ecx = t9;
    g->edx = t10;
    cow_cdecl(g, COW_IMG(0x10292420u), 4, t8 + 8u, 4u, 1u, arg1);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 4u);
    wr32(sp0 - 0x30u, t8 + 0xcu);
    g->ecx = t11;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, t8 + 0xcu, 4u, 1u, arg1, rd32(sp0 - 0x20u), 4u, 1u, arg1, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t13 = g->ecx;
    if (rd32(t8 + 0xcu) != 2u)
    {
        eax = rd32(t8 + 0xcu);
        ecx = t13;
        esi = t8;
    COW_AT(10293c48)
        if (eax != 4u)
        {
    COW_AT(10293c54)
            if (eax != 8u)
            {
    COW_AT(10293c60)
                if (eax == 0x10u)
                {
                    eax = COW_IMG(0x102935e0u);
                }
                else
                {
    COW_AT(10293c6a)
                    eax = COW_IMG(0x102934d0u);
                }
            }
            else
            {
    COW_AT(10293c59)
                eax = COW_IMG(0x102935b0u);
            }
        }
        else
        {
    COW_AT(10293c4d)
            eax = COW_IMG(0x10293560u);
        }
    }
    else
    {
        ecx = t13;
        esi = t8;
    COW_AT(10293c41)
        eax = COW_IMG(0x102934e0u);
    }
    COW_AT(10293c6f)
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, esi + 0x10u);
    wr32(esi + 0x14u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = esi + 0x10u;
    g->esp = sp0 - 0x10u;
    t14 = cow_cdecl(g, COW_IMG(0x10292420u), 4, esi + 0x10u, 4u, 1u, arg1);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 4u);
    wr32(sp0 - 0x30u, esi);
    g->ecx = t15;
    g->edx = t16;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, esi, 4u, 1u, arg1, rd32(sp0 - 0x20u), 4u, 1u, arg1, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x34u, 0x5bbu);
    wr32(sp0 - 0x38u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x3cu, 1u);
    t19 = rd32(esi + 8u);
    wr32(sp0 - 0x40u, t19);
    g->eax = t19;
    g->edx = t18;
    g->esp = sp0 - 0x2cu;
    t20 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t19, 1u, COW_IMG(0x103bb254u), 0x5bbu, rd32(sp0 - 0x30u));
    t21 = g->edx;
    wr32(sp0 - 0x44u, arg1);
    t22 = rd32(esi + 8u);
    wr32(sp0 - 0x48u, t22);
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, t20);
    wr32(esi + 4u, t20);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, t20, 1u, t22, arg1, rd32(sp0 - 0x40u), 1u, COW_IMG(0x103bb254u), 0x5bbu, rd32(sp0 - 0x30u), 4u, 1u);
    t23 = rd32(ebx + 0x34u);
    wr32(ebp * 4u + t23, esi);
    t24 = rd32(esi);
    wr32(ebp * 4u + rd32(ebx + 0x38u), t24);
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(ebx + 0x1cu))
    {
        eax = rd32(ebx + 0x1cu);
        ecx = t24;
        edx = t23;
        ebp = ebp + 1u;
        loc_10 = rd32(sp0 - 0x10u);
        goto L_10293c13;
    }
    eax = rd32(ebx + 0x1cu);
    ecx = t24;
    edx = t23;
    COW_AT(10293ccd)
    t25 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, ebx);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10293e60u), 3, ebx, arg1, rd32(sp0 - 0xcu));
    g->ebx = rd32(sp0 - 4u);
    g->esi = t25;
    g->edi = rd32(sp0 - 8u);
    g->ebp = rd32(sp0 - 0xcu);
    return ebx;
L_10293cde: ;
    COW_AT(10293cde)
    wr32(sp0 - 0x10u, 0x5c5u);
    wr32(sp0 - 0x14u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x18u, 4u);
    t26 = rd32(ebx + 0x1cu) * rd32(ebx + 0x24u);
    wr32(sp0 - 0x1cu, t26);
    g->eax = arg1;
    g->edx = t26;
    g->esp = sp0 - 8u;
    t27 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t26, 4u, COW_IMG(0x103bb254u), 0x5c5u, in_ebp);
    t28 = g->edx;
    wr32(sp0 - 0x20u, arg1);
    t29 = rd32(ebx + 0x1cu) * rd32(ebx + 0x24u);
    wr32(sp0 - 0x24u, t29);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, t27);
    wr32(ebx + 0x2cu, t27);
    g->ecx = t29;
    g->edx = t28;
    g->esp = sp0;
    t30 = cow_cdecl(g, COW_IMG(0x10292420u), 11, t27, 4u, t29, arg1, rd32(sp0 - 0x1cu), 4u, COW_IMG(0x103bb254u), 0x5c5u, in_ebp, in_edi, in_ebx);
    t31 = g->ecx;
    t32 = g->edx;
    eax = t30;
    ecx = t31;
    edx = t32;
L_10293d0e: ;
    COW_AT(10293d0e)
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, ebx);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10293e60u), 3, ebx, arg1, rd32(sp0 - 0xcu));
    g->ebx = rd32(sp0 - 4u);
    g->esi = in_esi;
    g->edi = rd32(sp0 - 8u);
    g->ebp = rd32(sp0 - 0xcu);
    return ebx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10293bc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10293bdau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10293bddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10293beau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_ebp = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1;
        g->edi = arg1;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10293c12u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        g->ebp = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10293c13u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10293c41u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10293c48u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10293c4du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10293c54u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10293c59u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10293c60u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10293c6au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10293c6fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10293ccdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10293cdeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_ebp = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1;
        g->edi = arg1;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10293d0eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10293bc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10293bc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
