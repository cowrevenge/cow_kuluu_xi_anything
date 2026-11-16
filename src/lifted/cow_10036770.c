/* f_0x10036770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10036770(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0xfcu) == 0u)
    {
        edx = in_edx;
        goto L_1003679c;
    }
    eax = rd32(self + 0xfcu);
    if (rd32(eax) == 0u)
    {
        edx = in_edx;
        goto L_1003679c;
    }
    ecx = rd32(eax);
    if (eax == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = ecx;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x100539e0u), eax, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_1003679c;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1003679c: ;
    if (rd32(self + 0x104u) == 0u)
    {
        eax = rd32(self + 0x104u);
        goto L_100367ba;
    }
    eax = rd32(self + 0x104u);
    if (rd32(eax) == 0u)
    {
        eax = rd32(eax);
        goto L_100367ba;
    }
    eax = rd32(eax);
    if (rd32(eax + 0x3cu) >> 0x1fu == 0u)
    {
        eax = rd32(eax + 0x3cu) >> 0x1fu;
        goto L_100367ba;
    }
    eax = rd32(eax + 0x3cu) >> 0x1fu;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100367ba: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10036770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10036770(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
