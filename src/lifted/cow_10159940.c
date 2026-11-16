/* f_0x10159940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_10159940(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx & 0xffffff00u;
    t1 = cow_call_regs(g, COW_IMG(0x101598a0u), in_eax, self, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_1015995f;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if (arg1 != eax) goto L_1015995f;
    g->eax = eax;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x10159740u), ecx, 0);
    return (t4 & 0xffffff00u) | 1u;
L_1015995f: ;
    return (eax & 0xffffff00u) | (uint8_t)edx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10159940(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
