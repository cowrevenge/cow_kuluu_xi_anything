/* f_0x100fa950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100fa950(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100fa959u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_100fa959;
    case 0x100fa97du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa97d;
    case 0x100fa986u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa986;
    case 0x100fa990u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa990;
    case 0x100fa992u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa992;
    case 0x100fa99cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa99c;
    case 0x100fa9a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa9a2;
    case 0x100fa9a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa9a3;
    case 0x100fa9b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa9b1;
    case 0x100fa9b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100fa9b7;
    default: break;
    }
#endif

    COW_AT(100fa950)
    if (rd8(COW_IMG(0x104df927u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x104df927u));
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x104df927u));
    COW_AT(100fa959)
        t1 = rd8(COW_IMG(0x104df925u));
        t2 = rd8(COW_IMG(0x104df926u));
        wr8(COW_IMG(0x104df924u), (uint8_t)t1);
        wr8(COW_IMG(0x104df925u), (uint8_t)t2);
        wr8(COW_IMG(0x104df926u), (uint8_t)eax);
        wr8(COW_IMG(0x104df927u), 0u);
        ecx = (self & 0xffffff00u) | t1;
        edx = (in_edx & 0xffffff00u) | t2;
    }
    COW_AT(100fa97d)
    if (rd8(COW_IMG(0x104df924u)) != 0u) goto L_100fa990;
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104df924u));
    COW_AT(100fa986)
    wr8(COW_IMG(0x104df924u), (uint8_t)arg1);
    return;
L_100fa990: ;
    COW_AT(100fa990)
    eax = 0u;
L_100fa992: ;
    COW_AT(100fa992)
    if (rd8(COW_IMG(0x104df924u) + eax) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x104df924u) + eax);
        goto L_100fa9a3;
    }
    ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x104df924u) + eax);
    COW_AT(100fa99c)
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        goto L_100fa992;
    }
    COW_AT(100fa9a2)
    return;
L_100fa9a3: ;
    COW_AT(100fa9a3)
    if (rd8(COW_IMG(0x104df923u) + eax) != (uint8_t)arg1)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg1;
    COW_AT(100fa9b1)
        wr8(COW_IMG(0x104df924u) + eax, (uint8_t)ecx);
    }
    COW_AT(100fa9b7)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100fa950(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100fa959u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100fa97du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100fa986u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100fa990u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100fa992u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100fa99cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100fa9a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100fa9a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100fa9b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100fa9b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100fa950(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100fa950(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
