/* f_0x100fe4c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_100fe4c0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint16_t)arg2 == 0xffffu)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg2;
        goto L_100fe53c;
    }
    if ((uint16_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg2;
        goto L_100fe53c;
    }
    if ((uint16_t)arg2 == 0x200u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg2;
        goto L_100fe53c;
    }
    if ((uint16_t)arg2 == 0x201u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg2;
        goto L_100fe53c;
    }
    if ((uint16_t)arg2 == 0x202u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg2;
        goto L_100fe53c;
    }
    if ((uint16_t)arg2 == 0x203u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg2;
        goto L_100fe53c;
    }
    if ((uint16_t)arg2 == 0x108cu)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg2;
        goto L_100fe53c;
    }
    if ((uint16_t)arg2 == 0x108du)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg2;
        goto L_100fe53c;
    }
    if ((uint16_t)arg2 == 0x1525u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg2;
        goto L_100fe53c;
    }
    if ((uint16_t)arg2 == 0x1526u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg2;
        goto L_100fe53c;
    }
    if (arg3 != 0x12u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg2;
        goto L_100fe53c;
    }
    if (arg1 == 0u) goto L_100fe52d;
    if (arg1 != 1u)
    {
        eax = arg1 - 1u;
        goto L_100fe53c;
    }
    g->eax = arg7;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100fe540u), 4, arg4, 0x12u, arg6, arg7);
    return t1;
L_100fe52d: ;
    return rd8(arg4 + 0xcu) != 0u;
L_100fe53c: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fe4c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fe4c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
