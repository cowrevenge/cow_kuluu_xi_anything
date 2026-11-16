/* f_0x10074ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10074ba0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
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

    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x100748f0u), self + 4u, in_edx, 0);
    t1 = g->edx;
    wr32(self + 0x10u, self + 0x38u);
    eax = self + 0x38u;
    edx = t1;
    ebp = 0x3eu;
    edi = self + 4u;
L_10074bbd: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t2 = cow_fastcall(g, COW_IMG(0x100748f0u), edi + 0x34u, edx, 0);
    t3 = g->ecx;
    wr32(edi + 0x3cu, edi);
    wr32(edi + 0x40u, edi + 0x68u);
    if (ebp != 1u)
    {
        eax = t2;
        edx = edi + 0x68u;
        ebp = ebp - 1u;
        edi = t3;
        goto L_10074bbd;
    }
    eax = t2;
    edx = edi + 0x68u;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x100748f0u), self + 0xcd0u, edx, 0);
    t4 = g->edx;
    wr32(self + 0xcd8u, self + 0xc9cu);
    wr32(self + 0xd58u, self + 4u);
    wr32(self + 0xd54u, 0u);
    wr32(self + 0xd50u, 0u);
    wr32(self + 0xd44u, 0u);
    edx = t4;
    ebx = 0x10u;
    edi = self + 0xd04u;
L_10074c0f: ;
    g->esp = sp0 - 0x10u;
    t5 = cow_fastcall(g, COW_IMG(0x10074df0u), self, edx, 1, 0u);
    t6 = g->edx;
    wr32(edi, t5);
    if (ebx != 1u)
    {
        edx = t6;
        ebx = ebx - 1u;
        edi = edi + 4u;
        goto L_10074c0f;
    }
    eax = t5;
    t7 = rd32(self + 0xd50u);
    wr32(self + 0xd4cu, t7);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074ba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10074ba0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
