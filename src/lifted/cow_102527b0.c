/* f_0x102527b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102527b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102527b9u: eax = g->eax; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102527b9;
    case 0x102527c1u: eax = g->eax; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102527c1;
    case 0x102527ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102527ce;
    case 0x102527d5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102527d5;
    case 0x102527ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102527ec;
    case 0x102527fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102527fb;
    case 0x10252803u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10252803;
    case 0x1025281au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1025281a;
    case 0x10252829u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10252829;
    case 0x1025282du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1025282d;
    case 0x10252834u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10252834;
    case 0x10252843u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10252843;
    case 0x1025284cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1025284c;
    default: break;
    }
#endif

    COW_AT(102527b0)
    wr32(sp0 - 4u, in_esi);
    if (rd32(sp0 + 4u) != 0u)
    {
        esi = rd32(sp0 + 4u);
        goto L_102527d5;
    }
    esi = rd32(sp0 + 4u);
    COW_AT(102527b9)
    if (rd32(sp0 + 8u) == 0u) goto L_102527d5;
    eax = rd32(sp0 + 8u);
    COW_AT(102527c1)
    wr32(sp0 - 8u, 0x3fu);
    wr32(sp0 - 0xcu, COW_IMG(0x10389a74u));
    wr32(sp0 - 0x10u, eax);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x10389a74u), 0x3fu);
    t1 = g->edx;
    edx = t1;
    COW_AT(102527ce)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return 0u;
L_102527d5: ;
    COW_AT(102527d5)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, sp0 + 8u);
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    g->ecx = sp0 + 4u;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10275c80u), 6, 1u, 0u, 0u, sp0 + 4u, sp0 + 8u, 0u);
    t2 = g->ecx;
    ecx = t2;
    COW_AT(102527ec)
    if (rd32(sp0 + 4u) == rd32(sp0 + 8u))
    {
        eax = rd32(sp0 + 8u);
        edx = rd32(sp0 + 4u);
        goto L_1025282d;
    }
    eax = rd32(sp0 + 8u);
    edx = rd32(sp0 + 4u);
    COW_AT(102527fb)
    wr32(sp0 - 8u, 2u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 2u);   /* kernel32.dll!Sleep */
    t3 = g->edx;
    edx = t3;
    COW_AT(10252803)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, sp0 + 8u);
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    g->ecx = sp0 + 4u;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10275c80u), 6, 1u, 0u, 0u, sp0 + 4u, sp0 + 8u, 0u);
    t4 = g->ecx;
    ecx = t4;
    COW_AT(1025281a)
    if (rd32(sp0 + 4u) == rd32(sp0 + 8u))
    {
        eax = rd32(sp0 + 8u);
        edx = rd32(sp0 + 4u);
        goto L_1025282d;
    }
    edx = rd32(sp0 + 4u);
    COW_AT(10252829)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return 0u;
L_1025282d: ;
    COW_AT(1025282d)
    wr32(sp0 - 8u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x10275c50u), 1, 1u);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(10252834)
    wr32(sp0 - 0xcu, 0x51u);
    wr32(sp0 - 0x10u, COW_IMG(0x10389bbcu));
    wr32(sp0 - 0x14u, esi);
    wr32(sp0 - 0x18u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, esi, COW_IMG(0x10389bbcu), 0x51u);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(10252843)
    wr32(sp0 - 0x1cu, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10275c50u), 1, 0u);
    t11 = g->edx;
    edx = t11;
    esi = eax;
    COW_AT(1025284c)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102527b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102527b9u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102527c1u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102527ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102527d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102527ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x102527fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10252803u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1025281au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10252829u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1025282du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10252834u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        wr32(sp0 - 0xcu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10252843u:
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
    case 0x1025284cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102527b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102527b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
