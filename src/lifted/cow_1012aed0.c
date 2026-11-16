/* f_0x1012aed0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1012aed0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_1012aedd;
    return arg1 & 0xffffff00u;
L_1012aedd: ;
    if (rd32(arg1 + 0x70u) != 0u)
    {
        ecx = rd32(arg1 + 0x70u);
        goto L_1012aee8;
    }
    return arg1 & 0xffffff00u;
L_1012aee8: ;
    if (rd32(ecx + 0x12cu) >> 0x16u & 1u) goto L_1012aef9;
    eax = rd32(ecx + 0x12cu) >> 0x16u;
    return eax & 0xffffff00u;
L_1012aef9: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1008e220u), ecx, 0);
    t2 = g->edx;
    t3 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    if (t3 != 0u)
    {
        eax = t3;
        esi = t1;
        goto L_1012af12;
    }
    eax = t3;
    return eax & 0xffffff00u;
L_1012af12: ;
    if (rd32(eax + 0x70u) != 0u)
    {
        eax = rd32(eax + 0x70u);
        goto L_1012af1d;
    }
    eax = rd32(eax + 0x70u);
    return eax & 0xffffff00u;
L_1012af1d: ;
    return (eax & 0xffffff00u) | esi == eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012aed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012aed0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
