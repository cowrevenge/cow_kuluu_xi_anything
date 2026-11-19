/* f_0x100f28d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f28d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f28e8u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f28e8;
    case 0x100f2914u: ecx = g->ecx; ebx = g->ebx; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f2914;
    case 0x100f2916u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f2916;
    case 0x100f291cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f291c;
    case 0x100f2920u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f2920;
    case 0x100f2924u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f2924;
    case 0x100f292bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f292b;
    case 0x100f2930u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f2930;
    case 0x100f2935u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f2935;
    case 0x100f2940u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f2940;
    case 0x100f294au: self = g->ecx; ebx = g->ebx; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f294a;
    case 0x100f294eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f294e;
    case 0x100f2954u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f2954;
    case 0x100f2958u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f2958;
    case 0x100f295cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f295c;
    case 0x100f2963u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f2963;
    case 0x100f2968u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f2968;
    case 0x100f296du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f296d;
    case 0x100f2978u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f2978;
    case 0x100f297bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100f297b;
    default: break;
    }
#endif

    COW_AT(100f28d0)
    if (rd32(sp0 + 8u) >= 0x32u)
    {
        ebx = rd32(sp0 + 8u);
        goto L_100f294a;
    }
    ebx = rd32(sp0 + 8u);
    COW_AT(100f28e8)
    edi = COW_IMG(0x104df8d4u);
    eax = 0x20202020u;
    ecx = ebx >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 + 8u, ebx);
    ecx = ebx & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(COW_IMG(0x104df8d4u) + ebx, 0u);
    if (arg1 == 0u) goto L_100f297b;
    COW_AT(100f2914)
    eax = arg1;
    ecx = ebx;
    edx = arg1;
    esi = COW_IMG(0x104df8d4u);
L_100f2916: ;
    COW_AT(100f2916)
    if (rd8(edx) == 0u) goto L_100f297b;
    eax = (eax & 0xffffff00u) | rd8(edx);
    COW_AT(100f291c)
    if (ecx == 0u) goto L_100f297b;
    COW_AT(100f2920)
    if ((int8_t)eax >= 0) goto L_100f2935;
    COW_AT(100f2924)
    if (rd8(edx + 1u) == 0u) goto L_100f297b;
    ebx = (ebx & 0xffffff00u) | rd8(edx + 1u);
    COW_AT(100f292b)
    if (ecx <= 1u) goto L_100f297b;
    COW_AT(100f2930)
    wr8(esi, (uint8_t)eax);
    ecx = ecx - 1u;
    edx = edx + 1u;
    esi = esi + 1u;
L_100f2935: ;
    COW_AT(100f2935)
    t1 = rd8(edx);
    wr8(esi, (uint8_t)t1);
    if (edx + 1u != 0u)
    {
        eax = (eax & 0xffffff00u) | t1;
        ecx = ecx - 1u;
        edx = edx + 1u;
        esi = esi + 1u;
        goto L_100f2916;
    }
    COW_AT(100f2940)
    return COW_IMG(0x104df8d4u);
L_100f294a: ;
    COW_AT(100f294a)
    if (arg1 == 0u)
    {
        esi = COW_IMG(0x104df8d4u);
        goto L_100f2978;
    }
    eax = 0x32u;
    ecx = self;
    edx = arg1;
    esi = COW_IMG(0x104df8d4u);
L_100f294e: ;
    COW_AT(100f294e)
    if (rd8(edx) == 0u) goto L_100f2978;
    ecx = (ecx & 0xffffff00u) | rd8(edx);
    COW_AT(100f2954)
    if (eax == 0u) goto L_100f2978;
    COW_AT(100f2958)
    if ((int8_t)ecx >= 0) goto L_100f296d;
    COW_AT(100f295c)
    if (rd8(edx + 1u) == 0u) goto L_100f2978;
    ebx = (ebx & 0xffffff00u) | rd8(edx + 1u);
    COW_AT(100f2963)
    if (eax <= 1u) goto L_100f2978;
    COW_AT(100f2968)
    wr8(esi, (uint8_t)ecx);
    eax = eax - 1u;
    edx = edx + 1u;
    esi = esi + 1u;
L_100f296d: ;
    COW_AT(100f296d)
    t2 = rd8(edx);
    wr8(esi, (uint8_t)t2);
    if (edx + 1u != 0u)
    {
        eax = eax - 1u;
        ecx = (ecx & 0xffffff00u) | t2;
        edx = edx + 1u;
        esi = esi + 1u;
        goto L_100f294e;
    }
    esi = esi + 1u;
L_100f2978: ;
    COW_AT(100f2978)
    wr8(esi, 0u);
L_100f297b: ;
    COW_AT(100f297b)
    return COW_IMG(0x104df8d4u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f28d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f28e8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        g->esp = sp0 - 8u;
        g->edx = arg1;
        g->esi = COW_IMG(0x104df8d4u);
        (void)sp0;
        return 1;
    }
    case 0x100f2914u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t ecx;
        ecx = g->ecx;
        ebx = g->ebx;
        g->esp = sp0 - 8u;
        g->eax = arg1;
        g->edx = arg1;
        g->esi = COW_IMG(0x104df8d4u);
        (void)sp0;
        return 1;
    }
    case 0x100f2916u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f291cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2920u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2924u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f292bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2930u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2935u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2940u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f294au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t self;
        self = g->ecx;
        ebx = g->ebx;
        g->esp = sp0 - 8u;
        g->eax = 0x32u;
        g->edx = arg1;
        g->esi = COW_IMG(0x104df8d4u);
        (void)sp0;
        return 1;
    }
    case 0x100f294eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2954u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2958u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f295cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2963u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2968u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f296du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f2978u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f297bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f28d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f28d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
