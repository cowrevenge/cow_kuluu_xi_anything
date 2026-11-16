/* f_0x10203570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10203570(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    eax = arg1;
    ecx = self;
    edx = in_edx;
L_1020357e: ;
    if ((int32_t)(eax + 1u) < (int32_t)arg3)
    {
        eax = eax + 1u;
        goto L_10203594;
    }
    zf = eax + 1u == arg3;
    eax = eax + 1u;
    if (!zf) goto L_10203592;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x101cc550u), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_10203592;
    }
    edx = t2;
    if ((uint8_t)arg4 == 0u) goto L_102035ab;
L_10203592: ;
    eax = 0u;
L_10203594: ;
    if (rd8(COW_IMG(0x10663b52u) + eax * 0x7cu) == 0u)
    {
        ecx = (eax << 5u) - eax;
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10663b52u) + eax * 0x7cu);
        goto L_1020357e;
    }
    edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10663b52u) + eax * 0x7cu);
    g->edx = edx;
    return eax;
L_102035ab: ;
    g->edx = edx;
    return arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10203570(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10203570(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
