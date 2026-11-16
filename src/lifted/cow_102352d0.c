/* f_0x102352d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102352d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = cow_fastcall(g, COW_IMG(0x103149e0u), self, in_edx, 0);
    t2 = cow_divs(g, t1, rd32(COW_IMG(0x103873dcu) + arg2 * 4u));
    t3 = cow_mods(g, t1, rd32(COW_IMG(0x103873dcu) + arg2 * 4u));
    eax = arg2 + t3 * 7u;
    ecx = rd32(COW_IMG(0x10386c88u) + arg2 * 4u + t3 * 0x1cu);
    edx = arg1;
L_102352f7: ;
    t4 = rd8(ecx);
    wr8(edx, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = (eax & 0xffffff00u) | t4;
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_102352f7;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102352d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102352d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
