/* f_0x1015baf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1015baf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;

    if ((int32_t)rd32(COW_IMG(0x10621810u)) >= 100)
    {
        ecx = rd32(COW_IMG(0x10621810u));
        edx = rd32(COW_IMG(0x10621810u));
        goto L_1015bb25;
    }
    ecx = rd32(COW_IMG(0x10621810u));
    edx = rd32(COW_IMG(0x10621810u));
    eax = COW_IMG(0x1057b1e8u) + ecx * 0x15acu;
L_1015bb13: ;
    if (rd32(eax) == 0u) goto L_1015bb43;
    if ((int32_t)(eax + 0x15acu) < (int32_t)COW_IMG(0x10602918u))
    {
        eax = eax + 0x15acu;
        edx = edx + 1u;
        goto L_1015bb13;
    }
    edx = edx + 1u;
L_1015bb25: ;
    if ((int32_t)ecx <= 0) goto L_1015bb71;
    eax = 0u;
    edx = COW_IMG(0x1057b1e8u);
L_1015bb30: ;
    if (rd32(edx) == 0u) goto L_1015bb5a;
    if ((int32_t)(eax + 1u) < (int32_t)ecx)
    {
        eax = eax + 1u;
        edx = edx + 0x15acu;
        goto L_1015bb30;
    }
    edx = edx + 0x15acu;
    g->edx = edx;
    return 0u;
L_1015bb43: ;
    g->edx = edx * 0x56bu;
    return COW_IMG(0x10579d38u) + edx * 0x15acu;
L_1015bb5a: ;
    g->edx = eax * 0x56bu;
    return COW_IMG(0x10579d38u) + eax * 0x15acu;
L_1015bb71: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015baf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015baf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
