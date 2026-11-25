/* f_0x100eabc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100eabc0(Guest* g)
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
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100eabc9u: eax = g->eax; in_edx = g->edx; goto E_100eabc9;
    case 0x100eabd0u: eax = g->eax; in_edx = g->edx; goto E_100eabd0;
    case 0x100eabdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100eabde;
    case 0x100eabe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100eabe5;
    case 0x100eabe8u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100eabe8;
    case 0x100eac12u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100eac12;
    case 0x100eac21u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100eac21;
    case 0x100eac60u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100eac60;
    default: break;
    }
#endif

    COW_AT(100eabc0)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100eabe5;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100eabc9)
    if ((uint8_t)arg1 != 1u) goto L_100eabe5;
    COW_AT(100eabd0)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xe4u, 0u, 0u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(100eabde)
    if (eax != 0u) goto L_100eabe8;
L_100eabe5: ;
    COW_AT(100eabe5)
    return eax & 0xffffff00u;
L_100eabe8: ;
    COW_AT(100eabe8)
    t3 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x9852u);
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x9852u, (uint16_t)(t3 + 1u));
    t4 = rd8(rd32(COW_IMG(0x104dfd98u)) + 0x9853u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x9853u, t4 & 0x7fu);
    t5 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x9852u);
    if ((uint16_t)t5 != 0u)
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100eac12)
        wr16(ecx + 0x9852u, 1u);
        ecx = rd32(COW_IMG(0x104dfd98u));
    }
    COW_AT(100eac21)
    t6 = rd16(ecx + 0x9852u);
    t7 = rd8(eax + 4u);
    wr16(eax + 0xau, (uint16_t)t6);
    wr8(eax + 4u, (t7 & 0xfu) | 0xb0u);
    t8 = rd8(eax + 5u);
    wr8(eax + 5u, t8 & 0x3fu);
    wr8(eax + 6u, (uint8_t)arg2);
    wr8(eax + 7u, (uint8_t)arg3);
    wr8(eax + 0x10u, 0u);
    g->eax = eax;
    g->esp = sp0;
    t9 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x90u, 0u);
    eax = t9;
    COW_AT(100eac60)
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100eabc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100eabc9u:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100eabd0u:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100eabdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100eabe5u:
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
    case 0x100eabe8u:
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
    case 0x100eac12u:
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
    case 0x100eac21u:
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
    case 0x100eac60u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100eabc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100eabc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
