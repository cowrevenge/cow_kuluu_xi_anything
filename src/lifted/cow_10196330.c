/* f_0x10196330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10196330(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == rd32(self + 0x10u))
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_stdcall(g, COW_IMG(0x10196470u), 1, arg1);
        t2 = g->ecx;
        t3 = g->edx;
        if ((int32_t)t1 < 0)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
        }
        else
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            wr32(self + 0x10u, arg1);
        }
    }
    if (rd8(self + 4u) != 0u) goto L_1019637c;
    eax = (eax & 0xffffff00u) | rd8(self + 4u);
    if (arg1 == rd32(self + 0xcu)) goto L_1019637c;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x103100a7u), 6, 0xfffffffeu, 0xfffffffeu, 0xfffffffeu, 0xfffffffeu, arg1, 0xfffffffeu);
    wr32(self + 8u, t4);
    wr32(self + 0xcu, arg1);
    wr8(self + 4u, 1u);
    return 1u;
L_1019637c: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10196330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10196330(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
