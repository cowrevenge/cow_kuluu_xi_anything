/* f_0x100dbd20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100dbd20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100dbd29u: eax = g->eax; ecx = g->ecx; goto E_100dbd29;
    case 0x100dbd2cu: eax = g->eax; ecx = g->ecx; goto E_100dbd2c;
    case 0x100dbd3cu: eax = g->eax; ecx = g->ecx; goto E_100dbd3c;
    case 0x100dbd3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100dbd3f;
    case 0x100dbd85u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100dbd85;
    case 0x100dbd88u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100dbd88;
    default: break;
    }
#endif

    COW_AT(100dbd20)
    if (rd32(COW_IMG(0x10492db4u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10492db4u));
        goto L_100dbd2c;
    }
    eax = rd32(COW_IMG(0x10492db4u));
    COW_AT(100dbd29)
    return eax & 0xffffff00u;
L_100dbd2c: ;
    COW_AT(100dbd2c)
    if ((int32_t)rd8(eax + 0x2ee0u) < 2999) goto L_100dbd3f;
    COW_AT(100dbd3c)
    return eax & 0xffffff00u;
L_100dbd3f: ;
    COW_AT(100dbd3f)
    wr32(sp0 - 4u, sp0 + 0xcu);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, arg3);
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    g->eax = arg3;
    g->esp = sp0;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x10329100u)), 6, 0u, 0u, arg2, arg3, 0u, sp0 + 0xcu);   /* kernel32.dll!CreateThread */
    wr32(rd32(COW_IMG(0x10492db4u)) + rd8(rd32(COW_IMG(0x10492db4u)) + 0x2ee0u) * 4u, t1);
    t2 = (t1 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10492db4u)) + 0x2ee0u);
    if (rd32((uint8_t)t2 * 4u + rd32(COW_IMG(0x10492db4u))) != 0u)
    {
        eax = t2;
        ecx = rd32(COW_IMG(0x10492db4u));
        edx = (uint8_t)t2;
        goto L_100dbd88;
    }
    eax = t2;
    edx = (uint8_t)t2;
    COW_AT(100dbd85)
    g->edx = edx;
    return eax & 0xffffff00u;
L_100dbd88: ;
    COW_AT(100dbd88)
    wr8(ecx + 0x2ee0u, (uint8_t)((uint8_t)eax + 1u));
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100dbd20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100dbd29u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100dbd2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100dbd3cu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100dbd3fu:
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
    case 0x100dbd85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100dbd88u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100dbd20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100dbd20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
