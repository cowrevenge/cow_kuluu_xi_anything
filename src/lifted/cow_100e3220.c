/* f_0x100e3220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100e3220(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e322du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_100e322d;
    case 0x100e3242u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100e3242;
    case 0x100e3250u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100e3250;
    case 0x100e326fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100e326f;
    case 0x100e3278u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100e3278;
    case 0x100e32a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100e32a5;
    case 0x100e32bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e32bf;
    default: break;
    }
#endif

    COW_AT(100e3220)
    if (rd32(COW_IMG(0x104b176cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104b176cu));
    COW_AT(100e322d)
        t1 = rd32(COW_IMG(0x10662dccu));
        wr32(COW_IMG(0x104ae8b4u), eax);
        if (t1 == 0u)
        {
            ecx = t1;
            edx = in_edx;
            esi = 1u;
            goto L_100e3278;
        }
        ecx = t1;
    COW_AT(100e3242)
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, COW_IMG(0x101c4c70u), ecx, 1, COW_IMG(0x10361d7cu));
        t3 = g->ecx;
        t4 = g->edx;
        if ((uint8_t)t2 == 0u)
        {
            ecx = t3;
            edx = t4;
            esi = 1u;
            goto L_100e326f;
        }
        eax = t2;
        edx = t4;
    COW_AT(100e3250)
        g->eax = eax;
        g->edx = edx;
        t5 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 4u;
        t6 = cow_thiscall(g, COW_IMG(0x101c47b0u), t5, 4, COW_IMG(0x10361d7cu), COW_IMG(0x104ae8b0u), 8u, 0u);
        t7 = g->ecx;
        t8 = g->edx;
        if ((int32_t)t6 < 0)
        {
            eax = t6;
            ecx = t7;
            edx = t8;
            esi = t6;
            goto L_100e3278;
        }
        ecx = t7;
        edx = t8;
        esi = t6;
L_100e326f: ;
    COW_AT(100e326f)
        if (rd32(COW_IMG(0x104ae8b4u)) != 0u) goto L_100e32a5;
        eax = rd32(COW_IMG(0x104ae8b4u));
L_100e3278: ;
    COW_AT(100e3278)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t10 = g->edx;
        t11 = rd32(COW_IMG(0x10662dccu));
        wr32(COW_IMG(0x104ae8b0u), t9);
        wr32(COW_IMG(0x104ae8b4u), 0xffffffffu);
        cow_thiscall(g, COW_IMG(0x101c4900u), t11, 4, COW_IMG(0x10361d7cu), COW_IMG(0x104ae8b0u), 8u, 0u);
        t12 = g->ecx;
        ecx = t12;
L_100e32a5: ;
    COW_AT(100e32a5)
        wr32(COW_IMG(0x104b176cu), rd32(COW_IMG(0x104ae8b0u)));
        wr8(COW_IMG(0x104b1770u), (uint8_t)(((ecx & 0xffffff00u) | (uint8_t)(((int32_t)esi < 0) - 1u)) & esi));
    }
    COW_AT(100e32bf)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e3220(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e322du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e3242u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100e3250u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e326fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e3278u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e32a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e32bfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e3220(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100e3220(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
