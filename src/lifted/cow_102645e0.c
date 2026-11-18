/* f_0x102645e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102645e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102645fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); self = g->ebx - 0xa4u; g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102645fb;
    case 0x1026460au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1026460a;
    case 0x10264624u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10264624;
    case 0x10264634u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10264634;
    default: break;
    }
#endif

    COW_AT(102645e0)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 0xa4u);   /* kernel32.dll!EnterCriticalSection */
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(self + 0xc4u) != 0u)
    {
        ecx = t1;
        edx = t2;
        goto L_1026460a;
    }
    eax = rd32(self + 0xc4u);
    ecx = t1;
    edx = t2;
    COW_AT(102645fb)
    g->esp = sp0 - 8u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0xa4u);   /* kernel32.dll!LeaveCriticalSection */
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 1u;
L_1026460a: ;
    COW_AT(1026460a)
    t3 = rd32(self + 0xbcu);
    g->ecx = ecx;
    g->edx = edx;
    t4 = rd32(COW_IMG(0x103291c4u));
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, t4, 1, t3);   /* kernel32.dll!SetEvent */
    t5 = g->ecx;
    t6 = g->edx;
    if (rd32(self + 0xc0u) == 0u)
    {
        eax = rd32(self + 0xc0u);
        ecx = t5;
        edx = t6;
    }
    else
    {
        eax = rd32(self + 0xc0u);
        ecx = t5;
        edx = t6;
        edi = t4;
    COW_AT(10264624)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t7 = cow_thiscall(g, edi, ecx, 1, eax);
        t8 = g->edx;
        t9 = rd32(self + 0xc0u);
        g->ecx = t9;
        g->edx = t8;
        t10 = cow_stdcall(g, rd32(COW_IMG(0x10329104u)), 1, t9);   /* kernel32.dll!CloseHandle */
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    COW_AT(10264634)
    wr32(self + 0xc4u, 0u);
    wr32(self + 0xc8u, 0u);
    wr32(self + 0xc0u, 0u);
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0xa4u);   /* kernel32.dll!LeaveCriticalSection */
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102645e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102645fbu:
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
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        self = g->ebx - 0xa4u;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1026460au:
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
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10264624u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10264634u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102645e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102645e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
