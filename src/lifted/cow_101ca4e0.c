/* f_0x101ca4e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101ca4e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 16u);

    if (rd32(sp0 + 4u) != 0u)
    {
        eax = rd32(sp0 + 4u);
        goto L_101ca4e9;
    }
    eax = rd32(sp0 + 4u);
    return eax;
L_101ca4e9: ;
    wr32(sp0 + 4u, eax);
    wr32(sp0 - 4u, in_esi);
    if (rd8(eax) == 0u)
    {
        esi = 0u;
        goto L_101ca514;
    }
    ecx = (self & 0xffffff00u) | rd8(eax);
    edx = in_edx;
    esi = 0u;
L_101ca4f6: ;
    wr32(sp0 - 8u, sp0 + 4u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1011ce80u), 1, sp0 + 4u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0xcu, t1);
    g->edx = t3;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x101ca390u), 1, t1);
    t5 = g->edx;
    if (rd8(rd32(sp0 + 4u)) != 0u)
    {
        ecx = rd32(sp0 + 4u);
        edx = t5;
        esi = esi + t4;
        goto L_101ca4f6;
    }
    esi = esi + t4;
L_101ca514: ;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ca4e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ca4e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
