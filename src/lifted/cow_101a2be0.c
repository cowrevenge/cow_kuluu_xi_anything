/* f_0x101a2be0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101a2be0(Guest* g)
{
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 < 0) goto L_101a2c6b;
    if ((int32_t)arg1 >= 40) goto L_101a2c6b;
    t1 = (uint32_t)((int32_t)(rd32(self + 0x1dbcu) - (uint32_t)((int32_t)rd32(self + 0x1dbcu) >> 0x1fu)) >> 1u);
    g->eax = t1;
    g->edx = (uint32_t)((int32_t)rd32(self + 0x1dbcu) >> 0x1fu);
    t2 = rd32(self + 0x1dbcu);
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x101a2660u), self, 2, t1, COW_IMG(0x103d3c84u));
    t4 = g->edx;
    cow_thiscall(g, COW_IMG(0x101a2b40u), self, 0);
    if ((int32_t)(arg1 * 0x14u) >= (int32_t)(arg1 * 0x14u + 0x14u)) goto L_101a2c3d;
    esi = arg1 * 0x14u;
L_101a2c22: ;
    t5 = (uint32_t)((int32_t)(esi - (uint32_t)((int32_t)esi >> 0x1fu)) >> 1u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101a2660u), self, 2, t5, COW_IMG(0x103d3c84u));
    if ((int32_t)(esi + 2u) < (int32_t)(arg1 * 0x14u + 0x14u))
    {
        esi = esi + 2u;
        goto L_101a2c22;
    }
L_101a2c3d: ;
    t6 = (uint32_t)((int32_t)(rd32(self + 0x1dbcu) - (uint32_t)((int32_t)rd32(self + 0x1dbcu) >> 0x1fu)) >> 1u);
    g->eax = t6;
    g->edx = (uint32_t)((int32_t)rd32(self + 0x1dbcu) >> 0x1fu);
    t7 = rd32(self + 0x1dbcu);
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, COW_IMG(0x101a26c0u), self, 2, t6, COW_IMG(0x103d3c84u));
    t9 = g->edx;
    g->ebx = arg1 * 0x14u + 0x14u;
    t10 = cow_thiscall(g, COW_IMG(0x101a2980u), self, 2, arg1, COW_IMG(0x103d3c84u));
    g->ebx = in_ebx;
    return (t10 & 0xffffff00u) | 1u;
L_101a2c6b: ;
    g->ebx = in_ebx;
    return in_eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a2be0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a2be0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
