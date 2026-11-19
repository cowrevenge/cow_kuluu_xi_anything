/* f_0x102ed5d8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102ed5d8(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ed5e7u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_102ed5e7;
    case 0x102ed5f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_102ed5f7;
    case 0x102ed602u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_102ed602;
    case 0x102ed605u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_102ed605;
    case 0x102ed60cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_102ed60c;
    case 0x102ed613u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_102ed613;
    case 0x102ed626u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_102ed626;
    case 0x102ed63eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_102ed63e;
    case 0x102ed645u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_102ed645;
    case 0x102ed667u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_102ed667;
    case 0x102ed679u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_102ed679;
    case 0x102ed67du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); goto E_102ed67d;
    default: break;
    }
#endif

    COW_AT(102ed5d8)
    if (rd32(in_esi + 0x10u) == 0xccu)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
    COW_AT(102ed5e7)
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(in_esi + 0x17cu)), self, 0);
        t1 = g->edx;
        wr32(in_esi + 0x78u, 0u);
        wr32(in_esi + 0x10u, 0xccu);
        ecx = in_esi;
        edx = t1;
    }
    COW_AT(102ed5f7)
    if (rd8(rd32(in_esi + 0x17cu) + 8u) == 0u) goto L_102ed667;
    COW_AT(102ed602)
L_102ed605: ;
    COW_AT(102ed605)
    if (rd32(in_esi + 0x78u) >= rd32(in_esi + 0x60u)) goto L_102ed645;
    eax = rd32(in_esi + 0x78u);
L_102ed60c: ;
    COW_AT(102ed60c)
    if (rd32(in_esi + 8u) == 0u)
    {
        ecx = rd32(in_esi + 8u);
    }
    else
    {
        ecx = rd32(in_esi + 8u);
    COW_AT(102ed613)
        wr32(ecx + 4u, eax);
        t2 = rd32(in_esi + 0x60u);
        wr32(rd32(in_esi + 8u) + 8u, t2);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(in_esi + 8u)), t2, 0);
        t3 = g->edx;
        ecx = in_esi;
        edx = t3;
    }
    COW_AT(102ed626)
    g->edx = edx;
    t4 = rd32(in_esi + 0x78u);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(in_esi + 0x180u) + 4u), ecx, 0);
    t5 = g->edx;
    if (rd32(in_esi + 0x78u) == t4)
    {
        eax = rd32(in_esi + 0x78u);
        edx = t5;
        goto L_102ed67d;
    }
    eax = rd32(in_esi + 0x78u);
    edx = t5;
    COW_AT(102ed63e)
    if (eax < rd32(in_esi + 0x60u)) goto L_102ed60c;
    ecx = eax;
L_102ed645: ;
    COW_AT(102ed645)
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(in_esi + 0x17cu) + 4u), ecx, 0);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(in_esi + 0x17cu)), t6, 0);
    t8 = g->edx;
    wr32(in_esi + 0x78u, 0u);
    if (rd8(rd32(in_esi + 0x17cu) + 8u) != 0u)
    {
        ecx = in_esi;
        edx = t8;
        goto L_102ed605;
    }
    edx = t8;
L_102ed667: ;
    COW_AT(102ed667)
    t9 = (rd8(in_esi + 0x41u) != 0u) + 0xcdu;
    wr32(in_esi + 0x10u, t9);
    eax = (t9 & 0xffffff00u) | 1u;
L_102ed679: ;
    COW_AT(102ed679)
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
L_102ed67d: ;
    COW_AT(102ed67d)
    eax = eax & 0xffffff00u;
    goto L_102ed679;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ed5d8(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ed5e7u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x102ed5f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ed602u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ed605u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = in_esi + 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x102ed60cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = in_esi + 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x102ed613u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = in_esi + 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x102ed626u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = in_esi + 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x102ed63eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = in_esi + 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x102ed645u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->edi = in_esi + 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x102ed667u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ed679u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102ed67du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed5d8(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102ed5d8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
