/* f_0x100edef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100edef0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100edefdu: eax = g->eax; self = g->ecx; goto E_100edefd;
    case 0x100edf02u: eax = g->eax; ecx = g->ecx; goto E_100edf02;
    case 0x100edf22u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_100edf22;
    case 0x100edf27u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100edf27;
    case 0x100edf58u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100edf58;
    case 0x100edf5du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100edf5d;
    case 0x100edf83u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100edf83;
    case 0x100edf9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100edf9c;
    default: break;
    }
#endif

    COW_AT(100edef0)
    if (rd32(COW_IMG(0x104ca430u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104ca430u));
    COW_AT(100edefd)
        if (eax != 2u) goto L_100edf22;
    COW_AT(100edf02)
        t1 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
        g->ecx = t1;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10115870u), 1, t1);
        t2 = g->ecx;
        wr32(COW_IMG(0x104ca430u), 1u);
        ecx = t2;
L_100edf27: ;
    COW_AT(100edf27)
        t3 = rd32(COW_IMG(0x104df770u)) + 0x13698u;
        t4 = rd32(rd32(COW_IMG(0x104df770u)) + 0x13690u);
        g->esp = sp0;
        cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), ecx, 2, t4, t3);
        if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) == 0u)
        {
            eax = rd32(COW_IMG(0x104df770u)) + 0x13698u;
            ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u);
            edx = rd32(COW_IMG(0x104df770u));
            goto L_100edf83;
        }
        eax = rd32(COW_IMG(0x104df770u)) + 0x13698u;
        ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u);
        edx = rd32(COW_IMG(0x104df770u));
L_100edf58: ;
    COW_AT(100edf58)
        if (ecx == 0xffffffffu) goto L_100edf83;
    COW_AT(100edf5d)
        t5 = rd32(edx + 0x13690u);
        g->esp = sp0;
        cow_thiscall_cdecl(g, COW_IMG(0x10115d50u), t5, 2, t5, eax);
        if (rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u) != 0u)
        {
            eax = rd32(COW_IMG(0x104df770u)) + 0x13698u;
            ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u);
            edx = rd32(COW_IMG(0x104df770u));
            goto L_100edf58;
        }
        eax = rd32(COW_IMG(0x104df770u)) + 0x13698u;
        ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x13698u);
        edx = rd32(COW_IMG(0x104df770u));
L_100edf83: ;
    COW_AT(100edf83)
        wr32(edx + 0x13690u, 0u);
        g->esp = sp0;
        cow_stdcall(g, COW_IMG(0x101152e0u), 0);
        wr32(COW_IMG(0x104ca430u), 0u);
    }
L_100edf9c: ;
    COW_AT(100edf9c)
    return 1u;
L_100edf22: ;
    COW_AT(100edf22)
    if (eax != 1u) goto L_100edf9c;
    ecx = self;
    goto L_100edf27;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100edef0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100edefdu:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100edf02u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100edf22u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100edf27u:
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
    case 0x100edf58u:
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
    case 0x100edf5du:
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
    case 0x100edf83u:
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
    case 0x100edf9cu:
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
void cow_adapter_100edef0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100edef0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
