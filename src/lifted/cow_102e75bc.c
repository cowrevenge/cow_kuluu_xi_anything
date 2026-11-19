/* f_0x102e75bc - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102e75bc(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 172u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e75edu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e75ed;
    case 0x102e75f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e75f3;
    case 0x102e75f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e75f9;
    case 0x102e75ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e75ff;
    case 0x102e7601u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e7601;
    case 0x102e7607u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e7607;
    case 0x102e760fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e760f;
    case 0x102e7615u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e7615;
    case 0x102e761bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e761b;
    case 0x102e761fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e761f;
    case 0x102e7627u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e7627;
    case 0x102e762au: ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e762a;
    case 0x102e762fu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e762f;
    case 0x102e7635u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e7635;
    case 0x102e7639u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e7639;
    case 0x102e7640u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e7640;
    case 0x102e7646u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e7646;
    case 0x102e7650u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e7650;
    case 0x102e7656u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e7656;
    case 0x102e7661u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e7661;
    case 0x102e7669u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0xa4u); in_ebx = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xa0u); g->edi = rd32(sp0 - 0xa4u); goto E_102e7669;
    default: break;
    }
#endif

    COW_AT(102e75bc)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xa0u, in_ebx);
    wr32(sp0 - 0xa4u, in_edi);
    wr32(sp0 - 0xa8u, 0x25u);
    edi = sp0 - 0x9cu;
    eax = 0u;
    ecx = 0x25u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(sp0 - 5u, 0u);
    wr32(sp0 - 0xa8u, sp0 - 0x9cu);
    wr32(sp0 - 0x9cu, 0x94u);
    g->eax = sp0 - 0x9cu;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xa4u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103291a8u)), 1, sp0 - 0x9cu);   /* kernel32.dll!GetVersionExA */
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(102e75ed)
        wr8(sp0 - 5u, 1u);
        ebx = (in_ebx & 0xffffff00u) | 1u;
    }
    COW_AT(102e75f3)
    if (rd32(sp0 - 0x8cu) != 1u) goto L_102e7615;
    COW_AT(102e75f9)
    if (rd32(sp0 - 0x98u) <= 4u)
    {
        zf = rd32(sp0 - 0x98u) == 4u;
    COW_AT(102e75ff)
        if (!zf) goto L_102e760f;
    COW_AT(102e7601)
        if (rd32(sp0 - 0x94u) < 0xau) goto L_102e760f;
    COW_AT(102e7607)
        if (rd16(sp0 - 0x90u) >= 0x55du) goto L_102e761f;
L_102e760f: ;
    COW_AT(102e760f)
        wr8(sp0 - 5u, 1u);
    }
L_102e761f: ;
    COW_AT(102e761f)
    if (arg1 == 6u) goto L_102e7640;
    COW_AT(102e7627)
    if (arg1 == 7u) goto L_102e7639;
    COW_AT(102e762a)
    if (arg1 - 7u != 3u) goto L_102e7635;
    COW_AT(102e762f)
    if (rd8(sp0 - 5u) == 0u)
    {
        eax = arg1 - 0xau;
        goto L_102e7661;
    }
L_102e7635: ;
    COW_AT(102e7635)
    eax = 0u;
    esi = in_esi;
L_102e7669: ;
    COW_AT(102e7669)
    g->ebx = in_ebx;
    g->esi = esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax;
L_102e7615: ;
    COW_AT(102e7615)
    if (rd32(sp0 - 0x8cu) != 2u) goto L_102e7635;
    COW_AT(102e761b)
    if ((uint8_t)ebx == 0u) goto L_102e7650;
    goto L_102e761f;
L_102e7639: ;
    COW_AT(102e7639)
    g->ebx = ebx;
    g->edi = edi;
    g->esp = sp0 - 0xa4u;
    t4 = cow_call_regs(g, COW_IMG(0x102e74dfu), arg1 - 7u, ecx, edx, 1, 0);
    eax = t4;
    esi = in_esi;
    goto L_102e7669;
L_102e7640: ;
    COW_AT(102e7640)
    if (rd8(sp0 - 5u) != 0u) goto L_102e7635;
    COW_AT(102e7646)
    g->ebx = ebx;
    g->edi = edi;
    g->ebp = sp0 - 0x78u;
    g->eax = arg1 - 6u;
    g->esp = sp0 - 0xa4u;
    t5 = cow_stdcall(g, COW_IMG(0x102e7517u), 0);
    t6 = g->esi;
    eax = t5 & 4u;
    esi = t6;
    goto L_102e7669;
L_102e7650: ;
    COW_AT(102e7650)
    if (arg1 == 0xau) goto L_102e7661;
    COW_AT(102e7656)
    wr32(sp0 - 0xa8u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0xa4u;
    t7 = cow_stdcall(g, rd32(COW_IMG(0x1032925cu)), 1, arg1);   /* kernel32.dll!IsProcessorFeaturePresent */
    eax = t7;
    esi = in_esi;
    goto L_102e7669;
L_102e7661: ;
    COW_AT(102e7661)
    g->ebx = ebx;
    g->esi = in_esi;
    g->edi = edi;
    g->ebp = sp0 - 0x78u;
    g->eax = eax;
    g->esp = sp0 - 0xa4u;
    t8 = cow_stdcall(g, COW_IMG(0x102e7517u), 0);
    t9 = g->esi;
    eax = t8 & 8u;
    esi = t9;
    goto L_102e7669;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e75bc(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e75edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebx = in_ebx & 0xffffff00u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e75f3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e75f9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e75ffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7601u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7607u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e760fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7615u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e761bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e761fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7627u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->eax = arg1 - 6u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e762au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->eax = arg1 - 7u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e762fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->eax = arg1 - 0xau;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7635u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7639u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->eax = arg1 - 7u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7640u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->eax = arg1 - 6u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7646u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->eax = arg1 - 6u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7650u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7656u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7661u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        wr32(sp0 - 0xa8u, sp0 - 0x9cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7669u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xa4u);
        in_ebx = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xa4u;
        g->ebp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e75bc(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e75bc(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
