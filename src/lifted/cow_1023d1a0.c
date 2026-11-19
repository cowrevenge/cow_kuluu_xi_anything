/* f_0x1023d1a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023d1a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
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
    cow_frame(g, sp0, 348u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023d243u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x130u); in_esi = rd32(sp0 - 0x12cu); g->edi = rd32(sp0 - 0x130u); g->esi = rd32(sp0 - 0x12cu); goto E_1023d243;
    case 0x1023d248u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x130u); in_esi = rd32(sp0 - 0x12cu); g->edi = rd32(sp0 - 0x130u); g->esi = rd32(sp0 - 0x12cu); goto E_1023d248;
    case 0x1023d24du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x130u); in_esi = rd32(sp0 - 0x12cu); g->edi = rd32(sp0 - 0x130u); g->esi = rd32(sp0 - 0x12cu); goto E_1023d24d;
    case 0x1023d251u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x130u); in_esi = rd32(sp0 - 0x12cu); g->edi = rd32(sp0 - 0x130u); g->esi = rd32(sp0 - 0x12cu); goto E_1023d251;
    case 0x1023d257u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x130u); in_esi = rd32(sp0 - 0x12cu); g->edi = rd32(sp0 - 0x130u); g->esi = rd32(sp0 - 0x12cu); goto E_1023d257;
    case 0x1023d25cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x130u); in_esi = rd32(sp0 - 0x12cu); g->edi = rd32(sp0 - 0x130u); g->esi = rd32(sp0 - 0x12cu); goto E_1023d25c;
    case 0x1023d26cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1023d26c;
    case 0x1023d26eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1023d26e;
    case 0x1023d2a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1023d2a5;
    case 0x1023d2bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = rd32(sp0 - 0x130u); in_esi = rd32(sp0 - 0x12cu); g->edi = rd32(sp0 - 0x130u); g->esi = rd32(sp0 - 0x12cu); goto E_1023d2bf;
    case 0x1023d2d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_1023d2d1;
    default: break;
    }
#endif

    COW_AT(1023d1a0)
    wr32(sp0 - 0x12cu, in_esi);
    wr32(sp0 - 0x130u, in_edi);
    wr32(sp0 - 0x134u, 0xbcu);
    wr32(sp0 - 0x138u, 8u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x130u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xbcu);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x13cu, 0xbu);
    wr32(sp0 - 0x140u, 0x1bu);
    wr32(sp0 - 0x114u, t1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x138u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x1bu, 0xbu);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x144u, 0xcu);
    wr32(sp0 - 0x148u, 0x1bu);
    wr32(sp0 - 0x110u, t4);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x140u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x1bu, 0xcu);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x14cu, 0xdu);
    wr32(sp0 - 0x150u, 0x1bu);
    wr32(sp0 - 0x10cu, t7);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x148u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x1bu, 0xdu);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x154u, 0xe7u);
    wr32(sp0 - 0x158u, 8u);
    wr32(sp0 - 0x108u, t10);
    wr32(sp0 - 0x104u, 0u);
    wr32(sp0 - 0x120u, COW_IMG(0x103d3c84u));
    g->edx = t12;
    g->esp = sp0 - 0x150u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0xe7u);
    t14 = g->edx;
    wr32(sp0 - 0x11cu, t13);
    wr32(sp0 - 0x134u, sp0 - 0x128u);
    wr32(sp0 - 0x118u, 0u);
    t15 = rd32(self + 8u);
    wr16(sp0 - 0x128u, 0u);
    wr16(sp0 - 0x126u, 0u);
    wr16(sp0 - 0x124u, 0u);
    wr16(sp0 - 0x122u, 0u);
    g->edx = t14;
    g->esp = sp0 - 0x130u;
    t16 = cow_call_regs(g, COW_IMG(0x1011a730u), sp0 - 0x128u, t15, g->edx, 0, 1, sp0 - 0x128u);
    t17 = g->edx;
    wr32(sp0 - 0x134u, sp0 - 0x128u);
    g->edx = t17;
    cow_cdecl(g, COW_IMG(0x1023bf50u), 1, sp0 - 0x128u);
    t18 = g->edx;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (t18 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_1023d24d;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (t18 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(1023d243)
    if (ecx == 2u) goto L_1023d251;
    COW_AT(1023d248)
    if (ecx == 3u) goto L_1023d251;
L_1023d24d: ;
    COW_AT(1023d24d)
    if (ecx == 0u) goto L_1023d257;
L_1023d251: ;
    COW_AT(1023d251)
    wr16(sp0 - 0x128u, (uint16_t)(rd16(sp0 - 0x128u) + 0x30u));
L_1023d257: ;
    COW_AT(1023d257)
    if (rd32(self + 0x34u) == 0u) goto L_1023d2bf;
    COW_AT(1023d25c)
    wr32(sp0 - 0x134u, in_ebx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x134u;
    t19 = cow_stdcall(g, COW_IMG(0x100dc130u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    if ((int32_t)(rd32(self + 0x34u) - t19 + 0x1eu) >= 0)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        ebx = rd32(self + 0x34u) - t19 + 0x1eu;
    }
    else
    {
        eax = t19;
        ecx = t20;
        edx = t21;
    COW_AT(1023d26c)
        ebx = 0u;
    }
    COW_AT(1023d26e)
    wr32(sp0 - 0x138u, ebx);
    wr32(sp0 - 0x13cu, 0x37u);
    wr32(sp0 - 0x140u, 0xau);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x138u;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x37u);
    t23 = g->ecx;
    wr32(sp0 - 0x13cu, t22);
    wr32(sp0 - 0x140u, sp0 - 0x100u);
    g->ebx = ebx;
    g->esp = sp0 - 0x12cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t22, rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u));
    wr32(sp0 - 0x144u, sp0 - 0x128u);
    wr32(sp0 - 0x148u, sp0 - 0x120u);
    wr32(sp0 - 0x120u, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->edx = sp0 - 0x120u;
    g->esp = sp0 - 0x140u;
    t24 = cow_cdecl(g, COW_IMG(0x1023c040u), 2, sp0 - 0x120u, sp0 - 0x128u);
    t25 = g->edx;
    if (ebx != 0u)
    {
        eax = t24;
        edx = t25;
        ebx = rd32(sp0 - 0x134u);
        goto L_1023d2d1;
    }
    edx = t25;
    ebx = rd32(sp0 - 0x134u);
    COW_AT(1023d2a5)
    t26 = rd32(self + 8u);
    wr32(self + 0x30u, 1u);
    wr8(t26 + 0x5du, 1u);
    wr32(self + 0x14u, 0u);
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x12cu);
    g->edi = rd32(sp0 - 0x130u);
    g->edx = edx;
    return 1u;
L_1023d2bf: ;
    COW_AT(1023d2bf)
    wr32(sp0 - 0x134u, sp0 - 0x128u);
    wr32(sp0 - 0x138u, sp0 - 0x114u);
    g->eax = sp0 - 0x114u;
    g->edx = sp0 - 0x128u;
    g->esp = sp0 - 0x130u;
    t27 = cow_cdecl(g, COW_IMG(0x1023c040u), 2, sp0 - 0x114u, sp0 - 0x128u);
    t28 = g->edx;
    eax = t27;
    edx = t28;
    ebx = in_ebx;
L_1023d2d1: ;
    COW_AT(1023d2d1)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x12cu);
    g->edi = rd32(sp0 - 0x130u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023d1a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023d243u:
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
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x130u);
        in_esi = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x130u;
        g->edi = 0u;
        wr32(sp0 - 0x134u, sp0 - 0x128u);
        (void)sp0;
        return 1;
    }
    case 0x1023d248u:
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
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x130u);
        in_esi = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x130u;
        g->edi = 0u;
        wr32(sp0 - 0x134u, sp0 - 0x128u);
        (void)sp0;
        return 1;
    }
    case 0x1023d24du:
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
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x130u);
        in_esi = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x130u;
        g->edi = 0u;
        wr32(sp0 - 0x134u, sp0 - 0x128u);
        (void)sp0;
        return 1;
    }
    case 0x1023d251u:
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
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x130u);
        in_esi = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x130u;
        g->edi = 0u;
        wr32(sp0 - 0x134u, sp0 - 0x128u);
        (void)sp0;
        return 1;
    }
    case 0x1023d257u:
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
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x130u);
        in_esi = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x130u;
        g->edi = 0u;
        wr32(sp0 - 0x134u, sp0 - 0x128u);
        (void)sp0;
        return 1;
    }
    case 0x1023d25cu:
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
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x130u);
        in_esi = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x130u;
        g->edi = 0u;
        wr32(sp0 - 0x134u, sp0 - 0x128u);
        (void)sp0;
        return 1;
    }
    case 0x1023d26cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x134u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023d26eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x134u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1023d2a5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x130u;
        g->edi = 0u;
        wr32(sp0 - 0x148u, sp0 - 0x120u);
        wr32(sp0 - 0x144u, sp0 - 0x128u);
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        wr32(sp0 - 0x120u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1023d2bfu:
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
        in_ebx = g->ebx;
        in_edi = rd32(sp0 - 0x130u);
        in_esi = rd32(sp0 - 0x12cu);
        g->esp = sp0 - 0x130u;
        wr32(sp0 - 0x134u, sp0 - 0x128u);
        (void)sp0;
        return 1;
    }
    case 0x1023d2d1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1023d1a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023d1a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
