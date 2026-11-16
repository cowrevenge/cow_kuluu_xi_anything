/* f_0x10135de0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10135de0(Guest* g)
{
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_10135df1;
    return arg1 & 0xffffff00u;
L_10135df1: ;
    wr32(self + 0x74u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f8c0u), 1u, 0u);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
    ebx = self + 0x78u;
    esi = 0u;
L_10135e0e: ;
    t3 = esi + rd32(self + 0x74u);
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10134e90u), t3, g->ecx, edx, 1, 4, ebx, t3, in_esi, in_ebx);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)(esi + 4u) < 64)
    {
        ecx = t4;
        edx = t5;
        ebx = ebx + 4u;
        esi = esi + 4u;
        goto L_10135e0e;
    }
    ecx = t4;
    edx = t5;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t7 = rd32(rd32(t6) + 0x6b4u);
    wr32(self + 0xb8u, t7);
    return (t6 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10135de0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10135de0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
