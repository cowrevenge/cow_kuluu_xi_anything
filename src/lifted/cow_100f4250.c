/* f_0x100f4250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f4250(Guest* g)
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f4259u: self = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_100f4259;
    case 0x100f4260u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100f4260;
    case 0x100f4268u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100f4268;
    case 0x100f4270u: self = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_100f4270;
    case 0x100f4283u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); self = g->esi - 0xe48u; g->esi = rd32(sp0 - 4u); goto E_100f4283;
    case 0x100f4287u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); self = g->esi - 0xe48u; g->esi = rd32(sp0 - 4u); goto E_100f4287;
    case 0x100f4291u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); self = g->esi - 0xe48u; g->esi = rd32(sp0 - 4u); goto E_100f4291;
    case 0x100f42a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100f42a1;
    case 0x100f42a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100f42a9;
    default: break;
    }
#endif

    COW_AT(100f4250)
    if (arg1 > 3u) goto L_100f42a9;
    COW_AT(100f4259)
    t1 = rd32(COW_IMG(0x100f42b4u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x100f4260u: goto L_100f4260;
    case 0x100f4268u: goto L_100f4268;
    case 0x100f4270u: goto L_100f4270;
    case 0x100f42a1u: goto L_100f42a1;
    default: rt_fatal(g, COW_IMG(0x100f4259u), "switch");
    }
    return 0;
L_100f4260: ;
    COW_AT(100f4260)
    g->esi = in_esi;
    return 3u;
L_100f4268: ;
    COW_AT(100f4268)
    g->esi = in_esi;
    return 0x16u;
L_100f4270: ;
    COW_AT(100f4270)
    g->eax = arg1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x103291e4u)), 1, self + 0xe48u);   /* kernel32.dll!GetFileAttributesA */
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0xffffffffu)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    COW_AT(100f4283)
        if (eax & 1u)
        {
    COW_AT(100f4287)
            t5 = (eax & 0xffffff00u) | (eax & 0xfeu);
            g->eax = t5;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t6 = cow_stdcall(g, rd32(COW_IMG(0x103291e0u)), 2, self + 0xe48u, t5);   /* kernel32.dll!SetFileAttributesA */
            t7 = g->ecx;
            t8 = g->edx;
            eax = t6;
            ecx = t7;
            edx = t8;
        }
    }
    COW_AT(100f4291)
    g->esp = sp0 - 4u;
    cow_stdcall(g, rd32(COW_IMG(0x10329124u)), 1, self + 0xe48u);   /* kernel32.dll!DeleteFileA */
    g->esi = in_esi;
    return 0x17u;
L_100f42a1: ;
    COW_AT(100f42a1)
    g->esi = in_esi;
    return 6u;
L_100f42a9: ;
    COW_AT(100f42a9)
    g->esi = in_esi;
    return 0x15u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f4250(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f4259u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4260u:
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
    case 0x100f4268u:
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
    case 0x100f4270u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f4283u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        self = g->esi - 0xe48u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f4287u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        self = g->esi - 0xe48u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f4291u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        self = g->esi - 0xe48u;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f42a1u:
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
    case 0x100f42a9u:
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
void cow_adapter_100f4250(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f4250(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
