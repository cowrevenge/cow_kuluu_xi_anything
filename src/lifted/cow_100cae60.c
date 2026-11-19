/* f_0x100cae60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100cae60(Guest* g)
{
    double d10;
    double d11;
    double d6;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100cae6cu: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_100cae6c;
    case 0x100cae72u: eax = g->eax; edx = g->edx; in_esi = g->esi; goto E_100cae72;
    case 0x100cae7fu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100cae7f;
    case 0x100cae8eu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100cae8e;
    case 0x100cae92u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100cae92;
    case 0x100cae99u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100cae99;
    case 0x100caea0u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100caea0;
    case 0x100caea7u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100caea7;
    case 0x100caeaeu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100caeae;
    case 0x100caeb3u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100caeb3;
    case 0x100caecbu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100caecb;
    case 0x100caee0u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100caee0;
    case 0x100caf06u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100caf06;
    case 0x100caf0fu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100caf0f;
    case 0x100caf12u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100caf12;
    case 0x100caf1eu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100caf1e;
    case 0x100caf26u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100caf26;
    default: break;
    }
#endif

    COW_AT(100cae60)
    if (rd32(self + 0x70u) == 0u)
    {
        edx = 0xffu;
    }
    else
    {
        eax = rd32(self + 0x70u);
    COW_AT(100cae6c)
        edx = rd32(eax + 0x170u);
    }
    COW_AT(100cae72)
    if (edx - 6u > 0x38u)
    {
        eax = edx - 6u;
        esi = rd32(sp0 + 4u);
        goto L_100caecb;
    }
    eax = edx - 6u;
    esi = rd32(sp0 + 4u);
    COW_AT(100cae7f)
    t1 = rd32(COW_IMG(0x100caf2cu) + rd8(COW_IMG(0x100caf48u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x100cae8eu: goto L_100cae8e;
    case 0x100cae92u: goto L_100cae92;
    case 0x100cae99u: goto L_100cae99;
    case 0x100caea0u: goto L_100caea0;
    case 0x100caea7u: goto L_100caea7;
    case 0x100caeaeu: goto L_100caeae;
    case 0x100caecbu: goto L_100caecb;
    default: rt_fatal(g, COW_IMG(0x100cae87u), "switch");
    }
    return;
L_100cae8e: ;
    COW_AT(100cae8e)
    eax = 0u;
L_100caeb3: ;
    COW_AT(100caeb3)
    t2 = rd32(COW_IMG(0x10330efcu) + eax * 8u);
    t3 = rd32(COW_IMG(0x10330ef8u) + eax * 8u);
    g->eax = t3;
    g->edx = t2;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x100cf1d0u), esi, 3, esi, t3, t2);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_100caecb: ;
    COW_AT(100caecb)
    d6 = (double)rdf32(esi + 0x820u);
    if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u) goto L_100caf26;
    eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    COW_AT(100caee0)
    t7 = rd32(esi + 0x820u);
    wr32(sp0 + 4u, t7);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t9 = g->edx;
    d10 = cow_take_float(g);
    d11 = fr(g, (double)rdf32(sp0 + 4u) - d10);
    wrf32(esi + 0x820u, (float)d11);
    if (!(d11 <= (double)rdf32(COW_IMG(0x103295d8u)))) goto L_100caf26;
    edx = t9;
    COW_AT(100caf06)
    if (rd32(esi + 0x81cu) == 1u)
    {
        eax = rd32(esi + 0x81cu) - 1u;
        goto L_100caf1e;
    }
    eax = rd32(esi + 0x81cu) - 1u;
    COW_AT(100caf0f)
    if (eax != 1u) goto L_100caf26;
    eax = eax - 1u;
    COW_AT(100caf12)
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x100cf1c0u), esi, 1, esi);
    g->esi = in_esi;
    return;
L_100cae92: ;
    COW_AT(100cae92)
    eax = 1u;
    goto L_100caeb3;
L_100cae99: ;
    COW_AT(100cae99)
    eax = 2u;
    goto L_100caeb3;
L_100caea0: ;
    COW_AT(100caea0)
    eax = 3u;
    goto L_100caeb3;
L_100caea7: ;
    COW_AT(100caea7)
    eax = 4u;
    goto L_100caeb3;
L_100caeae: ;
    COW_AT(100caeae)
    eax = 5u;
    goto L_100caeb3;
L_100caf1e: ;
    COW_AT(100caf1e)
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x100cf180u), eax, esi, g->edx, 0, 1, esi);
L_100caf26: ;
    COW_AT(100caf26)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100cae60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100cae6cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100cae72u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100cae7fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100cae8eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100cae92u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100cae99u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100caea0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100caea7u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100caeaeu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100caeb3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100caecbu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100caee0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100caf06u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100caf0fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100caf12u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100caf1eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100caf26u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100cae60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100cae60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
