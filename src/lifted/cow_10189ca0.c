/* f_0x10189ca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10189ca0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_38;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
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
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10189cd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebp = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebp = rd32(sp0 - 0x48u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_10189cd8;
    case 0x10189cf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10189cf1;
    case 0x10189cf3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10189cf3;
    case 0x10189d21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; goto E_10189d21;
    case 0x10189d23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189d23;
    case 0x10189d27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189d27;
    case 0x10189d2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189d2e;
    case 0x10189d32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189d32;
    case 0x10189d34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189d34;
    case 0x10189d3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189d3e;
    case 0x10189d4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189d4c;
    case 0x10189d50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189d50;
    case 0x10189d54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189d54;
    case 0x10189d58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189d58;
    case 0x10189d5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189d5a;
    case 0x10189d5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189d5e;
    case 0x10189d68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189d68;
    case 0x10189d74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189d74;
    case 0x10189d88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189d88;
    case 0x10189db2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189db2;
    case 0x10189de2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_10189de2;
    case 0x10189de4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_10189de4;
    case 0x10189df9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10189df9;
    case 0x10189e01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); goto E_10189e01;
    case 0x10189e07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); goto E_10189e07;
    case 0x10189e17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_38 = rd32(sp0 - 0x38u); goto E_10189e17;
    default: break;
    }
#endif

    COW_AT(10189ca0)
    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    wr32(sp0 - 0x54u, sp0 - 0x40u);
    wr32(sp0 - 0x34u, self);
    g->eax = sp0 - 0x40u;
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    t1 = cow_thiscall(g, COW_IMG(0x10189c60u), self, 1, sp0 - 0x40u);
    t2 = g->edx;
    wr32(sp0 - 0x54u, 0x6f3c9000u);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x3cu, 1, 0x6f3c9000u);
    t4 = g->edx;
    wr32(sp0 - 0x38u, 0u);
    if (rd32(self + 0xcu) == 0u)
    {
        edi = 0u;
        loc_44 = in_ebx;
        loc_48 = in_ebp;
        loc_4c = in_esi;
        loc_50 = in_edi;
        goto L_10189e01;
    }
    eax = t3;
    edx = t4;
    esi = rd32(self + 0xcu);
    COW_AT(10189cd8)
    wr32(sp0 - 0x54u, 0x6f646e69u);
    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 0x5cu, sp0 - 0x2cu);
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t5 = cow_call_regs(g, COW_IMG(0x100724c0u), eax, esi, g->edx, 0, 3, sp0 - 0x2cu, 1u, 0x6f646e69u);
    t6 = g->edx;
    if (rd32(t5) == 0u)
    {
        eax = rd32(t5);
        edx = t6;
        ebx = 0u;
    }
    else
    {
        eax = rd32(t5);
        edx = t6;
    COW_AT(10189cf1)
        ebx = rd32(eax);
    }
    COW_AT(10189cf3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t7 = cow_thiscall(g, COW_IMG(0x100742a0u), sp0 - 0x1cu, 0);
    t8 = g->edx;
    wr32(sp0 - 0x54u, 0xffffffffu);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0x3du);
    wr32(sp0 - 0x60u, esi);
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, esi, 0x3du, 0u, 0xffffffffu);
    t10 = g->edx;
    wr32(sp0 - 0x54u, 0u);
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t12 = g->edx;
    if (t11 == 0u)
    {
        edi = 0u;
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_50 = rd32(sp0 - 0x50u);
        goto L_10189e01;
    }
    edx = t12;
    esi = t11;
    COW_AT(10189d21)
    ebp = self;
    edi = 0u;
L_10189d27: ;
    COW_AT(10189d27)
    if (rd32(esi + 0x28u) == 0u)
    {
        eax = rd32(esi + 0x28u);
    COW_AT(10189d32)
        ecx = 0u;
    }
    else
    {
        eax = rd32(esi + 0x28u);
    COW_AT(10189d2e)
        ecx = rd32(eax);
    }
    COW_AT(10189d34)
    if (ecx != ebx)
    {
        ecx = rd32(COW_IMG(0x1065cb04u));
        goto L_10189d4c;
    }
    ecx = rd32(COW_IMG(0x1065cb04u));
    COW_AT(10189d3e)
    if (rd32(ecx + 0x1bcu) == 0u)
    {
        edx = rd32(ecx + 0x1bcu);
        loc_38 = rd32(sp0 - 0x38u);
        goto L_10189de4;
    }
    edx = rd32(ecx + 0x1bcu);
L_10189d4c: ;
    COW_AT(10189d4c)
    if (ebx == 0u) goto L_10189d68;
    COW_AT(10189d50)
    if (eax == 0u)
    {
    COW_AT(10189d58)
        eax = 0u;
    }
    else
    {
    COW_AT(10189d54)
        eax = rd32(eax);
    }
    COW_AT(10189d5a)
    if (eax == ebx) goto L_10189d68;
    COW_AT(10189d5e)
    if (rd32(ecx + 0x1bcu) != 0u)
    {
        eax = rd32(ecx + 0x1bcu);
        loc_38 = rd32(sp0 - 0x38u);
        goto L_10189de4;
    }
    eax = rd32(ecx + 0x1bcu);
L_10189d68: ;
    COW_AT(10189d68)
    wr32(sp0 - 0x54u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t13 = cow_call_regs(g, COW_IMG(0x10189bd0u), eax, g->ecx, g->edx, 0, 1, esi);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        edx = t14;
        loc_38 = rd32(sp0 - 0x38u);
    }
    else
    {
        eax = t13;
    COW_AT(10189d74)
        wr32(sp0 - 0x54u, sp0 - 0x28u);
        g->eax = eax;
        g->edx = sp0 - 0x28u;
        t15 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        t16 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x28u);
        t17 = g->edx;
        if ((int32_t)rd32(t16) >= (int32_t)t15)
        {
            eax = t16;
            edx = t17;
            loc_38 = rd32(sp0 - 0x38u);
        }
        else
        {
            edx = t17;
    COW_AT(10189d88)
            wr32(sp0 - 0x54u, sp0 - 0x24u);
            g->eax = sp0 - 0x24u;
            g->edx = edx;
            g->esp = sp0 - 0x50u;
            t18 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x24u);
            t19 = g->edx;
            t20 = rd32(sp0 - 0x40u) - rd32(t18);
            wr32(sp0 - 0x54u, t20);
            cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x30u, 1, t20);
            if ((int32_t)rd32(sp0 - 0x30u) >= (int32_t)rd32(sp0 - 0x3cu))
            {
                eax = rd32(sp0 - 0x3cu);
                edx = rd32(sp0 - 0x30u);
                loc_38 = rd32(sp0 - 0x38u);
            }
            else
            {
                edx = rd32(sp0 - 0x30u);
    COW_AT(10189db2)
                wr32(sp0 - 0x54u, sp0 - 0x20u);
                g->eax = sp0 - 0x20u;
                g->edx = edx;
                g->esp = sp0 - 0x50u;
                t21 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x20u);
                t22 = g->edx;
                t23 = rd32(sp0 - 0x40u) - rd32(t21);
                wr32(sp0 - 0x54u, t23);
                g->eax = rd32(t21);
                t24 = rd32(t21);
                t25 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x2cu, 1, t23);
                t26 = rd32(sp0 - 0x2cu);
                wr32(sp0 - 0x54u, t26);
                g->edx = t26;
                t27 = cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x3cu, 1, t26);
                t28 = g->edx;
                wr32(sp0 - 0x38u, esi);
                eax = t27;
                edx = t28;
                loc_38 = esi;
            }
        }
    COW_AT(10189de2)
        edi = esi;
    }
L_10189de4: ;
    COW_AT(10189de4)
    wr32(sp0 - 0x54u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t29 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t30 = g->edx;
    if (t29 != 0u)
    {
        edx = t30;
        esi = t29;
        goto L_10189d23;
    }
    COW_AT(10189df9)
    if (rd32(sp0 - 0x38u) != 0u)
    {
        eax = rd32(sp0 - 0x38u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_50 = rd32(sp0 - 0x50u);
        goto L_10189e17;
    }
    loc_44 = rd32(sp0 - 0x44u);
    loc_48 = rd32(sp0 - 0x48u);
    loc_4c = rd32(sp0 - 0x4cu);
    loc_50 = rd32(sp0 - 0x50u);
L_10189e01: ;
    COW_AT(10189e01)
    if (edi != 0u)
    {
        eax = edi;
        goto L_10189e17;
    }
    COW_AT(10189e07)
    wr32(arg1, edi);
    g->ebx = loc_44;
    g->esi = loc_4c;
    g->edi = loc_50;
    g->ebp = loc_48;
    return;
L_10189d23: ;
    COW_AT(10189d23)
    ebp = rd32(sp0 - 0x34u);
    goto L_10189d27;
L_10189e17: ;
    COW_AT(10189e17)
    t31 = rd32(eax + 0x14u);
    wr32(arg1, t31);
    g->ebx = loc_44;
    g->esi = loc_4c;
    g->edi = loc_50;
    g->ebp = loc_48;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10189ca0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10189cd8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebp = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x50u;
        g->ebx = 0u;
        g->edi = 0u;
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x34u, self);
        (void)sp0;
        return 1;
    }
    case 0x10189cf1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = 0u;
        wr32(sp0 - 0x5cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10189cf3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = 0u;
        wr32(sp0 - 0x5cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10189d21u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10189d23u:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189d27u:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189d2eu:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189d32u:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189d34u:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189d3eu:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189d4cu:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189d50u:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189d54u:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189d58u:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189d5au:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189d5eu:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189d68u:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189d74u:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189d88u:
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
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x10189db2u:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189de2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189de4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189df9u:
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
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189e01u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189e07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10189e17u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10189ca0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10189ca0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
