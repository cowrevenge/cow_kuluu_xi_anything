/* f_0x101bae40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101bae40(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101bae55u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; g->esi = rd32(sp0 - 8u); goto E_101bae55;
    case 0x101bae67u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101bae67;
    case 0x101bae6cu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101bae6c;
    case 0x101bae83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101bae83;
    case 0x101bae98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101bae98;
    case 0x101bae9du: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101bae9d;
    case 0x101baea8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101baea8;
    case 0x101baeaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101baeaa;
    default: break;
    }
#endif

    COW_AT(101bae40)
    t1 = rd32(sp0 + 7u);
    if ((int32_t)(uint8_t)t1 >= (int32_t)(rd32(self + 0x1cu) + 1u))
    {
        edx = t1;
        goto L_101baea8;
    }
    eax = (uint8_t)t1;
    edx = t1;
    COW_AT(101bae55)
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) < 0) goto L_101bae9d;
    ebx = (in_ebx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    esi = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    COW_AT(101bae67)
    if (esi != 3u) goto L_101bae9d;
    COW_AT(101bae6c)
    t2 = rd32(rd32(eax * 4u + rd32(self + 0x18u)) + 0x14u);
    t3 = rd32(eax * 4u + rd32(self + 0x18u));
    t4 = rd32(self + 0x18u);
    wr32(sp0 + 4u, t2);
    if (rd8(sp0 + 7u) == (uint8_t)edx)
    {
        eax = t3;
        goto L_101baeaa;
    }
    ecx = eax * 4u + t4;
    ebx = (ebx & 0xffffff00u) | rd8(sp0 + 7u);
L_101bae83: ;
    COW_AT(101bae83)
    t5 = rd32(rd32(ecx + 4u) + 0x14u);
    t6 = rd32(ecx + 4u);
    wr32(sp0 + 4u, t5);
    if (rd8(sp0 + 7u) != (uint8_t)edx)
    {
        ecx = ecx + 4u;
        ebx = (ebx & 0xffffff00u) | rd8(sp0 + 7u);
        goto L_101bae83;
    }
    eax = t6;
    COW_AT(101bae98)
    g->edx = edx;
    return eax;
L_101bae9d: ;
    COW_AT(101bae9d)
    g->edx = rd32(self + 0x18u);
    return rd32(eax * 4u + rd32(self + 0x18u));
L_101baea8: ;
    COW_AT(101baea8)
    eax = 0u;
L_101baeaa: ;
    COW_AT(101baeaa)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101bae40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101bae55u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101bae67u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101bae6cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101bae83u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101bae98u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101bae9du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101baea8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101baeaau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101bae40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101bae40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
