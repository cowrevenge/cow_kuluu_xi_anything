/* f_0x101139c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101139c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10113a0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x18u); goto E_10113a0d;
    case 0x10113a14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x18u); goto E_10113a14;
    case 0x10113a1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x18u); goto E_10113a1b;
    case 0x10113a22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x18u); goto E_10113a22;
    case 0x10113a3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x18u); goto E_10113a3a;
    case 0x10113a42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x18u); goto E_10113a42;
    default: break;
    }
#endif

    COW_AT(101139c0)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x14u, 0u);
    t1 = rd32(sp0 + 0xcu);
    t2 = rd32(arg1 + 0x80cu);
    wr32(sp0 + 0xcu, t1);
    wr8(sp0 - 0x14u, 1u);
    t3 = rd32(t2 + 4u);
    wr32(t1 + 4u, t3);
    t4 = rd32(arg1 + 0x8f0u);
    wr32(sp0 - 0x1cu, t4);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1010f570u), sp0 - 0x10u, 1, t4);
    eax = t1 + 8u - arg2 + 4u;
    ecx = rd32(sp0 - 8u);
    ebx = t1 + 8u;
L_10113a0d: ;
    COW_AT(10113a0d)
    if (rd32(ecx + 4u) == 0u) goto L_10113a42;
    COW_AT(10113a14)
    if (rd32(ecx + 8u) == 0u) goto L_10113a42;
    COW_AT(10113a1b)
    if (eax >= 0x104u) goto L_10113a42;
    COW_AT(10113a22)
    t5 = rd32(rd32(rd32(ecx) + 4u) + 4u);
    wr32(ebx, t5);
    if (rd32(ecx + 8u) == 0u)
    {
        eax = eax + 4u;
        ebx = ebx + 4u;
    }
    else
    {
        eax = eax + 4u;
        edx = rd32(ecx + 8u);
        ebx = ebx + 4u;
    COW_AT(10113a3a)
        wr32(sp0 - 8u, edx);
        ecx = edx;
    }
    goto L_10113a0d;
L_10113a42: ;
    COW_AT(10113a42)
    t6 = rd32(sp0 + 0xcu);
    wr8(sp0 - 0x13u, (uint8_t)((uint8_t)ebx - (uint8_t)t6));
    t7 = rd32(sp0 - 0x14u);
    wr32(t6, t7);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1010f560u), sp0 - 0x10u, 0);
    g->ebx = in_ebx;
    return ebx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101139c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10113a0du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10113a14u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10113a1bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10113a22u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10113a3au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10113a42u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101139c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101139c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
