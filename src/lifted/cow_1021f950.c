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
    uint32_t t33;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);

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
    wr32(sp0 - 0x28u, 1u);
    g->ecx = t2;
    g->edx = t3;
    t4 = rd16(sp0 - 8u);
    t5 = rd16(sp0 - 2u);
    t6 = cow_call_regs(g, COW_IMG(0x101f7200u), t1, g->ecx, g->edx, 1, 1, 1u);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x2cu, 1u);
    wr8(sp0 - 0xcu, (uint8_t)t6);
    g->esp = sp0 - 0x28u;
    t9 = cow_cdecl(g, COW_IMG(0x101f7260u), 1, 1u);
    wr8(sp0 - 0x10u, (uint8_t)t9);
    wr32(sp0 - 0x28u, self + 4u);
    t10 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x2cu, t10);
    wr32(sp0 - 0x30u, self + 1u);
    t11 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x34u, t11);
    wr32(sp0 - 0x38u, rd32(COW_IMG(0x104e1be4u)));
    wr32(sp0 - 0x3cu, sp0 - 0x14u);
    t12 = (uint32_t)(int16_t)t5 + 4u;
    wr32(sp0 - 0x40u, t12);
    wr32(sp0 - 0x44u, (uint32_t)(int16_t)t4);
    t13 = rd32(COW_IMG(0x104e1be4u));
    wr8(sp0 - 0x14u, 0xa9u);
    wr8(sp0 - 0x13u, 0u);
    wr16(sp0 - 0x12u, 0u);
    g->ebx = 0u;
    g->eax = sp0 - 0x14u;
    g->ecx = self;
    g->edx = t13;
    g->esp = sp0 - 0x24u;
    t14 = cow_stdcall(g, COW_IMG(0x1021fa90u), 8, (uint32_t)(int16_t)t4, t12, sp0 - 0x14u, t13, t11, self + 1u, t10, self + 4u);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, 1u);
    t17 = cow_call_regs(g, COW_IMG(0x101f71c0u), t14, g->ecx, g->edx, 1, 2, 1u, 2u);
    wr8(sp0 - 0xcu, (uint8_t)t17);
    wr32(sp0 - 0x28u, self + 6u);
    t18 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x2cu, t18);
    wr32(sp0 - 0x30u, sp0 - 0x14u);
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    wr32(sp0 - 0x38u, t12 + 0x1cu);
    wr32(sp0 - 0x3cu, (uint32_t)(int16_t)t4);
    wr8(sp0 - 0x10u, 0xa9u);
    wr8(sp0 - 0xfu, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr8(sp0 - 0x14u, 0xabu);
    wr8(sp0 - 0x13u, 0u);
    wr16(sp0 - 0x12u, 0u);
    g->eax = sp0 - 0x14u;
    g->ecx = self;
    g->edx = t18;
    t19 = cow_stdcall(g, COW_IMG(0x1021fb80u), 6, (uint32_t)(int16_t)t4, t12 + 0x1cu, sp0 - 0x10u, sp0 - 0x14u, t18, self + 6u);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x28u, 2u);
    g->ecx = t20;
    g->edx = t21;
    t22 = cow_call_regs(g, COW_IMG(0x101f7200u), t19, g->ecx, g->edx, 1, 1, 2u);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x2cu, 2u);
    wr8(sp0 - 0x14u, (uint8_t)t22);
    g->esp = sp0 - 0x28u;
    t25 = cow_cdecl(g, COW_IMG(0x101f7260u), 1, 2u);
    wr8(sp0 - 0xcu, (uint8_t)t25);
    wr32(sp0 - 0x28u, self + 5u);
    t26 = rd32(sp0 - 0xcu);
    wr8(sp0 - 0x10u, 0xabu);
    wr8(sp0 - 0xfu, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr32(sp0 - 0x2cu, t26);
    wr32(sp0 - 0x30u, self + 2u);
    t27 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x34u, t27);
    wr32(sp0 - 0x38u, rd32(COW_IMG(0x104e1be0u)));
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    wr32(sp0 - 0x40u, t12 + 0x30u);
    wr32(sp0 - 0x44u, (uint32_t)(int16_t)t4);
    g->ebx = 0u;
    g->eax = rd32(COW_IMG(0x104e1be0u));
    g->ecx = self;
    g->edx = t27;
    t28 = rd32(COW_IMG(0x104e1be0u));
    g->esp = sp0 - 0x24u;
    t29 = cow_stdcall(g, COW_IMG(0x1021fa90u), 8, (uint32_t)(int16_t)t4, t12 + 0x30u, sp0 - 0x10u, t28, t27, self + 2u, t26, self + 5u);
    t30 = g->ecx;
    t31 = g->edx;
    g->edx = t31;
    t32 = cow_call_regs(g, COW_IMG(0x101f71a0u), t29, g->ecx, g->edx, 1, 0);
    t33 = g->edx;
    wr32(sp0 - 0x28u, t32);
    wr32(sp0 - 0x2cu, t12 + 0x4eu);
    wr32(sp0 - 0x30u, (uint32_t)(int16_t)t4);
    g->ebx = 0u;
    cow_stdcall(g, COW_IMG(0x1021fb10u), 3, (uint32_t)(int16_t)t4, t12 + 0x4eu, t32);
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021f950(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021f950(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
