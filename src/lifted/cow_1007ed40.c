/* f_0x1007ed40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007ed40(Guest* g)
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
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1007ed55u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1007ed55;
    case 0x1007ed58u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1007ed58;
    case 0x1007ed6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1007ed6e;
    case 0x1007ed7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1007ed7f;
    case 0x1007ed89u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1007ed89;
    case 0x1007ed8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1007ed8c;
    case 0x1007eda3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1007eda3;
    case 0x1007edaau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1007edaa;
    case 0x1007edaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1007edae;
    case 0x1007edc5u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1007edc5;
    case 0x1007edc9u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1007edc9;
    case 0x1007edd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1007edd5;
    default: break;
    }
#endif

    COW_AT(1007ed40)
    t1 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->eax = rd32(COW_IMG(0x103551e0u));
    g->ecx = t1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10079170u), 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 1u)
    {
        eax = t3 - 1u;
        ecx = t4;
        edx = t5;
        goto L_1007edaa;
    }
    eax = t3 - 1u;
    ecx = t4;
    edx = t5;
    COW_AT(1007ed55)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1007eda3;
    }
    eax = eax - 1u;
    COW_AT(1007ed58)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 7u);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int8_t)((uint8_t)t6 == 0u) < 0)
    {
        ecx = t7;
        edx = (t8 & 0xffffff00u) | (uint8_t)t6 == 0u;
        esi = (uint32_t)(int8_t)((uint8_t)t6 == 0u);
        goto L_1007ed7f;
    }
    eax = t6;
    ecx = t7;
    edx = (t8 & 0xffffff00u) | (uint8_t)t6 == 0u;
    esi = (uint32_t)(int8_t)((uint8_t)t6 == 0u);
L_1007ed6e: ;
    COW_AT(1007ed6e)
    t9 = (eax & 0xffffff00u) | esi == 1u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x101938f0u), 2, 7u, t9);
    t10 = g->ecx;
    t11 = g->edx;
    ecx = t10;
    edx = t11;
L_1007ed7f: ;
    COW_AT(1007ed7f)
    if (esi == 0u)
    {
        eax = esi;
        goto L_1007edae;
    }
    eax = esi;
    COW_AT(1007ed89)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1007edc5;
    }
    eax = eax - 1u;
    COW_AT(1007ed8c)
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x137u);
    t12 = g->edx;
    g->esi = in_esi;
    g->edx = t12;
    return arg3;
L_1007eda3: ;
    COW_AT(1007eda3)
    esi = 1u;
    goto L_1007ed6e;
L_1007edaa: ;
    COW_AT(1007edaa)
    esi = 0u;
    goto L_1007ed6e;
L_1007edae: ;
    COW_AT(1007edae)
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x136u);
    t14 = g->edx;
    g->esi = in_esi;
    g->edx = t14;
    return arg3;
L_1007edc5: ;
    COW_AT(1007edc5)
    if ((int32_t)esi >= 0)
    {
    COW_AT(1007edc9)
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0xffffffffu);
        t13 = g->edx;
        edx = t13;
    }
    COW_AT(1007edd5)
    g->esi = in_esi;
    g->edx = edx;
    return arg3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1007ed40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1007ed55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007ed58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007ed6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007ed7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007ed89u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1007ed8cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007eda3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007edaau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007edaeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007edc5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1007edc9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ecx = 0xffffffffu;
        (void)sp0;
        return 1;
    }
    case 0x1007edd5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1007ed40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1007ed40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
