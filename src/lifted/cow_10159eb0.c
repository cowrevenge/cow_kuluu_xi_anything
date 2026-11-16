/* f_0x10159eb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10159eb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x1062180cu)) == 0u)
    {
        edx = in_edx;
        goto L_10159ee6;
    }
    edi = rd32(COW_IMG(0x1062180cu));
    if (rd32(edi + 4u) == 0xffffffffu)
    {
        edx = in_edx;
        goto L_10159ee6;
    }
    ecx = rd32(edi + 4u);
    eax = edi;
    edx = edi;
    esi = 0u;
L_10159ecf: ;
    if (arg1 < ecx) goto L_10159ed8;
    if (arg1 < rd32(edx + 8u)) goto L_10159eec;
L_10159ed8: ;
    if (rd32(eax + 0x18u) != 0xffffffffu)
    {
        ecx = rd32(eax + 0x18u);
        edx = eax + 0x14u;
        eax = eax + 0x14u;
        esi = esi + 1u;
        goto L_10159ecf;
    }
    edx = eax + 0x14u;
L_10159ee6: ;
    g->edx = edx;
    return 0u;
L_10159eec: ;
    g->edx = edx;
    return edi + esi * 0x14u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159eb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10159eb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
