/* f_0x10077b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10077b40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    if (rd8(arg2) != 0x20u)
    {
        eax = in_eax;
        edx = arg2;
        goto L_10077b54;
    }
    eax = in_eax;
    edx = arg2;
L_10077b4c: ;
    if (rd8(edx + 1u) == 0x20u)
    {
        eax = (eax & 0xffffff00u) | rd8(edx + 1u);
        edx = edx + 1u;
        goto L_10077b4c;
    }
    eax = (eax & 0xffffff00u) | rd8(edx + 1u);
    edx = edx + 1u;
L_10077b54: ;
    if (rd8(edx) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edx);
        goto L_10077b60;
    }
    return 0u;
L_10077b60: ;
    if ((uint8_t)eax == 0x20u)
    {
        ecx = 0u;
        goto L_10077b7c;
    }
    ecx = 0u;
L_10077b66: ;
    if ((uint8_t)eax == 0u) goto L_10077b7c;
    if ((int32_t)ecx >= 31) goto L_10077b7c;
    wr8(ecx + sp0 - 0x20u, (uint8_t)eax);
    if (rd8(edx + 1u) != 0x20u)
    {
        eax = (eax & 0xffffff00u) | rd8(edx + 1u);
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_10077b66;
    }
    ecx = ecx + 1u;
    edx = edx + 1u;
L_10077b7c: ;
    wr8(ecx + sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, sp0 - 0x20u);
    wr32(sp0 - 0x28u, COW_IMG(0x10355408u));
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x10077ad0u), g->eax, g->ecx, edx, 1, 5, COW_IMG(0x10355408u), sp0 - 0x20u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10077b40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10077b40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
