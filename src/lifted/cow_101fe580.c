/* f_0x101fe580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101fe580(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(self + 0xcu) + rd32(self + 4u) * 0x54u;
    g->eax = rd32(self + 4u) * 0x15u;
    t2 = rd32(self + 4u);
    g->esp = sp0 - 0xcu;
    t3 = cow_fastcall(g, COW_IMG(0x101f4b20u), t1, in_edx, 4, 0u, 0x15u, arg1, 0x80808080u);
    cow_fastcall(g, COW_IMG(0x101f4b20u), t1, arg2, 4, 1u, 0x19u, arg1, arg2);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(t1 + 0x48u, arg1);
    if ((int32_t)arg3 < 0)
    {
        ecx = t4;
        edx = t5;
        esi = t1;
        loc_10 = 0x54u;
        loc_14 = 0xcu;
    }
    else
    {
        ecx = t4;
        edx = t5;
        esi = t1;
        loc_10 = arg3;
        loc_14 = 0xeu;
    }
    g->eax = arg3;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, loc_14, loc_10);
    wr32(esi + 0x4cu, t6);
    t7 = rd32(self + 4u) + 1u;
    wr32(self + 4u, t7);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fe580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fe580(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
