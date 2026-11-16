/* f_0x1027c670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1027c670(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if ((int32_t)arg1 <= 0)
        {
            ecx = self;
            goto L_1027c6a0;
        }
        edx = in_edx;
        esi = 0u;
L_1027c680: ;
        t1 = rd32(esi * 4u + rd32(COW_IMG(0x1099d20cu)));
        g->ecx = t1;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, t1, COW_IMG(0x103b40ecu), 0x2a8u);
        t2 = g->ecx;
        t3 = g->edx;
        if ((int32_t)(esi + 1u) < (int32_t)arg1)
        {
            edx = t3;
            esi = esi + 1u;
            goto L_1027c680;
        }
        ecx = t2;
L_1027c6a0: ;
        g->edx = rd32(COW_IMG(0x1099d20cu));
        t4 = rd32(COW_IMG(0x1099d20cu));
        g->esp = sp0 - 8u;
        t5 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t4, COW_IMG(0x103b40ecu), 0x2a9u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027c670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027c670(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
