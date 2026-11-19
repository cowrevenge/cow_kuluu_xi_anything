/* f_0x10231080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10231080(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10231090u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_10231090;
    case 0x1023109du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_1023109d;
    case 0x102310a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x48u); in_esi = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x44u); goto E_102310a8;
    case 0x102310b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102310b4;
    case 0x102310beu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_102310be;
    case 0x1023110du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_1023110d;
    case 0x10231111u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10231111;
    case 0x10231116u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10231116;
    case 0x10231120u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10231120;
    case 0x10231129u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_10231129;
    case 0x1023112eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_1023112e;
    default: break;
    }
#endif

    COW_AT(10231080)
    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x48u;
    t1 = cow_call_regs(g, COW_IMG(0x10087130u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
        goto L_1023109d;
    }
    COW_AT(10231090)
    wr32(self + 0x74u, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_1023109d: ;
    COW_AT(1023109d)
    if (rd32(self + 0x74u) != 0u)
    {
        loc_44 = in_esi;
        loc_48 = in_edi;
    }
    else
    {
        eax = rd32(self + 0x74u);
    COW_AT(102310a8)
        g->eax = eax;
        g->esp = sp0 - 0x48u;
        t3 = cow_thiscall(g, COW_IMG(0x102306a0u), self + 0x70u, 0);
        if (t3 == 0u)
        {
            loc_44 = in_esi;
            loc_48 = in_edi;
        }
        else
        {
            eax = t3;
    COW_AT(102310b4)
            if (rd32(eax + 0x1578u) == 0u)
            {
                loc_44 = rd32(sp0 - 0x44u);
                loc_48 = rd32(sp0 - 0x48u);
            }
            else
            {
                edx = rd32(eax + 0x1578u);
    COW_AT(102310be)
                wr16(sp0 - 0x3cu, 0u);
                edi = sp0 - 0x3au;
                eax = 0u;
                ecx = 0xeu;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
                wr32(sp0 - 0x4cu, sp0 - 0x3cu);
                wr32(sp0 - 0x50u, edx);
                g->edx = edx;
                g->esp = sp0 - 0x48u;
                t4 = cow_call_regs(g, COW_IMG(0x10231000u), sp0 - 0x3cu, self, g->edx, 0, 2, edx, sp0 - 0x3cu);
                t5 = g->edx;
                wr8(sp0 - 0x40u, (uint8_t)t4);
                wr32(sp0 - 0x4cu, 8u);
                wr32(sp0 - 0x50u, 0u);
                t6 = (uint8_t)rd32(sp0 - 0x40u);
                wr32(sp0 - 0x54u, t6);
                wr32(sp0 - 0x58u, 0u);
                g->edx = t5;
                t7 = cow_thiscall(g, COW_IMG(0x10221900u), self, 4, 0u, t6, 0u, 8u);
                t8 = g->edx;
                wr32(sp0 - 0x4cu, 0u);
                wr32(sp0 - 0x50u, t6);
                cow_fastcall(g, COW_IMG(0x10221a80u), self, t8, 2, t6, 0u);
                if ((int32_t)t6 <= 0)
                {
                    loc_44 = rd32(sp0 - 0x44u);
                    loc_48 = rd32(sp0 - 0x48u);
                    goto L_1023112e;
                }
                eax = 0u;
                edi = t6;
L_1023110d: ;
    COW_AT(1023110d)
                if ((int32_t)eax >= 0)
                {
    COW_AT(10231111)
                    if ((int32_t)eax < (int32_t)rd32(self + 0x44u))
                    {
    COW_AT(10231116)
                        if (eax * 8u + rd32(self + 0x20u) != 0u)
                        {
                            ecx = eax * 8u + rd32(self + 0x20u);
    COW_AT(10231120)
                            t9 = rd16(eax * 2u + sp0 - 0x3cu);
                            wr32(ecx, t9);
                        }
                    }
                }
    COW_AT(10231129)
                if ((int32_t)(eax + 1u) < (int32_t)edi)
                {
                    eax = eax + 1u;
                    goto L_1023110d;
                }
                loc_44 = rd32(sp0 - 0x44u);
                loc_48 = rd32(sp0 - 0x48u);
            }
        }
    }
L_1023112e: ;
    COW_AT(1023112e)
    g->esi = loc_44;
    g->edi = loc_48;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10231080(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10231090u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1023109du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x102310a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x48u);
        in_esi = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x102310b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x102310beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1023110du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10231111u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10231116u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10231120u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10231129u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1023112eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_44;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10231080(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10231080(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
