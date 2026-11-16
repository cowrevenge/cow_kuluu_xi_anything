/* f_0x100ed730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100ed730(Guest* g)
{
    uint32_t cf;
    uint32_t ecx;
    uint32_t edx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t zf;
    const uint32_t in_cf = g->cf;
    const uint32_t in_zf = g->zf;
    const uint32_t in_sf = g->sf;
    const uint32_t in_of = g->of;
    const uint32_t in_pf = g->pf;

    ecx = 1u;
    cf = in_cf;
    pf = in_pf;
    zf = in_zf;
    sf = in_sf;
    of = in_of;
L_100ed736: ;
    t1 = rd32(rd32(COW_IMG(0x10456a28u)) + 0x14u) | 1u << (ecx & 0x1fu);
    wr32(rd32(COW_IMG(0x10456a28u)) + 0x14u, t1);
    if ((int32_t)(ecx + 1u) < 32)
    {
        cf = ecx + 1u < 0x20u;
        pf = PARITY((uint8_t)(ecx - 0x1fu));
        zf = ecx == 0x1fu;
        sf = (int32_t)(ecx - 0x1fu) < 0;
        of = ((ecx + 1u ^ 0x20u) & (ecx + 1u ^ ecx - 0x1fu)) >> 0x1fu;
        ecx = ecx + 1u;
        goto L_100ed736;
    }
    edx = 1u << (ecx & 0x1fu);
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ed730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ed730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
