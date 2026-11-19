/* f_0x10252f90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10252f90(Guest* g)
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
    case 0x10252f99u: eax = g->eax; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252f99;
    case 0x10252fa1u: eax = g->eax; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252fa1;
    case 0x10252faeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10252fae;
    case 0x10252fb5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10252fb5;
    case 0x10252fccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10252fcc;
    case 0x10252fdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10252fdb;
    case 0x10252fe3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10252fe3;
    case 0x10252ffau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10252ffa;
    case 0x10253009u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10253009;
    case 0x1025300du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1025300d;
    case 0x10253014u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10253014;
    case 0x10253023u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10253023;
    case 0x1025302cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1025302c;
    default: break;
    }
#endif

    COW_AT(10252f90)
    wr32(sp0 - 4u, in_esi);
    if (rd32(sp0 + 4u) != 0u)
    {
        esi = rd32(sp0 + 4u);
        goto L_10252fb5;
    }
    esi = rd32(sp0 + 4u);
    COW_AT(10252f99)
    if (rd32(sp0 + 8u) == 0u) goto L_10252fb5;
    eax = rd32(sp0 + 8u);
    COW_AT(10252fa1)
    wr32(sp0 - 8u, 0x24u);
    wr32(sp0 - 0xcu, COW_IMG(0x10389ca0u));
    wr32(sp0 - 0x10u, eax);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x10389ca0u), 0x24u);
    t1 = g->edx;
    edx = t1;
    COW_AT(10252fae)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return 0u;
L_10252fb5: ;
    COW_AT(10252fb5)
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
    COW_AT(10252fcc)
    if (rd32(sp0 + 4u) == rd32(sp0 + 8u))
    {
        eax = rd32(sp0 + 8u);
        edx = rd32(sp0 + 4u);
        goto L_1025300d;
    }
    eax = rd32(sp0 + 8u);
    edx = rd32(sp0 + 4u);
    COW_AT(10252fdb)
    wr32(sp0 - 8u, 2u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 2u);   /* kernel32.dll!Sleep */
    t3 = g->edx;
    edx = t3;
    COW_AT(10252fe3)
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
    COW_AT(10252ffa)
    if (rd32(sp0 + 4u) == rd32(sp0 + 8u))
    {
        eax = rd32(sp0 + 8u);
        edx = rd32(sp0 + 4u);
        goto L_1025300d;
    }
    edx = rd32(sp0 + 4u);
    COW_AT(10253009)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return 0u;
L_1025300d: ;
    COW_AT(1025300d)
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
    COW_AT(10253014)
    wr32(sp0 - 0xcu, 0x36u);
    wr32(sp0 - 0x10u, COW_IMG(0x10389c94u));
    wr32(sp0 - 0x14u, esi);
    wr32(sp0 - 0x18u, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, esi, COW_IMG(0x10389c94u), 0x36u);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(10253023)
    wr32(sp0 - 0x1cu, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10275c50u), 1, 0u);
    t11 = g->edx;
    edx = t11;
    esi = eax;
    COW_AT(1025302c)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10252f90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10252f99u:
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
    case 0x10252fa1u:
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
    case 0x10252faeu:
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
    case 0x10252fb5u:
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
    case 0x10252fccu:
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
    case 0x10252fdbu:
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
    case 0x10252fe3u:
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
    case 0x10252ffau:
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
    case 0x10253009u:
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
    case 0x1025300du:
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
    case 0x10253014u:
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
    case 0x10253023u:
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
    case 0x1025302cu:
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
void cow_adapter_10252f90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10252f90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
