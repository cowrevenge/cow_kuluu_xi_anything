/* f_0x102f6962 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102f6962(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd8(in_edx + 0x48u) != 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_102f69d0;
    }
    if (rd8(in_edx + 0x108u) != 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_102f69d0;
    }
    if (rd32(in_edx + 0x24u) != 3u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_102f69d0;
    }
    if (rd32(in_edx + 0x20u) != 3u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_102f69d0;
    }
    if (rd32(in_edx + 0x28u) != 2u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_102f69d0;
    }
    if (rd32(in_edx + 0x64u) != 3u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_102f69d0;
    }
    if (rd32(rd32(in_edx + 0xc4u) + 8u) != 2u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_102f69d0;
    }
    ecx = rd32(in_edx + 0xc4u);
    if (rd32(ecx + 0x5cu) != 1u)
    {
        eax = 1u;
        edx = in_edx;
        goto L_102f69d0;
    }
    if (rd32(ecx + 0xb0u) != 1u)
    {
        eax = 1u;
        edx = in_edx;
        goto L_102f69d0;
    }
    if ((int32_t)rd32(ecx + 0xcu) > 2)
    {
        eax = 1u;
        edx = in_edx;
        goto L_102f69d0;
    }
    if (rd32(ecx + 0x60u) != 1u)
    {
        eax = 1u;
        edx = in_edx;
        goto L_102f69d0;
    }
    if (rd32(ecx + 0xb4u) != 1u)
    {
        eax = 1u;
        edx = in_edx;
        goto L_102f69d0;
    }
    if (rd32(ecx + 0x24u) != rd32(in_edx + 0x114u))
    {
        eax = 1u;
        edx = rd32(in_edx + 0x114u);
        goto L_102f69d0;
    }
    edx = rd32(in_edx + 0x114u);
    if (rd32(ecx + 0x78u) != edx)
    {
        eax = 1u;
        goto L_102f69d0;
    }
    if (rd32(ecx + 0xccu) == edx)
    {
        eax = 1u;
        goto L_102f69d2;
    }
    eax = 1u;
L_102f69d0: ;
    eax = eax & 0xffffff00u;
L_102f69d2: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f6962(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f6962(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
