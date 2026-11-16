/* f_0x101cec50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101cec50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    eax = in_eax;
    edx = in_edx;
    ebp = 0u;
    esi = self + 2u;
L_101cec59: ;
    edi = 0u;
L_101cec5b: ;
    if (rd8(esi - 1u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi - 1u);
    }
    else
    {
        g->eax = rd8(esi);
        g->edx = edx;
        t1 = rd8(esi);
        g->esp = sp0 - 0x10u;
        t2 = cow_thiscall(g, COW_IMG(0x101d5e00u), rd32(COW_IMG(0x106631d4u)), 4, t1, ebp, edi, 0u);
        t3 = g->edx;
        t4 = rd8(esi + 1u);
        g->edx = t3;
        t5 = cow_thiscall(g, COW_IMG(0x101d5e00u), rd32(COW_IMG(0x106631d4u)), 4, t4, ebp, edi, 1u);
        t6 = g->edx;
        if (t2 == 0u)
        {
            eax = t5;
            edx = t6;
        }
        else
        {
            eax = t5;
            edx = t6;
            ebx = t2;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t7 = cow_thiscall(g, COW_IMG(0x101cea30u), ebx, 1, eax);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
    }
    if ((int32_t)(edi + 1u) < 26)
    {
        esi = esi + 8u;
        edi = edi + 1u;
        goto L_101cec5b;
    }
    esi = esi + 8u;
    if ((int32_t)(ebp + 1u) < 20)
    {
        ebp = ebp + 1u;
        goto L_101cec59;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cec50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cec50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
