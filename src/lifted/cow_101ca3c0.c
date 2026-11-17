/* f_0x101ca3c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101ca3c0(Guest* g)
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_ebx);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t1);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if (rd8(t1) == 0u)
    {
        ebx = t1;
        esi = 0u;
        goto L_101ca3f1;
    }
    ecx = self;
    edx = in_edx;
    ebx = t1;
    esi = 0u;
L_101ca3d3: ;
    wr32(sp0 - 0x10u, sp0 + 0xcu);
    g->eax = sp0 + 0xcu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x1011ce80u), 3, sp0 + 0xcu, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x14u, t2);
    g->edx = t4;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x101ca390u), 1, t2);
    t6 = g->edx;
    if (rd8(rd32(sp0 + 0xcu)) != 0u)
    {
        ecx = rd32(sp0 + 0xcu);
        edx = t6;
        esi = esi + t5;
        goto L_101ca3d3;
    }
    esi = esi + t5;
L_101ca3f1: ;
    wr32(sp0 - 0x10u, arg4);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, ebx);
    wr32(sp0 - 0x1cu, (uint32_t)(int16_t)arg2);
    t7 = (uint32_t)(int16_t)arg1 - esi;
    wr32(sp0 - 0x20u, t7);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10129f00u), 5, t7, (uint32_t)(int16_t)arg2, ebx, 0u, arg4);
    return esi + (uint32_t)(int16_t)arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ca3c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ca3c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
