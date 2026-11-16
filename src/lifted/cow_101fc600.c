/* f_0x101fc600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fc600(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;

    t1 = rd32(self + 0x64u);
    t2 = rd32(COW_IMG(0x104dfd98u));
    t3 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    t4 = rd32(self + 0x54u);
    t5 = rd32(self + 0x60u);
    wr32(t1 + t4 * 8u + 4u, 0xffffffffu);
    wr32(t1 + t4 * 8u, t3);
    g->eax = t1;
    g->edx = t3;
    g->esp = sp0 - 0x10u;
    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x23u);
    t7 = g->edx;
    t8 = t4 * 0x54u + t5;
    g->esp = sp0 - 0xcu;
    t9 = cow_fastcall(g, COW_IMG(0x101f4b20u), t8, t7, 4, 0u, 1u, t6, 0x80808080u);
    t10 = g->ecx;
    t11 = g->edx;
    g->edx = t11;
    g->esp = sp0 - 0x10u;
    t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x24u);
    t13 = g->edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_fastcall(g, COW_IMG(0x101f4b20u), t8, t13, 4, 1u, 0x21u, t12, 0x80808080u);
    t15 = g->ecx;
    t16 = g->edx;
    t17 = t1 + t4 * 8u;
    wr32(t8 + 0x48u, t17);
    g->edx = t16;
    t18 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x14u);
    t19 = g->edx;
    wr32(t8 + 0x4cu, t18);
    t20 = (t18 & 0xffff0000u) | (uint16_t)(rd32(self + 0x54u) + 1u);
    t21 = rd32(self + 0x60u);
    t22 = rd32(self + 0x54u) + 1u;
    wr32(self + 0x54u, t22);
    g->esi = self;
    g->eax = t20;
    t23 = cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, t21, t20, 1u);
    g->esi = in_esi;
    return t23;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fc600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fc600(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
