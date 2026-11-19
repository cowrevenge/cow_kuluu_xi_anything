/* f_0x102c4359 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102c4359(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_268;
    uint32_t loc_26c;
    uint32_t loc_270;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 636u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c436au: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x26cu); in_esi = rd32(sp0 - 0x268u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x26cu); g->esi = rd32(sp0 - 0x268u); goto E_102c436a;
    case 0x102c4371u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x26cu); in_esi = rd32(sp0 - 0x268u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x26cu); g->esi = rd32(sp0 - 0x268u); goto E_102c4371;
    case 0x102c4377u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x26cu); in_esi = rd32(sp0 - 0x268u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x26cu); g->esi = rd32(sp0 - 0x268u); goto E_102c4377;
    case 0x102c437cu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x26cu); in_esi = rd32(sp0 - 0x268u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x26cu); g->esi = rd32(sp0 - 0x268u); goto E_102c437c;
    case 0x102c4383u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; loc_270 = rd32(sp0 - 0x270u); in_edi = rd32(sp0 - 0x26cu); in_esi = rd32(sp0 - 0x268u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x26cu); g->esi = rd32(sp0 - 0x268u); goto E_102c4383;
    case 0x102c4396u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; edi = g->edi; loc_270 = rd32(sp0 - 0x270u); in_edi = rd32(sp0 - 0x26cu); in_esi = rd32(sp0 - 0x268u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x26cu); g->esi = rd32(sp0 - 0x268u); goto E_102c4396;
    case 0x102c439bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102c439b;
    case 0x102c43a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102c43a2;
    case 0x102c43aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102c43ae;
    case 0x102c43b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x26cu); in_esi = rd32(sp0 - 0x268u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x26cu); g->esi = rd32(sp0 - 0x268u); goto E_102c43b2;
    case 0x102c43b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_26c = rd32(sp0 - 0x26cu); loc_268 = rd32(sp0 - 0x268u); loc_4 = rd32(sp0 - 4u); goto E_102c43b4;
    default: break;
    }
#endif

    COW_AT(102c4359)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x268u, in_esi);
    wr32(sp0 - 0x26cu, in_edi);
    if (arg1 != 2u) goto L_102c4371;
    COW_AT(102c436a)
    esi = 0x120u;
L_102c437c: ;
    COW_AT(102c437c)
    wr32(sp0 - 0x270u, esi);
    if (arg2 == 0u)
    {
        loc_270 = esi;
    COW_AT(102c4396)
        g->eax = in_eax;
        g->esp = sp0 - 0x264u;
        t3 = cow_call_regs(g, COW_IMG(0x10312fd6u), g->eax, self, in_edx, 1, 3, loc_270, in_edi, in_esi);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    else
    {
        loc_270 = esi;
    COW_AT(102c4383)
        wr32(sp0 - 0x20u, arg3);
        wr32(sp0 - 0x274u, sp0 - 0x264u);
        g->eax = sp0 - 0x264u;
        g->edx = in_edx;
        g->esp = sp0 - 0x270u;
        t1 = cow_thiscall_cdecl(g, arg2, self, 1, sp0 - 0x264u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    COW_AT(102c439b)
    if (eax == 0u)
    {
        edi = eax;
    }
    else
    {
        ecx = rd32(sp0 - 0x270u);
        edi = eax;
    COW_AT(102c43a2)
        wr32(sp0 - 0x270u, esi);
        wr32(sp0 - 0x274u, 0u);
        wr32(sp0 - 0x278u, edi);
        g->esp = sp0 - 0x26cu;
        cow_cdecl(g, COW_IMG(0x10316dd0u), 3, edi, 0u, esi);
    }
    COW_AT(102c43ae)
    eax = edi;
    loc_4 = rd32(sp0 - 4u);
    loc_268 = rd32(sp0 - 0x268u);
    loc_26c = rd32(sp0 - 0x26cu);
L_102c43b4: ;
    COW_AT(102c43b4)
    g->esi = loc_268;
    g->edi = loc_26c;
    g->ebp = loc_4;
    return eax;
L_102c4371: ;
    COW_AT(102c4371)
    if (arg1 != 1u) goto L_102c43b2;
    COW_AT(102c4377)
    esi = 0x260u;
    goto L_102c437c;
L_102c43b2: ;
    COW_AT(102c43b2)
    eax = 0u;
    loc_4 = in_ebp;
    loc_268 = in_esi;
    loc_26c = in_edi;
    goto L_102c43b4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c4359(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c436au:
    {
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x26cu);
        in_esi = rd32(sp0 - 0x268u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x26cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4371u:
    {
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x26cu);
        in_esi = rd32(sp0 - 0x268u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x26cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4377u:
    {
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x26cu);
        in_esi = rd32(sp0 - 0x268u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x26cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c437cu:
    {
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x26cu);
        in_esi = rd32(sp0 - 0x268u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x26cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4383u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_270;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_270 = rd32(sp0 - 0x270u);
        in_edi = rd32(sp0 - 0x26cu);
        in_esi = rd32(sp0 - 0x268u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x270u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c4396u:
    {
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_270;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_270 = rd32(sp0 - 0x270u);
        in_edi = rd32(sp0 - 0x26cu);
        in_esi = rd32(sp0 - 0x268u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x270u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c439bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x270u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c43a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x26cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c43aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x26cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c43b2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x26cu);
        in_esi = rd32(sp0 - 0x268u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x26cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c43b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_268;
        uint32_t loc_26c;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_26c = rd32(sp0 - 0x26cu);
        loc_268 = rd32(sp0 - 0x268u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x26cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c4359(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102c4359(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
