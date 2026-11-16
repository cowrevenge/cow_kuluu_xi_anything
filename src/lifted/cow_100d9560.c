/* f_0x100d9560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100d9560(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x1048fdf8u)) == 0u)
    {
        edx = in_edx;
        goto L_100d95c7;
    }
    edi = rd32(COW_IMG(0x1048fdf8u));
    if ((((rd8(arg1 + 3u) << 8u | rd8(arg1 + 2u)) << 8u | rd8(arg1 + 1u)) << 8u | rd8(arg1)) == 0u)
    {
        edx = rd8(arg1);
        goto L_100d95c7;
    }
    edx = rd8(arg1);
    ebx = ((rd8(arg1 + 3u) << 8u | rd8(arg1 + 2u)) << 8u | rd8(arg1 + 1u)) << 8u | rd8(arg1);
    if (arg2 != 4u) goto L_100d95c7;
    if (arg3 != 2u) goto L_100d95c7;
    ecx = edi + 0x19cu;
    esi = 0u;
L_100d95a4: ;
    if (rd32(ecx - 0x20u) == 0u)
    {
        eax = 0u;
        edx = rd32(ecx - 0x20u);
        goto L_100d95b7;
    }
    edx = rd32(ecx - 0x20u);
    if (ebx != edx)
    {
        eax = 0u;
        goto L_100d95b7;
    }
    if (ecx != 0u)
    {
        eax = ecx;
        goto L_100d95c9;
    }
    eax = ecx;
L_100d95b7: ;
    if ((int32_t)(esi + 1u) < 64)
    {
        ecx = ecx + 0xd4u;
        esi = esi + 1u;
        goto L_100d95a4;
    }
    g->edx = edx;
    return eax;
L_100d95c7: ;
    eax = 0u;
L_100d95c9: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d9560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d9560(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
