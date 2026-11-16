/* f_0x101a1840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101a1840(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    eax = 0u;
    edx = in_edx;
L_101a1846: ;
    if (rd8(eax + self + 0x172u) == 0u) goto L_101a1857;
    edx = (edx & 0xffffff00u) | rd8(eax + self + 0x172u);
    if ((int32_t)(eax + 1u) < 9)
    {
        eax = eax + 1u;
        goto L_101a1846;
    }
    eax = eax + 1u;
L_101a1857: ;
    if (eax != 9u)
    {
        edi = 0u;
    }
    else
    {
        edi = 1u;
    }
    edx = self + 4u;
    esi = 6u;
L_101a1869: ;
    eax = 0u;
L_101a186b: ;
    if (rd8(eax + edx) == 0u) goto L_101a1877;
    if ((int32_t)(eax + 1u) < 61)
    {
        eax = eax + 1u;
        goto L_101a186b;
    }
    eax = eax + 1u;
L_101a1877: ;
    if (eax == 0x3du)
    {
        edi = edi + 1u;
    }
    if (esi != 1u)
    {
        edx = edx + 0x3du;
        esi = esi - 1u;
        goto L_101a1869;
    }
    edx = edx + 0x3du;
    if (edi == 0u) goto L_101a1891;
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x101a17e0u), self, 0);
    return t1 & 0xffffff00u;
L_101a1891: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a1840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a1840(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
