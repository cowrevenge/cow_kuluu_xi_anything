/* f_0x1020f440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1020f440(Guest* g)
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
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020f451u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1020f451;
    case 0x1020f457u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1020f457;
    case 0x1020f48eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1020f48e;
    case 0x1020f490u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1020f490;
    case 0x1020f4d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1020f4d3;
    default: break;
    }
#endif

    COW_AT(1020f440)
    if ((int16_t)rd16(sp0 + 4u) < 0)
    {
        eax = (in_eax & 0xffff0000u) | rd16(sp0 + 4u);
        goto L_1020f4d3;
    }
    eax = (in_eax & 0xffff0000u) | rd16(sp0 + 4u);
    COW_AT(1020f451)
    if ((int16_t)eax >= 12) goto L_1020f4d3;
    COW_AT(1020f457)
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x10664494u));
    g->edx = (uint32_t)(int16_t)eax;
    t1 = rd32(COW_IMG(0x10664494u));
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x100e3200u), 1, (uint32_t)(int16_t)eax);
    t3 = g->ecx;
    t4 = g->edx;
    g->eax = rd32(COW_IMG(0x104dfd98u));
    g->ecx = t3;
    g->edx = t4;
    t5 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 0x10u;
    t6 = cow_cdecl(g, COW_IMG(0x100f9900u), 1, t5);
    t7 = g->ecx;
    t8 = g->edx;
    g->eax = (uint8_t)t6;
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0x14u;
    t9 = cow_cdecl(g, COW_IMG(0x100e3200u), 1, (uint8_t)t6);
    t10 = g->ecx;
    t11 = g->edx;
    if (t2 != 0xf800000u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        esi = t1 + 0x5cu;
        edi = t2;
    }
    else
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        esi = t1 + 0x5cu;
    COW_AT(1020f48e)
        edi = eax;
    }
    COW_AT(1020f490)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_cdecl(g, COW_IMG(0x101080e0u), 1, esi);
    t13 = g->ecx;
    t14 = g->edx;
    g->edx = t14;
    g->esp = sp0 - 0x10u;
    t15 = cow_cdecl(g, COW_IMG(0x101080a0u), 3, esi, edi, edi);
    t16 = g->edx;
    g->edx = t16;
    g->esp = sp0 - 0xcu;
    t17 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t15, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, esi, 1u, 0u, 0u, 0u);
    t18 = g->edx;
    g->edi = edi;
    t19 = cow_fastcall(g, COW_IMG(0x1020eed0u), self, t18, 0);
    t20 = g->edx;
    wr32(sp0 + 4u, COW_IMG(0x10385a64u));
    g->esp = sp0;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t20;
    return cow_tailcall(g, COW_IMG(0x1015e910u), t19, COW_IMG(0x10621838u), t20);
L_1020f4d3: ;
    COW_AT(1020f4d3)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1020f440(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1020f451u:
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
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020f457u:
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
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020f48eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1020f490u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1020f4d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1020f440(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1020f440(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
