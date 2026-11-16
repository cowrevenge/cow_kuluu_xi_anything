/* f_0x101a1790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101a1790(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = arg1;
    edx = self + 4u;
    ebx = 6u;
L_101a17a2: ;
    esi = eax;
    edi = edx;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u);
    if (ebx != 1u)
    {
        eax = eax + 0x3du;
        edx = edx + 0x3du;
        ebx = ebx - 1u;
        goto L_101a17a2;
    }
    eax = eax + 0x3du;
    wr32(self + 0x172u, rd32(eax));
    t1 = rd32(eax + 4u);
    wr32(self + 0x176u, t1);
    wr8(self + 0x17au, rd8(eax + 8u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a1790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a1790(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
