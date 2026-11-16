/* f_0x10208620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10208620(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 4u) + 1u;
    t2 = rd32(self + 4u);
    t3 = rd32(self + 0xcu);
    wr32(self + 4u, t1);
    g->eax = t2 * 0x15u;
    g->edx = t3;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
    t5 = g->edx;
    t6 = rd32(rd32(t4) + 0x204u);
    t7 = t2 * 0x54u + t3;
    g->eax = rd32(t4);
    t8 = rd32(t4);
    t9 = cow_fastcall(g, COW_IMG(0x101f4b20u), t7, t5, 4, 0u, 0xeu, t6, 0x80808080u);
    t10 = g->ecx;
    t11 = g->edx;
    t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x289u);
    wr32(t7 + 0x4cu, t12);
    wr32(t7 + 0x48u, 0xffffffffu);
    t13 = rd32(self + 4u) + 1u;
    t14 = rd32(self + 0xcu);
    t15 = rd32(self + 4u);
    wr32(self + 4u, t13);
    g->eax = t14;
    g->edx = t15 * 0x15u;
    g->esp = sp0 - 0xcu;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xe3u);
    t17 = g->edx;
    t18 = t14 + t15 * 0x54u;
    g->esp = sp0 - 8u;
    t19 = cow_fastcall(g, COW_IMG(0x101f4b20u), t18, t17, 4, 1u, 1u, t16, 0x80909040u);
    t20 = g->ecx;
    t21 = g->edx;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x54u);
    wr32(t18 + 0x4cu, t22);
    wr32(t18 + 0x48u, 0xfffffffeu);
    return t22;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10208620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10208620(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
