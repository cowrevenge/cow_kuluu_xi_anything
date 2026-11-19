/* f_0x10243f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10243f10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10243f86u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10243f86;
    case 0x10243f90u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10243f90;
    case 0x10243fd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; goto E_10243fd6;
    case 0x10243fddu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; goto E_10243fdd;
    default: break;
    }
#endif

    COW_AT(10243f10)
    t1 = rd32(COW_IMG(0x10669004u));
    wr8(t1 + 0xa5e0u, 1u);
    wr32(t1 + 0xa5d8u, 0u);
    wr32(t1 + 0x30u, 0u);
    wr8(t1 + 0xa5e1u, 0u);
    wr32(t1 + 0x18u, arg1);
    wr8(t1 + 0x20u, 0u);
    wr32(t1 + 0x14u, 1u);
    wr32(t1 + 0xa5e4u, 0xffffffffu);
    wr8(t1 + 0xa5e8u, 0u);
    wr8(t1 + 0xa600u, 0u);
    wr32(rd32(COW_IMG(0x10669004u)) + 0xa5d8u, arg2);
    eax = rd32(COW_IMG(0x10669080u)) + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x44u;
    ecx = rd32(COW_IMG(0x10669004u));
    edx = rd32(COW_IMG(0x1066908cu)) * 0xb0u;
    esi = rd32(COW_IMG(0x10669004u)) + 0x20u;
L_10243f86: ;
    COW_AT(10243f86)
    t2 = rd8(eax);
    wr8(esi, (uint8_t)t2);
    if ((uint8_t)t2 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t2;
        esi = esi + 1u;
        goto L_10243f86;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t2;
    COW_AT(10243f90)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t4 = g->edx;
    g->ebx = 0u;
    t5 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103883c8u), 1u, 0u);
    t6 = g->ecx;
    t7 = rd32(COW_IMG(0x10669004u)) + 0x30u;
    g->edx = t7;
    g->esp = sp0;
    t8 = cow_cdecl(g, COW_IMG(0x1023e4d0u), 3, t7, in_esi, in_ebx);
    t9 = g->edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103883c8u));
    if (rd32(rd32(COW_IMG(0x10669004u)) + 0x14u) != 0u)
    {
        eax = rd32(COW_IMG(0x10669004u));
        goto L_10243fdd;
    }
    eax = rd32(COW_IMG(0x10669004u));
    COW_AT(10243fd6)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return rd32(eax + 0xa5d8u);
L_10243fdd: ;
    COW_AT(10243fdd)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10243f10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10243f86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243f90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10243fd6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10243fddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
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
void cow_adapter_10243f10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10243f10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
