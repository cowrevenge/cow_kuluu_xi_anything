/* f_0x10203680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10203680(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 >= (int32_t)arg3)
    {
        edx = in_edx;
        goto L_102036ba;
    }
    eax = COW_IMG(0x10663b52u) + arg2 * 0x7cu;
    ecx = arg3 - arg2;
    ebx = in_ebx;
    esi = 0u;
L_102036a4: ;
    if (ecx != 1u)
    {
        ecx = ecx - 1u;
        ebx = (ebx & 0xffffff00u) | rd8(eax);
        esi = esi + (rd8(eax) != 0u);
        eax = eax + 0x7cu;
        goto L_102036a4;
    }
    edx = rd8(eax) != 0u;
    esi = esi + (rd8(eax) != 0u);
    if (esi != 0u) goto L_102036c4;
L_102036ba: ;
    g->edx = edx;
    return arg1;
L_102036c4: ;
    eax = arg1;
L_102036c8: ;
    if ((int32_t)(eax - 1u) >= (int32_t)arg2)
    {
        eax = eax - 1u;
    }
    else
    {
        eax = arg3 - 1u;
    }
    if (rd8(COW_IMG(0x10663b52u) + eax * 0x7cu) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10663b52u) + eax * 0x7cu);
        goto L_102036c8;
    }
    edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10663b52u) + eax * 0x7cu);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10203680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10203680(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
