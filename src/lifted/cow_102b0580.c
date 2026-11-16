/* f_0x102b0580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102b0580(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(arg3, 0u);
    if (rd32(arg1) == 0u)
    {
        eax = in_eax;
        goto L_102b05cd;
    }
    edx = in_edx;
L_102b059f: ;
    t1 = rd32(arg1 + rd32(arg3) * 8u);
    g->ebx = (in_ebx & 0xffffff00u) | (uint8_t)arg4;
    t2 = rd32(arg3);
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x1028a170u), t1, 2, arg2, t1);
    if (t3 != 0u) goto L_102b05c0;
    eax = t3;
    if ((uint8_t)arg4 == 0u) goto L_102b05d4;
    if (rd32(arg1 + rd32(arg3) * 8u + 4u) != 0u)
    {
        eax = rd32(arg1 + rd32(arg3) * 8u + 4u);
        goto L_102b05d4;
    }
L_102b05c0: ;
    t4 = rd32(arg3) + 1u;
    wr32(arg3, t4);
    if (rd32(arg1 + t4 * 8u) != 0u)
    {
        edx = t4;
        goto L_102b059f;
    }
    eax = t4;
L_102b05cd: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_102b05d4: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b0580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b0580(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
