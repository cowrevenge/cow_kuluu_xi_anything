/* f_0x102751f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102751f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_8c;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t loc_a0;
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
    cow_frame(g, sp0, 216u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10275229u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_10275229;
    case 0x10275239u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10275239;
    case 0x10275251u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10275251;
    case 0x10275256u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10275256;
    case 0x1027526cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_1027526c;
    case 0x1027529du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027529d;
    case 0x102752a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_102752a1;
    default: break;
    }
#endif

    COW_AT(102751f0)
    wr32(sp0 - 0x94u, in_ebx);
    wr32(sp0 - 0x98u, in_ebp);
    wr32(sp0 - 0x9cu, in_esi);
    wr32(sp0 - 0xa0u, in_edi);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x90u, 0u);
    wr32(sp0 - 0x84u, 0u);
    if (rd32(COW_IMG(0x1099cf4cu) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u) >= rd32(COW_IMG(0x1099cf50u) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u))
    {
        eax = rd32(COW_IMG(0x1099cf50u) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u);
        ebx = 0u;
        ebp = 0u;
        loc_94 = in_ebx;
        loc_98 = in_ebp;
        loc_9c = in_esi;
        loc_a0 = in_edi;
        loc_8c = 0u;
        loc_90 = 0u;
        loc_84 = 0u;
        goto L_102752a1;
    }
    eax = rd32(COW_IMG(0x1099cf50u) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u);
    ecx = self;
    edx = in_edx;
    ebp = 0u;
    esi = rd32(COW_IMG(0x1099cf4cu) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u);
    edi = COW_IMG(0x1099cef8u) + rd32(COW_IMG(0x1099d1f8u)) * 0x60u;
    loc_94 = in_ebx;
    loc_98 = in_ebp;
    loc_9c = in_esi;
    loc_a0 = in_edi;
    loc_8c = 0u;
    loc_88 = 0u;
    loc_90 = 0u;
    loc_84 = 0u;
L_10275229: ;
    COW_AT(10275229)
    wr32(sp0 - 0xa4u, esi + 0x10u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xa0u;
    t1 = cow_cdecl(g, COW_IMG(0x10275310u), 1, esi + 0x10u);
    t2 = g->ecx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        ebx = esi + 0x10u;
    COW_AT(10275251)
        if (eax == 3u)
        {
            loc_8c = rd32(sp0 - 0x8cu);
            loc_90 = rd32(sp0 - 0x90u);
            loc_88 = rd32(sp0 - 0x88u);
            loc_84 = rd32(sp0 - 0x84u);
        }
        else
        {
    COW_AT(10275256)
            t5 = rd32(esi + 4u) + rd32(sp0 - 0x88u);
            wr32(sp0 - 0x88u, t5);
            t6 = rd32(sp0 - 0x84u) + 1u;
            wr32(sp0 - 0x84u, t6);
            eax = t6;
            ecx = rd32(esi + 4u);
            loc_8c = rd32(sp0 - 0x8cu);
            loc_90 = rd32(sp0 - 0x90u);
            loc_88 = t5;
            loc_84 = t6;
        }
    }
    else
    {
        ebx = esi + 0x10u;
    COW_AT(10275239)
        t3 = rd32(esi + 4u) + rd32(sp0 - 0x8cu);
        wr32(sp0 - 0x8cu, t3);
        t4 = rd32(sp0 - 0x90u) + 1u;
        wr32(sp0 - 0x90u, t4);
        eax = t4;
        ecx = t3;
        loc_8c = t3;
        loc_90 = t4;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
    }
    COW_AT(1027526c)
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, sp0 - 0x80u);
    wr32(sp0 - 0xacu, ebx);
    g->ebx = ebx;
    g->esp = sp0 - 0xa0u;
    cow_call_regs(g, COW_IMG(0x102756c0u), g->eax, ecx, sp0 - 0x80u, 1, 3, ebx, sp0 - 0x80u, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0xb0u, sp0 - 0x80u);
    wr32(sp0 - 0xb4u, COW_IMG(0x10361dc0u));
    g->ebx = ebx;
    g->eax = sp0 - 0x80u;
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0xacu;
    t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10361dc0u), sp0 - 0x80u);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0xb8u, esi);
    g->ecx = t10;
    g->edx = t11;
    g->esp = sp0 - 0xb4u;
    t12 = cow_cdecl(g, COW_IMG(0x10275340u), 1, esi);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 < rd32(edi + 0x58u))
    {
        eax = rd32(edi + 0x58u);
        ecx = t13;
        edx = t14;
        ebp = ebp + 0x10u;
        esi = t12;
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_84 = rd32(sp0 - 0x84u);
        goto L_10275229;
    }
    eax = rd32(edi + 0x58u);
    ebp = ebp + 0x10u;
    COW_AT(1027529d)
    ebx = rd32(sp0 - 0x88u);
    loc_94 = rd32(sp0 - 0x94u);
    loc_98 = rd32(sp0 - 0x98u);
    loc_9c = rd32(sp0 - 0x9cu);
    loc_a0 = rd32(sp0 - 0xa0u);
    loc_8c = rd32(sp0 - 0x8cu);
    loc_90 = rd32(sp0 - 0x90u);
    loc_84 = rd32(sp0 - 0x84u);
L_102752a1: ;
    COW_AT(102752a1)
    wr32(sp0 - 0xa4u, loc_90);
    wr32(sp0 - 0xa8u, loc_8c);
    wr32(sp0 - 0xacu, COW_IMG(0x103b292cu));
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = loc_90;
    g->edx = loc_8c;
    g->esp = sp0 - 0xa4u;
    t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b292cu), loc_8c);
    t16 = g->ecx;
    t17 = g->edx;
    t18 = rd32(sp0 - 0x84u);
    wr32(sp0 - 0xb0u, t18);
    wr32(sp0 - 0xb4u, ebx);
    wr32(sp0 - 0xb8u, COW_IMG(0x103b2908u));
    g->ebx = ebx;
    g->ecx = t16;
    g->edx = t17;
    g->esp = sp0 - 0xb0u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2908u), ebx);
    t19 = g->ecx;
    t20 = g->edx;
    t21 = t18 + rd32(sp0 - 0x90u);
    wr32(sp0 - 0xbcu, t21);
    wr32(sp0 - 0xc0u, ebp);
    wr32(sp0 - 0xc4u, COW_IMG(0x103b28e4u));
    g->ebx = ebx;
    g->eax = rd32(sp0 - 0x90u);
    g->ecx = t19;
    g->edx = t20;
    t22 = rd32(sp0 - 0x90u);
    g->esp = sp0 - 0xbcu;
    t23 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b28e4u), ebp);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0xc8u, COW_IMG(0x103b28b4u));
    g->ebx = ebx;
    g->ecx = t24;
    g->edx = t25;
    g->esp = sp0 - 0xc0u;
    t26 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b28b4u), COW_IMG(0x103b28e4u));
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0xccu, t21);
    t29 = ebp + ebx + rd32(sp0 - 0x8cu);
    wr32(sp0 - 0xd0u, t29);
    wr32(sp0 - 0xd4u, COW_IMG(0x103b2890u));
    g->ebx = ebx;
    g->edx = t28;
    g->esp = sp0 - 0xccu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2890u), t29);
    t30 = g->edx;
    g->ebx = rd32(sp0 - 0x94u);
    g->esi = rd32(sp0 - 0x9cu);
    g->edi = rd32(sp0 - 0xa0u);
    g->ebp = rd32(sp0 - 0x98u);
    g->edx = t30;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102751f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10275229u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x10275239u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x10275251u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x10275256u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x1027526cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    case 0x1027529du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xa0u;
        wr32(sp0 - 0xb0u, sp0 - 0x80u);
        wr32(sp0 - 0xa8u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x102752a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0xa0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102751f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102751f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
