/* f_0x100f6aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f6aa0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f6ab8u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6ab8;
    case 0x100f6acdu: eax = g->eax; edx = g->edx; goto E_100f6acd;
    case 0x100f6ad4u: eax = g->eax; edx = g->edx; goto E_100f6ad4;
    case 0x100f6ad7u: eax = g->eax; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100f6ad7;
    case 0x100f6ae6u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100f6ae6;
    case 0x100f6aedu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100f6aed;
    case 0x100f6af5u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100f6af5;
    case 0x100f6affu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100f6aff;
    case 0x100f6b07u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100f6b07;
    case 0x100f6b10u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100f6b10;
    case 0x100f6b12u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100f6b12;
    default: break;
    }
#endif

    COW_AT(100f6aa0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 4u, 0u);
    if (arg2 != 0u)
    {
        edx = in_edx;
        loc_4 = 0u;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
    COW_AT(100f6ab8)
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 0x200u);
        wr32(sp0 - 0x1cu, arg1 + 0xe48u);
        wr32(sp0 - 0x20u, 1u);
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_cdecl(g, COW_IMG(0x1030ff1bu), 4, 1u, arg1 + 0xe48u, 0x200u, 0u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    COW_AT(100f6acd)
        if ((int32_t)eax > 0)
        {
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
        }
        else
        {
    COW_AT(100f6ad4)
            wr8(arg1 + 0xe48u, 0u);
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
        }
    }
    COW_AT(100f6ad7)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, arg2);
    g->eax = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_stdcall(g, COW_IMG(0x100f44b0u), 3, arg2, sp0 - 4u, 0u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(100f6ae6)
    if (eax != 0x17u)
    {
        esi = eax;
        goto L_100f6b10;
    }
    esi = eax;
    COW_AT(100f6aed)
    if (rd32(sp0 - 4u) != 0u)
    {
        eax = rd32(sp0 - 4u);
        goto L_100f6aff;
    }
    COW_AT(100f6af5)
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0x10u;
L_100f6aff: ;
    COW_AT(100f6aff)
    wr32(sp0 - 0x14u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t5 = cow_fastcall(g, COW_IMG(0x100f3240u), arg1, edx, 1, eax);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(100f6b07)
    if (eax == 0u)
    {
        eax = 0x10u;
        goto L_100f6b12;
    }
L_100f6b10: ;
    COW_AT(100f6b10)
    eax = esi;
L_100f6b12: ;
    COW_AT(100f6b12)
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f6aa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f6ab8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->edi = arg1;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100f6acdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x20u;
        g->ebx = arg2;
        g->esi = arg1 + 0xe48u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f6ad4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1 + 0xe48u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f6ad7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f6ae6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100f6aedu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100f6af5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100f6affu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100f6b07u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100f6b10u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100f6b12u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f6aa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f6aa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
