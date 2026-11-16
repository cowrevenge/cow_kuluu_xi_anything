/* f_0x1015acd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1015acd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 136u);

    wr32(sp0 - 0x48u, 0xeu);
    wr32(sp0 - 0x4cu, 0xcu);
    wr16(sp0 - 0x44u, 0x10u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0xeu);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x50u, 0xfu);
    wr32(sp0 - 0x54u, 0xcu);
    wr32(sp0 - 0x42u, t1);
    wr16(sp0 - 0x3eu, 0x20u);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x4cu;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0xfu);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x58u, 0x10u);
    wr32(sp0 - 0x5cu, 0xcu);
    wr32(sp0 - 0x3cu, t4);
    wr16(sp0 - 0x38u, 0x80u);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x54u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x10u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x60u, 0x11u);
    wr32(sp0 - 0x64u, 0xcu);
    wr32(sp0 - 0x36u, t7);
    wr16(sp0 - 0x32u, 0x40u);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x5cu;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x11u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x68u, 0x12u);
    wr32(sp0 - 0x6cu, 0xcu);
    wr32(sp0 - 0x30u, t10);
    wr16(sp0 - 0x2cu, 0x2000u);
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x64u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x12u);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x70u, 0x13u);
    wr32(sp0 - 0x74u, 0xcu);
    wr32(sp0 - 0x2au, t13);
    wr16(sp0 - 0x26u, 0x800u);
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x6cu;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x13u);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x78u, 0x14u);
    wr32(sp0 - 0x7cu, 0xcu);
    wr32(sp0 - 0x24u, t16);
    wr16(sp0 - 0x20u, 0x200u);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x74u;
    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x14u);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x80u, 0x15u);
    wr32(sp0 - 0x84u, 0xcu);
    wr32(sp0 - 0x1eu, t19);
    wr16(sp0 - 0x1au, 0x8000u);
    g->ecx = t20;
    g->edx = t21;
    g->esp = sp0 - 0x7cu;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x15u);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x18u, t22);
    wr16(sp0 - 0x14u, 0x400u);
    wr32(sp0 - 0x48u, 0x16u);
    wr32(sp0 - 0x4cu, 0xcu);
    g->ecx = t23;
    g->edx = t24;
    g->esp = sp0 - 0x44u;
    t25 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x16u);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x50u, 0x17u);
    wr32(sp0 - 0x54u, 0xcu);
    wr32(sp0 - 0x12u, t25);
    wr16(sp0 - 0xeu, 0x100u);
    g->esp = sp0 - 0x4cu;
    t28 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x17u);
    wr32(sp0 - 0xcu, t28);
    wr16(sp0 - 8u, 0u);
    wr32(sp0 - 6u, COW_IMG(0x103d3c84u));
    eax = 0x10u;
    ecx = sp0 - 0x44u;
L_1015adbd: ;
    if ((uint16_t)(eax & arg1) != 0u) goto L_1015add6;
    eax = eax & arg1;
    if (rd16(ecx + 6u) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(ecx + 6u);
        ecx = ecx + 6u;
        goto L_1015adbd;
    }
    return 0u;
L_1015add6: ;
    return rd32(ecx + 2u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015acd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015acd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
