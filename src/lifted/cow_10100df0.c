/* f_0x10100df0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10100df0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t zf;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    ecx = 0u;
    ebx = in_ebx;
    cf = (uint16_t)arg2 * 2u < (uint16_t)arg2;
    pf = PARITY((uint8_t)((uint16_t)arg2 * 2u));
    zf = (uint16_t)arg2 * 2u == 0u;
    sf = (int32_t)((uint16_t)arg2 * 2u) < 0;
    of = (uint16_t)arg2 * 2u >> 0x1fu;
L_10100e09: ;
    if (((uint8_t)(1u << (ecx & 0x1fu)) & rd8(COW_IMG(0x10362878u) + (uint16_t)arg2 * 2u)) == 0u)
    {
        eax = 1u << (ecx & 0x1fu);
        ebx = (ebx & 0xffffff00u) | rd8(COW_IMG(0x10362878u) + (uint16_t)arg2 * 2u);
    }
    else
    {
        eax = 1u << (ecx & 0x1fu);
        ebx = (ebx & 0xffffff00u) | rd8(COW_IMG(0x10362878u) + (uint16_t)arg2 * 2u);
        wr8(arg1 + ecx + 0x20u, (uint8_t)((uint8_t)arg3 + rd8(arg1 + ecx + 0x20u)));
    }
    if ((rd8(COW_IMG(0x10362879u) + (uint16_t)arg2 * 2u) & (uint8_t)eax) != 0u)
    {
        wr8(arg1 + ecx + 0x20u, (uint8_t)(rd8(arg1 + ecx + 0x20u) - (uint8_t)arg3));
    }
    if ((int32_t)(ecx + 1u) <= 7)
    {
        cf = ecx + 1u < 7u;
        pf = PARITY((uint8_t)(ecx - 6u));
        zf = ecx == 6u;
        sf = (int32_t)(ecx - 6u) < 0;
        of = ((ecx + 1u ^ 7u) & (ecx + 1u ^ ecx - 6u)) >> 0x1fu;
        ecx = ecx + 1u;
        goto L_10100e09;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100df0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10100df0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
