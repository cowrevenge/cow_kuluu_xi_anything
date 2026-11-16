/* f_0x1027c610 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1027c610(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        wr32(COW_IMG(0x1099d20cu), 0u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, arg1, 4u, COW_IMG(0x103b40ecu), 0x290u, in_edi);
        t2 = g->ecx;
        t3 = g->edx;
        wr32(COW_IMG(0x1099d20cu), t1);
        if ((int32_t)arg1 <= 0)
        {
            eax = t1;
            edx = t3;
            goto L_1027c665;
        }
        ecx = t2;
        edx = t3;
        esi = 0u;
L_1027c640: ;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_cdecl(g, COW_IMG(0x10291330u), 3, COW_IMG(0x103b4494u), COW_IMG(0x103b40ecu), 0x292u);
        t5 = g->edx;
        t6 = rd32(COW_IMG(0x1099d20cu));
        wr32(esi * 4u + t6, t4);
        if ((int32_t)(esi + 1u) < (int32_t)arg1)
        {
            ecx = t6;
            edx = t5;
            esi = esi + 1u;
            goto L_1027c640;
        }
        eax = t4;
        edx = t5;
    }
L_1027c665: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027c610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027c610(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
