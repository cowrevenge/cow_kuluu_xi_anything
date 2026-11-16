/* f_0x101a8990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101a8990(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if ((int32_t)((uint8_t)arg1 * 0x14u + (uint8_t)arg2) >= 200) goto L_101a8a2c;
    if (rd8(arg3) != 0u) goto L_101a8a15;
    t1 = rd8(COW_IMG(0x103d3c84u));
    wr32(sp0 - 0xfu, 0u);
    wr32(sp0 - 0xbu, 0u);
    t2 = (uint8_t)arg1 * 0x14u + (uint8_t)arg2 + 1u;
    wr32(sp0 - 0x1cu, t2);
    wr32(sp0 - 7u, 0u);
    wr16(sp0 - 3u, 0u);
    wr32(sp0 - 0x20u, COW_IMG(0x1037ab20u));
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    wr8(sp0 - 0x10u, (uint8_t)t1);
    wr8(sp0 - 1u, 0u);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x1037ab20u), t2, in_edi, in_esi);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    t3 = (uint8_t)arg2 * 0x50u + rd32(self + 4u) + 4u;
    wr32(sp0 - 0x2cu, t3);
    g->esp = sp0 - 0x24u;
    cow_thiscall_cdecl(g, COW_IMG(0x101a73f0u), t3, 2, t3, sp0 - 0x10u);
    return;
L_101a8a15: ;
    wr32(sp0 - 0x1cu, arg3);
    t4 = (uint8_t)arg2 * 0x50u + rd32(self + 4u) + 4u;
    wr32(sp0 - 0x20u, t4);
    g->esp = sp0 - 0x18u;
    cow_thiscall_cdecl(g, COW_IMG(0x101a73f0u), t4, 2, t4, arg3);
L_101a8a2c: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a8990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a8990(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
