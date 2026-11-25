/* f_0x1018b500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1018b500(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1018b522u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b522;
    case 0x1018b527u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b527;
    case 0x1018b52fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b52f;
    case 0x1018b547u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b547;
    case 0x1018b54eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b54e;
    case 0x1018b555u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b555;
    case 0x1018b55bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b55b;
    case 0x1018b55fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b55f;
    case 0x1018b564u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b564;
    case 0x1018b56du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b56d;
    case 0x1018b571u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b571;
    case 0x1018b587u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b587;
    case 0x1018b593u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1018b593;
    case 0x1018b59du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1018b59d;
    case 0x1018b5a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1018b5a1;
    case 0x1018b5b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1018b5b0;
    case 0x1018b5b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1018b5b7;
    case 0x1018b5c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1018b5c4;
    case 0x1018b5d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1018b5d0;
    default: break;
    }
#endif

    COW_AT(1018b500)
    t1 = rd32(COW_IMG(0x1065cb04u));
    wr32(t1 + 0x1b4u, arg1);
    t2 = rd32(COW_IMG(0x1065cb04u));
    wr8(t2 + 0x1cfu, 0u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(1018b522)
    if (eax >> 8u & 1u) goto L_1018b555;
    COW_AT(1018b527)
    if ((int32_t)arg1 < 700) goto L_1018b555;
    COW_AT(1018b52f)
    if ((int32_t)(rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1b4u) - 0x1bcu) < 260)
    {
        eax = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1b4u) - 0x1bcu;
        ecx = rd32(COW_IMG(0x1065cb04u));
        goto L_1018b55b;
    }
    eax = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1b4u) - 0x1bcu;
    ecx = rd32(COW_IMG(0x1065cb04u));
    COW_AT(1018b547)
    if ((int32_t)eax > 262) goto L_1018b55b;
    COW_AT(1018b54e)
    wr8(ecx + 0x1cfu, 1u);
L_1018b555: ;
    COW_AT(1018b555)
    ecx = rd32(COW_IMG(0x1065cb04u));
L_1018b55b: ;
    COW_AT(1018b55b)
    if (ecx != 0u)
    {
    COW_AT(1018b55f)
        g->esp = sp0 - 4u;
        cow_fastcall(g, COW_IMG(0x1018b620u), ecx, edx, 0);
        t5 = g->edx;
        edx = t5;
    }
    COW_AT(1018b564)
    if (rd32(COW_IMG(0x1047b970u)) == 0u)
    {
        eax = rd32(COW_IMG(0x1047b970u));
    }
    else
    {
        eax = rd32(COW_IMG(0x1047b970u));
    COW_AT(1018b56d)
        wr8(eax + 0x10u, 1u);
    }
    COW_AT(1018b571)
    t6 = rd32(COW_IMG(0x10631f24u));
    wr32(COW_IMG(0x1047b968u), 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10178df0u), t6, 1, arg1);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(1018b587)
    t9 = rd32(COW_IMG(0x1065cb04u));
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x1018b6a0u), t9, edx, 1, eax);
    t10 = g->ecx;
    t11 = g->edx;
    ecx = t10;
    edx = t11;
    COW_AT(1018b593)
    if (rd32(COW_IMG(0x1047b970u)) == 0u)
    {
        eax = rd32(COW_IMG(0x1047b970u));
    }
    else
    {
        eax = rd32(COW_IMG(0x1047b970u));
    COW_AT(1018b59d)
        wr8(eax + 0x10u, 0u);
    }
    COW_AT(1018b5a1)
    wr32(COW_IMG(0x1047b968u), 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t12 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(1018b5b0)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t14 = cow_thiscall(g, COW_IMG(0x1001e4f0u), eax, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(1018b5b7)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t16 = cow_thiscall(g, COW_IMG(0x1018b8c0u), rd32(COW_IMG(0x1065cb04u)), 1, 0u);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    COW_AT(1018b5c4)
    g->eax = eax;
    g->edx = edx;
    t18 = rd32(COW_IMG(0x1065cb04u));
    g->esp = sp0;
    t19 = cow_thiscall(g, COW_IMG(0x1018b8d0u), t18, 1, t18);
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(1018b5d0)
    g->esp = sp0;
    g->esi = in_esi;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1018b110u), eax, ecx, edx);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1018b500(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1018b522u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b527u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b52fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b547u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b54eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b555u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b55bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b55fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b564u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b56du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b571u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018b587u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018b593u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1018b59du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1018b5a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1018b5b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1018b5b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1018b5c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1018b5d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1018b500(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1018b500(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
