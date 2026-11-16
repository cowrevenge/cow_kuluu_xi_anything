/* f_0x1023c300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023c300(Guest* g)
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
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
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
    cow_frame(g, sp0, 180u);

    wr32(sp0 - 0x68u, in_ebx);
    wr32(sp0 - 0x6cu, in_esi);
    wr32(sp0 - 0x70u, in_edi);
    wr32(sp0 - 0x74u, 0x99u);
    wr32(sp0 - 0x78u, 8u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x70u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x99u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x7cu, 0x9au);
    wr32(sp0 - 0x80u, 8u);
    wr32(sp0 - 0x5cu, t1);
    wr32(sp0 - 0x58u, 0u);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x78u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x9au);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x84u, 2u);
    wr32(sp0 - 0x88u, 0x1bu);
    wr32(sp0 - 0x54u, t4);
    wr32(sp0 - 0x50u, 0u);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x80u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x1bu, 2u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x8cu, 3u);
    wr32(sp0 - 0x90u, 0x1bu);
    wr32(sp0 - 0x3cu, t7);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x88u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x1bu, 3u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x94u, 0x9bu);
    wr32(sp0 - 0x98u, 8u);
    wr32(sp0 - 0x38u, t10);
    wr32(sp0 - 0x34u, 0u);
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x90u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x9bu);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x9cu, 0x9cu);
    wr32(sp0 - 0xa0u, 8u);
    wr32(sp0 - 0x4cu, t13);
    wr32(sp0 - 0x48u, 0u);
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x98u;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x9cu);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0xa4u, 0x9du);
    wr32(sp0 - 0xa8u, 8u);
    wr32(sp0 - 0x30u, t16);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0xa0u;
    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x9du);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0xacu, 0x9eu);
    wr32(sp0 - 0xb0u, 8u);
    wr32(sp0 - 0x2cu, t19);
    wr32(sp0 - 0x28u, 0u);
    g->ecx = t20;
    g->edx = t21;
    g->esp = sp0 - 0xa8u;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x9eu);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x24u, t22);
    wr32(sp0 - 0x74u, 0x9fu);
    wr32(sp0 - 0x78u, 8u);
    g->esp = sp0 - 0x70u;
    t25 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, 0x9fu);
    wr32(sp0 - 0x20u, t25);
    wr32(sp0 - 0x18u, sp0 - 0x5cu);
    wr32(sp0 - 0x14u, sp0 - 0x54u);
    wr32(sp0 - 0xcu, sp0 - 0x4cu);
    wr32(sp0 - 8u, sp0 - 0x30u);
    wr32(sp0 - 0x10u, sp0 - 0x3cu);
    wr32(sp0 - 4u, sp0 - 0x24u);
    wr32(sp0 - 0x44u, self + 0x20u);
    wr32(sp0 - 0x74u, sp0 - 0x64u);
    wr32(sp0 - 0x1cu, 0u);
    t26 = rd32(self + 0x14u);
    t27 = rd32(self + 0x18u);
    t28 = rd32(self + 8u);
    t29 = rd32(sp0 + rd32(self + 0x14u) * 4u + rd32(self + 0x18u) * 4u - 0x18u);
    wr16(sp0 - 0x64u, 0u);
    wr16(sp0 - 0x62u, 0u);
    wr16(sp0 - 0x60u, 0u);
    wr16(sp0 - 0x5eu, 0u);
    wr32(sp0 - 0x40u, 0u);
    g->edx = sp0 - 0x64u;
    cow_call_regs(g, COW_IMG(0x1011a730u), t26 + t27, t28, g->edx, 0, 1, sp0 - 0x64u);
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 - 0x74u, sp0 - 0x64u);
    g->eax = sp0 - 0x64u;
    g->edx = t31;
    t32 = cow_cdecl(g, COW_IMG(0x1023bf50u), 1, sp0 - 0x64u);
    t33 = g->edx;
    wr32(sp0 - 0x78u, sp0 - 0x64u);
    wr32(sp0 - 0x7cu, t29);
    g->ecx = sp0 - 0x64u;
    g->esp = sp0 - 0x74u;
    cow_cdecl(g, COW_IMG(0x1023c040u), 2, t29, sp0 - 0x64u);
    t34 = g->ecx;
    wr16(sp0 - 0x62u, (uint16_t)(rd16(sp0 - 0x62u) + 0x30u));
    wr32(sp0 - 0x80u, sp0 - 0x64u);
    wr32(sp0 - 0x84u, sp0 - 0x44u);
    g->eax = sp0 - 0x44u;
    g->edx = sp0 - 0x64u;
    g->esp = sp0 - 0x7cu;
    t35 = cow_cdecl(g, COW_IMG(0x1023c040u), 2, sp0 - 0x44u, sp0 - 0x64u);
    t36 = g->edx;
    g->edx = t36;
    return t35;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023c300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023c300(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
