/* f_0x100ebb00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ebb00(Guest* g)
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
    uint32_t in_eax = g->eax;
    uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ebb0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100ebb0b;
    case 0x100ebb21u: eax = g->eax; ecx = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100ebb21;
    case 0x100ebb25u: eax = g->eax; ecx = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100ebb25;
    case 0x100ebb29u: eax = g->eax; ecx = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100ebb29;
    case 0x100ebb2du: eax = g->eax; ecx = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100ebb2d;
    case 0x100ebb31u: eax = g->eax; ecx = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100ebb31;
    case 0x100ebb3au: eax = g->eax; ecx = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100ebb3a;
    case 0x100ebb4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100ebb4c;
    case 0x100ebb50u: eax = g->eax; ecx = g->ecx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100ebb50;
    case 0x100ebb73u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100ebb73;
    default: break;
    }
#endif

    COW_AT(100ebb00)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        goto L_100ebb4c;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100ebb0b)
    eax = 0u;
    ecx = ecx + 0x194c6u;
L_100ebb21: ;
    COW_AT(100ebb21)
    if (eax == (uint8_t)arg3) goto L_100ebb31;
    COW_AT(100ebb25)
    if ((uint8_t)arg1 == 0u) goto L_100ebb31;
    COW_AT(100ebb29)
    if (eax == 0u) goto L_100ebb31;
    COW_AT(100ebb2d)
    if (rd8(ecx) == (uint8_t)arg1) goto L_100ebb50;
L_100ebb31: ;
    COW_AT(100ebb31)
    if (eax + 1u < 0xau)
    {
        eax = eax + 1u;
        ecx = ecx + 8u;
        goto L_100ebb21;
    }
    eax = eax + 1u;
    ecx = ecx + 8u;
    COW_AT(100ebb3a)
    g->eax = eax;
    g->edx = (uint8_t)arg3;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x34u, 0u, 0u);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        edx = t6;
        goto L_100ebb73;
    }
    eax = t5;
L_100ebb4c: ;
    COW_AT(100ebb4c)
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_100ebb50: ;
    COW_AT(100ebb50)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = (uint8_t)arg3;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x80u);
    t2 = g->ecx;
    t3 = g->edx;
    g->ebx = arg1;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, 9u, 0u, 0u, 0u, 0u, t1, 9u);
    g->ebx = in_ebx;
    return t4 & 0xffffff00u;
L_100ebb73: ;
    COW_AT(100ebb73)
    wr8(eax + 0xau, (uint8_t)arg1);
    wr32(eax + 4u, arg2);
    wr8(eax + 0xbu, (uint8_t)arg3);
    t7 = rd16((uint8_t)arg1 * 0x2cu + rd32(COW_IMG(0x104dfd98u)) + 0x9868u);
    t8 = rd32(COW_IMG(0x104dfd98u));
    wr16(eax + 8u, (uint16_t)t7);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t9 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0xcu, 0u);
    g->ebx = in_ebx;
    return (t9 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ebb00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ebb0bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100ebb21u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = (uint8_t)arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ebb25u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = (uint8_t)arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ebb29u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = (uint8_t)arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ebb2du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = (uint8_t)arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ebb31u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = (uint8_t)arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ebb3au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = (uint8_t)arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ebb4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100ebb50u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edx = (uint8_t)arg3;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ebb73u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ebb00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ebb00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
