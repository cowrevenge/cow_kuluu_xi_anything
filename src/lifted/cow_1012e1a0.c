/* f_0x1012e1a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1012e1a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012e1c7u: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1012e1c7;
    case 0x1012e1ceu: eax = g->eax; edx = g->edx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1012e1ce;
    case 0x1012e1d0u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1012e1d0;
    case 0x1012e1e3u: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e1e3;
    case 0x1012e1eau: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e1ea;
    case 0x1012e1ecu: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e1ec;
    case 0x1012e1f8u: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e1f8;
    case 0x1012e208u: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e208;
    case 0x1012e216u: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e216;
    case 0x1012e21au: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e21a;
    case 0x1012e21eu: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e21e;
    case 0x1012e22cu: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e22c;
    case 0x1012e231u: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e231;
    case 0x1012e23fu: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e23f;
    case 0x1012e243u: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e243;
    case 0x1012e251u: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e251;
    case 0x1012e266u: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e266;
    case 0x1012e274u: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e274;
    case 0x1012e28eu: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e28e;
    case 0x1012e299u: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e299;
    case 0x1012e2b5u: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e2b5;
    case 0x1012e2bau: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1012e2ba;
    default: break;
    }
#endif

    COW_AT(1012e1a0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, sp0 + 8u);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 8u, self);
    g->eax = sp0 + 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x101cb960u), 3, arg1, arg2, sp0 + 8u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(1012e1c7)
        if ((arg2 & 2u) == 0u)
        {
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
    COW_AT(1012e1ce)
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
    }
    COW_AT(1012e1d0)
    wr32(sp0 - 0x18u, sp0 + 8u);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x101cba20u), 3, arg1, arg2, sp0 + 8u);
    if ((uint8_t)t3 != 0u)
    {
    COW_AT(1012e1e3)
        if ((arg2 & 2u) != 0u)
        {
    COW_AT(1012e1ea)
            ebx = (ebx & 0xffffff00u) | 1u;
        }
    }
    COW_AT(1012e1ec)
    if ((rd32(rd32(arg2 + 0x14bcu)) & 0x10u) == 0u)
    {
        eax = rd32(rd32(arg2 + 0x14bcu));
        edx = rd32(arg2 + 0x14bcu);
        goto L_1012e22c;
    }
    eax = rd32(rd32(arg2 + 0x14bcu));
    edx = rd32(arg2 + 0x14bcu);
    COW_AT(1012e1f8)
    if (rd8(rd32(COW_IMG(0x10578198u)) + 0x1f2u) != 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10578198u)) + 0x1f2u);
        goto L_1012e216;
    }
    edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10578198u)) + 0x1f2u);
    COW_AT(1012e208)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return 0x80404040u;
L_1012e216: ;
    COW_AT(1012e216)
    if ((uint8_t)ebx == 0u) goto L_1012e251;
    COW_AT(1012e21a)
    if (eax & 1u) goto L_1012e251;
    COW_AT(1012e21e)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return 0x80404040u;
L_1012e22c: ;
    COW_AT(1012e22c)
    if ((eax >> 8u & 0x20u) == 0u) goto L_1012e23f;
    COW_AT(1012e231)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return 0x80404040u;
L_1012e23f: ;
    COW_AT(1012e23f)
    if ((uint8_t)ebx == 0u) goto L_1012e251;
    COW_AT(1012e243)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return 0x80404040u;
L_1012e251: ;
    COW_AT(1012e251)
    wr32(sp0 - 0x18u, 0u);
    t4 = (edx & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x1cu, t4);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t5 = cow_fastcall(g, COW_IMG(0x10131f10u), rd32(COW_IMG(0x105781a8u)), t4, 2, t4, 0u);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        edx = t6;
        goto L_1012e274;
    }
    edx = t6;
    COW_AT(1012e266)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return 0x80404040u;
L_1012e274: ;
    COW_AT(1012e274)
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, sp0 + 4u);
    wr32(sp0 - 0x24u, 0u);
    g->eax = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 + 4u, 4, 0u, sp0 + 4u, sp0 - 4u, 1u);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        edx = t8;
        goto L_1012e2b5;
    }
    eax = t7;
    edx = t8;
    COW_AT(1012e28e)
    if ((uint8_t)arg1 != rd8(arg1 + 2u))
    {
        edx = (edx & 0xffffff00u) | (uint8_t)arg1;
        goto L_1012e2b5;
    }
    edx = (edx & 0xffffff00u) | (uint8_t)arg1;
    COW_AT(1012e299)
    g->eax = rd32(rd32(sp0 - 8u));
    g->edx = edx;
    t9 = rd32(rd32(sp0 - 8u));
    g->esp = sp0 - 0x14u;
    t10 = cow_thiscall(g, rd32(t9 + 0x54u), rd32(sp0 - 8u), 0);
    t11 = g->edx;
    if ((uint8_t)rd32(sp0 - 4u) == t10)
    {
        eax = 0x80404040u;
        edx = t11;
        goto L_1012e2ba;
    }
    edx = t11;
L_1012e2b5: ;
    COW_AT(1012e2b5)
    eax = 0x80808080u;
L_1012e2ba: ;
    COW_AT(1012e2ba)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012e1a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012e1c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = in_ebx & 0xffffff00u;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e1ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebx = in_ebx & 0xffffff00u;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e1d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e1e3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e1eau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e1ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->esi = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e1f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e208u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e216u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e21au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e21eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e22cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e231u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e23fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e243u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e251u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012e266u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012e274u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1012e28eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->edi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1012e299u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1012e2b5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1012e2bau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1012e1a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1012e1a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
