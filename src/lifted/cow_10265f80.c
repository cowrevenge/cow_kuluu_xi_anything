/* f_0x10265f80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10265f80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, rd32(COW_IMG(0x103294b8u)), 1, 0u);   /* ole32.dll!CoInitialize */
    t1 = g->edx;
    cow_thiscall(g, rd32(rd32(arg1) + 4u), arg1, 0);
L_10265faa: ;
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(arg1)), arg1, 1, sp0 - 0x10u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    g->edx = rd32(arg1);
    t2 = rd32(arg1);
    t3 = cow_thiscall(g, rd32(t2 + 8u), arg1, 4, 0u, 0u, 0u, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u) goto L_10265faa;
    eax = t3;
    ecx = t4;
    edx = t5;
    edi = t3;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, rd32(COW_IMG(0x103294b4u)), 0);   /* ole32.dll!CoUninitialize */
    t6 = g->edx;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->edx = t6;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10265f80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10265f80(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
