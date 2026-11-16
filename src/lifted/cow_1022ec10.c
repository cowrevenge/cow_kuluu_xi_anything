/* f_0x1022ec10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1022ec10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 < 15) goto L_1022ec1c;
    return 0u;
L_1022ec1c: ;
    g->eax = arg1 * 0x25u;
    g->edx = arg1 * 9u;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x1022f140u), COW_IMG(0x10667a90u) + arg1 * 0x94u, 1, arg2);
    t2 = g->edx;
    if (rd8(t1) != 0x5fu)
    {
        eax = t1;
        ecx = 0u;
        goto L_1022ec46;
    }
    eax = t1;
    ecx = 0u;
    edx = (t2 & 0xffffff00u) | rd8(t1);
L_1022ec3c: ;
    if (rd8(eax + ecx + 1u) == 0x5fu)
    {
        edx = (edx & 0xffffff00u) | rd8(eax + ecx + 1u);
        ecx = ecx + 1u;
        goto L_1022ec3c;
    }
    ecx = ecx + 1u;
L_1022ec46: ;
    return eax + ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022ec10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022ec10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
