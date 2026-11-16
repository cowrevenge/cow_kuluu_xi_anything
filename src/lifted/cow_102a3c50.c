/* f_0x102a3c50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102a3c50(Guest* g)
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
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x102a3b00u), 2, arg1, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0xffffffffu)
    {
        edx = t3;
        esi = t1;
        goto L_102a3c95;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    esi = t1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bd72cu));
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd828u), arg2);
    t7 = g->edx;
    g->edx = t7;
    return esi + 1u;
L_102a3c95: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102a3b80u), 3, arg1, esi + 1u, arg3);
    t8 = g->edx;
    g->edx = t8;
    return esi + 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a3c50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a3c50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
