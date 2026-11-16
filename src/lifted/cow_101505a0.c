/* f_0x101505a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_101505a0(Guest* g)
{
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u) goto L_101505fb;
    if (arg2 == 0u) goto L_101505fb;
    t1 = rd32(arg1 + 0x70u);
    g->edx = in_edx;
    t2 = rd32(arg2 + 0x70u);
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x101cc520u), 1, t1);
    t4 = g->edx;
    if (t1 == 0u) goto L_101505fb;
    edx = t4;
    ebx = t3;
    esi = t1;
    edi = t2;
    if (edi == 0u) goto L_101505fb;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x101577c0u), rd32(COW_IMG(0x1057876cu)), 0);
    t6 = cow_call_regs(g, COW_IMG(0x10150610u), g->eax, g->ecx, arg4, 0, 7, esi, edi, ebx, t5, arg3, arg4, arg5);
    return t6;
L_101505fb: ;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101505a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101505a0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
