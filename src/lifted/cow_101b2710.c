/* f_0x101b2710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101b2710(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_1c;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b2728u: in_eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101b2728;
    case 0x101b272du: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101b272d;
    case 0x101b2737u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101b2737;
    case 0x101b276cu: in_eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101b276c;
    case 0x101b2771u: eax = g->eax; self = g->ecx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101b2771;
    case 0x101b277au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101b277a;
    case 0x101b277fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101b277f;
    case 0x101b278au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101b278a;
    case 0x101b27bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101b27bd;
    case 0x101b27e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_1c = rd32(sp0 - 0x1cu); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101b27e9;
    default: break;
    }
#endif

    COW_AT(101b2710)
    wr8(self + 0xef22u, 0u);
    if (arg1 != 8u)
    {
    COW_AT(101b2728)
        if (arg1 != 5u) goto L_101b276c;
    COW_AT(101b272d)
        if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x40u)
        {
            eax = rd32(COW_IMG(0x10456a28u));
            goto L_101b2771;
        }
        eax = rd32(COW_IMG(0x10456a28u));
    COW_AT(101b2737)
        t1 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        g->eax = eax;
        g->ecx = rd32(COW_IMG(0x103d3c64u));
        g->edx = t1;
        t2 = rd32(COW_IMG(0x103d3c64u));
        g->esp = sp0 - 0xcu;
        t3 = cow_stdcall(g, COW_IMG(0x101aff50u), 0);
        t4 = g->ecx;
        t5 = g->edx;
        g->ecx = t4;
        g->edx = t5;
        g->esp = sp0 - 0x1cu;
        t6 = cow_stdcall(g, COW_IMG(0x102bc858u), 0);
        t7 = g->ecx;
        t8 = g->edx;
        g->edx = t8;
        g->esp = sp0 - 0x24u;
        cow_stdcall(g, COW_IMG(0x102bc858u), 2, t3, 0x16u);
        t9 = g->edx;
        t10 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
        eax = rd32(COW_IMG(0x103d3c64u));
        ecx = t10;
        edx = t9;
        loc_c = t1;
        loc_1c = t3;
        loc_28 = t3;
        loc_2c = t10;
L_101b27bd: ;
    COW_AT(101b27bd)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t22 = cow_stdcall(g, COW_IMG(0x101aff60u), 9, loc_2c, loc_28, 0u, 0u, loc_1c, 0x17u, 0u, 0u, loc_c);
        t23 = g->edx;
        t24 = rd32(self + 0xf128u) + 1u;
        wr32(self + 0xf128u, t24);
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
        wr8(self + 0xf123u, 1u);
    }
L_101b27e9: ;
    COW_AT(101b27e9)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_101b276c: ;
    COW_AT(101b276c)
    if (arg1 == 9u) goto L_101b27e9;
    eax = in_eax;
L_101b2771: ;
    COW_AT(101b2771)
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x100164b0u), eax, g->ecx, g->edx, 1, 0);
    if ((uint8_t)t11 != 1u) goto L_101b27e9;
    COW_AT(101b277a)
    if (arg1 != 3u) goto L_101b27e9;
    COW_AT(101b277f)
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x40u) goto L_101b27e9;
    edx = rd32(COW_IMG(0x10456a28u));
    COW_AT(101b278a)
    t12 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t12;
    g->edx = edx;
    t13 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0xcu;
    t14 = cow_stdcall(g, COW_IMG(0x101aff50u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    g->ecx = t15;
    g->edx = t16;
    g->esp = sp0 - 0x1cu;
    t17 = cow_stdcall(g, COW_IMG(0x102bc858u), 0);
    t18 = g->ecx;
    t19 = g->edx;
    g->ecx = t18;
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, COW_IMG(0x102bc858u), 2, t14, 0x16u);
    t20 = g->ecx;
    t21 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    eax = t21;
    ecx = t20;
    edx = rd32(COW_IMG(0x103d3c64u));
    loc_c = t12;
    loc_1c = t14;
    loc_28 = t14;
    loc_2c = t21;
    goto L_101b27bd;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b2710(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b2728u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b272du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b2737u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b276cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b2771u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b277au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101b277fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b278au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101b27bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x18u, 0x17u);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101b27e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b2710(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101b2710(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
