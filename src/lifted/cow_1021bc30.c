/* f_0x1021bc30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1021bc30(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = self;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1021bc20u), self, 0);
    t1 = g->edx;
    wr32(t1, COW_IMG(0x1033bda4u));
    edi = t1 + 4u;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (arg1 == 0u)
    {
        edx = t1;
        goto L_1021bc6d;
    }
    edx = t1;
    ebx = t1 + 4u;
    if (rd8(arg1) != 1u)
    {
        eax = edx;
        goto L_1021bc6f;
    }
    eax = edx;
    esi = arg1;
    edi = ebx;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = edx;
    return eax;
L_1021bc6d: ;
    eax = edx;
L_1021bc6f: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021bc30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021bc30(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
