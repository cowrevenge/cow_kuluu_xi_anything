/* f_0x10100cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10100cc0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t zf;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint16_t)arg2 < 0xeu) goto L_10100d02;
    if ((uint16_t)arg2 > 0x25u) goto L_10100d02;
    if ((int32_t)(arg3 & 1u) >= 0)
    {
        zf = !(arg3 & 1u);
    }
    else
    {
        zf = ((arg3 & 1u) - 1u | 0xfffffffeu) + 1u == 0u;
    }
    if (zf)
    {
        eax = (uint16_t)arg3 >> 1u;
    }
    else
    {
        eax = ((uint16_t)arg3 >> 1u) + 1u;
    }
    if ((uint16_t)eax != 0u)
    {
        ebx = eax;
    }
    else
    {
        ebx = 1u;
    }
L_10100d06: ;
    t1 = (uint16_t)arg2 * 2u;
    ecx = 0u;
    edx = t1;
    edi = t1;
    cf = (uint16_t)arg2 * 2u < (uint16_t)arg2;
    pf = PARITY((uint8_t)((uint16_t)arg2 * 2u));
    zf = (uint16_t)arg2 * 2u == 0u;
    sf = (int32_t)((uint16_t)arg2 * 2u) < 0;
    of = (uint16_t)arg2 * 2u >> 0x1fu;
L_10100d16: ;
    if (((uint8_t)(1u << (ecx & 0x1fu)) & rd8(COW_IMG(0x10362738u) + edi)) == 0u)
    {
        eax = 1u << (ecx & 0x1fu);
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10362738u) + edi);
    }
    else
    {
        eax = 1u << (ecx & 0x1fu);
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x10362738u) + edi);
        wr8(arg1 + ecx + 0x18u, (uint8_t)((uint8_t)arg3 + rd8(arg1 + ecx + 0x18u)));
        edx = (edx & 0xffffff00u) | (uint8_t)arg3;
    }
    if ((rd8(COW_IMG(0x10362739u) + edi) & (uint8_t)eax) != 0u)
    {
        wr8(arg1 + ecx + 0x18u, (uint8_t)(rd8(arg1 + ecx + 0x18u) - (uint8_t)ebx));
    }
    if ((int32_t)(ecx + 1u) < 7)
    {
        cf = ecx + 1u < 7u;
        pf = PARITY((uint8_t)(ecx - 6u));
        zf = ecx == 6u;
        sf = (int32_t)(ecx - 6u) < 0;
        of = ((ecx + 1u ^ 7u) & (ecx + 1u ^ ecx - 6u)) >> 0x1fu;
        ecx = ecx + 1u;
        goto L_10100d16;
    }
    return;
L_10100d02: ;
    ebx = arg3;
    goto L_10100d06;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100cc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10100cc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
