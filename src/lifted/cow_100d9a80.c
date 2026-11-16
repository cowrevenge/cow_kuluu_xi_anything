/* f_0x100d9a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100d9a80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(arg1) == 0u)
    {
        edx = 0u;
        goto L_100d9aa4;
    }
    eax = arg1;
    ecx = (self & 0xffffff00u) | rd8(arg1);
    edx = 0u;
    esi = 0u;
L_100d9a8f: ;
    if ((uint8_t)ecx == 0x5cu)
    {
        esi = edx;
        edx = eax;
    }
    if (rd8(eax + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        eax = eax + 1u;
        goto L_100d9a8f;
    }
    if (esi != 0u) goto L_100d9aa6;
L_100d9aa4: ;
    esi = edx;
L_100d9aa6: ;
    if (rd32(COW_IMG(0x103601bcu)) == 0u)
    {
        eax = rd32(COW_IMG(0x103601bcu));
    }
    else
    {
        eax = rd32(COW_IMG(0x103601bcu));
        esi = esi + 1u;
        edi = eax + 0x18u;
        ecx = 0x19u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(rd32(COW_IMG(0x103601bcu)) + 0x7cu, arg2);
        eax = arg2;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d9a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d9a80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
