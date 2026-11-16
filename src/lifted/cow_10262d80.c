/* f_0x10262d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10262d80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u) goto L_10262d92;
    return 0x80004003u;
L_10262d92: ;
    if (rd32(arg1 + 0x1cu) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(arg1 + 0x1cu);
        eax = eax + 0xcu;
    }
    wr32(arg2, eax);
    if (rd32(arg1 + 0x1cu) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 0x1cu);
        g->edx = in_edx;
        t1 = rd32(eax + 0xcu);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t1 + 4u), t1, 1, eax + 0xcu);
        t2 = g->ecx;
        t3 = g->edx;
        ecx = t2;
        edx = t3;
    }
    if (rd32(arg1 + 8u) == 0u) goto L_10262ddb;
    eax = rd32(arg1 + 8u);
    g->edx = arg2 + 8u;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102660b0u), ecx, 3, arg2 + 8u, eax, 0x80u);
    t4 = g->edx;
    t5 = rd32(arg1 + 0x10u);
    wr32(arg2 + 4u, t5);
    g->edx = t4;
    return 0u;
L_10262ddb: ;
    wr16(arg2 + 8u, 0u);
    t6 = rd32(arg1 + 0x10u);
    wr32(arg2 + 4u, t6);
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262d80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10262d80(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
