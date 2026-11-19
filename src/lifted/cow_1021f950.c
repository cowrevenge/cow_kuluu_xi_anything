/* f_0x1021f950 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1021f950(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
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
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1021f979u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1021f979;
    case 0x1021f98du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021f98d;
    case 0x1021f998u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021f998;
    case 0x1021f9d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021f9d4;
    case 0x1021f9e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021f9e0;
    case 0x1021fa1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021fa1f;
    case 0x1021fa29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021fa29;
    case 0x1021fa34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021fa34;
    case 0x1021fa6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021fa6f;
    case 0x1021fa74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021fa74;
    case 0x1021fa81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1021fa81;
    default: break;
    }
#endif

    COW_AT(1021f950)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x28u, sp0 - 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->eax = sp0 - 8u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_stdcall(g, COW_IMG(0x1021f360u), 1, sp0 - 8u);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1021f979)
    wr32(sp0 - 0x28u, 1u);
    g->ecx = ecx;
    g->edx = edx;
    t4 = rd16(sp0 - 8u);
    t5 = rd16(sp0 - 2u);
    g->esp = sp0 - 0x24u;
    t6 = cow_call_regs(g, COW_IMG(0x101f7200u), eax, g->ecx, g->edx, 1, 1, 1u);
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    ebp = (uint32_t)(int16_t)t4;
    edi = (uint32_t)(int16_t)t5 + 4u;
    COW_AT(1021f98d)
    wr32(sp0 - 0x2cu, 1u);
    wr8(sp0 - 0xcu, (uint8_t)eax);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t9 = cow_cdecl(g, COW_IMG(0x101f7260u), 1, 1u);
    eax = t9;
    COW_AT(1021f998)
    wr8(sp0 - 0x10u, (uint8_t)eax);
    wr32(sp0 - 0x28u, self + 4u);
    t10 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x2cu, t10);
    wr32(sp0 - 0x30u, self + 1u);
    t11 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x34u, t11);
    wr32(sp0 - 0x38u, rd32(COW_IMG(0x104e1be4u)));
    wr32(sp0 - 0x3cu, sp0 - 0x14u);
    wr32(sp0 - 0x40u, edi);
    wr32(sp0 - 0x44u, ebp);
    t12 = rd32(COW_IMG(0x104e1be4u));
    wr8(sp0 - 0x14u, 0xa9u);
    wr8(sp0 - 0x13u, 0u);
    wr16(sp0 - 0x12u, 0u);
    g->ebx = 0u;
    g->eax = sp0 - 0x14u;
    g->ecx = self;
    g->edx = t12;
    g->esp = sp0 - 0x24u;
    t13 = cow_stdcall(g, COW_IMG(0x1021fa90u), 8, ebp, edi, sp0 - 0x14u, t12, t11, self + 1u, t10, self + 4u);
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(1021f9d4)
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, 1u);
    g->esp = sp0 - 0x24u;
    t16 = cow_call_regs(g, COW_IMG(0x101f71c0u), eax, g->ecx, g->edx, 1, 2, 1u, 2u);
    eax = t16;
    edi = edi + 0x1cu;
    COW_AT(1021f9e0)
    wr8(sp0 - 0xcu, (uint8_t)eax);
    wr32(sp0 - 0x28u, self + 6u);
    t17 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x2cu, t17);
    wr32(sp0 - 0x30u, sp0 - 0x14u);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    wr32(sp0 - 0x38u, edi);
    wr32(sp0 - 0x3cu, ebp);
    wr8(sp0 - 0x10u, 0xa9u);
    wr8(sp0 - 0xfu, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr8(sp0 - 0x14u, 0xabu);
    wr8(sp0 - 0x13u, 0u);
    wr16(sp0 - 0x12u, 0u);
    g->eax = sp0 - 0x14u;
    g->ecx = self;
    g->edx = t17;
    g->esp = sp0 - 0x24u;
    t18 = cow_stdcall(g, COW_IMG(0x1021fb80u), 6, ebp, edi, sp0 - 0x10u, sp0 - 0x14u, t17, self + 6u);
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(1021fa1f)
    wr32(sp0 - 0x28u, 2u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t21 = cow_call_regs(g, COW_IMG(0x101f7200u), eax, g->ecx, g->edx, 1, 1, 2u);
    t22 = g->ecx;
    t23 = g->edx;
    eax = t21;
    ecx = t22;
    edx = t23;
    edi = edi + 0x14u;
    COW_AT(1021fa29)
    wr32(sp0 - 0x2cu, 2u);
    wr8(sp0 - 0x14u, (uint8_t)eax);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t24 = cow_cdecl(g, COW_IMG(0x101f7260u), 1, 2u);
    eax = t24;
    COW_AT(1021fa34)
    wr8(sp0 - 0xcu, (uint8_t)eax);
    wr32(sp0 - 0x28u, self + 5u);
    t25 = rd32(sp0 - 0xcu);
    wr8(sp0 - 0x10u, 0xabu);
    wr8(sp0 - 0xfu, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr32(sp0 - 0x2cu, t25);
    wr32(sp0 - 0x30u, self + 2u);
    t26 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x34u, t26);
    wr32(sp0 - 0x38u, rd32(COW_IMG(0x104e1be0u)));
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    wr32(sp0 - 0x40u, edi);
    wr32(sp0 - 0x44u, ebp);
    g->ebx = 0u;
    g->eax = rd32(COW_IMG(0x104e1be0u));
    g->ecx = self;
    g->edx = t26;
    t27 = rd32(COW_IMG(0x104e1be0u));
    g->esp = sp0 - 0x24u;
    t28 = cow_stdcall(g, COW_IMG(0x1021fa90u), 8, ebp, edi, sp0 - 0x10u, t27, t26, self + 2u, t25, self + 5u);
    t29 = g->ecx;
    t30 = g->edx;
    eax = t28;
    ecx = t29;
    edx = t30;
    COW_AT(1021fa6f)
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t31 = cow_call_regs(g, COW_IMG(0x101f71a0u), eax, g->ecx, g->edx, 1, 0);
    t32 = g->edx;
    eax = t31;
    edx = t32;
    COW_AT(1021fa74)
    wr32(sp0 - 0x28u, eax);
    wr32(sp0 - 0x2cu, edi + 0x1eu);
    wr32(sp0 - 0x30u, ebp);
    g->ebx = 0u;
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, COW_IMG(0x1021fb10u), 3, ebp, edi + 0x1eu, eax);
    COW_AT(1021fa81)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1021f950(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1021f979u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1021f98du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021f998u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021f9d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1021f9e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1021fa1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1021fa29u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1021fa34u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebx = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x30u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1021fa6fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1021fa74u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1021fa81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1021f950(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1021f950(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
