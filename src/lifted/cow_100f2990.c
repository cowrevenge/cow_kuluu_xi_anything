/* f_0x100f2990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f2990(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        ecx = COW_IMG(0x104df778u);
        goto L_100f29cf;
    }
    eax = arg1;
    ecx = COW_IMG(0x104df778u);
    edx = in_edx;
    ebx = in_ebx;
    esi = 0x12du;
L_100f29a4: ;
    if (rd8(eax) == 0u) goto L_100f29cf;
    edx = (edx & 0xffffff00u) | rd8(eax);
    if (esi <= 1u) goto L_100f29cf;
    if ((int8_t)edx >= 0) goto L_100f29c4;
    if (rd8(eax + 1u) == 0u) goto L_100f29cf;
    ebx = (ebx & 0xffffff00u) | rd8(eax + 1u);
    if (esi <= 2u) goto L_100f29cf;
    wr8(ecx, (uint8_t)edx);
    eax = eax + 1u;
    ecx = ecx + 1u;
    esi = esi - 1u;
L_100f29c4: ;
    t1 = rd8(eax);
    wr8(ecx, (uint8_t)t1);
    if (eax + 1u != 0u)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t1;
        esi = esi - 1u;
        goto L_100f29a4;
    }
    ecx = ecx + 1u;
L_100f29cf: ;
    wr8(ecx, 0u);
    return COW_IMG(0x104df778u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f2990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f2990(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
