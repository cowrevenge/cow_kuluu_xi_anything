/* f_0x1024aba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1024aba0(Guest* g)
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10249d30u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_1024abc4;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x10249e20u), 1, arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u) goto L_1024abe6;
    eax = t4;
    ecx = t5;
    edx = t6;
    esi = t4;
L_1024abc4: ;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x1024a100u), g->eax, ecx, edx, 1, 2, 1u, arg1);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x1024a7c0u), g->eax, arg3, arg2, 1, 4, rd32(esi), arg2, arg3, arg4);
L_1024abe6: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024aba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024aba0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
