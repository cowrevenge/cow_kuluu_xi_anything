/* f_0x101fdc20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101fdc20(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, in_esi);
    if ((int32_t)arg1 >= -1) goto L_101fdc64;
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0x80808080u);
    t1 = arg3 * 0x18u + (uint32_t)(int16_t)rd16(self + 0x2eu);
    wr32(sp0 - 0x14u, t1);
    t2 = arg2 * 0x18u + (uint32_t)(int16_t)rd16(self + 0x2cu);
    wr32(sp0 - 0x18u, t2);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(rd32(rd32(self + 0x20u)) + 4u), 5, t2, t1, 0x80808080u, 0u, 0u);
    return;
L_101fdc64: ;
    if ((int32_t)arg1 >= 0)
    {
        if ((int32_t)arg1 <= 7)
        {
            wr32(sp0 - 8u, arg1 + 0x1fu);
            wr32(sp0 - 0xcu, 0xefu);
            wr32(sp0 - 0x10u, COW_IMG(0x1036fef0u));
            wr32(sp0 - 0x14u, sp0 + 4u);
            g->esp = sp0;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 + 4u, COW_IMG(0x1036fef0u), 0xefu, arg1 + 0x1fu, in_esi);
            wr32(sp0 - 0x18u, 0x20808080u);
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, sp0 + 4u);
            t3 = arg3 * 0x18u + (uint32_t)(int16_t)rd16(self + 0x2eu) + 5u;
            wr32(sp0 - 0x24u, t3);
            t4 = arg2 * 0x18u + (uint32_t)(int16_t)rd16(self + 0x2cu) + 5u;
            wr32(sp0 - 0x28u, t4);
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x10129f00u), 5, t4, t3, sp0 + 4u, 0u, 0x20808080u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fdc20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fdc20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
