/* f_0x10311fed - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10311fed(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10318abeu), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_10311ffb;
    }
    eax = t1;
    edx = t3;
    g->edx = edx;
    return eax;
L_10311ffb: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x1031894eu), eax, ecx, g->edx, 1, 4, arg1, arg2, arg3, esi);
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x103171ffu), g->eax, g->ecx, t6, 1, 1, esi);
    t7 = g->edx;
    g->edx = t7;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10311fed(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10311fed(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
