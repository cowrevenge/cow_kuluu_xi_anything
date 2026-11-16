/* f_0x10041f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10041f40(Guest* g)
{
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10044890u), in_eax, self, in_edx, 1, 0);
    t1 = g->edx;
    wr32(self, COW_IMG(0x1032ade8u));
    wr16(self + 0x176u, 0x1a8u);
    wr8(self + 0x198u, 0u);
    if (arg1 == 0u)
    {
        edx = t1;
        goto L_10041fd2;
    }
    edx = t1;
    if (rd32(arg1 + 0x64u) == 0u) goto L_10041fd2;
    ecx = rd32(arg1 + 0x64u);
    g->esp = sp0 - 0xcu;
    t2 = cow_fastcall(g, COW_IMG(0x1002c8f0u), ecx, edx, 1, COW_IMG(0x1032b7f8u));
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        edx = t3;
        goto L_10041fd2;
    }
    edx = t3;
    if (rd32(rd32(rd32(rd32(arg1 + 0x64u) + 0x80u)) + 0x20u) != 0x7673696du)
    {
        ebx = rd32(arg1 + 0x64u);
        goto L_10041fb1;
    }
    ebx = rd32(arg1 + 0x64u);
    wr8(self + 0x198u, 0x3au);
    wr8(self + 0x199u, 0u);
    t4 = rd32(ebx + 0xa4u);
    wr32(self + 0x194u, t4);
    g->edx = t4;
    return self;
L_10041fb1: ;
    t5 = rd32(ebx + 0xa8u);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x198u, COW_IMG(0x10352ff0u), t5, in_edi, in_esi);
    t6 = rd32(ebx + 0xa4u);
    wr32(self + 0x194u, t6);
    edx = t6;
L_10041fd2: ;
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10041f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10041f40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
