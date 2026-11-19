/* f_0x100ec190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ec190(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ec1a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ec1a0;
    case 0x100ec1b3u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ec1b3;
    case 0x100ec1bau: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ec1ba;
    case 0x100ec1ebu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ec1eb;
    case 0x100ec20au: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ec20a;
    case 0x100ec228u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ec228;
    case 0x100ec26cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ec26c;
    case 0x100ec27fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_100ec27f;
    default: break;
    }
#endif

    COW_AT(100ec190)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_100ec27f;
    }
    edi = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100ec1a0)
    if (rd8(arg3 + 0x10u) - 1u > 3u)
    {
        eax = rd8(arg3 + 0x10u) - 1u;
        edx = arg3;
        goto L_100ec27f;
    }
    eax = rd8(arg3 + 0x10u) - 1u;
    COW_AT(100ec1b3)
    t1 = rd32(COW_IMG(0x100ec284u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x100ec1bau: goto L_100ec1ba;
    case 0x100ec1ebu: goto L_100ec1eb;
    case 0x100ec20au: goto L_100ec20a;
    case 0x100ec228u: goto L_100ec228;
    default: rt_fatal(g, COW_IMG(0x100ec1b3u), "switch");
    }
    return 0;
L_100ec1ba: ;
    COW_AT(100ec1ba)
    edi = edi + 0x3c01cu;
    eax = 0u;
    ecx = 0x45u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t10 = rd32(arg3 + 0x14u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x3c028u, t10);
    t11 = rd32(arg3 + 0x18u);
    t12 = rd32(COW_IMG(0x104dfd98u));
    wr32(t12 + 0x3c02cu, t11);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t11;
    return (t12 & 0xffffff00u) | 1u;
L_100ec1eb: ;
    COW_AT(100ec1eb)
    t9 = rd8(arg3 + 0x11u);
    esi = arg3 + 0x14u;
    edi = edi + rd8(arg3 + 0x11u) * 0xcu + 0x3c030u;
    ecx = 0x18u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = arg3;
    return (t9 + 0x5004u & 0xffffff00u) | 1u;
L_100ec20a: ;
    COW_AT(100ec20a)
    t8 = rd8(arg3 + 0x11u);
    esi = arg3 + 0x14u;
    edi = edi + rd8(arg3 + 0x11u) * 0x14u + 0x3c090u;
    ecx = 0x28u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t8 * 5u;
    return (t8 & 0xffffff00u) | 1u;
L_100ec228: ;
    COW_AT(100ec228)
    t2 = rd32(arg3 + 4u);
    wr32(edi + 0x3c01cu, t2);
    t3 = rd32(arg3 + 8u);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x3c020u, t3);
    t4 = rd32(COW_IMG(0x104dfd98u));
    wr16(t4 + 0x3c024u, rd16(arg3 + 0xcu));
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x3c026u, rd8(rd32(COW_IMG(0x104dfd98u)) + 0x3c026u) | 0x10u);
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c138u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c138u);
        edx = t4;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c138u);
        ecx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100ec26c)
        t5 = rd32(ecx + 0x3c13cu);
        g->eax = eax;
        g->edx = ecx + 0x3c01cu;
        g->esp = sp0 - 8u;
        t6 = cow_thiscall_cdecl(g, eax, t5, 2, t5, ecx + 0x3c01cu);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
L_100ec27f: ;
    COW_AT(100ec27f)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ec190(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ec1a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100ec1b3u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ec1bau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ec1ebu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ec20au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ec228u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100ec26cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100ec27fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
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
void cow_adapter_100ec190(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ec190(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
