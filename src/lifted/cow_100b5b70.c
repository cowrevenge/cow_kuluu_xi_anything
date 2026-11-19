/* f_0x100b5b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b5b70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100b5b7du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_100b5b7d;
    case 0x100b5b89u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_100b5b89;
    case 0x100b5ba2u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_100b5ba2;
    case 0x100b5bb5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_100b5bb5;
    case 0x100b5bd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_100b5bd3;
    case 0x100b5beeu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_100b5bee;
    case 0x100b5bf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100b5bf4;
    case 0x100b5bfau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100b5bfa;
    case 0x100b5bffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100b5bff;
    case 0x100b5c0au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_100b5c0a;
    default: break;
    }
#endif

    COW_AT(100b5b70)
    if (rd32(COW_IMG(0x10489910u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10489910u));
        goto L_100b5bee;
    }
    eax = rd32(COW_IMG(0x10489910u));
    COW_AT(100b5b7d)
    if (eax == 0x12cu) goto L_100b5ba2;
    COW_AT(100b5b89)
    wr32(COW_IMG(0x10489910u), 0x12cu);
    wr8(COW_IMG(0x104898f9u), 1u);
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_100b5ba2: ;
    COW_AT(100b5ba2)
    t1 = rd32(COW_IMG(0x10489918u));
    wr32(COW_IMG(0x10489910u), 0u);
    if (t1 == 0u)
    {
        eax = t1;
    COW_AT(100b5bb5)
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_stdcall(g, COW_IMG(0x100b5c30u), 0);
        t3 = g->edx;
        g->edx = t3;
        t4 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 1u);
        t5 = g->ecx;
        t6 = g->edx;
        cow_cdecl(g, COW_IMG(0x1018b3a0u), 1, t4);
        wr8(COW_IMG(0x104898f9u), 1u);
    }
    COW_AT(100b5bd3)
    wr32(COW_IMG(0x10489918u), 0u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 3u));
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_100b5bee: ;
    COW_AT(100b5bee)
    edx = in_edx;
    esi = COW_IMG(0x10480af0u);
L_100b5bf4: ;
    COW_AT(100b5bf4)
    if (rd32(esi) != 0u)
    {
        ecx = rd32(esi);
    COW_AT(100b5bfa)
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t7 = cow_fastcall(g, COW_IMG(0x10092900u), ecx, edx, 0);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    COW_AT(100b5bff)
    if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x10482ef0u))
    {
        esi = esi + 4u;
        goto L_100b5bf4;
    }
    COW_AT(100b5c0a)
    t9 = rd32(COW_IMG(0x10489910u));
    wr8(COW_IMG(0x104898f9u), 1u);
    wr32(COW_IMG(0x10489910u), t9 + 1u);
    wr8(self + 0x25au, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100b5b70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100b5b7du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100b5b89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100b5ba2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100b5bb5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100b5bd3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100b5beeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100b5bf4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100b5bfau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100b5bffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100b5c0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100b5b70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100b5b70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
