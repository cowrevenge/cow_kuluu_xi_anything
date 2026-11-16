/* f_0x101ead70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101ead70(Guest* g)
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x100e7660u), 1, arg3);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(arg2 + 8u, t1);
    wr32(arg2 + 0xcu, t3);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x100e7610u), 1, arg3);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(arg2 + 0x28u, t4);
    wr32(arg2 + 0x2cu, t6);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x100e7630u), 1, arg3);
    t8 = g->ecx;
    t9 = g->edx;
    wr8(arg2 + 0x20u, (uint8_t)t7);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x18u;
    t10 = cow_cdecl(g, COW_IMG(0x100e7680u), 1, arg3);
    t11 = g->ecx;
    t12 = g->edx;
    wr16(arg2 + 0x30u, (uint16_t)t10);
    g->esp = sp0 - 0x1cu;
    t13 = cow_cdecl(g, COW_IMG(0x100e7650u), 1, arg3);
    wr32(arg2 + 0x10u, rd32(t13));
    t14 = rd32(t13 + 4u);
    wr32(arg2 + 0x14u, t14);
    t15 = rd32(t13 + 8u);
    wr32(arg2 + 0x18u, t15);
    t16 = rd32(t13 + 0xcu);
    wr32(arg2 + 0x1cu, t16);
    wr8(arg2 + 0x1fu, 0u);
    g->eax = t16;
    g->esp = sp0 - 0xcu;
    t17 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, arg2 + 0x10u, 4, 1u, 0x26u, arg2 + 0x10u, 0x80808080u);
    t18 = g->edx;
    t19 = rd32(self + 0x68u);
    cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t18, 4, 0u, 0xeu, t19, 0x80808080u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ead70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ead70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
