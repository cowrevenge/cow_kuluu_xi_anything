/* f_0x10109f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10109f10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10109f1du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10109f1d;
    case 0x10109f24u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10109f24;
    case 0x10109f28u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10109f28;
    case 0x10109f2cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10109f2c;
    case 0x10109f2eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10109f2e;
    case 0x10109f38u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10109f38;
    case 0x10109f3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10109f3f;
    case 0x10109f46u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10109f46;
    case 0x10109f4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10109f4e;
    case 0x10109f52u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10109f52;
    case 0x10109f5du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10109f5d;
    case 0x10109f5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10109f5f;
    case 0x10109f69u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10109f69;
    case 0x10109f6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10109f6b;
    case 0x10109f6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10109f6f;
    case 0x10109f74u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10109f74;
    case 0x10109f76u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10109f76;
    case 0x10109f81u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10109f81;
    case 0x10109f84u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10109f84;
    case 0x10109f90u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10109f90;
    case 0x10109f99u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_10109f99;
    default: break;
    }
#endif

    COW_AT(10109f10)
    wr32(sp0 - 0xcu, in_esi);
    if (rd32(self + 4u) == 0u) goto L_10109f2c;
    eax = rd32(self + 4u);
    COW_AT(10109f1d)
    if (rd32(eax + 4u) == 0u)
    {
        loc_c = in_esi;
        goto L_10109f99;
    }
    ecx = rd32(eax + 4u);
    COW_AT(10109f24)
    if (eax == 0u) goto L_10109f2c;
    COW_AT(10109f28)
    eax = ecx;
L_10109f2e: ;
    COW_AT(10109f2e)
    wr32(sp0 - 0x10u, eax);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    COW_RET(0x10109f38u);
    cow_thiscall(g, COW_IMG(0x10109120u), sp0 - 8u, 1, eax);
    t1 = g->edx;
    edx = t1;
    COW_AT(10109f38)
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_10109f46;
    }
    eax = rd32(self + 4u);
    COW_AT(10109f3f)
    if (rd32(eax + 4u) == 0u) goto L_10109f84;
L_10109f46: ;
    COW_AT(10109f46)
    if (rd32(sp0 + 4u) == 0u)
    {
    COW_AT(10109f6b)
        if (eax == 0u)
        {
    COW_AT(10109f74)
            eax = 0u;
        }
        else
        {
    COW_AT(10109f6f)
            eax = rd32(eax + 4u);
        }
    COW_AT(10109f76)
        wr32(sp0 - 0x10u, sp0 - 8u);
        wr32(sp0 - 0x14u, eax);
        g->esp = sp0 - 0xcu;
        COW_RET(0x10109f81u);
        t5 = cow_call_regs(g, COW_IMG(0x10109d70u), eax, g->ecx, g->edx, 1, 2, eax, sp0 - 8u);
        eax = t5;
    }
    else
    {
        ecx = rd32(sp0 + 4u);
    COW_AT(10109f4e)
        if (eax == 0u)
        {
    COW_AT(10109f5f)
            wr32(sp0 - 0x10u, sp0 - 8u);
            wr32(sp0 - 0x14u, 0u);
            g->eax = 0u;
            g->esp = sp0 - 0xcu;
            COW_RET(0x10109f69u);
            t4 = cow_thiscall_cdecl(g, ecx, ecx, 2, 0u, sp0 - 8u);
            eax = t4;
    COW_AT(10109f69)
        }
        else
        {
    COW_AT(10109f52)
            wr32(sp0 - 0x10u, sp0 - 8u);
            t2 = rd32(eax + 4u);
            wr32(sp0 - 0x14u, t2);
            g->eax = t2;
            g->esp = sp0 - 0xcu;
            COW_RET(0x10109f5du);
            t3 = cow_thiscall_cdecl(g, ecx, ecx, 2, t2, sp0 - 8u);
            eax = t3;
    COW_AT(10109f5d)
        }
    }
    COW_AT(10109f81)
L_10109f84: ;
    COW_AT(10109f84)
    wr32(sp0 - 0x10u, sp0 - 8u);
    g->eax = eax;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0xcu;
    COW_RET(0x10109f90u);
    t6 = cow_thiscall(g, COW_IMG(0x10109260u), self, 1, sp0 - 8u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(10109f90)
    g->esp = sp0 - 0xcu;
    COW_RET(0x10109f99u);
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 8u, 0);
    loc_c = rd32(sp0 - 0xcu);
L_10109f99: ;
    COW_AT(10109f99)
    g->esi = loc_c;
    return self;
L_10109f2c: ;
    COW_AT(10109f2c)
    eax = 0u;
    goto L_10109f2e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10109f10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10109f1du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f3fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f52u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f5du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10109f5fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f69u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10109f6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f76u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10109f84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10109f90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10109f99u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10109f10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10109f10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
