/* f_0x101674c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101674c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(self + 4u) <= 0) goto L_101674e0;
    ecx = rd32(self + 4u);
    eax = 0u;
    esi = self + 8u;
L_101674d1: ;
    if (rd32(esi) == arg2) goto L_101674ee;
    if ((int32_t)(eax + 1u) < (int32_t)ecx)
    {
        eax = eax + 1u;
        esi = esi + 0x8cu;
        goto L_101674d1;
    }
L_101674e0: ;
    wr32(arg1, 0u);
    return;
L_101674ee: ;
    if (rd32(esi + 0x88u) == 0u) goto L_101674e0;
    g->esp = sp0 - 4u;
    t1 = cow_fastcall(g, COW_IMG(0x103149e0u), ecx, arg2, 0);
    t2 = cow_divs(g, t1, rd32(esi + 0x88u));
    t3 = cow_mods(g, t1, rd32(esi + 0x88u));
    t4 = rd32(esi + t3 * 4u + 8u);
    wr32(arg1, t4);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101674c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101674c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
