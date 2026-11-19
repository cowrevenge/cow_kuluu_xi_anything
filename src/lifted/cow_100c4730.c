/* f_0x100c4730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_100c4730(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100c4734u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100c4734;
    case 0x100c4737u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100c4737;
    case 0x100c473bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100c473b;
    case 0x100c4746u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_100c4746;
    case 0x100c475du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_100c475d;
    case 0x100c476eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_100c476e;
    case 0x100c4773u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_100c4773;
    case 0x100c477eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100c477e;
    case 0x100c4788u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100c4788;
    case 0x100c478eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100c478e;
    case 0x100c47a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_100c47a5;
    case 0x100c47abu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_100c47ab;
    case 0x100c47bcu: ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_100c47bc;
    case 0x100c47c0u: ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_100c47c0;
    case 0x100c47c9u: ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_100c47c9;
    case 0x100c47d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100c47d4;
    case 0x100c47d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100c47d8;
    case 0x100c47dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100c47df;
    default: break;
    }
#endif

    COW_AT(100c4730)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    edx = in_edx;
    loc_4 = in_esi;
    loc_8 = in_edi;
L_100c4734: ;
    COW_AT(100c4734)
    esi = rd32(self + 0x68u);
L_100c4737: ;
    COW_AT(100c4737)
    if (esi == 0u) goto L_100c477e;
    COW_AT(100c473b)
    g->eax = rd32(esi);
    g->edx = edx;
    t1 = rd32(esi);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), esi, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        edx = t3;
        goto L_100c476e;
    }
    eax = t2;
    COW_AT(100c4746)
    wr32(sp0 - 0xcu, COW_IMG(0x1032b7f8u));
    g->eax = eax;
    g->edx = rd32(esi);
    t4 = rd32(esi);
    g->esp = sp0 - 8u;
    t5 = cow_thiscall_cdecl(g, rd32(t4 + 0x18u), esi, 1, COW_IMG(0x1032b7f8u));
    t6 = g->edx;
    t7 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t5, t6, 1, COW_IMG(0x1032b7f8u));
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        edx = t8;
        goto L_100c476e;
    }
    edx = t8;
    COW_AT(100c475d)
    g->eax = rd32(esi);
    g->edx = edx;
    t9 = rd32(esi);
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, rd32(t9 + 0x18u), esi, 0);
    t11 = g->ecx;
    t12 = g->edx;
    if (rd8(t10 + 0x143u) != 0u)
    {
        eax = t10;
        goto L_100c4773;
    }
    edx = t12;
L_100c476e: ;
    COW_AT(100c476e)
    esi = rd32(esi + 0x2cu);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    goto L_100c4737;
L_100c4773: ;
    COW_AT(100c4773)
    wr32(sp0 - 0xcu, 1u);
    g->edx = rd32(eax);
    t13 = rd32(eax);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(t13 + 0x18u), eax, 1, 1u);
    t14 = g->edx;
    edx = t14;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    goto L_100c4734;
L_100c477e: ;
    COW_AT(100c477e)
    if (rd32(self + 0xb4u) == 0u)
    {
        eax = rd32(self + 0xb4u);
    }
    else
    {
        eax = rd32(self + 0xb4u);
    COW_AT(100c4788)
        if (rd32(eax) != 0u)
        {
            ecx = rd32(eax);
    COW_AT(100c478e)
            wr32(sp0 - 0xcu, arg3);
            wr32(sp0 - 0x10u, 7u);
            wr32(sp0 - 0x14u, sp0 + 0xcu);
            g->eax = arg3;
            g->edx = sp0 + 0xcu;
            g->esp = sp0 - 8u;
            t15 = cow_thiscall(g, COW_IMG(0x10072290u), ecx, 3, sp0 + 0xcu, 7u, arg3);
            t16 = g->edx;
            if (rd32(t15) == 0u)
            {
                eax = rd32(t15);
                loc_4 = rd32(sp0 - 4u);
                loc_8 = rd32(sp0 - 8u);
            }
            else
            {
                eax = rd32(t15);
                edx = t16;
    COW_AT(100c47a5)
                if (rd32(eax) == 0u)
                {
                    loc_4 = rd32(sp0 - 4u);
                    loc_8 = rd32(sp0 - 8u);
                }
                else
                {
                    ecx = rd32(eax);
    COW_AT(100c47ab)
                    if ((int32_t)(arg2 - arg1) < 600) goto L_100c47c9;
    COW_AT(100c47bc)
                    if (arg2 == arg1) goto L_100c47c9;
    COW_AT(100c47c0)
                    wr32(sp0 - 0xcu, arg2 - arg1);
                    wr32(sp0 - 0x10u, self);
                    g->esp = sp0 - 8u;
                    t17 = cow_call_regs(g, COW_IMG(0x10056b20u), arg2 - arg1, ecx, g->edx, 0, 2, self, arg2 - arg1);
                    eax = t17;
L_100c47d4: ;
    COW_AT(100c47d4)
                    if (eax == 0u)
                    {
                        loc_4 = rd32(sp0 - 4u);
                        loc_8 = rd32(sp0 - 8u);
                    }
                    else
                    {
    COW_AT(100c47d8)
                        wr8(eax + 0x143u, 1u);
                        loc_4 = rd32(sp0 - 4u);
                        loc_8 = rd32(sp0 - 8u);
                    }
                }
            }
        }
    }
    COW_AT(100c47df)
    g->esi = loc_4;
    g->edi = loc_8;
    return eax;
L_100c47c9: ;
    COW_AT(100c47c9)
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 0x18u, self);
    g->esp = sp0 - 8u;
    t18 = cow_call_regs(g, COW_IMG(0x10056c70u), arg2 - arg1, ecx, g->edx, 0, 4, self, self, 0u, 0u);
    eax = t18;
    goto L_100c47d4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100c4730(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100c4734u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100c4737u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100c473bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100c4746u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100c475du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100c476eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100c4773u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100c477eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100c4788u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100c478eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100c47a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100c47abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100c47bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        g->eax = arg2 - arg1;
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100c47c0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        g->eax = arg2 - arg1;
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100c47c9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        g->eax = arg2 - arg1;
        wr32(sp0 - 0x14u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100c47d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100c47d8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100c47dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100c4730(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100c4730(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
