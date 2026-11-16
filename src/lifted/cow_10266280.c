/* f_0x10266280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10266280(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 <= arg2) goto L_102662b1;
    if (arg1 >= arg2 + arg3) goto L_102662b1;
    g->df = 1;
    esi = arg2 + arg3 - 1u;
    edi = arg1 + arg3 - 1u;
    ecx = arg3;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->df = 0;
    g->edx = arg3;
    return arg1;
L_102662b1: ;
    g->df = 0;
    esi = arg2;
    edi = arg1;
    ecx = arg3 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((ecx | (arg3 & 3u)) != 0u)
    {
        ecx = ecx | (arg3 & 3u);
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    }
    g->edx = arg3 & 3u;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10266280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10266280(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
