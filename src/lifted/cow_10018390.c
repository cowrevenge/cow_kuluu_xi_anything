/* f_0x10018390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10018390(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101be410u), self + 4u, 0);
    t1 = g->ecx;
    wr32(self, COW_IMG(0x10329f88u));
    eax = arg1;
    ecx = t1;
L_100183ae: ;
    t2 = rd8(eax);
    wr8(eax + self - arg1 + 0xcu, (uint8_t)t2);
    if ((uint8_t)t2 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t2;
        goto L_100183ae;
    }
    t3 = rd32(arg1 + 0x108u);
    wr32(self + 0x114u, t3);
    eax = 0u;
    ecx = arg1 + 0x10cu;
    edi = self + 0x118u;
L_100183d2: ;
    t4 = rd32(ecx);
    wr32(edi, t4);
    t5 = rd8(arg1 + eax + 0x14cu);
    wr8(eax + self + 0x158u, (uint8_t)t5);
    if ((int32_t)(eax + 1u) < 16)
    {
        eax = eax + 1u;
        ecx = ecx + 4u;
        edi = edi + 4u;
        goto L_100183d2;
    }
    edx = (t4 & 0xffffff00u) | t5;
    wr32(self + 8u, 0u);
    wr32(self + 0x168u, 0u);
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10018390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10018390(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
