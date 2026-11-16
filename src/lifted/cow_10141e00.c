/* f_0x10141e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10141e00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    ecx = self;
    edx = in_edx;
    esi = 0u;
L_10141e03: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10141c20u), 1, esi);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint16_t)t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        wr16(COW_IMG(0x10578262u) + esi * 2u, 0xffffu);
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        wr16(COW_IMG(0x10578262u) + esi * 2u, (uint16_t)eax);
    }
    if ((int32_t)(esi + 1u) < 12)
    {
        esi = esi + 1u;
        goto L_10141e03;
    }
    wr8(COW_IMG(0x1057825cu), rd8(COW_IMG(0x1057825cu)) | 4u);
    wr8(COW_IMG(0x105782aau), 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10141e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10141e00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
