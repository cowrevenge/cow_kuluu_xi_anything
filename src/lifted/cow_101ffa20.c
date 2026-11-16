/* f_0x101ffa20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101ffa20(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(COW_IMG(0x10663ac8u)) == 0u) goto L_101ffa39;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x7au);
    return;
L_101ffa39: ;
    esi = arg1;
    edi = self + 0x184u;
    ecx = 0x12u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t1 = rd32(rd32(COW_IMG(0x103601bcu)) + 0x80u);
    g->eax = t1;
    t2 = rd32(arg1 + 0x18u);
    g->esp = sp0 - 0x18u;
    t3 = cow_stdcall(g, COW_IMG(0x100db780u), 1, t1);
    t4 = ((uint8_t)t3 << 8u | (t2 & 0xf0000u)) << 8u | (uint16_t)t2;
    t5 = rd32(arg1 + 0x14u);
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x100f7680u), 5, t5, t4, 0u, COW_IMG(0x101ffab0u), (uint8_t)arg2);
    if (t6 == 0u)
    {
        wr8(COW_IMG(0x10663ac8u), 1u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ffa20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ffa20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
