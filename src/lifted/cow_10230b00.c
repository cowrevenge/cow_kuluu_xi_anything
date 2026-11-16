/* f_0x10230b00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10230b00(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t zf;
    const uint32_t self = g->ecx;

    if ((rd8(COW_IMG(0x104807ecu)) & 4u) != 0u) goto L_10230b0e;
    return 0u;
L_10230b0e: ;
    eax = 0u;
    ecx = self;
    esi = 0u;
    loc_4 = self;
L_10230b14: ;
    ecx = 0u;
    edx = rd8(COW_IMG(0x104805e0u) + esi);
    cf = 0u;
    pf = PARITY(rd8(COW_IMG(0x104805e0u) + esi));
    zf = rd8(COW_IMG(0x104805e0u) + esi) == 0u;
    sf = (int32_t)rd8(COW_IMG(0x104805e0u) + esi) < 0;
    of = 0u;
    loc_4 = (loc_4 & 0xffffff00u) | rd8(COW_IMG(0x104805e0u) + esi);
L_10230b2a: ;
    if ((edx & 1u << (ecx & 0x1fu)) != 0u)
    {
        eax = eax + 1u;
    }
    if ((int32_t)(ecx + 1u) < 8)
    {
        cf = ecx + 1u < 8u;
        pf = PARITY((uint8_t)(ecx - 7u));
        zf = ecx == 7u;
        sf = (int32_t)(ecx - 7u) < 0;
        of = ((ecx + 1u ^ 8u) & (ecx + 1u ^ ecx - 7u)) >> 0x1fu;
        ecx = ecx + 1u;
        goto L_10230b2a;
    }
    ecx = ecx + 1u;
    if ((int32_t)(esi + 1u) < 371)
    {
        esi = esi + 1u;
        goto L_10230b14;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10230b00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10230b00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
