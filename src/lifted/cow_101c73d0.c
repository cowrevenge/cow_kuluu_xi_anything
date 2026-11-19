/* f_0x101c73d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c73d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c73dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101c73df;
    case 0x101c73edu: eax = g->eax; ecx = g->ecx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101c73ed;
    case 0x101c7403u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101c7403;
    case 0x101c7411u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_101c7411;
    case 0x101c7461u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101c7461;
    case 0x101c746fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_101c746f;
    case 0x101c7488u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101c7488;
    case 0x101c74a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101c74a4;
    default: break;
    }
#endif

    COW_AT(101c73d0)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
        goto L_101c73ed;
    }
    COW_AT(101c73df)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 4u;
L_101c73ed: ;
    COW_AT(101c73ed)
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    t1 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, COW_IMG(0x101c4c90u), t1, 2, arg1, 0u);
    t3 = g->ecx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        goto L_101c7411;
    }
    COW_AT(101c7403)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return 5u;
L_101c7411: ;
    COW_AT(101c7411)
    t4 = rd32(self + 4u) * rd32(self + 8u) * 4u;
    wr32(sp0 - 0x1cu, t4);
    t5 = rd32(self + 0xcu);
    wr32(sp0 - 0x20u, t5);
    wr32(sp0 - 0xcu, 0x5849424du);
    t6 = rd16(self + 4u);
    t7 = rd16(self + 8u);
    wr16(sp0 - 8u, (uint16_t)t6);
    wr16(sp0 - 6u, (uint16_t)t7);
    g->edx = t5;
    g->esp = sp0 - 0x10u;
    t8 = cow_call_regs(g, COW_IMG(0x101c8c50u), (eax & 0xffff0000u) | t6, g->ecx, g->edx, 1, 4, t5, t4, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t9 = g->edx;
    wr32(sp0 - 4u, t8);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0xcu);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    wr32(sp0 - 0x2cu, arg1);
    g->eax = sp0 - 0xcu;
    g->edx = t9;
    g->esp = sp0 - 0x18u;
    t10 = cow_thiscall(g, COW_IMG(0x101c4920u), rd32(COW_IMG(0x10662dccu)), 5, arg1, sp0 - 0xcu, 0xcu, 0u, 0u);
    t11 = g->edx;
    if ((int32_t)t10 >= 0)
    {
        eax = t10;
        edx = t11;
        esi = t4;
        goto L_101c746f;
    }
    COW_AT(101c7461)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return 3u;
L_101c746f: ;
    COW_AT(101c746f)
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, esi);
    t12 = rd32(self + 0xcu);
    wr32(sp0 - 0x28u, t12);
    wr32(sp0 - 0x2cu, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t13 = cow_thiscall(g, COW_IMG(0x101c4920u), rd32(COW_IMG(0x10662dccu)), 5, arg1, t12, esi, 1u, 0u);
    t14 = g->edx;
    if ((int32_t)t13 >= 0) goto L_101c74a4;
    eax = t13;
    edx = t14;
    COW_AT(101c7488)
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, arg1);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x101c49e0u), rd32(COW_IMG(0x10662dccu)), 2, arg1, 0u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return 3u;
L_101c74a4: ;
    COW_AT(101c74a4)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c73d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c73dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101c73edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101c7403u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101c7411u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c7461u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101c746fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101c7488u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c74a4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c73d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c73d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
