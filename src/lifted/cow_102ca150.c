/* f_0x102ca150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102ca150(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 0x30u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(arg1, 0u);
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_102ca174;
    }
    return 0x80000003u;
L_102ca174: ;
    wr32(esi + 0x18u, 0x46e3u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 0x46e3u, in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(esi + 0x24u, t4);
    if (t4 != 0u) goto L_102ca1a0;
    eax = t4;
    ecx = t5;
    edx = t6;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, esi, in_edi, in_esi);
    return 0x80000003u;
L_102ca1a0: ;
    wr32(arg1, esi);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ca150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ca150(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
