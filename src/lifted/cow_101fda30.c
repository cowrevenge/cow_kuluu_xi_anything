/* f_0x101fda30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_101fda30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd16(COW_IMG(0x103850aau) + arg5 * 2u + (rd8(arg4) >> 4u) * 0xau);
    if ((((((t1 << 0x10u >> 1u & 0x78000u) | (t1 << 0x10u & 0xf00000u)) >> 1u | (t1 << 0x10u & 0xf000000u)) >> 1u | (t1 << 0x10u & 0xf0000000u)) >> (arg2 + arg3 * 5u + 7u & 0x1fu) & rd32(self + 0x54u)) != 0u)
    {
        eax = rd32(self + 0x54u);
        goto L_101fdae3;
    }
    eax = rd32(self + 0x54u);
    esi = ((((t1 << 0x10u >> 1u & 0x78000u) | (t1 << 0x10u & 0xf00000u)) >> 1u | (t1 << 0x10u & 0xf000000u)) >> 1u | (t1 << 0x10u & 0xf0000000u)) >> (arg2 + arg3 * 5u + 7u & 0x1fu);
    wr32(self + 0x54u, eax | esi);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x101fd9f0u), self, 1, 0xffffu);
    t3 = g->ecx;
    if (t2 == 0u)
    {
        eax = t2;
        goto L_101fdad9;
    }
    eax = t2;
    ecx = t3;
    wr32(eax + 8u, arg4);
    wr32(eax + 4u, (uint16_t)arg1);
    wr32(eax, esi);
    wr8(eax + 0xcu, (uint8_t)arg2);
    wr8(eax + 0xdu, (uint8_t)arg3);
    wr8(eax + 0xeu, (uint8_t)arg5);
    return (eax & 0xffffff00u) | 1u;
L_101fdad9: ;
    wr32(0u, 0u);
L_101fdae3: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fda30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fda30(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
