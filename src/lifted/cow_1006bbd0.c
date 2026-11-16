/* f_0x1006bbd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1006bbd0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t zf;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 >= 1)
    {
        edx = arg1;
    }
    else
    {
        edx = 1u;
    }
    ecx = 0u;
    esi = 0u;
    cf = 0u;
    pf = PARITY(0u);
    zf = 1u;
    sf = 0u;
    of = 0u;
L_1006bbe3: ;
    if ((edx & 1u << (ecx & 0x1fu)) != 0u)
    {
        esi = ecx;
    }
    if ((int32_t)(ecx + 1u) < 32)
    {
        cf = ecx + 1u < 0x20u;
        pf = PARITY((uint8_t)(ecx - 0x1fu));
        zf = ecx == 0x1fu;
        sf = (int32_t)(ecx - 0x1fu) < 0;
        of = ((ecx + 1u ^ 0x20u) & (ecx + 1u ^ ecx - 0x1fu)) >> 0x1fu;
        ecx = ecx + 1u;
        goto L_1006bbe3;
    }
    cf = ecx + 1u < 0x20u;
    pf = PARITY((uint8_t)(ecx - 0x1fu));
    zf = ecx == 0x1fu;
    sf = (int32_t)(ecx - 0x1fu) < 0;
    of = ((ecx + 1u ^ 0x20u) & (ecx + 1u ^ ecx - 0x1fu)) >> 0x1fu;
    if ((int32_t)(1u << (esi & 0x1fu)) >= (int32_t)edx)
    {
        eax = 1u << (esi & 0x1fu);
    }
    else
    {
        eax = 1u << (esi & 0x1fu);
        eax = eax * 2u;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006bbd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006bbd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
