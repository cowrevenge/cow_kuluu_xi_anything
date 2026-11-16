/* f_0x1026f1d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1026f1d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if ((int32_t)rd32(COW_IMG(0x1099aed8u)) <= 0) goto L_1026f209;
    eax = rd32(COW_IMG(0x1099aed8u));
    ecx = rd32(COW_IMG(0x1099aed8u)) * 0xc0u;
    edx = rd32(COW_IMG(0x1099aedcu));
    esi = rd32(COW_IMG(0x1099aed8u)) * 0xc0u + rd32(COW_IMG(0x1099aedcu)) - 0xc0u;
    edi = 0u;
L_1026f1f0: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1027dba0u), 3, esi, in_edi, in_esi);
    t1 = g->ecx;
    t2 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(COW_IMG(0x1099aed8u)))
    {
        eax = rd32(COW_IMG(0x1099aed8u));
        ecx = t1;
        edx = t2;
        esi = esi - 0xc0u;
        edi = edi + 1u;
        goto L_1026f1f0;
    }
L_1026f209: ;
    wr32(COW_IMG(0x1099aed8u), 0u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026f1d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026f1d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
