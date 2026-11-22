/* f_0x101b3e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b3e20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_114;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    cow_frame(g, sp0, 292u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b3e30u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x110u); in_esi = rd32(sp0 - 0x10cu); in_ebp = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x108u); g->edi = rd32(sp0 - 0x110u); g->esi = rd32(sp0 - 0x10cu); goto E_101b3e30;
    case 0x101b3e38u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x110u); in_esi = rd32(sp0 - 0x10cu); in_ebp = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x108u); g->edi = rd32(sp0 - 0x110u); g->esi = rd32(sp0 - 0x10cu); goto E_101b3e38;
    case 0x101b3e53u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3e53;
    case 0x101b3e67u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); goto E_101b3e67;
    case 0x101b3e78u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3e78;
    case 0x101b3e7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101b3e7c;
    case 0x101b3e88u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_101b3e88;
    case 0x101b3e9bu: eax = g->eax; ecx = g->ecx; self = g->ebp; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 0x114u); g->ebx = rd32(sp0 - 0x114u); goto E_101b3e9b;
    case 0x101b3ea2u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); goto E_101b3ea2;
    case 0x101b3eadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101b3ead;
    case 0x101b3ebfu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_114 = rd32(sp0 - 0x114u); goto E_101b3ebf;
    case 0x101b3eccu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x110u); in_esi = rd32(sp0 - 0x10cu); in_ebp = rd32(sp0 - 0x108u); g->ebp = rd32(sp0 - 0x108u); g->edi = rd32(sp0 - 0x110u); g->esi = rd32(sp0 - 0x10cu); goto E_101b3ecc;
    case 0x101b3ed3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101b3ed3;
    default: break;
    }
#endif

    COW_AT(101b3e20)
    wr32(sp0 - 0x108u, in_ebp);
    wr32(sp0 - 0x10cu, in_esi);
    wr32(sp0 - 0x110u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x110u;
    t1 = cow_stdcall(g, COW_IMG(0x101b41a0u), 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(101b3e30)
    if ((uint8_t)eax == 0u) goto L_101b3ecc;
    COW_AT(101b3e38)
    edi = sp0 - 0x100u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t3 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x114u, t3);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t3;
    t4 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x110u;
    t5 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t3);
    t6 = g->ecx;
    eax = t5;
    ecx = t6;
    COW_AT(101b3e53)
    wr32(sp0 - 0x114u, 0x100u);
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    wr32(sp0 - 0x11cu, 8u);
    wr32(sp0 - 0x120u, eax);
    g->eax = eax;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x110u;
    t7 = cow_stdcall(g, COW_IMG(0x102bc888u), 4, eax, 8u, sp0 - 0x100u, 0x100u);
    t8 = g->edx;
    edx = t8;
    esi = eax;
    eax = t7;
    COW_AT(101b3e67)
    wr32(sp0 - 0x114u, esi);
    t9 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x118u, t9);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t9;
    g->edx = edx;
    t10 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x110u;
    t11 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t9, esi);
    t12 = g->ecx;
    t13 = g->edx;
    ecx = t12;
    edx = t13;
    edi = eax;
    eax = t11;
    COW_AT(101b3e78)
    if (edi != 0u) goto L_101b3e88;
    COW_AT(101b3e7c)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = edx;
    return 0u;
L_101b3e88: ;
    COW_AT(101b3e88)
    wr32(sp0 - 0x114u, in_ebx);
    wr32(sp0 - 0x104u, sp0 - 0x100u);
    if (rd8(sp0 - 0x100u) == 0u)
    {
        ebx = 0u;
        loc_114 = in_ebx;
    }
    else
    {
    COW_AT(101b3e9b)
        ebx = 0u;
        esi = edi + self + 0xef23u;
        loc_114 = in_ebx;
L_101b3ea2: ;
    COW_AT(101b3ea2)
        wr32(sp0 - 0x118u, sp0 - 0x104u);
        wr32(sp0 - 0x11cu, esi);
        g->eax = sp0 - 0x104u;
        g->esp = sp0 - 0x10cu;
        t14 = cow_thiscall_cdecl(g, COW_IMG(0x101243b0u), ecx, 4, esi, sp0 - 0x104u, loc_114, rd32(sp0 - 0x110u));
        eax = t14;
    COW_AT(101b3ead)
        if (rd8(sp0 - 0x100u) != 0u)
        {
            ecx = (uint32_t)(int16_t)eax;
            ebx = ebx + (uint32_t)(int16_t)eax;
            loc_114 = rd32(sp0 - 0x114u);
            goto L_101b3ea2;
        }
        ebx = ebx + (uint32_t)(int16_t)eax;
        loc_114 = rd32(sp0 - 0x114u);
    }
    COW_AT(101b3ebf)
    g->ebx = loc_114;
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = sp0 - 0x100u;
    return ebx;
L_101b3ecc: ;
    COW_AT(101b3ecc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t15 = cow_thiscall(g, COW_IMG(0x101b71f0u), self, 0);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(101b3ed3)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x10cu);
    g->edi = rd32(sp0 - 0x110u);
    g->ebp = rd32(sp0 - 0x108u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b3e20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b3e30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x110u);
        in_esi = rd32(sp0 - 0x10cu);
        in_ebp = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3e38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x110u);
        in_esi = rd32(sp0 - 0x10cu);
        in_ebp = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3e53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3e67u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x110u;
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101b3e78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3e7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3e88u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3e9bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x114u;
        g->edx = sp0 - 0x100u;
        g->ebx = 0u;
        wr32(sp0 - 0x104u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101b3ea2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x114u;
        g->edx = sp0 - 0x100u;
        wr32(sp0 - 0x104u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101b3eadu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x11cu;
        wr32(sp0 - 0x118u, sp0 - 0x104u);
        wr32(sp0 - 0x104u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101b3ebfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_114;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_114 = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x114u;
        g->edx = sp0 - 0x100u;
        wr32(sp0 - 0x104u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x101b3eccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x110u);
        in_esi = rd32(sp0 - 0x10cu);
        in_ebp = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    case 0x101b3ed3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x110u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b3e20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b3e20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
