/* f_0x10132140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10132140(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t pf;
    uint32_t sf;
    uint32_t zf;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u)
    {
        eax = arg2;
        goto L_10132175;
    }
    if (rd32(arg2 + 0x14d4u) == 0u)
    {
        eax = arg2;
        goto L_10132175;
    }
    ecx = rd32(arg2 + 0x14d4u);
    if (rd32(arg2 + 0x14d8u) == 0u)
    {
        eax = rd32(arg2 + 0x14d8u);
        goto L_10132175;
    }
    eax = rd32(arg2 + 0x14d8u);
    pf = PARITY((uint8_t)rd32(arg2 + 0x14d8u));
    zf = rd32(arg2 + 0x14d8u) == 0u;
    sf = (int32_t)rd32(arg2 + 0x14d8u) < 0;
    if ((rd16(eax) & 1u << (arg1 & 0x1fu)) == 0u) goto L_10132175;
    return (eax & 0xffffff00u) | 1u;
L_10132175: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10132140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10132140(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
