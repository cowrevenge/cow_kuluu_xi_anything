/* f_0x1024ce30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1024ce30(Guest* g)
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1024ce3au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1024ce3a;
    case 0x1024ce4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1024ce4f;
    case 0x1024ce58u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1024ce58;
    case 0x1024ce9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1024ce9f;
    case 0x1024ceb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1024ceb3;
    case 0x1024cebau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1024ceba;
    case 0x1024cecbu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1024cecb;
    case 0x1024ceceu: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1024cece;
    default: break;
    }
#endif

    COW_AT(1024ce30)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100f0fa0u), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1024ce9f;
    }
    eax = t1;
    COW_AT(1024ce3a)
    if (rd8(eax + 4u) != rd32(COW_IMG(0x10669138u)))
    {
        ecx = rd32(COW_IMG(0x10669138u));
        edx = rd8(eax + 4u);
        goto L_1024ce58;
    }
    ecx = rd32(COW_IMG(0x10669138u));
    esi = rd32(COW_IMG(0x1066913cu));
    COW_AT(1024ce4f)
    if (rd8(eax + 7u) == esi)
    {
        edx = rd8(eax + 7u);
        goto L_1024ce9f;
    }
    edx = rd8(eax + 7u);
L_1024ce58: ;
    COW_AT(1024ce58)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x12u, ecx);
    t4 = g->ecx;
    t5 = g->edx;
    g->ecx = t4;
    g->edx = t5;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x24u);
    t7 = g->ecx;
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_cdecl(g, COW_IMG(0x10312031u), 2, COW_IMG(0x10669110u), t6);
    t10 = g->edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x1024cee0u), 0u, COW_IMG(0x10669110u), 0u, 0u, 1u, 0u);
    g->esi = in_esi;
    return;
L_1024ce9f: ;
    COW_AT(1024ce9f)
    t11 = rd32(COW_IMG(0x106693fcu));
    wr32(COW_IMG(0x10669130u), 4u);
    if (t11 != 0u)
    {
        ecx = t11;
    COW_AT(1024ceb3)
        g->esp = sp0 - 4u;
        cow_fastcall(g, COW_IMG(0x102518b0u), ecx, edx, 1, 0u);
    }
    COW_AT(1024ceba)
    if (rd32(rd32(COW_IMG(0x105783ecu)) + 8u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x105783ecu)) + 8u);
    COW_AT(1024cecb)
        wr32(eax + 0x34u, rd32(eax + 0x34u) | 1u);
    }
    COW_AT(1024cece)
    wr8(COW_IMG(0x106218e6u), 1u);
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1024ce30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1024ce3au:
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
    case 0x1024ce4fu:
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
    case 0x1024ce58u:
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
    case 0x1024ce9fu:
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
    case 0x1024ceb3u:
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
    case 0x1024cebau:
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
    case 0x1024cecbu:
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
        g->ecx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1024ceceu:
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
        g->ecx = 1u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1024ce30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1024ce30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
