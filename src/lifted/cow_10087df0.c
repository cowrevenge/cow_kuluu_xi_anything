/* f_0x10087df0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10087df0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    int64_t q1;
    uint32_t t2;
    uint32_t zf;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = in_eax;
    edx = arg1;
    esi = 0u;
L_10087df7: ;
    if ((int8_t)rd8(edx) >= 0)
    {
        eax = (eax & 0xffffff00u) | rd8(edx);
        zf = rd8(edx) == 0u;
        goto L_10087e03;
    }
    eax = (eax & 0xffffff00u) | rd8(edx);
    edx = edx + 2u;
    esi = esi + 1u;
    goto L_10087df7;
L_10087e03: ;
    if (zf) goto L_10087e09;
    edx = edx + 1u;
    esi = esi + 1u;
    goto L_10087df7;
L_10087e09: ;
    q1 = (int64_t)cow_muls(0x66666667u, esi + 0x14u);
    t2 = (uint32_t)((int32_t)cow_qhi(q1) >> 3u);
    wr16(self + 0x150u, 0u);
    wr16(self + 0x14eu, (uint16_t)(t2 + (t2 >> 0x1fu)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10087df0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10087df0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
